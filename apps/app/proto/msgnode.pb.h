/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.3 at Tue Apr 07 17:48:14 2020. */

#ifndef PB_MSGNODE_PB_H_INCLUDED
#define PB_MSGNODE_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _AppCmd {
    AppCmd_APP_CMD_NONE = 0,
    AppCmd_APP_CMD_RESET = 1,
    AppCmd_APP_CMD_FAC_RESET = 2,
    AppCmd_APP_CMD_DFU = 3
} AppCmd;
#define _AppCmd_MIN AppCmd_APP_CMD_NONE
#define _AppCmd_MAX AppCmd_APP_CMD_DFU
#define _AppCmd_ARRAYSIZE ((AppCmd)(AppCmd_APP_CMD_DFU+1))

/* Struct definitions */
typedef struct _AppParam {
    bool has_cmd;
    AppCmd cmd;
/* @@protoc_insertion_point(struct:AppParam) */
} AppParam;

typedef struct _BleParam {
    bool has_bleInterval;
    float bleInterval;
    bool has_bleTxp;
    int32_t bleTxp;
    bool has_bleOnTime;
    uint32_t bleOnTime;
    bool has_bleOffTime;
    uint32_t bleOffTime;
    bool has_bleOnOff;
    uint32_t bleOnOff;
/* @@protoc_insertion_point(struct:BleParam) */
} BleParam;

typedef PB_BYTES_ARRAY_T(16) iBeacon_uuid_t;
typedef struct _iBeacon {
    bool has_uuid;
    iBeacon_uuid_t uuid;
    bool has_major;
    uint32_t major;
    bool has_minor;
    uint32_t minor;
    bool has_mrssi;
    int32_t mrssi;
/* @@protoc_insertion_point(struct:iBeacon) */
} iBeacon;

typedef struct _MsgNode {
    bool has_id;
    uint32_t id;
    bool has_cmd;
    uint32_t cmd;
    bool has_cmdRet;
    uint32_t cmdRet;
    bool has_bleParam;
    BleParam bleParam;
    bool has_appParam;
    AppParam appParam;
    bool has_ibeacon;
    iBeacon ibeacon;
    bool has_appBleFnt;
    uint32_t appBleFnt;
    bool has_appLowPowerLevel;
    uint32_t appLowPowerLevel;
/* @@protoc_insertion_point(struct:MsgNode) */
} MsgNode;

/* Default values for struct fields */

/* Initializer values for message structs */
#define BleParam_init_default                    {false, 0, false, 0, false, 0, false, 0, false, 0}
#define iBeacon_init_default                     {false, {0, {0}}, false, 0, false, 0, false, 0}
#define AppParam_init_default                    {false, _AppCmd_MIN}
#define MsgNode_init_default                     {false, 0, false, 0, false, 0, false, BleParam_init_default, false, AppParam_init_default, false, iBeacon_init_default, false, 0, false, 0}
#define BleParam_init_zero                       {false, 0, false, 0, false, 0, false, 0, false, 0}
#define iBeacon_init_zero                        {false, {0, {0}}, false, 0, false, 0, false, 0}
#define AppParam_init_zero                       {false, _AppCmd_MIN}
#define MsgNode_init_zero                        {false, 0, false, 0, false, 0, false, BleParam_init_zero, false, AppParam_init_zero, false, iBeacon_init_zero, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define AppParam_cmd_tag                         1
#define BleParam_bleInterval_tag                 1
#define BleParam_bleTxp_tag                      2
#define BleParam_bleOnTime_tag                   3
#define BleParam_bleOffTime_tag                  4
#define BleParam_bleOnOff_tag                    5
#define iBeacon_uuid_tag                         1
#define iBeacon_major_tag                        2
#define iBeacon_minor_tag                        3
#define iBeacon_mrssi_tag                        4
#define MsgNode_id_tag                           1
#define MsgNode_cmd_tag                          2
#define MsgNode_cmdRet_tag                       3
#define MsgNode_bleParam_tag                     5
#define MsgNode_appParam_tag                     6
#define MsgNode_ibeacon_tag                      38
#define MsgNode_appBleFnt_tag                    200
#define MsgNode_appLowPowerLevel_tag             201

/* Struct field encoding specification for nanopb */
extern const pb_field_t BleParam_fields[6];
extern const pb_field_t iBeacon_fields[5];
extern const pb_field_t AppParam_fields[2];
extern const pb_field_t MsgNode_fields[9];

/* Maximum encoded size of messages (where known) */
#define BleParam_size                            29
#define iBeacon_size                             36
#define AppParam_size                            2
#define MsgNode_size                             106

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MSGNODE_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif