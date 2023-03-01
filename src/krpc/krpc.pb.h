/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.7 */

#ifndef PB_KRPC_SCHEMA_BAZEL_OUT_K8_FASTBUILD_BIN_CLIENT_CNANO_SRC_KRPC_PB_C_SRC_PROTO_NANOPB_KRPC_PB_H_INCLUDED
#define PB_KRPC_SCHEMA_BAZEL_OUT_K8_FASTBUILD_BIN_CLIENT_CNANO_SRC_KRPC_PB_C_SRC_PROTO_NANOPB_KRPC_PB_H_INCLUDED
#include <krpc/pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Enum definitions */
typedef enum _krpc_schema_ConnectionRequest_Type {
    krpc_schema_ConnectionRequest_Type_RPC = 0,
    krpc_schema_ConnectionRequest_Type_STREAM = 1
} krpc_schema_ConnectionRequest_Type;

typedef enum _krpc_schema_ConnectionResponse_Status {
    krpc_schema_ConnectionResponse_Status_OK = 0,
    krpc_schema_ConnectionResponse_Status_MALFORMED_MESSAGE = 1,
    krpc_schema_ConnectionResponse_Status_TIMEOUT = 2,
    krpc_schema_ConnectionResponse_Status_WRONG_TYPE = 3
} krpc_schema_ConnectionResponse_Status;

typedef enum _krpc_schema_Procedure_GameScene {
    krpc_schema_Procedure_GameScene_SPACE_CENTER = 0,
    krpc_schema_Procedure_GameScene_FLIGHT = 1,
    krpc_schema_Procedure_GameScene_TRACKING_STATION = 2,
    krpc_schema_Procedure_GameScene_EDITOR_VAB = 3,
    krpc_schema_Procedure_GameScene_EDITOR_SPH = 4,
    krpc_schema_Procedure_GameScene_MISSION_BUILDER = 5
} krpc_schema_Procedure_GameScene;

typedef enum _krpc_schema_Type_TypeCode {
    krpc_schema_Type_TypeCode_NONE = 0,
    /* Values */
    krpc_schema_Type_TypeCode_DOUBLE = 1,
    krpc_schema_Type_TypeCode_FLOAT = 2,
    krpc_schema_Type_TypeCode_SINT32 = 3,
    krpc_schema_Type_TypeCode_SINT64 = 4,
    krpc_schema_Type_TypeCode_UINT32 = 5,
    krpc_schema_Type_TypeCode_UINT64 = 6,
    krpc_schema_Type_TypeCode_BOOL = 7,
    krpc_schema_Type_TypeCode_STRING = 8,
    krpc_schema_Type_TypeCode_BYTES = 9,
    /* Objects */
    krpc_schema_Type_TypeCode_CLASS = 100,
    krpc_schema_Type_TypeCode_ENUMERATION = 101,
    /* Messages */
    krpc_schema_Type_TypeCode_EVENT = 200,
    krpc_schema_Type_TypeCode_PROCEDURE_CALL = 201,
    krpc_schema_Type_TypeCode_STREAM = 202,
    krpc_schema_Type_TypeCode_STATUS = 203,
    krpc_schema_Type_TypeCode_SERVICES = 204,
    /* Collections */
    krpc_schema_Type_TypeCode_TUPLE = 300,
    krpc_schema_Type_TypeCode_LIST = 301,
    krpc_schema_Type_TypeCode_SET = 302,
    krpc_schema_Type_TypeCode_DICTIONARY = 303
} krpc_schema_Type_TypeCode;

/* Struct definitions */
typedef struct _krpc_schema_ConnectionRequest {
    krpc_schema_ConnectionRequest_Type type;
    pb_callback_t client_name;
    pb_callback_t client_identifier;
} krpc_schema_ConnectionRequest;

typedef struct _krpc_schema_ConnectionResponse {
    krpc_schema_ConnectionResponse_Status status;
    pb_callback_t message;
    pb_callback_t client_identifier;
} krpc_schema_ConnectionResponse;

typedef struct _krpc_schema_ProcedureCall {
    pb_callback_t arguments;
    uint32_t service_id;
    uint32_t procedure_id;
} krpc_schema_ProcedureCall;

typedef struct _krpc_schema_Request {
    pb_size_t calls_count;
    krpc_schema_ProcedureCall calls[1];
} krpc_schema_Request;

typedef struct _krpc_schema_Argument {
    uint32_t position;
    pb_callback_t value;
} krpc_schema_Argument;

typedef struct _krpc_schema_ProcedureResult {
    pb_callback_t error;
    pb_callback_t value;
} krpc_schema_ProcedureResult;

typedef struct _krpc_schema_Response {
    pb_callback_t error;
    pb_size_t results_count;
    krpc_schema_ProcedureResult results[1];
} krpc_schema_Response;

typedef struct _krpc_schema_Error {
    pb_callback_t service;
    pb_callback_t name;
    pb_callback_t description;
    pb_callback_t stack_trace;
} krpc_schema_Error;

typedef struct _krpc_schema_StreamUpdate {
    pb_callback_t results;
} krpc_schema_StreamUpdate;

typedef struct _krpc_schema_StreamResult {
    uint64_t id;
    bool has_result;
    krpc_schema_ProcedureResult result;
} krpc_schema_StreamResult;

typedef struct _krpc_schema_Services {
    pb_callback_t services;
} krpc_schema_Services;

typedef struct _krpc_schema_Service {
    pb_callback_t name;
    pb_callback_t procedures;
    pb_callback_t classes;
    pb_callback_t enumerations;
    pb_callback_t exceptions;
    pb_callback_t documentation;
} krpc_schema_Service;

typedef struct _krpc_schema_Class {
    pb_callback_t name;
    pb_callback_t documentation;
} krpc_schema_Class;

typedef struct _krpc_schema_Enumeration {
    pb_callback_t name;
    pb_callback_t values;
    pb_callback_t documentation;
} krpc_schema_Enumeration;

typedef struct _krpc_schema_EnumerationValue {
    pb_callback_t name;
    int32_t value;
    pb_callback_t documentation;
} krpc_schema_EnumerationValue;

typedef struct _krpc_schema_Exception {
    pb_callback_t name;
    pb_callback_t documentation;
} krpc_schema_Exception;

typedef struct _krpc_schema_Type {
    krpc_schema_Type_TypeCode code;
    pb_callback_t service;
    pb_callback_t name;
    pb_callback_t types;
} krpc_schema_Type;

typedef struct _krpc_schema_Procedure {
    pb_callback_t name;
    pb_callback_t parameters;
    bool has_return_type;
    krpc_schema_Type return_type;
    bool return_is_nullable;
    pb_callback_t documentation;
    pb_callback_t game_scenes;
} krpc_schema_Procedure;

typedef struct _krpc_schema_Parameter {
    pb_callback_t name;
    bool has_type;
    krpc_schema_Type type;
    pb_callback_t default_value;
} krpc_schema_Parameter;

typedef struct _krpc_schema_Tuple {
    pb_callback_t items;
} krpc_schema_Tuple;

typedef struct _krpc_schema_List {
    pb_callback_t items;
} krpc_schema_List;

typedef struct _krpc_schema_Set {
    pb_callback_t items;
} krpc_schema_Set;

typedef struct _krpc_schema_Dictionary {
    pb_callback_t entries;
} krpc_schema_Dictionary;

typedef struct _krpc_schema_DictionaryEntry {
    pb_callback_t key;
    pb_callback_t value;
} krpc_schema_DictionaryEntry;

typedef struct _krpc_schema_Stream {
    uint64_t id;
} krpc_schema_Stream;

typedef struct _krpc_schema_Event {
    bool has_stream;
    krpc_schema_Stream stream;
} krpc_schema_Event;

typedef struct _krpc_schema_Status {
    char version[16];
    uint64_t bytes_read;
    uint64_t bytes_written;
    float bytes_read_rate;
    float bytes_written_rate;
    uint64_t rpcs_executed;
    float rpc_rate;
    bool one_rpc_per_update;
    uint32_t max_time_per_update;
    bool adaptive_rate_control;
    bool blocking_recv;
    uint32_t recv_timeout;
    float time_per_rpc_update;
    float poll_time_per_rpc_update;
    float exec_time_per_rpc_update;
    uint32_t stream_rpcs;
    uint64_t stream_rpcs_executed;
    float stream_rpc_rate;
    float time_per_stream_update;
} krpc_schema_Status;

typedef struct _krpc_schema_MultiplexedRequest {
    bool has_connection_request;
    krpc_schema_ConnectionRequest connection_request;
    bool has_request;
    krpc_schema_Request request;
} krpc_schema_MultiplexedRequest;

typedef struct _krpc_schema_MultiplexedResponse {
    bool has_response;
    krpc_schema_Response response;
    bool has_stream_update;
    krpc_schema_StreamUpdate stream_update;
} krpc_schema_MultiplexedResponse;


#ifdef __cplusplus
extern "C" {
#endif

/* Helper constants for enums */
#define _krpc_schema_ConnectionRequest_Type_MIN krpc_schema_ConnectionRequest_Type_RPC
#define _krpc_schema_ConnectionRequest_Type_MAX krpc_schema_ConnectionRequest_Type_STREAM
#define _krpc_schema_ConnectionRequest_Type_ARRAYSIZE ((krpc_schema_ConnectionRequest_Type)(krpc_schema_ConnectionRequest_Type_STREAM+1))

#define _krpc_schema_ConnectionResponse_Status_MIN krpc_schema_ConnectionResponse_Status_OK
#define _krpc_schema_ConnectionResponse_Status_MAX krpc_schema_ConnectionResponse_Status_WRONG_TYPE
#define _krpc_schema_ConnectionResponse_Status_ARRAYSIZE ((krpc_schema_ConnectionResponse_Status)(krpc_schema_ConnectionResponse_Status_WRONG_TYPE+1))

#define _krpc_schema_Procedure_GameScene_MIN krpc_schema_Procedure_GameScene_SPACE_CENTER
#define _krpc_schema_Procedure_GameScene_MAX krpc_schema_Procedure_GameScene_MISSION_BUILDER
#define _krpc_schema_Procedure_GameScene_ARRAYSIZE ((krpc_schema_Procedure_GameScene)(krpc_schema_Procedure_GameScene_MISSION_BUILDER+1))

#define _krpc_schema_Type_TypeCode_MIN krpc_schema_Type_TypeCode_NONE
#define _krpc_schema_Type_TypeCode_MAX krpc_schema_Type_TypeCode_DICTIONARY
#define _krpc_schema_Type_TypeCode_ARRAYSIZE ((krpc_schema_Type_TypeCode)(krpc_schema_Type_TypeCode_DICTIONARY+1))

#define krpc_schema_ConnectionRequest_type_ENUMTYPE krpc_schema_ConnectionRequest_Type

#define krpc_schema_ConnectionResponse_status_ENUMTYPE krpc_schema_ConnectionResponse_Status











#define krpc_schema_Procedure_game_scenes_ENUMTYPE krpc_schema_Procedure_GameScene






#define krpc_schema_Type_code_ENUMTYPE krpc_schema_Type_TypeCode












/* Initializer values for message structs */
#define krpc_schema_ConnectionRequest_init_default {_krpc_schema_ConnectionRequest_Type_MIN, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_ConnectionResponse_init_default {_krpc_schema_ConnectionResponse_Status_MIN, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Request_init_default         {0, {krpc_schema_ProcedureCall_init_default}}
#define krpc_schema_ProcedureCall_init_default   {{{NULL}, NULL}, 0, 0}
#define krpc_schema_Argument_init_default        {0, {{NULL}, NULL}}
#define krpc_schema_Response_init_default        {{{NULL}, NULL}, 0, {krpc_schema_ProcedureResult_init_default}}
#define krpc_schema_ProcedureResult_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Error_init_default           {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_StreamUpdate_init_default    {{{NULL}, NULL}}
#define krpc_schema_StreamResult_init_default    {0, false, krpc_schema_ProcedureResult_init_default}
#define krpc_schema_Services_init_default        {{{NULL}, NULL}}
#define krpc_schema_Service_init_default         {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Procedure_init_default       {{{NULL}, NULL}, {{NULL}, NULL}, false, krpc_schema_Type_init_default, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Parameter_init_default       {{{NULL}, NULL}, false, krpc_schema_Type_init_default, {{NULL}, NULL}}
#define krpc_schema_Class_init_default           {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Enumeration_init_default     {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_EnumerationValue_init_default {{{NULL}, NULL}, 0, {{NULL}, NULL}}
#define krpc_schema_Exception_init_default       {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Type_init_default            {_krpc_schema_Type_TypeCode_MIN, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Tuple_init_default           {{{NULL}, NULL}}
#define krpc_schema_List_init_default            {{{NULL}, NULL}}
#define krpc_schema_Set_init_default             {{{NULL}, NULL}}
#define krpc_schema_Dictionary_init_default      {{{NULL}, NULL}}
#define krpc_schema_DictionaryEntry_init_default {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Stream_init_default          {0}
#define krpc_schema_Event_init_default           {false, krpc_schema_Stream_init_default}
#define krpc_schema_Status_init_default          {"", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define krpc_schema_MultiplexedRequest_init_default {false, krpc_schema_ConnectionRequest_init_default, false, krpc_schema_Request_init_default}
#define krpc_schema_MultiplexedResponse_init_default {false, krpc_schema_Response_init_default, false, krpc_schema_StreamUpdate_init_default}
#define krpc_schema_ConnectionRequest_init_zero  {_krpc_schema_ConnectionRequest_Type_MIN, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_ConnectionResponse_init_zero {_krpc_schema_ConnectionResponse_Status_MIN, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Request_init_zero            {0, {krpc_schema_ProcedureCall_init_zero}}
#define krpc_schema_ProcedureCall_init_zero      {{{NULL}, NULL}, 0, 0}
#define krpc_schema_Argument_init_zero           {0, {{NULL}, NULL}}
#define krpc_schema_Response_init_zero           {{{NULL}, NULL}, 0, {krpc_schema_ProcedureResult_init_zero}}
#define krpc_schema_ProcedureResult_init_zero    {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Error_init_zero              {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_StreamUpdate_init_zero       {{{NULL}, NULL}}
#define krpc_schema_StreamResult_init_zero       {0, false, krpc_schema_ProcedureResult_init_zero}
#define krpc_schema_Services_init_zero           {{{NULL}, NULL}}
#define krpc_schema_Service_init_zero            {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Procedure_init_zero          {{{NULL}, NULL}, {{NULL}, NULL}, false, krpc_schema_Type_init_zero, 0, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Parameter_init_zero          {{{NULL}, NULL}, false, krpc_schema_Type_init_zero, {{NULL}, NULL}}
#define krpc_schema_Class_init_zero              {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Enumeration_init_zero        {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_EnumerationValue_init_zero   {{{NULL}, NULL}, 0, {{NULL}, NULL}}
#define krpc_schema_Exception_init_zero          {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Type_init_zero               {_krpc_schema_Type_TypeCode_MIN, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Tuple_init_zero              {{{NULL}, NULL}}
#define krpc_schema_List_init_zero               {{{NULL}, NULL}}
#define krpc_schema_Set_init_zero                {{{NULL}, NULL}}
#define krpc_schema_Dictionary_init_zero         {{{NULL}, NULL}}
#define krpc_schema_DictionaryEntry_init_zero    {{{NULL}, NULL}, {{NULL}, NULL}}
#define krpc_schema_Stream_init_zero             {0}
#define krpc_schema_Event_init_zero              {false, krpc_schema_Stream_init_zero}
#define krpc_schema_Status_init_zero             {"", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define krpc_schema_MultiplexedRequest_init_zero {false, krpc_schema_ConnectionRequest_init_zero, false, krpc_schema_Request_init_zero}
#define krpc_schema_MultiplexedResponse_init_zero {false, krpc_schema_Response_init_zero, false, krpc_schema_StreamUpdate_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define krpc_schema_ConnectionRequest_type_tag   1
#define krpc_schema_ConnectionRequest_client_name_tag 2
#define krpc_schema_ConnectionRequest_client_identifier_tag 3
#define krpc_schema_ConnectionResponse_status_tag 1
#define krpc_schema_ConnectionResponse_message_tag 2
#define krpc_schema_ConnectionResponse_client_identifier_tag 3
#define krpc_schema_ProcedureCall_arguments_tag  3
#define krpc_schema_ProcedureCall_service_id_tag 4
#define krpc_schema_ProcedureCall_procedure_id_tag 5
#define krpc_schema_Request_calls_tag            1
#define krpc_schema_Argument_position_tag        1
#define krpc_schema_Argument_value_tag           2
#define krpc_schema_ProcedureResult_error_tag    1
#define krpc_schema_ProcedureResult_value_tag    2
#define krpc_schema_Response_error_tag           1
#define krpc_schema_Response_results_tag         2
#define krpc_schema_Error_service_tag            1
#define krpc_schema_Error_name_tag               2
#define krpc_schema_Error_description_tag        3
#define krpc_schema_Error_stack_trace_tag        4
#define krpc_schema_StreamUpdate_results_tag     1
#define krpc_schema_StreamResult_id_tag          1
#define krpc_schema_StreamResult_result_tag      2
#define krpc_schema_Services_services_tag        1
#define krpc_schema_Service_name_tag             1
#define krpc_schema_Service_procedures_tag       2
#define krpc_schema_Service_classes_tag          3
#define krpc_schema_Service_enumerations_tag     4
#define krpc_schema_Service_exceptions_tag       5
#define krpc_schema_Service_documentation_tag    6
#define krpc_schema_Class_name_tag               1
#define krpc_schema_Class_documentation_tag      2
#define krpc_schema_Enumeration_name_tag         1
#define krpc_schema_Enumeration_values_tag       2
#define krpc_schema_Enumeration_documentation_tag 3
#define krpc_schema_EnumerationValue_name_tag    1
#define krpc_schema_EnumerationValue_value_tag   2
#define krpc_schema_EnumerationValue_documentation_tag 3
#define krpc_schema_Exception_name_tag           1
#define krpc_schema_Exception_documentation_tag  2
#define krpc_schema_Type_code_tag                1
#define krpc_schema_Type_service_tag             2
#define krpc_schema_Type_name_tag                3
#define krpc_schema_Type_types_tag               4
#define krpc_schema_Procedure_name_tag           1
#define krpc_schema_Procedure_parameters_tag     2
#define krpc_schema_Procedure_return_type_tag    3
#define krpc_schema_Procedure_return_is_nullable_tag 4
#define krpc_schema_Procedure_documentation_tag  5
#define krpc_schema_Procedure_game_scenes_tag    6
#define krpc_schema_Parameter_name_tag           1
#define krpc_schema_Parameter_type_tag           2
#define krpc_schema_Parameter_default_value_tag  3
#define krpc_schema_Tuple_items_tag              1
#define krpc_schema_List_items_tag               1
#define krpc_schema_Set_items_tag                1
#define krpc_schema_Dictionary_entries_tag       1
#define krpc_schema_DictionaryEntry_key_tag      1
#define krpc_schema_DictionaryEntry_value_tag    2
#define krpc_schema_Stream_id_tag                1
#define krpc_schema_Event_stream_tag             1
#define krpc_schema_Status_version_tag           1
#define krpc_schema_Status_bytes_read_tag        2
#define krpc_schema_Status_bytes_written_tag     3
#define krpc_schema_Status_bytes_read_rate_tag   4
#define krpc_schema_Status_bytes_written_rate_tag 5
#define krpc_schema_Status_rpcs_executed_tag     6
#define krpc_schema_Status_rpc_rate_tag          7
#define krpc_schema_Status_one_rpc_per_update_tag 8
#define krpc_schema_Status_max_time_per_update_tag 9
#define krpc_schema_Status_adaptive_rate_control_tag 10
#define krpc_schema_Status_blocking_recv_tag     11
#define krpc_schema_Status_recv_timeout_tag      12
#define krpc_schema_Status_time_per_rpc_update_tag 13
#define krpc_schema_Status_poll_time_per_rpc_update_tag 14
#define krpc_schema_Status_exec_time_per_rpc_update_tag 15
#define krpc_schema_Status_stream_rpcs_tag       16
#define krpc_schema_Status_stream_rpcs_executed_tag 17
#define krpc_schema_Status_stream_rpc_rate_tag   18
#define krpc_schema_Status_time_per_stream_update_tag 19
#define krpc_schema_MultiplexedRequest_connection_request_tag 1
#define krpc_schema_MultiplexedRequest_request_tag 2
#define krpc_schema_MultiplexedResponse_response_tag 1
#define krpc_schema_MultiplexedResponse_stream_update_tag 2

/* Struct field encoding specification for nanopb */
#define krpc_schema_ConnectionRequest_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    type,              1) \
X(a, CALLBACK, SINGULAR, STRING,   client_name,       2) \
X(a, CALLBACK, SINGULAR, BYTES,    client_identifier,   3)
#define krpc_schema_ConnectionRequest_CALLBACK pb_default_field_callback
#define krpc_schema_ConnectionRequest_DEFAULT NULL

#define krpc_schema_ConnectionResponse_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    status,            1) \
X(a, CALLBACK, SINGULAR, STRING,   message,           2) \
X(a, CALLBACK, SINGULAR, BYTES,    client_identifier,   3)
#define krpc_schema_ConnectionResponse_CALLBACK pb_default_field_callback
#define krpc_schema_ConnectionResponse_DEFAULT NULL

#define krpc_schema_Request_FIELDLIST(X, a) \
X(a, STATIC,   REPEATED, MESSAGE,  calls,             1)
#define krpc_schema_Request_CALLBACK NULL
#define krpc_schema_Request_DEFAULT NULL
#define krpc_schema_Request_calls_MSGTYPE krpc_schema_ProcedureCall

#define krpc_schema_ProcedureCall_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  arguments,         3) \
X(a, STATIC,   SINGULAR, UINT32,   service_id,        4) \
X(a, STATIC,   SINGULAR, UINT32,   procedure_id,      5)
#define krpc_schema_ProcedureCall_CALLBACK pb_default_field_callback
#define krpc_schema_ProcedureCall_DEFAULT NULL
#define krpc_schema_ProcedureCall_arguments_MSGTYPE krpc_schema_Argument

#define krpc_schema_Argument_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT32,   position,          1) \
X(a, CALLBACK, SINGULAR, BYTES,    value,             2)
#define krpc_schema_Argument_CALLBACK pb_default_field_callback
#define krpc_schema_Argument_DEFAULT NULL

#define krpc_schema_Response_FIELDLIST(X, a) \
X(a, CALLBACK, OPTIONAL, MESSAGE,  error,             1) \
X(a, STATIC,   REPEATED, MESSAGE,  results,           2)
#define krpc_schema_Response_CALLBACK pb_default_field_callback
#define krpc_schema_Response_DEFAULT NULL
#define krpc_schema_Response_error_MSGTYPE krpc_schema_Error
#define krpc_schema_Response_results_MSGTYPE krpc_schema_ProcedureResult

#define krpc_schema_ProcedureResult_FIELDLIST(X, a) \
X(a, CALLBACK, OPTIONAL, MESSAGE,  error,             1) \
X(a, CALLBACK, SINGULAR, BYTES,    value,             2)
#define krpc_schema_ProcedureResult_CALLBACK pb_default_field_callback
#define krpc_schema_ProcedureResult_DEFAULT NULL
#define krpc_schema_ProcedureResult_error_MSGTYPE krpc_schema_Error

#define krpc_schema_Error_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   service,           1) \
X(a, CALLBACK, SINGULAR, STRING,   name,              2) \
X(a, CALLBACK, SINGULAR, STRING,   description,       3) \
X(a, CALLBACK, SINGULAR, STRING,   stack_trace,       4)
#define krpc_schema_Error_CALLBACK pb_default_field_callback
#define krpc_schema_Error_DEFAULT NULL

#define krpc_schema_StreamUpdate_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  results,           1)
#define krpc_schema_StreamUpdate_CALLBACK pb_default_field_callback
#define krpc_schema_StreamUpdate_DEFAULT NULL
#define krpc_schema_StreamUpdate_results_MSGTYPE krpc_schema_StreamResult

#define krpc_schema_StreamResult_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   id,                1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  result,            2)
#define krpc_schema_StreamResult_CALLBACK NULL
#define krpc_schema_StreamResult_DEFAULT NULL
#define krpc_schema_StreamResult_result_MSGTYPE krpc_schema_ProcedureResult

#define krpc_schema_Services_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  services,          1)
#define krpc_schema_Services_CALLBACK pb_default_field_callback
#define krpc_schema_Services_DEFAULT NULL
#define krpc_schema_Services_services_MSGTYPE krpc_schema_Service

#define krpc_schema_Service_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, REPEATED, MESSAGE,  procedures,        2) \
X(a, CALLBACK, REPEATED, MESSAGE,  classes,           3) \
X(a, CALLBACK, REPEATED, MESSAGE,  enumerations,      4) \
X(a, CALLBACK, REPEATED, MESSAGE,  exceptions,        5) \
X(a, CALLBACK, SINGULAR, STRING,   documentation,     6)
#define krpc_schema_Service_CALLBACK pb_default_field_callback
#define krpc_schema_Service_DEFAULT NULL
#define krpc_schema_Service_procedures_MSGTYPE krpc_schema_Procedure
#define krpc_schema_Service_classes_MSGTYPE krpc_schema_Class
#define krpc_schema_Service_enumerations_MSGTYPE krpc_schema_Enumeration
#define krpc_schema_Service_exceptions_MSGTYPE krpc_schema_Exception

#define krpc_schema_Procedure_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, REPEATED, MESSAGE,  parameters,        2) \
X(a, STATIC,   OPTIONAL, MESSAGE,  return_type,       3) \
X(a, STATIC,   SINGULAR, BOOL,     return_is_nullable,   4) \
X(a, CALLBACK, SINGULAR, STRING,   documentation,     5) \
X(a, CALLBACK, REPEATED, UENUM,    game_scenes,       6)
#define krpc_schema_Procedure_CALLBACK pb_default_field_callback
#define krpc_schema_Procedure_DEFAULT NULL
#define krpc_schema_Procedure_parameters_MSGTYPE krpc_schema_Parameter
#define krpc_schema_Procedure_return_type_MSGTYPE krpc_schema_Type

#define krpc_schema_Parameter_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  type,              2) \
X(a, CALLBACK, SINGULAR, BYTES,    default_value,     3)
#define krpc_schema_Parameter_CALLBACK pb_default_field_callback
#define krpc_schema_Parameter_DEFAULT NULL
#define krpc_schema_Parameter_type_MSGTYPE krpc_schema_Type

#define krpc_schema_Class_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, SINGULAR, STRING,   documentation,     2)
#define krpc_schema_Class_CALLBACK pb_default_field_callback
#define krpc_schema_Class_DEFAULT NULL

#define krpc_schema_Enumeration_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, REPEATED, MESSAGE,  values,            2) \
X(a, CALLBACK, SINGULAR, STRING,   documentation,     3)
#define krpc_schema_Enumeration_CALLBACK pb_default_field_callback
#define krpc_schema_Enumeration_DEFAULT NULL
#define krpc_schema_Enumeration_values_MSGTYPE krpc_schema_EnumerationValue

#define krpc_schema_EnumerationValue_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, STATIC,   SINGULAR, INT32,    value,             2) \
X(a, CALLBACK, SINGULAR, STRING,   documentation,     3)
#define krpc_schema_EnumerationValue_CALLBACK pb_default_field_callback
#define krpc_schema_EnumerationValue_DEFAULT NULL

#define krpc_schema_Exception_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, SINGULAR, STRING,   documentation,     2)
#define krpc_schema_Exception_CALLBACK pb_default_field_callback
#define krpc_schema_Exception_DEFAULT NULL

#define krpc_schema_Type_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UENUM,    code,              1) \
X(a, CALLBACK, SINGULAR, STRING,   service,           2) \
X(a, CALLBACK, SINGULAR, STRING,   name,              3) \
X(a, CALLBACK, REPEATED, MESSAGE,  types,             4)
#define krpc_schema_Type_CALLBACK pb_default_field_callback
#define krpc_schema_Type_DEFAULT NULL
#define krpc_schema_Type_types_MSGTYPE krpc_schema_Type

#define krpc_schema_Tuple_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, BYTES,    items,             1)
#define krpc_schema_Tuple_CALLBACK pb_default_field_callback
#define krpc_schema_Tuple_DEFAULT NULL

#define krpc_schema_List_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, BYTES,    items,             1)
#define krpc_schema_List_CALLBACK pb_default_field_callback
#define krpc_schema_List_DEFAULT NULL

#define krpc_schema_Set_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, BYTES,    items,             1)
#define krpc_schema_Set_CALLBACK pb_default_field_callback
#define krpc_schema_Set_DEFAULT NULL

#define krpc_schema_Dictionary_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  entries,           1)
#define krpc_schema_Dictionary_CALLBACK pb_default_field_callback
#define krpc_schema_Dictionary_DEFAULT NULL
#define krpc_schema_Dictionary_entries_MSGTYPE krpc_schema_DictionaryEntry

#define krpc_schema_DictionaryEntry_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, BYTES,    key,               1) \
X(a, CALLBACK, SINGULAR, BYTES,    value,             2)
#define krpc_schema_DictionaryEntry_CALLBACK pb_default_field_callback
#define krpc_schema_DictionaryEntry_DEFAULT NULL

#define krpc_schema_Stream_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, UINT64,   id,                1)
#define krpc_schema_Stream_CALLBACK NULL
#define krpc_schema_Stream_DEFAULT NULL

#define krpc_schema_Event_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  stream,            1)
#define krpc_schema_Event_CALLBACK NULL
#define krpc_schema_Event_DEFAULT NULL
#define krpc_schema_Event_stream_MSGTYPE krpc_schema_Stream

#define krpc_schema_Status_FIELDLIST(X, a) \
X(a, STATIC,   SINGULAR, STRING,   version,           1) \
X(a, STATIC,   SINGULAR, UINT64,   bytes_read,        2) \
X(a, STATIC,   SINGULAR, UINT64,   bytes_written,     3) \
X(a, STATIC,   SINGULAR, FLOAT,    bytes_read_rate,   4) \
X(a, STATIC,   SINGULAR, FLOAT,    bytes_written_rate,   5) \
X(a, STATIC,   SINGULAR, UINT64,   rpcs_executed,     6) \
X(a, STATIC,   SINGULAR, FLOAT,    rpc_rate,          7) \
X(a, STATIC,   SINGULAR, BOOL,     one_rpc_per_update,   8) \
X(a, STATIC,   SINGULAR, UINT32,   max_time_per_update,   9) \
X(a, STATIC,   SINGULAR, BOOL,     adaptive_rate_control,  10) \
X(a, STATIC,   SINGULAR, BOOL,     blocking_recv,    11) \
X(a, STATIC,   SINGULAR, UINT32,   recv_timeout,     12) \
X(a, STATIC,   SINGULAR, FLOAT,    time_per_rpc_update,  13) \
X(a, STATIC,   SINGULAR, FLOAT,    poll_time_per_rpc_update,  14) \
X(a, STATIC,   SINGULAR, FLOAT,    exec_time_per_rpc_update,  15) \
X(a, STATIC,   SINGULAR, UINT32,   stream_rpcs,      16) \
X(a, STATIC,   SINGULAR, UINT64,   stream_rpcs_executed,  17) \
X(a, STATIC,   SINGULAR, FLOAT,    stream_rpc_rate,  18) \
X(a, STATIC,   SINGULAR, FLOAT,    time_per_stream_update,  19)
#define krpc_schema_Status_CALLBACK NULL
#define krpc_schema_Status_DEFAULT NULL

#define krpc_schema_MultiplexedRequest_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  connection_request,   1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  request,           2)
#define krpc_schema_MultiplexedRequest_CALLBACK NULL
#define krpc_schema_MultiplexedRequest_DEFAULT NULL
#define krpc_schema_MultiplexedRequest_connection_request_MSGTYPE krpc_schema_ConnectionRequest
#define krpc_schema_MultiplexedRequest_request_MSGTYPE krpc_schema_Request

#define krpc_schema_MultiplexedResponse_FIELDLIST(X, a) \
X(a, STATIC,   OPTIONAL, MESSAGE,  response,          1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  stream_update,     2)
#define krpc_schema_MultiplexedResponse_CALLBACK NULL
#define krpc_schema_MultiplexedResponse_DEFAULT NULL
#define krpc_schema_MultiplexedResponse_response_MSGTYPE krpc_schema_Response
#define krpc_schema_MultiplexedResponse_stream_update_MSGTYPE krpc_schema_StreamUpdate

extern const pb_msgdesc_t krpc_schema_ConnectionRequest_msg;
extern const pb_msgdesc_t krpc_schema_ConnectionResponse_msg;
extern const pb_msgdesc_t krpc_schema_Request_msg;
extern const pb_msgdesc_t krpc_schema_ProcedureCall_msg;
extern const pb_msgdesc_t krpc_schema_Argument_msg;
extern const pb_msgdesc_t krpc_schema_Response_msg;
extern const pb_msgdesc_t krpc_schema_ProcedureResult_msg;
extern const pb_msgdesc_t krpc_schema_Error_msg;
extern const pb_msgdesc_t krpc_schema_StreamUpdate_msg;
extern const pb_msgdesc_t krpc_schema_StreamResult_msg;
extern const pb_msgdesc_t krpc_schema_Services_msg;
extern const pb_msgdesc_t krpc_schema_Service_msg;
extern const pb_msgdesc_t krpc_schema_Procedure_msg;
extern const pb_msgdesc_t krpc_schema_Parameter_msg;
extern const pb_msgdesc_t krpc_schema_Class_msg;
extern const pb_msgdesc_t krpc_schema_Enumeration_msg;
extern const pb_msgdesc_t krpc_schema_EnumerationValue_msg;
extern const pb_msgdesc_t krpc_schema_Exception_msg;
extern const pb_msgdesc_t krpc_schema_Type_msg;
extern const pb_msgdesc_t krpc_schema_Tuple_msg;
extern const pb_msgdesc_t krpc_schema_List_msg;
extern const pb_msgdesc_t krpc_schema_Set_msg;
extern const pb_msgdesc_t krpc_schema_Dictionary_msg;
extern const pb_msgdesc_t krpc_schema_DictionaryEntry_msg;
extern const pb_msgdesc_t krpc_schema_Stream_msg;
extern const pb_msgdesc_t krpc_schema_Event_msg;
extern const pb_msgdesc_t krpc_schema_Status_msg;
extern const pb_msgdesc_t krpc_schema_MultiplexedRequest_msg;
extern const pb_msgdesc_t krpc_schema_MultiplexedResponse_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define krpc_schema_ConnectionRequest_fields &krpc_schema_ConnectionRequest_msg
#define krpc_schema_ConnectionResponse_fields &krpc_schema_ConnectionResponse_msg
#define krpc_schema_Request_fields &krpc_schema_Request_msg
#define krpc_schema_ProcedureCall_fields &krpc_schema_ProcedureCall_msg
#define krpc_schema_Argument_fields &krpc_schema_Argument_msg
#define krpc_schema_Response_fields &krpc_schema_Response_msg
#define krpc_schema_ProcedureResult_fields &krpc_schema_ProcedureResult_msg
#define krpc_schema_Error_fields &krpc_schema_Error_msg
#define krpc_schema_StreamUpdate_fields &krpc_schema_StreamUpdate_msg
#define krpc_schema_StreamResult_fields &krpc_schema_StreamResult_msg
#define krpc_schema_Services_fields &krpc_schema_Services_msg
#define krpc_schema_Service_fields &krpc_schema_Service_msg
#define krpc_schema_Procedure_fields &krpc_schema_Procedure_msg
#define krpc_schema_Parameter_fields &krpc_schema_Parameter_msg
#define krpc_schema_Class_fields &krpc_schema_Class_msg
#define krpc_schema_Enumeration_fields &krpc_schema_Enumeration_msg
#define krpc_schema_EnumerationValue_fields &krpc_schema_EnumerationValue_msg
#define krpc_schema_Exception_fields &krpc_schema_Exception_msg
#define krpc_schema_Type_fields &krpc_schema_Type_msg
#define krpc_schema_Tuple_fields &krpc_schema_Tuple_msg
#define krpc_schema_List_fields &krpc_schema_List_msg
#define krpc_schema_Set_fields &krpc_schema_Set_msg
#define krpc_schema_Dictionary_fields &krpc_schema_Dictionary_msg
#define krpc_schema_DictionaryEntry_fields &krpc_schema_DictionaryEntry_msg
#define krpc_schema_Stream_fields &krpc_schema_Stream_msg
#define krpc_schema_Event_fields &krpc_schema_Event_msg
#define krpc_schema_Status_fields &krpc_schema_Status_msg
#define krpc_schema_MultiplexedRequest_fields &krpc_schema_MultiplexedRequest_msg
#define krpc_schema_MultiplexedResponse_fields &krpc_schema_MultiplexedResponse_msg

/* Maximum encoded size of messages (where known) */
/* krpc_schema_ConnectionRequest_size depends on runtime parameters */
/* krpc_schema_ConnectionResponse_size depends on runtime parameters */
/* krpc_schema_Request_size depends on runtime parameters */
/* krpc_schema_ProcedureCall_size depends on runtime parameters */
/* krpc_schema_Argument_size depends on runtime parameters */
/* krpc_schema_Response_size depends on runtime parameters */
/* krpc_schema_ProcedureResult_size depends on runtime parameters */
/* krpc_schema_Error_size depends on runtime parameters */
/* krpc_schema_StreamUpdate_size depends on runtime parameters */
/* krpc_schema_StreamResult_size depends on runtime parameters */
/* krpc_schema_Services_size depends on runtime parameters */
/* krpc_schema_Service_size depends on runtime parameters */
/* krpc_schema_Procedure_size depends on runtime parameters */
/* krpc_schema_Parameter_size depends on runtime parameters */
/* krpc_schema_Class_size depends on runtime parameters */
/* krpc_schema_Enumeration_size depends on runtime parameters */
/* krpc_schema_EnumerationValue_size depends on runtime parameters */
/* krpc_schema_Exception_size depends on runtime parameters */
/* krpc_schema_Type_size depends on runtime parameters */
/* krpc_schema_Tuple_size depends on runtime parameters */
/* krpc_schema_List_size depends on runtime parameters */
/* krpc_schema_Set_size depends on runtime parameters */
/* krpc_schema_Dictionary_size depends on runtime parameters */
/* krpc_schema_DictionaryEntry_size depends on runtime parameters */
/* krpc_schema_MultiplexedRequest_size depends on runtime parameters */
/* krpc_schema_MultiplexedResponse_size depends on runtime parameters */
#define krpc_schema_Event_size                   13
#define krpc_schema_Status_size                  129
#define krpc_schema_Stream_size                  11

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
