#pragma once

#include <krpc/decoder.h>
#include <krpc/encoder.h>
#include <krpc/error.h>
#include <krpc/memory.h>
#include <krpc/types.h>
#include <pb_decode.h>
#include <pb_encode.h>

#include <krpc.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * A server side expression.
 */
typedef krpc_object_t krpc_KRPC_Expression_t;

#ifndef KRPC_TYPE_TUPLE_BYTES_STRING_STRING
#define KRPC_TYPE_TUPLE_BYTES_STRING_STRING

typedef struct krpc_tuple_bytes_string_string_s krpc_tuple_bytes_string_string_t;
struct krpc_tuple_bytes_string_string_s {
  krpc_bytes_t e0;
  char * e1;
  char * e2;
};

krpc_error_t krpc_encode_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_tuple_bytes_string_string_t * value);
krpc_error_t krpc_encode_size_tuple_bytes_string_string(
  size_t * size, const krpc_tuple_bytes_string_string_t * value);
bool krpc_encode_callback_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_tuple_bytes_string_string_t * value);

#endif  // KRPC_TYPE_TUPLE_BYTES_STRING_STRING

#ifndef KRPC_TYPE_LIST_TUPLE_BYTES_STRING_STRING
#define KRPC_TYPE_LIST_TUPLE_BYTES_STRING_STRING

typedef struct krpc_list_tuple_bytes_string_string_s krpc_list_tuple_bytes_string_string_t;
struct krpc_list_tuple_bytes_string_string_s {
  size_t size;
  krpc_tuple_bytes_string_string_t * items;
};

krpc_error_t krpc_encode_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_list_tuple_bytes_string_string_t * value);
krpc_error_t krpc_encode_size_list_tuple_bytes_string_string(
  size_t * size, const krpc_list_tuple_bytes_string_string_t * value);
bool krpc_encode_callback_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_list_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_list_tuple_bytes_string_string_t * value);

#endif  // KRPC_TYPE_LIST_TUPLE_BYTES_STRING_STRING

/**
 * The game scene. See KRPC::current_game_scene.
 */
typedef enum {
  /**
   * The game scene showing the Kerbal Space Center buildings.
   */
  KRPC_KRPC_GAMESCENE_SPACECENTER = 0,
  /**
   * The game scene showing a vessel in flight (or on the launchpad/runway).
   */
  KRPC_KRPC_GAMESCENE_FLIGHT = 1,
  /**
   * The tracking station.
   */
  KRPC_KRPC_GAMESCENE_TRACKINGSTATION = 2,
  /**
   * The Vehicle Assembly Building.
   */
  KRPC_KRPC_GAMESCENE_EDITORVAB = 3,
  /**
   * The Space Plane Hangar.
   */
  KRPC_KRPC_GAMESCENE_EDITORSPH = 4
} krpc_KRPC_GameScene_t;

/**
 * Create an event from a server side expression.
 */
krpc_error_t krpc_KRPC_AddEvent(krpc_connection_t connection, krpc_schema_Event * returnValue, krpc_KRPC_Expression_t expression);

/**
 * Add a streaming request and return its identifier.
 */
krpc_error_t krpc_KRPC_AddStream(krpc_connection_t connection, krpc_schema_Stream * returnValue, const krpc_schema_ProcedureCall * call, bool start);

/**
 * Returns the identifier for the current client.
 */
krpc_error_t krpc_KRPC_GetClientID(krpc_connection_t connection, krpc_bytes_t * returnValue);

/**
 * Returns the name of the current client.
 * This is an empty string if the client has no name.
 */
krpc_error_t krpc_KRPC_GetClientName(krpc_connection_t connection, char * * returnValue);

/**
 * Returns information on all services, procedures, classes, properties etc. provided by the server.
 * Can be used by client libraries to automatically create functionality such as stubs.
 */
krpc_error_t krpc_KRPC_GetServices(krpc_connection_t connection, krpc_schema_Services * returnValue);

/**
 * Returns some information about the server, such as the version.
 */
krpc_error_t krpc_KRPC_GetStatus(krpc_connection_t connection, krpc_schema_Status * returnValue);

/**
 * Remove a streaming request.
 */
krpc_error_t krpc_KRPC_RemoveStream(krpc_connection_t connection, uint64_t id);

/**
 * Start a previously added streaming request.
 */
krpc_error_t krpc_KRPC_StartStream(krpc_connection_t connection, uint64_t id);

/**
 * Whether the game is paused.
 */
krpc_error_t krpc_KRPC_Paused(krpc_connection_t connection, bool * returnValue);

/**
 * A list of RPC clients that are currently connected to the server.
 * Each entry in the list is a clients identifier, name and address.
 */
krpc_error_t krpc_KRPC_Clients(krpc_connection_t connection, krpc_list_tuple_bytes_string_string_t * returnValue);

/**
 * Whether the game is paused.
 */
krpc_error_t krpc_KRPC_set_Paused(krpc_connection_t connection, bool value);

/**
 * Get the current game scene.
 */
krpc_error_t krpc_KRPC_CurrentGameScene(krpc_connection_t connection, krpc_KRPC_GameScene_t * returnValue);

/**
 * Numerical addition.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Add(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Boolean and operator.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_And(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * An RPC call.
 * @param call
 */
krpc_error_t krpc_KRPC_Expression_Call(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_schema_ProcedureCall * call);

/**
 * A constant value of type double.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantDouble(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, double value);

/**
 * A constant value of type float.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantFloat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, float value);

/**
 * A constant value of type int.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantInt(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, int32_t value);

/**
 * A constant value of type string.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantString(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const char * value);

/**
 * Numerical division.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Divide(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Equality comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Equal(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Boolean exclusive-or operator.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_ExclusiveOr(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Greater than numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_GreaterThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Greater than or equal numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_GreaterThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Bitwise left shift.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_LeftShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Less than numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_LessThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Less than or equal numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_LessThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Numerical modulo operator.
 * @param arg0
 * @param arg1
 * @return The remainder of arg0 divided by arg1
 */
krpc_error_t krpc_KRPC_Expression_Modulo(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Numerical multiplication.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Multiply(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Boolean negation operator.
 * @param arg
 */
krpc_error_t krpc_KRPC_Expression_Not(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Inequality comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_NotEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Boolean or operator.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Or(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Numerical power operator.
 * @param arg0
 * @param arg1
 * @return arg0 raised to the power of arg1
 */
krpc_error_t krpc_KRPC_Expression_Power(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Bitwise right shift.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_RightShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Numerical subtraction.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Subtract(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Convert to a double type.
 * @param arg
 */
krpc_error_t krpc_KRPC_Expression_ToDouble(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Convert to a float type.
 * @param arg
 */
krpc_error_t krpc_KRPC_Expression_ToFloat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Convert to an int type.
 * @param arg
 */
krpc_error_t krpc_KRPC_Expression_ToInt(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

// Implementation

#ifndef KRPC_IMPL_TYPE_TUPLE_BYTES_STRING_STRING
#define KRPC_IMPL_TYPE_TUPLE_BYTES_STRING_STRING

static bool krpc_encode_callback_items_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_tuple_bytes_string_string_t * value = (const krpc_tuple_bytes_string_string_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_bytes(&size, value->e0));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_bytes(stream, value->e0));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_string(&size, value->e1));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_string(stream, value->e1));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_string(&size, value->e2));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_string(stream, value->e2));
  }
  return true;
}

inline krpc_error_t krpc_encode_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_tuple_bytes_string_string_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_bytes_string_string;
  message.items.arg = (krpc_tuple_bytes_string_string_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_tuple_bytes_string_string(
  size_t * size, const krpc_tuple_bytes_string_string_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_bytes_string_string(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple_bytes_string_string");
  krpc_tuple_bytes_string_string_t * value = (krpc_tuple_bytes_string_string_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_bytes_string_string(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple_bytes_string_string");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_bytes_string_string(stream, value));
  return true;
}

static bool krpc_decode_callback_item_tuple_bytes_string_string(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct {size_t pos; krpc_tuple_bytes_string_string_t * value;} State;
  State * state = (State*)(*arg);
  krpc_tuple_bytes_string_string_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_bytes(stream, &value->e0));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_string(stream, &value->e1));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_string(stream, &value->e2));
    break;
  default:
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
  }
  state->pos++;
  return true;
}

inline krpc_error_t krpc_decode_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_tuple_bytes_string_string_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_bytes_string_string;
  typedef struct { size_t pos; krpc_tuple_bytes_string_string_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_BYTES_STRING_STRING

#ifndef KRPC_IMPL_TYPE_LIST_TUPLE_BYTES_STRING_STRING
#define KRPC_IMPL_TYPE_LIST_TUPLE_BYTES_STRING_STRING

static bool krpc_encode_callback_items_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_tuple_bytes_string_string_t * value = (const krpc_list_tuple_bytes_string_string_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_bytes_string_string(&size, &value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_bytes_string_string(stream, &value->items[i]));
  }
  return true;
}

inline krpc_error_t krpc_encode_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_list_tuple_bytes_string_string_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_tuple_bytes_string_string;
  message.items.arg = (krpc_list_tuple_bytes_string_string_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_list_tuple_bytes_string_string(
  size_t * size, const krpc_list_tuple_bytes_string_string_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_tuple_bytes_string_string(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_tuple_bytes_string_string");
  krpc_list_tuple_bytes_string_string_t * value = (krpc_list_tuple_bytes_string_string_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_tuple_bytes_string_string(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_tuple_bytes_string_string");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_tuple_bytes_string_string(stream, value));
  return true;
}

static bool krpc_decode_callback_item_list_tuple_bytes_string_string(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_list_tuple_bytes_string_string_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_tuple_bytes_string_string_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_bytes_string_string_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_tuple_bytes_string_string(stream, &state->value->items[i]));
  return true;
}

inline krpc_error_t krpc_decode_list_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_list_tuple_bytes_string_string_t * value) {
  typedef struct { size_t capacity; krpc_list_tuple_bytes_string_string_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_tuple_bytes_string_string_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_bytes_string_string_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_tuple_bytes_string_string;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_TUPLE_BYTES_STRING_STRING

inline krpc_error_t krpc_KRPC_AddEvent(krpc_connection_t connection, krpc_schema_Event * returnValue, krpc_KRPC_Expression_t expression) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "AddEvent", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &expression));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Event(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_AddStream(krpc_connection_t connection, krpc_schema_Stream * returnValue, const krpc_schema_ProcedureCall * call, bool start) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "AddStream", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_message_ProcedureCall, call));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &start));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Stream(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_GetClientID(krpc_connection_t connection, krpc_bytes_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "GetClientID", 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_bytes(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_GetClientName(krpc_connection_t connection, char * * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "GetClientName", 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_string(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_GetServices(krpc_connection_t connection, krpc_schema_Services * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "GetServices", 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Services(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_GetStatus(krpc_connection_t connection, krpc_schema_Status * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "GetStatus", 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Status(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_RemoveStream(krpc_connection_t connection, uint64_t id) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "RemoveStream", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &id));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_StartStream(krpc_connection_t connection, uint64_t id) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "StartStream", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &id));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Paused(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "get_Paused", 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_bool(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Clients(krpc_connection_t connection, krpc_list_tuple_bytes_string_string_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "get_Clients", 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_tuple_bytes_string_string(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_set_Paused(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "set_Paused", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_CurrentGameScene(krpc_connection_t connection, krpc_KRPC_GameScene_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "get_CurrentGameScene", 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_enum(&_stream, (int*)returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Add(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Add", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_And(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_And", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Call(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_schema_ProcedureCall * call) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Call", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_message_ProcedureCall, call));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ConstantDouble(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ConstantDouble", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ConstantFloat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ConstantFloat", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ConstantInt(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ConstantInt", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ConstantString(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ConstantString", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Divide(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Divide", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Equal(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Equal", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ExclusiveOr(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ExclusiveOr", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_GreaterThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_GreaterThan", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_GreaterThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_GreaterThanOrEqual", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_LeftShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_LeftShift", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_LessThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_LessThan", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_LessThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_LessThanOrEqual", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Modulo(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Modulo", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Multiply(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Multiply", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Not(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Not", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_NotEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_NotEqual", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Or(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Or", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Power(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Power", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_RightShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_RightShift", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Subtract(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_Subtract", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ToDouble(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ToDouble", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ToFloat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ToFloat", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_ToInt(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "KRPC", "Expression_static_ToInt", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

#ifdef __cplusplus
}  // extern "C"
#endif
