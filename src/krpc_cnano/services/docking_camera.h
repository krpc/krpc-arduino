#pragma once

#include <string.h>

#include <krpc_cnano/decoder.h>
#include <krpc_cnano/deprecated.h>
#include <krpc_cnano/encoder.h>
#include <krpc_cnano/error.h>
#include <krpc_cnano/memory.h>
#include <krpc_cnano/pb_decode.h>
#include <krpc_cnano/pb_encode.h>
#include <krpc_cnano/types.h>

#include <krpc_cnano/services/space_center.h>
#include <krpc_cnano/services/std_lib.h>

#ifdef __cplusplus
extern "C" {
#endif

KRPC_DEPRECATED_USES_BEGIN

/**
 * A camera from Docking Camera (KURS), on an onboard camera part or a docking port.
 */
typedef krpc_object_t krpc_DockingCamera_Camera_t;

#define KRPC_CLASS_DOCKINGCAMERA_CAMERA 11u, 223037699u

/**
 * Get the camera on a part.
 * Throws an exception if the part is not an onboard camera or a docking port.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param part The part.
 */
static inline krpc_error_t krpc_DockingCamera_Camera(krpc_connection_t connection, krpc_DockingCamera_Camera_t * returnValue, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call krpc_DockingCamera_Camera() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Camera_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call template of krpc_DockingCamera_Camera(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Camera_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Docking Camera (KURS) is available.
 */
static inline krpc_error_t krpc_DockingCamera_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_DockingCamera_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_DockingCamera_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The image from the camera, 256 by 256 pixels.
 * Throws an exception if the camera is off or not started.
 * @param connection A connection object.
 * @param returnValue The image data.
 *
 * The camera is switched on by setting the `IsEnabled` field of its
 * `PartCameraModule` or `DockingCameraModule` to `true`, which also opens
 * the camera window.
 * @param instance The object to call the method on.
 * @param format The format of the image.
 * @param quality The quality of a JPEG image, from 1 to 100.
 */
static inline krpc_error_t krpc_DockingCamera_Camera_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_DockingCamera_Camera_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call krpc_DockingCamera_Camera_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Camera_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_DockingCamera_Camera_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call template of krpc_DockingCamera_Camera_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Camera_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Get the part containing this camera.
 */
static inline krpc_error_t krpc_DockingCamera_Camera_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_DockingCamera_Camera_t instance);

/**
 * Fills in the call krpc_DockingCamera_Camera_Part() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Camera_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_DockingCamera_Camera_t instance);

/**
 * Fills in the call template of krpc_DockingCamera_Camera_Part(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_DockingCamera_Camera_Part_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

static inline krpc_error_t krpc_DockingCamera_Camera(krpc_connection_t connection, krpc_DockingCamera_Camera_t * returnValue, krpc_SpaceCenter_Part_t part) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 11, 223037699, 1, _arguments));
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

static inline krpc_error_t krpc_DockingCamera_Camera_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 11, 223037699, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &part));
  return KRPC_OK;
}

static inline krpc_error_t krpc_DockingCamera_Camera_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 11, 223037699, 0);
}

static inline krpc_error_t krpc_DockingCamera_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 11, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_DockingCamera_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 11, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_DockingCamera_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 11, 265274134, 0);
}

static inline krpc_error_t krpc_DockingCamera_Camera_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_DockingCamera_Camera_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 11, 3686257349, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_int32, &quality));
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

static inline krpc_error_t krpc_DockingCamera_Camera_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_DockingCamera_Camera_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 11, 3686257349, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_int32, &quality));
  return KRPC_OK;
}

static inline krpc_error_t krpc_DockingCamera_Camera_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 11, 3686257349, 0);
}

static inline krpc_error_t krpc_DockingCamera_Camera_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_DockingCamera_Camera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 11, 1368821971, 1, _arguments));
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

static inline krpc_error_t krpc_DockingCamera_Camera_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_DockingCamera_Camera_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 11, 1368821971, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_DockingCamera_Camera_Part_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 11, 1368821971, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
