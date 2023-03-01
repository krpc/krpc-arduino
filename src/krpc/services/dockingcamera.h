#pragma once

#include <krpc/decoder.h>
#include <krpc/encoder.h>
#include <krpc/error.h>
#include <krpc/memory.h>
#include <krpc/pb_decode.h>
#include <krpc/pb_encode.h>
#include <krpc/types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * A Docking Camera.
 */
typedef krpc_object_t krpc_DockingCamera_Camera_t;

/**
 * Get a Camera part
 */
krpc_error_t krpc_DockingCamera_Camera(krpc_connection_t connection, krpc_DockingCamera_Camera_t * returnValue, krpc_SpaceCenter_Part_t part);

/**
 * Check if the Camera API is avaiable
 */
krpc_error_t krpc_DockingCamera_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Get an image.
 * Returns an empty byte array on failure.
 */
krpc_error_t krpc_DockingCamera_Camera_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_DockingCamera_Camera_t instance);

/**
 * Get the part containing this camera.
 */
krpc_error_t krpc_DockingCamera_Camera_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_DockingCamera_Camera_t instance);

// Implementation

inline krpc_error_t krpc_DockingCamera_Camera(krpc_connection_t connection, krpc_DockingCamera_Camera_t * returnValue, krpc_SpaceCenter_Part_t part) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 11, 1, 1, _arguments));
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

inline krpc_error_t krpc_DockingCamera_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 11, 2, 0, _arguments));
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

inline krpc_error_t krpc_DockingCamera_Camera_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_DockingCamera_Camera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 11, 4, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_DockingCamera_Camera_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_DockingCamera_Camera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 11, 3, 1, _arguments));
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
