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

#ifdef __cplusplus
extern "C" {
#endif

KRPC_DEPRECATED_USES_BEGIN

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_double_s krpc_tuple_double_double_double_t;
struct krpc_tuple_double_double_double_s {
  double e0;
  double e1;
  double e2;
};

static inline krpc_error_t krpc_encode_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_t * value);
static inline krpc_error_t krpc_encode_size_tuple_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_t * value);
static inline bool krpc_encode_callback_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_tuple_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_t * value);

#endif  // KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_TYPE_STDLIB_AXISANGLE
#define KRPC_TYPE_STDLIB_AXISANGLE

typedef struct krpc_StdLib_AxisAngle_s krpc_StdLib_AxisAngle_t;
struct krpc_StdLib_AxisAngle_s {
  krpc_tuple_double_double_double_t axis;
  double angle;
};

static inline krpc_error_t krpc_encode_StdLib_AxisAngle(
  pb_ostream_t * stream, const krpc_StdLib_AxisAngle_t * value);
static inline krpc_error_t krpc_encode_size_StdLib_AxisAngle(
  size_t * size, const krpc_StdLib_AxisAngle_t * value);
static inline bool krpc_encode_callback_StdLib_AxisAngle(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_StdLib_AxisAngle(
  pb_istream_t * stream, krpc_StdLib_AxisAngle_t * value);

#endif  // KRPC_TYPE_STDLIB_AXISANGLE

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_double_double_s krpc_tuple_double_double_double_double_t;
struct krpc_tuple_double_double_double_double_s {
  double e0;
  double e1;
  double e2;
  double e3;
};

static inline krpc_error_t krpc_encode_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_double_t * value);
static inline krpc_error_t krpc_encode_size_tuple_double_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_double_t * value);
static inline bool krpc_encode_callback_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_double_t * value);

#endif  // KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

/**
 * The file format of an image.
 */
typedef enum {
  /**
   * PNG, which is lossless.
   */
  KRPC_STDLIB_IMAGEFORMAT_PNG = 0,
  /**
   * JPEG, which is lossy, and smaller and faster to encode than PNG.
   */
  KRPC_STDLIB_IMAGEFORMAT_JPEG = 1
} krpc_StdLib_ImageFormat_t;

#define KRPC_ENUMERATION_STDLIB_IMAGEFORMAT 8u, 1111666084u
#define KRPC_STRUCT_STDLIB_AXISANGLE 8u, 3768253485u
#define KRPC_FIELD_STDLIB_AXISANGLE_AXIS 0
#define KRPC_FIELD_STDLIB_AXISANGLE_ANGLE 1
#define KRPC_STRUCT_STDLIB_COLORRGB 8u, 2066726691u
#define KRPC_FIELD_STDLIB_COLORRGB_R 0
#define KRPC_FIELD_STDLIB_COLORRGB_G 1
#define KRPC_FIELD_STDLIB_COLORRGB_B 2
#define KRPC_STRUCT_STDLIB_COLORRGBA 8u, 399987047u
#define KRPC_FIELD_STDLIB_COLORRGBA_R 0
#define KRPC_FIELD_STDLIB_COLORRGBA_G 1
#define KRPC_FIELD_STDLIB_COLORRGBA_B 2
#define KRPC_FIELD_STDLIB_COLORRGBA_A 3

/**
 * The absolute value of a number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Abs(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Abs() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Abs_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Abs(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Abs_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle, in radians, whose cosine is the given number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Acos(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Acos() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Acos_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Acos(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Acos_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle, in radians, whose sine is the given number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Asin(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Asin() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Asin_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Asin(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Asin_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle, in radians, whose tangent is the given number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Atan(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Atan() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Atan_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Atan(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Atan_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle, in radians, between the positive x axis and the point `(x, y)`.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param y The y coordinate.
 * @param x The x coordinate.
 */
static inline krpc_error_t krpc_StdLib_Atan2(krpc_connection_t connection, double * returnValue, double y, double x);

/**
 * Fills in the call krpc_StdLib_Atan2() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Atan2_call(krpc_schema_ProcedureCall * procedureCall, double y, double x);

/**
 * Fills in the call template of krpc_StdLib_Atan2(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Atan2_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The smallest whole number greater than or equal to the given number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Ceiling(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Ceiling() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Ceiling_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Ceiling(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Ceiling_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The given number limited to the given range.
 *
 * Throws an exception if the minimum is greater than the maximum.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 * @param min The minimum of the range.
 * @param max The maximum of the range.
 */
static inline krpc_error_t krpc_StdLib_Clamp(krpc_connection_t connection, double * returnValue, double x, double min, double max);

/**
 * Fills in the call krpc_StdLib_Clamp() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Clamp_call(krpc_schema_ProcedureCall * procedureCall, double x, double min, double max);

/**
 * Fills in the call template of krpc_StdLib_Clamp(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Clamp_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The magnitude of the first number with the sign of the second.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number giving the magnitude.
 * @param y The number giving the sign.
 */
static inline krpc_error_t krpc_StdLib_CopySign(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * Fills in the call krpc_StdLib_CopySign() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_CopySign_call(krpc_schema_ProcedureCall * procedureCall, double x, double y);

/**
 * Fills in the call template of krpc_StdLib_CopySign(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_CopySign_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The cosine of an angle, in radians.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The angle.
 */
static inline krpc_error_t krpc_StdLib_Cos(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Cos() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Cos_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Cos(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Cos_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle in radians of an angle in degrees.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The angle in degrees.
 */
static inline krpc_error_t krpc_StdLib_DegreesToRadians(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_DegreesToRadians() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_DegreesToRadians_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_DegreesToRadians(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_DegreesToRadians_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number e raised to the given power.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The power.
 */
static inline krpc_error_t krpc_StdLib_Exp(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Exp() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Exp_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Exp(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Exp_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The largest whole number less than or equal to the given number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Floor(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Floor() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Floor_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Floor(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Floor_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The length of the hypotenuse of a right triangle with the given sides.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The first side.
 * @param y The second side.
 */
static inline krpc_error_t krpc_StdLib_Hypot(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * Fills in the call krpc_StdLib_Hypot() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Hypot_call(krpc_schema_ProcedureCall * procedureCall, double x, double y);

/**
 * Fills in the call template of krpc_StdLib_Hypot(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Hypot_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The interpolation parameter of a number between two others,
 * limited to the range 0 to 1.
 *
 * Returns 0 if the two numbers are equal.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param a The number at 0.
 * @param b The number at 1.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_InverseLerp(krpc_connection_t connection, double * returnValue, double a, double b, double x);

/**
 * Fills in the call krpc_StdLib_InverseLerp() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_InverseLerp_call(krpc_schema_ProcedureCall * procedureCall, double a, double b, double x);

/**
 * Fills in the call template of krpc_StdLib_InverseLerp(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_InverseLerp_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether a number is neither infinite nor not a number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_IsFinite(krpc_connection_t connection, bool * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_IsFinite() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_IsFinite_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_IsFinite(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_IsFinite_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether a number is not a number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_IsNan(krpc_connection_t connection, bool * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_IsNan() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_IsNan_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_IsNan(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_IsNan_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Linear interpolation between two numbers.
 *
 * The parameter is not limited to the range 0 to 1, and a value outside it
 * extrapolates.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param a The number when t is 0.
 * @param b The number when t is 1.
 * @param t The interpolation parameter.
 */
static inline krpc_error_t krpc_StdLib_Lerp(krpc_connection_t connection, double * returnValue, double a, double b, double t);

/**
 * Fills in the call krpc_StdLib_Lerp() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Lerp_call(krpc_schema_ProcedureCall * procedureCall, double a, double b, double t);

/**
 * Fills in the call template of krpc_StdLib_Lerp(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Lerp_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The logarithm of a number, natural unless another base is given.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 * @param newBase The base of the logarithm.
 */
static inline krpc_error_t krpc_StdLib_Log(krpc_connection_t connection, double * returnValue, double x, double newBase);

/**
 * Fills in the call krpc_StdLib_Log() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Log_call(krpc_schema_ProcedureCall * procedureCall, double x, double newBase);

/**
 * Fills in the call template of krpc_StdLib_Log(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Log_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The base 10 logarithm of a number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Log10(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Log10() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Log10_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Log10(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Log10_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The larger of two numbers.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The first number.
 * @param y The second number.
 */
static inline krpc_error_t krpc_StdLib_Max(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * Fills in the call krpc_StdLib_Max() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Max_call(krpc_schema_ProcedureCall * procedureCall, double x, double y);

/**
 * Fills in the call template of krpc_StdLib_Max(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Max_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The smaller of two numbers.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The first number.
 * @param y The second number.
 */
static inline krpc_error_t krpc_StdLib_Min(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * Fills in the call krpc_StdLib_Min() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Min_call(krpc_schema_ProcedureCall * procedureCall, double x, double y);

/**
 * Fills in the call template of krpc_StdLib_Min(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Min_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Writes a message to the game's log, for debugging.
 *
 * A function evaluated by a stream or an event prints on every update. The message is
 * written at the Info level, so a server log level of Warning or Error hides it.
 * @param connection A connection object.
 * @param message The message.
 */
static inline krpc_error_t krpc_StdLib_Print(krpc_connection_t connection, const char * message);

/**
 * Fills in the call krpc_StdLib_Print() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Print_call(krpc_schema_ProcedureCall * procedureCall, const char * message);

/**
 * Fills in the call template of krpc_StdLib_Print(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Print_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle of the rotation that takes one rotation to another,
 * in radians, between 0 and π.
 *
 * Throws an exception if either quaternion is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param q The first rotation.
 * @param r The second rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r);

/**
 * Fills in the call krpc_StdLib_QuaternionAngle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r);

/**
 * Fills in the call template of krpc_StdLib_QuaternionAngle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionAngle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rotation about an axis by an angle.
 *
 * Throws an exception if the axis is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param axis The axis of rotation.
 * @param angle The angle of rotation, in radians.
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * axis, double angle);

/**
 * Fills in the call krpc_StdLib_QuaternionFromAxisAngle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * axis, double angle);

/**
 * Fills in the call template of krpc_StdLib_QuaternionFromAxisAngle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The shortest rotation that takes one direction onto another.
 *
 * Opposite directions give a half turn about an arbitrary perpendicular axis.
 * Throws an exception if either vector is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The direction to rotate from.
 * @param v The direction to rotate to.
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_QuaternionFromToRotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_QuaternionFromToRotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The inverse of a rotation.
 *
 * Throws an exception if the quaternion is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param q The rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionInverse(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q);

/**
 * Fills in the call krpc_StdLib_QuaternionInverse() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionInverse_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q);

/**
 * Fills in the call template of krpc_StdLib_QuaternionInverse(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionInverse_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rotation that takes the z axis onto a forward direction, and the y axis
 * toward an up direction.
 *
 * The up direction need not be perpendicular to the forward direction. Throws an
 * exception if either vector is zero, or if they are parallel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param forward The direction of the z axis.
 * @param up The direction the y axis points toward.
 */
static inline krpc_error_t krpc_StdLib_QuaternionLookRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * forward, const krpc_tuple_double_double_double_t * up);

/**
 * Fills in the call krpc_StdLib_QuaternionLookRotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionLookRotation_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * forward, const krpc_tuple_double_double_double_t * up);

/**
 * Fills in the call template of krpc_StdLib_QuaternionLookRotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionLookRotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The composition of two rotations: the rotation r followed by the
 * rotation q.
 *
 * Throws an exception if either quaternion is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param q The second rotation.
 * @param r The first rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionMultiply(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r);

/**
 * Fills in the call krpc_StdLib_QuaternionMultiply() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionMultiply_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r);

/**
 * Fills in the call template of krpc_StdLib_QuaternionMultiply(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionMultiply_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A vector rotated by a rotation.
 *
 * Throws an exception if the quaternion is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param q The rotation.
 * @param v The vector.
 */
static inline krpc_error_t krpc_StdLib_QuaternionRotateVector(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_QuaternionRotateVector() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionRotateVector_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_QuaternionRotateVector(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionRotateVector_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Spherical linear interpolation between two rotations.
 *
 * The parameter is not limited to the range 0 to 1, and a value outside it
 * extrapolates. Throws an exception if either quaternion is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param q The rotation when t is 0.
 * @param r The rotation when t is 1.
 * @param t The interpolation parameter.
 */
static inline krpc_error_t krpc_StdLib_QuaternionSlerp(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r, double t);

/**
 * Fills in the call krpc_StdLib_QuaternionSlerp() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionSlerp_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r, double t);

/**
 * Fills in the call template of krpc_StdLib_QuaternionSlerp(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionSlerp_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The axis and angle of a rotation.
 *
 * Throws an exception if the quaternion is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param q The rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle(krpc_connection_t connection, krpc_StdLib_AxisAngle_t * returnValue, const krpc_tuple_double_double_double_double_t * q);

/**
 * Fills in the call krpc_StdLib_QuaternionToAxisAngle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q);

/**
 * Fills in the call template of krpc_StdLib_QuaternionToAxisAngle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle in degrees of an angle in radians.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The angle in radians.
 */
static inline krpc_error_t krpc_StdLib_RadiansToDegrees(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_RadiansToDegrees() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_RadiansToDegrees_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_RadiansToDegrees(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_RadiansToDegrees_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The given number rounded to the given number of decimal places,
 * with a halfway value rounded to the nearer even number.
 *
 * Throws an exception if the rounded value is too large for a double.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 * @param digits The number of decimal places to round to.
 * Negative to round to tens, hundreds and beyond.
 */
static inline krpc_error_t krpc_StdLib_Round(krpc_connection_t connection, double * returnValue, double x, int32_t digits);

/**
 * Fills in the call krpc_StdLib_Round() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Round_call(krpc_schema_ProcedureCall * procedureCall, double x, int32_t digits);

/**
 * Fills in the call template of krpc_StdLib_Round(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Round_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The given number rounded to the given number of decimal places,
 * with a halfway value rounded away from zero.
 *
 * Throws an exception if the rounded value is too large for a double.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 * @param digits The number of decimal places to round to.
 * Negative to round to tens, hundreds and beyond.
 */
static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero(krpc_connection_t connection, double * returnValue, double x, int32_t digits);

/**
 * Fills in the call krpc_StdLib_RoundHalfAwayFromZero() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero_call(krpc_schema_ProcedureCall * procedureCall, double x, int32_t digits);

/**
 * Fills in the call template of krpc_StdLib_RoundHalfAwayFromZero(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The given number rounded to the given number of decimal places,
 * with a halfway value rounded toward positive infinity.
 *
 * Throws an exception if the rounded value is too large for a double.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 * @param digits The number of decimal places to round to.
 * Negative to round to tens, hundreds and beyond.
 */
static inline krpc_error_t krpc_StdLib_RoundHalfUp(krpc_connection_t connection, double * returnValue, double x, int32_t digits);

/**
 * Fills in the call krpc_StdLib_RoundHalfUp() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_RoundHalfUp_call(krpc_schema_ProcedureCall * procedureCall, double x, int32_t digits);

/**
 * Fills in the call template of krpc_StdLib_RoundHalfUp(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_RoundHalfUp_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The sign of a number: -1 if it is negative, 1 if it is positive,
 * and 0 if it is zero or not a number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Sign(krpc_connection_t connection, int32_t * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Sign() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Sign_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Sign(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Sign_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The sine of an angle, in radians.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The angle.
 */
static inline krpc_error_t krpc_StdLib_Sin(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Sin() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Sin_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Sin(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Sin_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The square root of a number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Sqrt(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Sqrt() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Sqrt_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Sqrt(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Sqrt_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The tangent of an angle, in radians.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param x The angle.
 */
static inline krpc_error_t krpc_StdLib_Tan(krpc_connection_t connection, double * returnValue, double x);

/**
 * Fills in the call krpc_StdLib_Tan() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Tan_call(krpc_schema_ProcedureCall * procedureCall, double x);

/**
 * Fills in the call template of krpc_StdLib_Tan(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Tan_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The sum of two vectors.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorAdd(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorAdd() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorAdd_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorAdd(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorAdd_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle between two vectors, in radians, between 0 and π.
 *
 * Throws an exception if either vector is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorAngle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorAngle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorAngle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The cross product of two vectors.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorCross(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorCross() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorCross_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorCross(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorCross_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The distance between two positions.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The first position.
 * @param v The second position.
 */
static inline krpc_error_t krpc_StdLib_VectorDistance(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorDistance() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorDistance_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorDistance(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorDistance_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The dot product of two vectors.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorDot(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorDot() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorDot_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorDot(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorDot_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Linear interpolation between two vectors.
 *
 * The parameter is not limited to the range 0 to 1, and a value outside it
 * extrapolates.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The vector when t is 0.
 * @param v The vector when t is 1.
 * @param t The interpolation parameter.
 */
static inline krpc_error_t krpc_StdLib_VectorLerp(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v, double t);

/**
 * Fills in the call krpc_StdLib_VectorLerp() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorLerp_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v, double t);

/**
 * Fills in the call template of krpc_StdLib_VectorLerp(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorLerp_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The magnitude (length) of a vector.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param v The vector.
 */
static inline krpc_error_t krpc_StdLib_VectorMagnitude(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorMagnitude() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorMagnitude_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorMagnitude(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorMagnitude_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A vector scaled to a magnitude of 1.
 *
 * Throws an exception if the vector is zero.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param v The vector.
 */
static inline krpc_error_t krpc_StdLib_VectorNormalize(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorNormalize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorNormalize_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorNormalize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorNormalize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A vector scaled by a number.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param v The vector.
 * @param scale The scaling factor.
 */
static inline krpc_error_t krpc_StdLib_VectorScale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v, double scale);

/**
 * Fills in the call krpc_StdLib_VectorScale() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorScale_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * v, double scale);

/**
 * Fills in the call template of krpc_StdLib_VectorScale(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorScale_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The difference of two vectors.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorSubtract(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call krpc_StdLib_VectorSubtract() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorSubtract_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Fills in the call template of krpc_StdLib_VectorSubtract(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_VectorSubtract_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The constant e, the base of the natural logarithm.
 */
static inline krpc_error_t krpc_StdLib_E(krpc_connection_t connection, double * returnValue);

/**
 * Fills in the call krpc_StdLib_E() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_E_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_StdLib_E(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_E_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The constant pi.
 */
static inline krpc_error_t krpc_StdLib_Pi(krpc_connection_t connection, double * returnValue);

/**
 * Fills in the call krpc_StdLib_Pi() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Pi_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_StdLib_Pi(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_StdLib_Pi_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

static inline bool krpc_encode_callback_items_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_tuple_double_double_double_t * value = (const krpc_tuple_double_double_double_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e0));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e0));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e1));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e1));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e2));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e2));
  }
  return true;
}

static inline krpc_error_t krpc_encode_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double_double;
  message.items.arg = (krpc_tuple_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_tuple_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple_double_double_double");
  krpc_tuple_double_double_double_t * value = (krpc_tuple_double_double_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple_double_double_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_tuple_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_tuple_double_double_double_t * value;} State;
  State * state = (State*)(*arg);
  krpc_tuple_double_double_double_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e0));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e1));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e2));
    break;
  default:
    // Items past the size of the tuple type are skipped
    if (!pb_read(stream, NULL, stream->bytes_left))
      KRPC_CALLBACK_RETURN_ERROR("skipping an extra tuple item");
    break;
  }
  state->pos++;
  return true;
}

static inline krpc_error_t krpc_decode_tuple_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double_double;
  typedef struct State { size_t pos; krpc_tuple_double_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 3)
    KRPC_FAIL(ENCODING, "Too few items for a tuple_double_double_double");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_IMPL_TYPE_STDLIB_AXISANGLE
#define KRPC_IMPL_TYPE_STDLIB_AXISANGLE

static inline bool krpc_encode_callback_items_StdLib_AxisAngle(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_StdLib_AxisAngle_t * value = (const krpc_StdLib_AxisAngle_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double_double(&size, &value->axis));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double(stream, &value->axis));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->angle));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->angle));
  }
  return true;
}

static inline krpc_error_t krpc_encode_StdLib_AxisAngle(
  pb_ostream_t * stream, const krpc_StdLib_AxisAngle_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_StdLib_AxisAngle;
  message.items.arg = (krpc_StdLib_AxisAngle_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_StdLib_AxisAngle(
  size_t * size, const krpc_StdLib_AxisAngle_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_StdLib_AxisAngle(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_StdLib_AxisAngle(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for StdLib_AxisAngle");
  krpc_StdLib_AxisAngle_t * value = (krpc_StdLib_AxisAngle_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_StdLib_AxisAngle(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for StdLib_AxisAngle");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_StdLib_AxisAngle(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_StdLib_AxisAngle(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_StdLib_AxisAngle_t * value;} State;
  State * state = (State*)(*arg);
  krpc_StdLib_AxisAngle_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_tuple_double_double_double(stream, &value->axis));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->angle));
    break;
  default:
    // Fields are only ever appended to a structure, so a value from a newer server may
    // carry more items than this client knows about, and those are skipped
    if (!pb_read(stream, NULL, stream->bytes_left))
      KRPC_CALLBACK_RETURN_ERROR("skipping an appended struct field");
    break;
  }
  state->pos++;
  return true;
}

static inline krpc_error_t krpc_decode_StdLib_AxisAngle(
  pb_istream_t * stream, krpc_StdLib_AxisAngle_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_StdLib_AxisAngle;
  typedef struct State { size_t pos; krpc_StdLib_AxisAngle_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 2)
    KRPC_FAIL(ENCODING, "Too few fields for a StdLib_AxisAngle");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_STDLIB_AXISANGLE

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static inline bool krpc_encode_callback_items_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_tuple_double_double_double_double_t * value = (const krpc_tuple_double_double_double_double_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e0));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e0));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e1));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e1));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e2));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e2));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e3));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e3));
  }
  return true;
}

static inline krpc_error_t krpc_encode_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double_double_double;
  message.items.arg = (krpc_tuple_double_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_tuple_double_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple_double_double_double_double");
  krpc_tuple_double_double_double_double_t * value = (krpc_tuple_double_double_double_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double_double_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple_double_double_double_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double_double(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_tuple_double_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_tuple_double_double_double_double_t * value;} State;
  State * state = (State*)(*arg);
  krpc_tuple_double_double_double_double_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e0));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e1));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e2));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e3));
    break;
  default:
    // Items past the size of the tuple type are skipped
    if (!pb_read(stream, NULL, stream->bytes_left))
      KRPC_CALLBACK_RETURN_ERROR("skipping an extra tuple item");
    break;
  }
  state->pos++;
  return true;
}

static inline krpc_error_t krpc_decode_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double_double_double;
  typedef struct State { size_t pos; krpc_tuple_double_double_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 4)
    KRPC_FAIL(ENCODING, "Too few items for a tuple_double_double_double_double");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static inline krpc_error_t krpc_StdLib_Abs(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2357291247, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Abs_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2357291247, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Abs_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2357291247, 0);
}

static inline krpc_error_t krpc_StdLib_Acos(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 1830976602, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Acos_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1830976602, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Acos_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1830976602, 0);
}

static inline krpc_error_t krpc_StdLib_Asin(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2570224605, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Asin_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2570224605, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Asin_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2570224605, 0);
}

static inline krpc_error_t krpc_StdLib_Atan(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2364435929, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Atan_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2364435929, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Atan_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2364435929, 0);
}

static inline krpc_error_t krpc_StdLib_Atan2(krpc_connection_t connection, double * returnValue, double y, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 3495226136, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &y));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Atan2_call(krpc_schema_ProcedureCall * procedureCall, double y, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 3495226136, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &y));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Atan2_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 3495226136, 0);
}

static inline krpc_error_t krpc_StdLib_Ceiling(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 882135912, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Ceiling_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 882135912, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Ceiling_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 882135912, 0);
}

static inline krpc_error_t krpc_StdLib_Clamp(krpc_connection_t connection, double * returnValue, double x, double min, double max) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 1760871739, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &min));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &max));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Clamp_call(krpc_schema_ProcedureCall * procedureCall, double x, double min, double max) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1760871739, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &min));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &max));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Clamp_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1760871739, 0);
}

static inline krpc_error_t krpc_StdLib_CopySign(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 481747567, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &y));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_CopySign_call(krpc_schema_ProcedureCall * procedureCall, double x, double y) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 481747567, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &y));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_CopySign_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 481747567, 0);
}

static inline krpc_error_t krpc_StdLib_Cos(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 3389107721, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Cos_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 3389107721, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Cos_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 3389107721, 0);
}

static inline krpc_error_t krpc_StdLib_DegreesToRadians(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2368334055, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_DegreesToRadians_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2368334055, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_DegreesToRadians_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2368334055, 0);
}

static inline krpc_error_t krpc_StdLib_Exp(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2476444378, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Exp_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2476444378, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Exp_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2476444378, 0);
}

static inline krpc_error_t krpc_StdLib_Floor(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 3301533906, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Floor_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 3301533906, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Floor_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 3301533906, 0);
}

static inline krpc_error_t krpc_StdLib_Hypot(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1307934911, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &y));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Hypot_call(krpc_schema_ProcedureCall * procedureCall, double x, double y) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1307934911, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &y));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Hypot_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1307934911, 0);
}

static inline krpc_error_t krpc_StdLib_InverseLerp(krpc_connection_t connection, double * returnValue, double a, double b, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 1515255041, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &a));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &b));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_InverseLerp_call(krpc_schema_ProcedureCall * procedureCall, double a, double b, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1515255041, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &a));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &b));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_InverseLerp_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1515255041, 0);
}

static inline krpc_error_t krpc_StdLib_IsFinite(krpc_connection_t connection, bool * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 53882819, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
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

static inline krpc_error_t krpc_StdLib_IsFinite_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 53882819, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_IsFinite_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 53882819, 0);
}

static inline krpc_error_t krpc_StdLib_IsNan(krpc_connection_t connection, bool * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 1099355607, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
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

static inline krpc_error_t krpc_StdLib_IsNan_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1099355607, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_IsNan_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1099355607, 0);
}

static inline krpc_error_t krpc_StdLib_Lerp(krpc_connection_t connection, double * returnValue, double a, double b, double t) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 2414969152, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &a));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &b));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &t));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Lerp_call(krpc_schema_ProcedureCall * procedureCall, double a, double b, double t) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2414969152, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &a));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &b));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &t));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Lerp_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2414969152, 0);
}

static inline krpc_error_t krpc_StdLib_Log(krpc_connection_t connection, double * returnValue, double x, double newBase) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 2996757537, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &newBase));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Log_call(krpc_schema_ProcedureCall * procedureCall, double x, double newBase) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2996757537, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &newBase));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Log_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2996757537, 0);
}

static inline krpc_error_t krpc_StdLib_Log10(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2232947123, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Log10_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2232947123, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Log10_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2232947123, 0);
}

static inline krpc_error_t krpc_StdLib_Max(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1838392737, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &y));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Max_call(krpc_schema_ProcedureCall * procedureCall, double x, double y) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1838392737, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &y));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Max_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1838392737, 0);
}

static inline krpc_error_t krpc_StdLib_Min(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 848537566, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &y));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Min_call(krpc_schema_ProcedureCall * procedureCall, double x, double y) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 848537566, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &y));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Min_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 848537566, 0);
}

static inline krpc_error_t krpc_StdLib_Print(krpc_connection_t connection, const char * message) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2565279711, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &message));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Print_call(krpc_schema_ProcedureCall * procedureCall, const char * message) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2565279711, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_string, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Print_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2565279711, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1876458476, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, r));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1876458476, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double_double, r));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionAngle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1876458476, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * axis, double angle) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1525942056, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, axis));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &angle));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * axis, double angle) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1525942056, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, axis));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &angle));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1525942056, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 3452894956, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 3452894956, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 3452894956, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionInverse(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2051111055, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionInverse_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2051111055, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionInverse_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2051111055, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionLookRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * forward, const krpc_tuple_double_double_double_t * up) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 2490461728, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, forward));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, up));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionLookRotation_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * forward, const krpc_tuple_double_double_double_t * up) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2490461728, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, forward));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, up));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionLookRotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2490461728, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionMultiply(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 243692420, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, r));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionMultiply_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 243692420, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double_double, r));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionMultiply_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 243692420, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionRotateVector(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 3724321472, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionRotateVector_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 3724321472, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionRotateVector_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 3724321472, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionSlerp(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r, double t) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 1428150833, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, r));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &t));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionSlerp_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r, double t) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1428150833, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double_double, r));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &t));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionSlerp_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1428150833, 0);
}

static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle(krpc_connection_t connection, krpc_StdLib_AxisAngle_t * returnValue, const krpc_tuple_double_double_double_double_t * q) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2587189927, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_AxisAngle(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_double_t * q) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2587189927, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double_double, q));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2587189927, 0);
}

static inline krpc_error_t krpc_StdLib_RadiansToDegrees(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2472307850, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_RadiansToDegrees_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2472307850, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_RadiansToDegrees_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2472307850, 0);
}

static inline krpc_error_t krpc_StdLib_Round(krpc_connection_t connection, double * returnValue, double x, int32_t digits) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 2891486669, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &digits));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Round_call(krpc_schema_ProcedureCall * procedureCall, double x, int32_t digits) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2891486669, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &digits));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Round_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2891486669, 0);
}

static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero(krpc_connection_t connection, double * returnValue, double x, int32_t digits) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1465681777, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &digits));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero_call(krpc_schema_ProcedureCall * procedureCall, double x, int32_t digits) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1465681777, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &digits));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1465681777, 0);
}

static inline krpc_error_t krpc_StdLib_RoundHalfUp(krpc_connection_t connection, double * returnValue, double x, int32_t digits) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1170209469, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &digits));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_RoundHalfUp_call(krpc_schema_ProcedureCall * procedureCall, double x, int32_t digits) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1170209469, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &digits));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_RoundHalfUp_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1170209469, 0);
}

static inline krpc_error_t krpc_StdLib_Sign(krpc_connection_t connection, int32_t * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 3910702604, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_int32(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Sign_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 3910702604, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Sign_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 3910702604, 0);
}

static inline krpc_error_t krpc_StdLib_Sin(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2125418498, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Sin_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2125418498, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Sin_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2125418498, 0);
}

static inline krpc_error_t krpc_StdLib_Sqrt(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 4090611578, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Sqrt_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 4090611578, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Sqrt_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 4090611578, 0);
}

static inline krpc_error_t krpc_StdLib_Tan(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 1967172126, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &x));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Tan_call(krpc_schema_ProcedureCall * procedureCall, double x) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1967172126, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &x));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Tan_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1967172126, 0);
}

static inline krpc_error_t krpc_StdLib_VectorAdd(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 859452579, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorAdd_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 859452579, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorAdd_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 859452579, 0);
}

static inline krpc_error_t krpc_StdLib_VectorAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1908716087, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorAngle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1908716087, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorAngle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1908716087, 0);
}

static inline krpc_error_t krpc_StdLib_VectorCross(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 2252667992, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorCross_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2252667992, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorCross_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2252667992, 0);
}

static inline krpc_error_t krpc_StdLib_VectorDistance(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 2170434106, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorDistance_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2170434106, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorDistance_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2170434106, 0);
}

static inline krpc_error_t krpc_StdLib_VectorDot(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 289164189, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorDot_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 289164189, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorDot_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 289164189, 0);
}

static inline krpc_error_t krpc_StdLib_VectorLerp(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v, double t) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 2555343925, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &t));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorLerp_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v, double t) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 2555343925, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &t));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorLerp_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 2555343925, 0);
}

static inline krpc_error_t krpc_StdLib_VectorMagnitude(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 1632196812, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorMagnitude_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1632196812, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorMagnitude_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1632196812, 0);
}

static inline krpc_error_t krpc_StdLib_VectorNormalize(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 1228964428, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorNormalize_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1228964428, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorNormalize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1228964428, 0);
}

static inline krpc_error_t krpc_StdLib_VectorScale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v, double scale) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 37835582, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, v));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &scale));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorScale_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * v, double scale) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 37835582, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, v));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &scale));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorScale_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 37835582, 0);
}

static inline krpc_error_t krpc_StdLib_VectorSubtract(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 1584349057, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, v));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorSubtract_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 1584349057, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, u));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, v));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_VectorSubtract_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 1584349057, 0);
}

static inline krpc_error_t krpc_StdLib_E(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 8, 734588227, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_E_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 734588227, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_E_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 734588227, 0);
}

static inline krpc_error_t krpc_StdLib_Pi(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 8, 3654533158, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Pi_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 8, 3654533158, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_Pi_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 8, 3654533158, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
