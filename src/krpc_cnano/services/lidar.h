#pragma once

#include <krpc_cnano/decoder.h>
#include <krpc_cnano/encoder.h>
#include <krpc_cnano/error.h>
#include <krpc_cnano/memory.h>
#include <krpc_cnano/pb_decode.h>
#include <krpc_cnano/pb_encode.h>
#include <krpc_cnano/types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * A LaserDist laser.
 */
typedef krpc_object_t krpc_LiDAR_Laser_t;

#ifndef KRPC_TYPE_LIST_DOUBLE
#define KRPC_TYPE_LIST_DOUBLE

typedef struct krpc_list_double_s krpc_list_double_t;
struct krpc_list_double_s {
  size_t size;
  double * items;
};

krpc_error_t krpc_encode_list_double(
  pb_ostream_t * stream, const krpc_list_double_t * value);
krpc_error_t krpc_encode_size_list_double(
  size_t * size, const krpc_list_double_t * value);
bool krpc_encode_callback_list_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_list_double(
  pb_istream_t * stream, krpc_list_double_t * value);

#endif  // KRPC_TYPE_LIST_DOUBLE

/**
 * Get a LaserDist part.
 */
krpc_error_t krpc_LiDAR_Laser(krpc_connection_t connection, krpc_LiDAR_Laser_t * returnValue, krpc_SpaceCenter_Part_t part);

/**
 * Check if the LaserDist API is available.
 */
krpc_error_t krpc_LiDAR_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Get the point cloud from the LiDAR.
 * Returns an empty list on failure.
 */
krpc_error_t krpc_LiDAR_Laser_Cloud(krpc_connection_t connection, krpc_list_double_t * returnValue, krpc_LiDAR_Laser_t instance);

/**
 * Get the part containing this LiDAR.
 */
krpc_error_t krpc_LiDAR_Laser_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_LiDAR_Laser_t instance);

// Implementation

#ifndef KRPC_IMPL_TYPE_LIST_DOUBLE
#define KRPC_IMPL_TYPE_LIST_DOUBLE

static bool krpc_encode_callback_items_list_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_double_t * value = (const krpc_list_double_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->items[i]));
  }
  return true;
}

inline krpc_error_t krpc_encode_list_double(
  pb_ostream_t * stream, const krpc_list_double_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_double;
  message.items.arg = (krpc_list_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_list_double(
  size_t * size, const krpc_list_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_list_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_double");
  krpc_list_double_t * value = (krpc_list_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_double(stream, value));
  return true;
}

static bool krpc_decode_callback_item_list_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_list_double_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (double*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(double));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &state->value->items[i]));
  return true;
}

inline krpc_error_t krpc_decode_list_double(
  pb_istream_t * stream, krpc_list_double_t * value) {
  typedef struct { size_t capacity; krpc_list_double_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (double*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(double));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_double;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_DOUBLE

inline krpc_error_t krpc_LiDAR_Laser(krpc_connection_t connection, krpc_LiDAR_Laser_t * returnValue, krpc_SpaceCenter_Part_t part) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 10, 1, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &part));
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

inline krpc_error_t krpc_LiDAR_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 10, 2, 0, _arguments));
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

inline krpc_error_t krpc_LiDAR_Laser_Cloud(krpc_connection_t connection, krpc_list_double_t * returnValue, krpc_LiDAR_Laser_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 10, 4, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_LiDAR_Laser_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_LiDAR_Laser_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 10, 3, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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
