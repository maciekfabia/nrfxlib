/*
 * Copyright (c) 2020 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-BSD-5-Clause-Nordic
 */

#ifndef LIBZBOSS_CONFIG_H__
#define LIBZBOSS_CONFIG_H__

/**
 * This is an autogenerated file.
 * Please use Kconfig to change it.
 */


/**
 * ZB_APS_SRC_BINDING_TABLE_SIZE
 */
/* #undef CONFIG_ZB_APS_SRC_BINDING_TABLE_SIZE */

/**
 * ZB_NWK_BRR_TABLE_SIZE
 */
#define CONFIG_ZB_NWK_BRR_TABLE_SIZE 16

/**
 * Source code - WWAH cluster
 *
 * Include Works With All Hubs cluster
 */
#define CONFIG_ZB_ZCL_SUPPORT_CLUSTER_WWAH y

/**
 * ZB_APS_GROUP_TABLE_SIZE
 */
#define CONFIG_ZB_APS_GROUP_TABLE_SIZE 16

/**
 * Source code - Initialize and flush logger directly from ZBOSS kernel
 */
/* #undef CONFIG_ZB_ASYNC_TRACE_CONTROL */

/**
 * Expected Zigbee application complexity - moderate
 */
/* #undef CONFIG_ZB_CONFIG_APPLICATION_MODERATE */

/**
 * Source code - Check for Out Of Memory state
 *
 * If Zigbee packet buffer pool is in OOM state for a period, specified
 * by ZB_OOM_THRESHOLD, then assertion is triggered.
 */
/* #undef CONFIG_ZB_CHECK_OOM_STATUS */

/**
 * Source code - Enable test commands
 *
 * Enable reception of test commands on UART interface
 * (enabled in ZBOSS test configs only)
 */
/* #undef CONFIG_ZB_NRF_TRACE_RX_ENABLE */

/**
 * ZB_ZGP_SINK_TBL_SIZE
 */
#define CONFIG_ZB_ZGP_SINK_TBL_SIZE 24

/**
 * Source code - Dynamic memory configuration
 *
 * Enable dynamic memory configuration feature that allows to change memory
 * footprint if application uses ZBOSS binaries
 */
#define CONFIG_ZB_CONFIGURABLE_MEM y

/**
 * ZB_APS_ENDPOINTS_IN_GROUP_TABLE
 */
#define CONFIG_ZB_APS_ENDPOINTS_IN_GROUP_TABLE 8

/**
 * Expected Zigbee traffic intensity - high
 */
#define CONFIG_ZB_CONFIG_HIGH_TRAFFIC y

/**
 * Source code - Distributed security
 *
 * Enable forming and joining Zigbee networks with distributed security
 */
#define CONFIG_ZB_DISTRIBUTED_SECURITY_ON y

/**
 * Source code - Install codes
 *
 * Enable commissioning with install codes
 */
#define CONFIG_ZB_SECURITY_INSTALLCODES y

/**
 * WWAH cluster - WWAHu client
 *
 * Include WWAHu cluster client implementation
 */
#define CONFIG_ZB_ZCL_ENABLE_WWAH_CLIENT y

/**
 * ZB_CONFIG_OVERALL_NETWORK_SIZE
 */
#define CONFIG_ZB_CONFIG_OVERALL_NETWORK_SIZE 128

/**
 * Expected Zigbee application complexity - complex
 */
#define CONFIG_ZB_CONFIG_APPLICATION_COMPLEX y

/**
 * Expected Zigbee traffic intensity - light
 */
/* #undef CONFIG_ZB_CONFIG_LIGHT_TRAFFIC */

/**
 * ZB_MAX_EP_NUMBER
 *
 * Maximum number of supported endpoints per device
 */
#define CONFIG_ZB_MAX_EP_NUMBER 6

/**
 * WWAH cluster - WWAHu server
 *
 * Include WWAHu cluster server implementation
 */
#define CONFIG_ZB_ZCL_ENABLE_WWAH_SERVER y

/**
 * Expected Zigbee traffic intensity - moderate
 */
/* #undef CONFIG_ZB_CONFIG_MODERATE_TRAFFIC */

/**
 * Source code - MAC filtering
 *
 * Enables filtering frames at MAC level, based on device's short or
 * long address
 */
/* #undef CONFIG_ZB_LIMIT_VISIBILITY */

/**
 * Source code - Enable Zigbee profile, used by verification framework
 */
/* #undef CONFIG_ZB_TEST_PROFILE */

/**
 * Source code - NVRAM migration
 *
 * Include procedures to migrate legacy NVRAM structures
 */
#define CONFIG_ZB_NVRAM_ENABLE_VER_MIGRATION y

/**
 * ZB_ZDO_TRAN_TABLE_SIZE
 */
#define CONFIG_ZB_ZDO_TRAN_TABLE_SIZE 16

/**
 * WWAHu server - Parent classification
 *
 * Enable parent classification
 */
#define CONFIG_ZB_PARENT_CLASSIFICATION y

/**
 * Source code - NWK security API
 *
 * Include API to disable NWK security
 */
#define CONFIG_ZB_LOW_SECURITY_MODE y

/**
 * Source code - Touchlink commissioning (experimental)
 */
/* #undef CONFIG_ZB_BDB_TOUCHLINK */

/**
 * Max compiled-in log level for ZBOSS traces - Off
 */
/* #undef CONFIG_ZB_LOG_LEVEL_OFF */

/**
 * Source code - Enable USB serial interface for ZBOSS CLI
 */
/* #undef CONFIG_ZB_HAVE_USERIAL */

/**
 * Source code - Certification specific behavior
 *
 * Enable behaviors specific to golden devices used during certification
 */
/* #undef CONFIG_ZB_CERTIFICATION_HACKS */

/**
 * Max compiled-in log level for ZBOSS traces - Debug
 */
/* #undef CONFIG_ZB_LOG_LEVEL_DBG */

/**
 * Source code - Production configuration
 *
 * Enable production configuration
 */
#define CONFIG_ZB_PRODUCTION_CONFIG y

/**
 * ZB_BUF_Q_SIZE
 *
 * Size of queue for wait for free packet buffer
 * 
 * Note: To prevent deadlocks ZB_BUF_Q_SIZE must be < ZB_IOBUF_POOL_SIZE/2
 */
#define CONFIG_ZB_BUF_Q_SIZE 8

/**
 * Source code - NWK requests with aliases
 *
 * Enables making NWK requests with aliases (see sec. 3.2.1.1.1) or
 * R21 Zigbee PRO specification)
 */
/* #undef CONFIG_ZB_USEALIAS */

/**
 * ZB_DEV_MANUFACTURER_TABLE_SIZE
 *
 * Size of table used for long addresses compression: 3 bytes of
 * manufacturer id.
 * 
 * ZBOSS implements long address compression: 3 bytes of manufacturer
 * id are stored in the separate table; reference to manufacturer
 * entry is stored in the long address giving 2 bytes economy.
 * 
 * That is an absolute limit of number of manufacturers known to the device.
 * 
 * Note: All that machinery will not work if instead of legal
 * manufacturer ids (or illegal, but fixed ids) use random values.
 */
#define CONFIG_ZB_DEV_MANUFACTURER_TABLE_SIZE 32

/**
 * Max compiled-in log level for ZBOSS traces - Info
 */
/* #undef CONFIG_ZB_LOG_LEVEL_INF */

/**
 * ZB_MULTITEST_CONSOLE_SLEEP_TIMEOUT
 */
#define CONFIG_ZB_MULTITEST_CONSOLE_SLEEP_TIMEOUT 4000000

/**
 * Source code - PAN ID blacklist
 *
 * Enable PAN ID blacklisting during rejoin
 */
#define CONFIG_ZB_NWK_BLACKLIST y

/**
 * Source code - APS user frames
 *
 * Include API to send raw APS frames
 */
#define CONFIG_ZB_APS_USER_PAYLOAD y

/**
 * Source code - Enable busy loop in GP implementation
 *
 * While communicating with Green Power device, ZBOSS will wait before issuing
 * mcps-data.req in a busy loop instead of using MAC features
 */
/* #undef CONFIG_ZB_MAC_AUTO_DELAY_IN_MAC_GP_SEND */

/**
 * Check for Out Of Memory state - Generate NWK status frame in OOM
 *
 * Send broadcast frame once OOM state is detected.
 */
/* #undef CONFIG_ZB_SEND_OOM_STATUS */

/**
 * Max compiled-in log level for ZBOSS traces - Error
 */
/* #undef CONFIG_ZB_LOG_LEVEL_ERR */

/**
 * Source code - Enable UART serial interface for ZBOSS CLI
 */
/* #undef CONFIG_ZB_HAVE_SERIAL */

/**
 * Expected Zigbee application complexity - simple
 */
/* #undef CONFIG_ZB_CONFIG_APPLICATION_SIMPLE */

/**
 * WWAHu server - Beacon survey
 *
 * Enable beacon survey
 */
#define CONFIG_ZB_BEACON_SURVEY y

/**
 * Source code - APS fragmentation
 *
 * Enable APS fragmentation inside ZBOSS
 */
#define CONFIG_ZB_APS_FRAGMENTATION y

/**
 * Max compiled-in log level for ZBOSS traces - Warning
 */
#define CONFIG_ZB_LOG_LEVEL_WRN y

/**
 * Source code - Disable TRACE_FILE_ID assert
 *
 * Disable sanity check for ZB_TRACE_FILE_ID macro definition in each file
 */
#define CONFIG_ZB_DONT_NEED_TRACE_FILE_ID y

/**
 * ZB_IOBUF_POOL_SIZE
 */
/* #undef CONFIG_ZB_IOBUF_POOL_SIZE */

/**
 * ZB_PANID_TABLE_SIZE
 *
 * NWK: size of the long-short Pan ID translation table
 * 
 * Must be <= (packet buffer size - sizeof(*discovery_confirm)) /
 *            sizeof(*network_descriptor)
 * That value limits number of Pan IDs visible for device during active scan.
 */
#define CONFIG_ZB_PANID_TABLE_SIZE 28

/**
 * Source code - Disable TRACE_FILE_ID assert
 */
#define CONFIG_ZB_TRACE_LOG_LEVEL 2

/**
 * ZB_ZGP_PROXY_TBL_SIZE
 */
#define CONFIG_ZB_ZGP_PROXY_TBL_SIZE 5

/**
 * Source code - Finding and Binding
 *
 * Enable finding and binding, as defined in BDB specification
 */
#define CONFIG_ZB_BDB_ENABLE_FINDING_BINDING y

/**
 * ZB_SCHEDULER_Q_SIZE
 *
 * Scheduler callbacks queue size
 */
/* #undef CONFIG_ZB_SCHEDULER_Q_SIZE */

/**
 * ZB_TRACE_MASK
 *
 * Selectively enable Zigbee binary trace logs.
 * The mask value should be a bitwise OR of values assigned to selected modules.
 * 
 * Available modules are:
 * 
 * - 0x4000 Zigbee Green Power
 * - 0x0800 Application
 * - 0x0200 Zigbee Light Link
 * - 0x0100 Zigbee Cluster Library
 * - 0x0080 Security
 * - 0x0040 Zigbee Device Object
 * - 0x0010 Application Support layer
 * - 0x0008 Network layer
 * - 0x0004 MAC layer
 * - 0x0002 Memory management
 * - 0x0001 Common
 * 
 * For example, in order to enable traces related to OTA DFU,
 * one should set this option to 0x4100.
 * 
 * Note: For general debugging purposes, please use 0x0C48.
 */
#define CONFIG_ZB_TRACE_MASK 0x0000

/**
 * WWAHu server - NWK retransmissions
 *
 * Enable retransmissions on NWK layer
 */
#define CONFIG_ZB_NWK_RETRY_COUNT y

/**
 * ZB_NWK_BLACKLIST_SIZE
 */
#define CONFIG_ZB_NWK_BLACKLIST_SIZE 16

/**
 * ZB_APS_DST_BINDING_TABLE_SIZE
 */
/* #undef CONFIG_ZB_APS_DST_BINDING_TABLE_SIZE */

/**
 * ZB_NWK_BTR_TABLE_SIZE
 *
 * See Zigbee Specification subclause 3.6.5
 */
#define CONFIG_ZB_NWK_BTR_TABLE_SIZE 16

#endif /* LIBZBOSS_CONFIG_H__ */

