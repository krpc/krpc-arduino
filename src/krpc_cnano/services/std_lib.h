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
 * The absolute value of a number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Abs(krpc_connection_t connection, double * returnValue, double x);

/**
 * The angle, in radians, whose cosine is the given number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Acos(krpc_connection_t connection, double * returnValue, double x);

/**
 * The angle, in radians, whose sine is the given number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Asin(krpc_connection_t connection, double * returnValue, double x);

/**
 * The angle, in radians, whose tangent is the given number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Atan(krpc_connection_t connection, double * returnValue, double x);

/**
 * The angle, in radians, between the positive x axis and the point (x, y).
 * @param y The y coordinate.
 * @param x The x coordinate.
 */
static inline krpc_error_t krpc_StdLib_Atan2(krpc_connection_t connection, double * returnValue, double y, double x);

/**
 * The smallest whole number greater than or equal to the given number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Ceiling(krpc_connection_t connection, double * returnValue, double x);

/**
 * The given number limited to the given range.
 *
 * Throws an exception if the minimum is greater than the maximum.
 * @param x The number.
 * @param min The minimum of the range.
 * @param max The maximum of the range.
 */
static inline krpc_error_t krpc_StdLib_Clamp(krpc_connection_t connection, double * returnValue, double x, double min, double max);

/**
 * The magnitude of the first number with the sign of the second.
 * @param x The number giving the magnitude.
 * @param y The number giving the sign.
 */
static inline krpc_error_t krpc_StdLib_CopySign(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * The cosine of an angle, in radians.
 * @param x The angle.
 */
static inline krpc_error_t krpc_StdLib_Cos(krpc_connection_t connection, double * returnValue, double x);

/**
 * The angle in radians of an angle in degrees.
 * @param x The angle in degrees.
 */
static inline krpc_error_t krpc_StdLib_DegreesToRadians(krpc_connection_t connection, double * returnValue, double x);

/**
 * The number e raised to the given power.
 * @param x The power.
 */
static inline krpc_error_t krpc_StdLib_Exp(krpc_connection_t connection, double * returnValue, double x);

/**
 * The largest whole number less than or equal to the given number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Floor(krpc_connection_t connection, double * returnValue, double x);

/**
 * The length of the hypotenuse of a right triangle with the given sides.
 * @param x The first side.
 * @param y The second side.
 */
static inline krpc_error_t krpc_StdLib_Hypot(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * The interpolation parameter of a number between two others,
 * limited to the range 0 to 1.
 *
 * Returns 0 if the two numbers are equal.
 * @param a The number at 0.
 * @param b The number at 1.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_InverseLerp(krpc_connection_t connection, double * returnValue, double a, double b, double x);

/**
 * Whether a number is neither infinite nor not a number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_IsFinite(krpc_connection_t connection, bool * returnValue, double x);

/**
 * Whether a number is not a number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_IsNan(krpc_connection_t connection, bool * returnValue, double x);

/**
 * Linear interpolation between two numbers.
 *
 * The parameter is not limited to the range 0 to 1, and a value outside it
 * extrapolates.
 * @param a The number when t is 0.
 * @param b The number when t is 1.
 * @param t The interpolation parameter.
 */
static inline krpc_error_t krpc_StdLib_Lerp(krpc_connection_t connection, double * returnValue, double a, double b, double t);

/**
 * The logarithm of a number, natural unless another base is given.
 * @param x The number.
 * @param newBase The base of the logarithm.
 */
static inline krpc_error_t krpc_StdLib_Log(krpc_connection_t connection, double * returnValue, double x, double newBase);

/**
 * The base 10 logarithm of a number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Log10(krpc_connection_t connection, double * returnValue, double x);

/**
 * The larger of two numbers.
 * @param x The first number.
 * @param y The second number.
 */
static inline krpc_error_t krpc_StdLib_Max(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * The smaller of two numbers.
 * @param x The first number.
 * @param y The second number.
 */
static inline krpc_error_t krpc_StdLib_Min(krpc_connection_t connection, double * returnValue, double x, double y);

/**
 * Writes a message to the game's log, for debugging.
 *
 * A function evaluated by a stream or an event prints on every update. The message is
 * written at the Info level, so a server log level of Warning or Error hides it.
 * @param message The message.
 */
static inline krpc_error_t krpc_StdLib_Print(krpc_connection_t connection, const char * message);

/**
 * The angle of the rotation that takes one rotation to another,
 * in radians, between 0 and pi.
 *
 * Throws an exception if either quaternion is zero.
 * @param q The first rotation.
 * @param r The second rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r);

/**
 * The rotation about an axis by an angle.
 *
 * Throws an exception if the axis is zero.
 * @param axis The axis of rotation.
 * @param angle The angle of rotation, in radians.
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * axis, double angle);

/**
 * The shortest rotation that takes one direction onto another.
 *
 * Opposite directions give a half turn about an arbitrary perpendicular axis.
 * Throws an exception if either vector is zero.
 * @param u The direction to rotate from.
 * @param v The direction to rotate to.
 */
static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * The inverse of a rotation.
 *
 * Throws an exception if the quaternion is zero.
 * @param q The rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionInverse(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q);

/**
 * The rotation that takes the z axis onto a forward direction, and the y axis
 * toward an up direction.
 *
 * The up direction need not be perpendicular to the forward direction. Throws an
 * exception if either vector is zero, or if they are parallel.
 * @param forward The direction of the z axis.
 * @param up The direction the y axis points toward.
 */
static inline krpc_error_t krpc_StdLib_QuaternionLookRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * forward, const krpc_tuple_double_double_double_t * up);

/**
 * The composition of two rotations: the rotation r followed by the
 * rotation q.
 *
 * Throws an exception if either quaternion is zero.
 * @param q The second rotation.
 * @param r The first rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionMultiply(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r);

/**
 * A vector rotated by a rotation.
 *
 * Throws an exception if the quaternion is zero.
 * @param q The rotation.
 * @param v The vector.
 */
static inline krpc_error_t krpc_StdLib_QuaternionRotateVector(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_t * v);

/**
 * Spherical linear interpolation between two rotations.
 *
 * The parameter is not limited to the range 0 to 1, and a value outside it
 * extrapolates. Throws an exception if either quaternion is zero.
 * @param q The rotation when t is 0.
 * @param r The rotation when t is 1.
 * @param t The interpolation parameter.
 */
static inline krpc_error_t krpc_StdLib_QuaternionSlerp(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r, double t);

/**
 * The axis and angle of a rotation.
 *
 * Throws an exception if the quaternion is zero.
 * @param q The rotation.
 */
static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle(krpc_connection_t connection, krpc_StdLib_AxisAngle_t * returnValue, const krpc_tuple_double_double_double_double_t * q);

/**
 * The angle in degrees of an angle in radians.
 * @param x The angle in radians.
 */
static inline krpc_error_t krpc_StdLib_RadiansToDegrees(krpc_connection_t connection, double * returnValue, double x);

/**
 * The given number rounded to the given number of decimal places,
 * with a halfway value rounded to the nearer even number.
 *
 * Throws an exception if the rounded value is too large for a double.
 * @param x The number.
 * @param digits The number of decimal places to round to.
 * Negative to round to tens, hundreds and beyond.
 */
static inline krpc_error_t krpc_StdLib_Round(krpc_connection_t connection, double * returnValue, double x, int32_t digits);

/**
 * The given number rounded to the given number of decimal places,
 * with a halfway value rounded away from zero.
 *
 * Throws an exception if the rounded value is too large for a double.
 * @param x The number.
 * @param digits The number of decimal places to round to.
 * Negative to round to tens, hundreds and beyond.
 */
static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero(krpc_connection_t connection, double * returnValue, double x, int32_t digits);

/**
 * The given number rounded to the given number of decimal places,
 * with a halfway value rounded toward positive infinity.
 *
 * Throws an exception if the rounded value is too large for a double.
 * @param x The number.
 * @param digits The number of decimal places to round to.
 * Negative to round to tens, hundreds and beyond.
 */
static inline krpc_error_t krpc_StdLib_RoundHalfUp(krpc_connection_t connection, double * returnValue, double x, int32_t digits);

/**
 * The sign of a number: -1 if it is negative, 1 if it is positive,
 * and 0 if it is zero or not a number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Sign(krpc_connection_t connection, int32_t * returnValue, double x);

/**
 * The sine of an angle, in radians.
 * @param x The angle.
 */
static inline krpc_error_t krpc_StdLib_Sin(krpc_connection_t connection, double * returnValue, double x);

/**
 * The square root of a number.
 * @param x The number.
 */
static inline krpc_error_t krpc_StdLib_Sqrt(krpc_connection_t connection, double * returnValue, double x);

/**
 * The tangent of an angle, in radians.
 * @param x The angle.
 */
static inline krpc_error_t krpc_StdLib_Tan(krpc_connection_t connection, double * returnValue, double x);

/**
 * The sum of two vectors.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorAdd(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * The angle between two vectors, in radians, between 0 and pi.
 *
 * Throws an exception if either vector is zero.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * The cross product of two vectors.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorCross(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * The distance between two positions.
 * @param u The first position.
 * @param v The second position.
 */
static inline krpc_error_t krpc_StdLib_VectorDistance(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * The dot product of two vectors.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorDot(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * Linear interpolation between two vectors.
 *
 * The parameter is not limited to the range 0 to 1, and a value outside it
 * extrapolates.
 * @param u The vector when t is 0.
 * @param v The vector when t is 1.
 * @param t The interpolation parameter.
 */
static inline krpc_error_t krpc_StdLib_VectorLerp(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v, double t);

/**
 * The magnitude (length) of a vector.
 * @param v The vector.
 */
static inline krpc_error_t krpc_StdLib_VectorMagnitude(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * v);

/**
 * A vector scaled to a magnitude of 1.
 *
 * Throws an exception if the vector is zero.
 * @param v The vector.
 */
static inline krpc_error_t krpc_StdLib_VectorNormalize(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v);

/**
 * A vector scaled by a number.
 * @param v The vector.
 * @param scale The scaling factor.
 */
static inline krpc_error_t krpc_StdLib_VectorScale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v, double scale);

/**
 * The difference of two vectors.
 * @param u The first vector.
 * @param v The second vector.
 */
static inline krpc_error_t krpc_StdLib_VectorSubtract(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v);

/**
 * The constant e, the base of the natural logarithm.
 */
static inline krpc_error_t krpc_StdLib_E(krpc_connection_t connection, double * returnValue);

/**
 * The constant pi.
 */
static inline krpc_error_t krpc_StdLib_Pi(krpc_connection_t connection, double * returnValue);

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
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
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
    KRPC_RETURN_ERROR(DECODING_FAILED, "too few fields for a StdLib_AxisAngle");
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
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
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
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static inline krpc_error_t krpc_StdLib_Abs(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 1, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Acos(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 17, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Asin(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 16, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Atan(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 18, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Atan2(krpc_connection_t connection, double * returnValue, double y, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 19, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_Ceiling(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 7, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Clamp(krpc_connection_t connection, double * returnValue, double x, double min, double max) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 25, 3, _arguments));
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

static inline krpc_error_t krpc_StdLib_CopySign(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 3, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_Cos(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 14, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_DegreesToRadians(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 28, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Exp(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 22, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Floor(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 6, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Hypot(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 12, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_InverseLerp(krpc_connection_t connection, double * returnValue, double a, double b, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 27, 3, _arguments));
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

static inline krpc_error_t krpc_StdLib_IsFinite(krpc_connection_t connection, bool * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 5, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_IsNan(krpc_connection_t connection, bool * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 4, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Lerp(krpc_connection_t connection, double * returnValue, double a, double b, double t) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 26, 3, _arguments));
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

static inline krpc_error_t krpc_StdLib_Log(krpc_connection_t connection, double * returnValue, double x, double newBase) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 20, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_Log10(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 21, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Max(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 24, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_Min(krpc_connection_t connection, double * returnValue, double x, double y) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 23, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_Print(krpc_connection_t connection, const char * message) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 49, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &message));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_StdLib_QuaternionAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 47, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionFromAxisAngle(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * axis, double angle) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 43, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionFromToRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 45, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionInverse(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 41, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionLookRotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * forward, const krpc_tuple_double_double_double_t * up) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 46, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionMultiply(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 40, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionRotateVector(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 42, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionSlerp(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, const krpc_tuple_double_double_double_double_t * q, const krpc_tuple_double_double_double_double_t * r, double t) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 48, 3, _arguments));
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

static inline krpc_error_t krpc_StdLib_QuaternionToAxisAngle(krpc_connection_t connection, krpc_StdLib_AxisAngle_t * returnValue, const krpc_tuple_double_double_double_double_t * q) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 44, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_RadiansToDegrees(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 29, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Round(krpc_connection_t connection, double * returnValue, double x, int32_t digits) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 8, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_RoundHalfAwayFromZero(krpc_connection_t connection, double * returnValue, double x, int32_t digits) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 9, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_RoundHalfUp(krpc_connection_t connection, double * returnValue, double x, int32_t digits) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 10, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_Sign(krpc_connection_t connection, int32_t * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 2, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Sin(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 13, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Sqrt(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 11, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_Tan(krpc_connection_t connection, double * returnValue, double x) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 15, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorAdd(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 30, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorAngle(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 38, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorCross(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 34, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorDistance(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 37, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorDot(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 33, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorLerp(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v, double t) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 8, 39, 3, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorMagnitude(krpc_connection_t connection, double * returnValue, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 35, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorNormalize(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 8, 36, 1, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorScale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * v, double scale) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 32, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_VectorSubtract(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, const krpc_tuple_double_double_double_t * u, const krpc_tuple_double_double_double_t * v) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 8, 31, 2, _arguments));
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

static inline krpc_error_t krpc_StdLib_E(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 8, 51, 0, NULL));
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

static inline krpc_error_t krpc_StdLib_Pi(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 8, 50, 0, NULL));
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

#ifdef __cplusplus
}  // extern "C"
#endif
