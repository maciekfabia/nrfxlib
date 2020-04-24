#
# Copyright (c) 2020 Nordic Semiconductor ASA
#
# SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
#

include(${NRFXLIB_DIR}/common.cmake)

#old_sdk: ToDo - Add include path for radio using Kconfig. Now isn't working on NCS master
zephyr_include_directories(${NRFXLIB_DIR}/../modules/hal/nordic/drivers/nrf_radio_802154)

# Common includes, not related to ZBOSS source code.
zephyr_include_directories(src/zb_error)

# Source files
zephyr_sources(src/zb_error/zb_error_to_string.c)

# Suppress bitfield compatibility warning
zephyr_compile_options(-Wno-packed-bitfield-compat)

# Add compile-time definition, indicating which ZBOSS library will be linked
if (CONFIG_ZIGBEE_ROLE_END_DEVICE)
  zephyr_compile_definitions(ZB_ED_ROLE)
endif()


if (CONFIG_ZBOSS_LIBRARY_PRECOMPILED)

zephyr_include_directories(include)
zephyr_include_directories(include/zcl)
zephyr_include_directories(include/ha)
zephyr_include_directories(include/se)
zephyr_include_directories(include/osif)
zephyr_include_directories(include/addons)

nrfxlib_calculate_lib_path(lib_path)
set(ZBOSS_LIB_PATH ${CMAKE_CURRENT_SOURCE_DIR}/${lib_path})
if(NOT EXISTS ${ZBOSS_LIB_PATH})
  message(WARNING "This combination of SoC and floating point ABI is not supported by the ZBOSS lib."
                  "(${ZBOSS_LIB_PATH} doesn't exist.)")
endif()

if (CONFIG_ZIGBEE_ROLE_COORDINATOR OR CONFIG_ZIGBEE_ROLE_ROUTER)
  zephyr_link_libraries(${ZBOSS_LIB_PATH}/libzboss.a)
elseif (CONFIG_ZIGBEE_ROLE_END_DEVICE)
  zephyr_link_libraries(${ZBOSS_LIB_PATH}/libzboss.ed.a)
else()
  message( FATAL_ERROR "Unsupported Zigbee role. Exiting." )
endif()

elseif(CONFIG_ZBOSS_LIBRARY_SOURCES)
  # Read ZOI platform repository path from west manifest file.
  execute_process(
    COMMAND
    ${WEST} list -f {posixpath} manifest
    OUTPUT_VARIABLE ZOI_PLATFORM_SOURCE_DIR
    )
  # Trim a trailing whitespace.
  string(STRIP ${ZOI_PLATFORM_SOURCE_DIR} ZOI_PLATFORM_SOURCE_DIR)

  # Include ZBOSS build CMake file.
  if(EXISTS "${ZOI_PLATFORM_SOURCE_DIR}/CMakeLists.txt")
    include("${ZOI_PLATFORM_SOURCE_DIR}/CMakeLists.txt")
  else()
    message( FATAL_ERROR "Unable to find ZOI platform repository. Please checkout repositories from ZOI manifest file to recover. Exiting." )
  endif()

else()
  message( FATAL_ERROR "Unsupported ZBOSS library type. Exiting." )
endif()
