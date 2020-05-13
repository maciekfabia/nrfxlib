#
# Copyright (c) 2020 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
#

include(${NRFXLIB_DIR}/common.cmake)

# Common includes, not related to ZBOSS source code.
zephyr_include_directories(src/zb_error)
zephyr_include_directories(include/addons)

# Source files
zephyr_sources(src/zb_error/zb_error_to_string.c)

# Suppress bitfield compatibility warning
zephyr_compile_options(-Wno-packed-bitfield-compat)

# Add compile-time definition, indicating which ZBOSS library will be linked
if (CONFIG_ZIGBEE_ROLE_END_DEVICE)
  zephyr_compile_definitions(ZB_ED_ROLE)
endif()


if ((NOT DEFINED CONFIG_ZBOSS_SOURCES_AVAILABLE) OR
    (CONFIG_ZBOSS_LIBRARY_PRECOMPILED))

  zephyr_include_directories(include)
  zephyr_include_directories(include/zcl)
  zephyr_include_directories(include/ha)
  zephyr_include_directories(include/se)
  zephyr_include_directories(include/osif)

  nrfxlib_calculate_lib_path(lib_path)
  set(ZBOSS_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/${lib_path})
  if(NOT EXISTS ${ZBOSS_LIB_PATH})
    message(WARNING "This combination of SoC and floating point ABI is not supported by the ZBOSS lib."
                    "(${ZBOSS_LIB_PATH} doesn't exist.)")
  endif()

  if (CONFIG_ZIGBEE_ROLE_COORDINATOR OR CONFIG_ZIGBEE_ROLE_ROUTER)
    zephyr_link_libraries(${ZBOSS_LIB_PATH}/libzboss.a)
    toolchain_cc_imacros(${CMAKE_CURRENT_SOURCE_DIR}/include/osif/libzboss_config.h)
  elseif (CONFIG_ZIGBEE_ROLE_END_DEVICE)
    zephyr_link_libraries(${ZBOSS_LIB_PATH}/libzboss.ed.a)
    toolchain_cc_imacros(${CMAKE_CURRENT_SOURCE_DIR}/include/osif/libzboss_config.ed.h)
  else()
    message( FATAL_ERROR "Unsupported Zigbee role. Exiting." )
  endif()

endif()
