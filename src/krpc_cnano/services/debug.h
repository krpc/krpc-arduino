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

/**
 * Exert a constant force on a part, acting at the given position.
 * @return An object that can be used to remove or modify the force.
 * @param part The part to apply the force to.
 * @param force A vector pointing in the direction that the force acts,
 * with its magnitude equal to the strength of the force in Newtons.
 * @param position The position at which the force acts, as a vector.
 * @param referenceFrame The reference frame that the
 * force and position are in.
 *
 * The force is removed when the client that added it disconnects.
 */
static inline krpc_error_t krpc_Debug_AddForce(krpc_connection_t connection, krpc_SpaceCenter_Force_t * returnValue, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Rotate a vessel about the given axis, in its own reference frame, by the given angle.
 * @param angle Angle to rotate by, in degrees.
 * @param axis Axis to rotate about.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_ApplyRotation(krpc_connection_t connection, double angle, const krpc_tuple_double_double_double_t * axis, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fill every resource tank on a vessel to its maximum capacity.
 * @param vessel Vessel to fill. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_FillAllResources(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fill the tanks of a single resource on a vessel to their maximum capacity.
 * @param resourceName Name of the resource to fill, for example
 * "LiquidFuel".
 * @param vessel Vessel to fill. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_FillResources(krpc_connection_t connection, const char * resourceName, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Exert an instantaneous force on a part, acting at the given position.
 * @param part The part to apply the force to.
 * @param force A vector pointing in the direction that the force acts,
 * with its magnitude equal to the strength of the force in Newtons.
 * @param position The position at which the force acts, as a vector.
 * @param referenceFrame The reference frame that the
 * force and position are in.
 *
 * The force is applied instantaneously in a single physics update.
 */
static inline krpc_error_t krpc_Debug_InstantaneousForce(krpc_connection_t connection, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Raise every kerbal in the roster to the highest experience level.
 */
static inline krpc_error_t krpc_Debug_MaxKerbalExperience(krpc_connection_t connection);

/**
 * Set the angular velocity of a vessel, expressed in the given reference frame. Pass a
 * zero vector to stop the vessel rotating.
 *
 * The whole vessel is put into a rigid rotation about its center of mass, so it spins in
 * place rather than shearing apart or translating.
 * @param angularVelocity Angular velocity, in radians per second. The direction
 * is the axis of rotation and the magnitude is the rate.
 * @param referenceFrame Reference frame the angular velocity is in. Defaults to
 * the vessel's surface reference frame.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_SetAngularVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * angularVelocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Move the active vessel onto a circular orbit around a body.
 * @param body Body to orbit.
 * @param altitude Altitude of the orbit, in meters above sea level.
 */
static inline krpc_error_t krpc_Debug_SetCircularOrbit(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double altitude);

/**
 * Point a vessel along the given direction in the given reference frame, and stop it
 * rotating. This is Debug::set_pitch_heading_roll with a pointing vector instead
 * of a pitch and heading, matching the attitude the autopilot holds for the same
 * target direction and roll.
 * @param direction Direction to point the nose of the vessel in.
 * @param roll Target roll, in degrees, or NaN to leave the roll
 * uncontrolled.
 * @param referenceFrame Reference frame the direction and roll are in. Defaults
 * to the vessel's surface reference frame.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_SetDirection(krpc_connection_t connection, const krpc_tuple_double_double_double_t * direction, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Place the active vessel in atmospheric flight over the given point: at the given altitude
 * and airspeed, pointing along the given heading at the given pitch and roll, and
 * let physics resume so that it is flying. Use this to set up an in-air scenario
 * without flying the craft up from the runway.
 *
 * The pitch, heading and roll match those reported by the vessel's
 * SpaceCenter::Flight.
 * @param body Body to fly over.
 * @param latitude Latitude in degrees.
 * @param longitude Longitude in degrees.
 * @param altitude Altitude in meters above sea level.
 * @param speed Airspeed in meters per second, relative to the surface.
 * @param heading Compass heading to point along, in degrees (90 is east).
 * @param pitch Pitch above the horizon, in degrees. Defaults to 0 (level).
 * @param roll Roll, in degrees. Defaults to 0 (wings level).
 * @param angleOfAttack Angle of attack in degrees: how far the airspeed vector sits
 * below the nose, in the pitch plane. 0 (the default) puts the airspeed along the nose;
 * a positive value gives a nose-up attitude relative to the flight path, so the
 * flight-path angle is pitch minus this.
 */
static inline krpc_error_t krpc_Debug_SetFlight(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude, double speed, double heading, double pitch, double roll, double angleOfAttack);

/**
 * Place the active vessel on the surface of a body at the given latitude and longitude,
 * and wait for it to come to rest.
 * @param body Body to land on.
 * @param latitude Latitude in degrees.
 * @param longitude Longitude in degrees.
 * @param altitude Height above the terrain to settle at, in meters.
 * Defaults to 0, resting on the surface.
 */
static inline krpc_error_t krpc_Debug_SetLanded(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude);

/**
 * Move the active vessel onto the orbit with the given orbital elements. The angles use
 * the same units and conventions as SpaceCenter::Orbit.
 * @param body Body to orbit.
 * @param semiMajorAxis Semi-major axis of the orbit, in meters.
 * @param eccentricity Eccentricity of the orbit.
 * @param inclination Inclination of the orbit, in radians.
 * @param longitudeOfAscendingNode Longitude of the ascending node, in radians.
 * @param argumentOfPeriapsis Argument of periapsis, in radians.
 * @param meanAnomalyAtEpoch Mean anomaly at epoch, in radians.
 * @param epoch Universal time of the epoch, in seconds.
 */
static inline krpc_error_t krpc_Debug_SetOrbit(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double semiMajorAxis, double eccentricity, double inclination, double longitudeOfAscendingNode, double argumentOfPeriapsis, double meanAnomalyAtEpoch, double epoch);

/**
 * Set the attitude of a vessel to the given pitch, heading and roll in the given
 * reference frame, and stop it rotating. Lets a script start from a fixed, still
 * pose without first flying the autopilot there.
 *
 * The angles match those reported by the vessel's
 * SpaceCenter::Flight.
 * @param pitch Target pitch, in degrees.
 * @param heading Target heading, in degrees.
 * @param roll Target roll, in degrees.
 * @param referenceFrame Reference frame the angles are in. Defaults to the
 * vessel's surface reference frame.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll(krpc_connection_t connection, double pitch, double heading, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Move the active vessel to the given position, leaving its velocity as it is. To put it
 * alongside another vessel, pass a position in that vessel's reference frame.
 *
 * This is the inverse of SpaceCenter::Vessel::position in the same
 * reference frame.
 * @param position Position of the vessel's center of mass, in meters.
 * @param referenceFrame Reference frame the position is in. Defaults to the
 * reference frame of the body being orbited.
 */
static inline krpc_error_t krpc_Debug_SetPosition(krpc_connection_t connection, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Set the velocity of the active vessel, leaving it where it is. The vessel is moved onto the
 * orbit that passes through its current position at the new velocity, so this works
 * in orbit and in the atmosphere alike.
 *
 * This is the inverse of SpaceCenter::Vessel::velocity in the same
 * reference frame.
 * @param velocity Velocity in meters per second.
 * @param referenceFrame Reference frame the velocity is in. Defaults to the
 * reference frame of the body being orbited, which rotates with it, so a zero velocity
 * leaves the vessel at rest relative to the ground.
 */
static inline krpc_error_t krpc_Debug_SetVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * velocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Research every node in the technology tree and purchase every part in it.
 * Only available in career and science mode.
 */
static inline krpc_error_t krpc_Debug_UnlockTechnologyTree(krpc_connection_t connection);

/**
 * Upgrade every building at the space center to its highest level.
 * Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_UpgradeFacilities(krpc_connection_t connection);

/**
 * Whether parts may be placed so that they intersect one another in the editor.
 */
static inline krpc_error_t krpc_Debug_AllowPartClipping(krpc_connection_t connection, bool * returnValue);

/**
 * Whether parts may be placed so that they intersect one another in the editor.
 */
static inline krpc_error_t krpc_Debug_set_AllowPartClipping(krpc_connection_t connection, bool value);

/**
 * Whether biome boundaries are drawn on the surface of bodies.
 */
static inline krpc_error_t krpc_Debug_BiomesVisible(krpc_connection_t connection, bool * returnValue);

/**
 * Whether biome boundaries are drawn on the surface of bodies.
 */
static inline krpc_error_t krpc_Debug_set_BiomesVisible(krpc_connection_t connection, bool value);

/**
 * The number of funds the player has. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_Funds(krpc_connection_t connection, double * returnValue);

/**
 * The number of funds the player has. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_set_Funds(krpc_connection_t connection, double value);

/**
 * Multiplier applied to the force of gravity on every vessel. 1 is normal gravity,
 * 0 is weightlessness.
 */
static inline krpc_error_t krpc_Debug_GravityMultiplier(krpc_connection_t connection, double * returnValue);

/**
 * Multiplier applied to the force of gravity on every vessel. 1 is normal gravity,
 * 0 is weightlessness.
 */
static inline krpc_error_t krpc_Debug_set_GravityMultiplier(krpc_connection_t connection, double value);

/**
 * Whether contracts are offered regardless of the agency mindset that normally
 * restricts which ones appear.
 */
static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool * returnValue);

/**
 * Whether contracts are offered regardless of the agency mindset that normally
 * restricts which ones appear.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool value);

/**
 * Whether EVA construction may move parts heavier than a kerbal can normally carry.
 */
static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool * returnValue);

/**
 * Whether EVA construction may move parts heavier than a kerbal can normally carry.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool value);

/**
 * Whether a kerbal's inventory may hold more than its slot and mass limits allow.
 */
static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool * returnValue);

/**
 * Whether a kerbal's inventory may hold more than its slot and mass limits allow.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool value);

/**
 * Whether parts survive temperatures above their maximum, instead of exploding.
 */
static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature(krpc_connection_t connection, bool * returnValue);

/**
 * Whether parts survive temperatures above their maximum, instead of exploding.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature(krpc_connection_t connection, bool value);

/**
 * Whether parts draw no electric charge.
 */
static inline krpc_error_t krpc_Debug_InfiniteElectricity(krpc_connection_t connection, bool * returnValue);

/**
 * Whether parts draw no electric charge.
 */
static inline krpc_error_t krpc_Debug_set_InfiniteElectricity(krpc_connection_t connection, bool value);

/**
 * Whether engines and RCS thrusters draw no propellant.
 */
static inline krpc_error_t krpc_Debug_InfinitePropellant(krpc_connection_t connection, bool * returnValue);

/**
 * Whether engines and RCS thrusters draw no propellant.
 */
static inline krpc_error_t krpc_Debug_set_InfinitePropellant(krpc_connection_t connection, bool value);

/**
 * Whether parts survive collisions that would otherwise destroy them.
 */
static inline krpc_error_t krpc_Debug_NoCrashDamage(krpc_connection_t connection, bool * returnValue);

/**
 * Whether parts survive collisions that would otherwise destroy them.
 */
static inline krpc_error_t krpc_Debug_set_NoCrashDamage(krpc_connection_t connection, bool value);

/**
 * Whether parts may be attached in any orientation, rather than only the ones their
 * attachment nodes allow.
 */
static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation(krpc_connection_t connection, bool * returnValue);

/**
 * Whether parts may be attached in any orientation, rather than only the ones their
 * attachment nodes allow.
 */
static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation(krpc_connection_t connection, bool value);

/**
 * Whether the game pauses whenever a vessel comes off rails.
 */
static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack(krpc_connection_t connection, bool * returnValue);

/**
 * Whether the game pauses whenever a vessel comes off rails.
 */
static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack(krpc_connection_t connection, bool value);

/**
 * The player's reputation. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_Reputation(krpc_connection_t connection, float * returnValue);

/**
 * The player's reputation. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_set_Reputation(krpc_connection_t connection, float value);

/**
 * The amount of science the player has. Only available in career and science mode.
 */
static inline krpc_error_t krpc_Debug_Science(krpc_connection_t connection, float * returnValue);

/**
 * The amount of science the player has. Only available in career and science mode.
 */
static inline krpc_error_t krpc_Debug_set_Science(krpc_connection_t connection, float value);

/**
 * Whether the joints between parts are rigid and cannot break.
 */
static inline krpc_error_t krpc_Debug_UnbreakableJoints(krpc_connection_t connection, bool * returnValue);

/**
 * Whether the joints between parts are rigid and cannot break.
 */
static inline krpc_error_t krpc_Debug_set_UnbreakableJoints(krpc_connection_t connection, bool value);

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

static inline krpc_error_t krpc_Debug_AddForce(krpc_connection_t connection, krpc_SpaceCenter_Force_t * returnValue, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 11, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &part));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, force));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_object, &referenceFrame));
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

static inline krpc_error_t krpc_Debug_ApplyRotation(krpc_connection_t connection, double angle, const krpc_tuple_double_double_double_t * axis, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 12, 9, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &angle));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, axis));
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 2));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &vessel));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_FillAllResources(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 13, 1, _arguments));
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 0));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_FillResources(krpc_connection_t connection, const char * resourceName, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 14, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &resourceName));
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 1));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &vessel));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_InstantaneousForce(krpc_connection_t connection, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 12, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &part));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, force));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_MaxKerbalExperience(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 17, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetAngularVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * angularVelocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 12, 10, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, angularVelocity));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 1));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  }
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 2));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &vessel));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetCircularOrbit(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double altitude) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 1, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &altitude));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetDirection(krpc_connection_t connection, const krpc_tuple_double_double_double_t * direction, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 8, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &roll));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 2));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &referenceFrame));
  }
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 3));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_object, &vessel));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetFlight(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude, double speed, double heading, double pitch, double roll, double angleOfAttack) {
  krpc_call_t _call;
  krpc_argument_t _arguments[9];
  KRPC_CHECK(krpc_call(&_call, 12, 4, 9, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_double, &altitude));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_double, &speed));
  KRPC_CHECK(krpc_add_argument(&_call, 5, &krpc_encode_callback_double, &heading));
  KRPC_CHECK(krpc_add_argument(&_call, 6, &krpc_encode_callback_double, &pitch));
  KRPC_CHECK(krpc_add_argument(&_call, 7, &krpc_encode_callback_double, &roll));
  KRPC_CHECK(krpc_add_argument(&_call, 8, &krpc_encode_callback_double, &angleOfAttack));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetLanded(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 3, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_double, &altitude));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetOrbit(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double semiMajorAxis, double eccentricity, double inclination, double longitudeOfAscendingNode, double argumentOfPeriapsis, double meanAnomalyAtEpoch, double epoch) {
  krpc_call_t _call;
  krpc_argument_t _arguments[8];
  KRPC_CHECK(krpc_call(&_call, 12, 2, 8, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &semiMajorAxis));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &eccentricity));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_double, &inclination));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_double, &longitudeOfAscendingNode));
  KRPC_CHECK(krpc_add_argument(&_call, 5, &krpc_encode_callback_double, &argumentOfPeriapsis));
  KRPC_CHECK(krpc_add_argument(&_call, 6, &krpc_encode_callback_double, &meanAnomalyAtEpoch));
  KRPC_CHECK(krpc_add_argument(&_call, 7, &krpc_encode_callback_double, &epoch));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll(krpc_connection_t connection, double pitch, double heading, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 12, 7, 5, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &pitch));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &heading));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &roll));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 3));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_object, &referenceFrame));
  }
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 4));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_object, &vessel));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetPosition(krpc_connection_t connection, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 5, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, position));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 1));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * velocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 6, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, velocity));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 1));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UnlockTechnologyTree(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 15, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UpgradeFacilities(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 16, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_AllowPartClipping(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 28, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_AllowPartClipping(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 29, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_BiomesVisible(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 40, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_BiomesVisible(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 41, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_Funds(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 44, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_Funds(krpc_connection_t connection, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 45, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_GravityMultiplier(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 42, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_GravityMultiplier(krpc_connection_t connection, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 43, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 36, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 37, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 34, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 35, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 32, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 33, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 26, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 27, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_InfiniteElectricity(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 20, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_InfiniteElectricity(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 21, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_InfinitePropellant(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 18, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_InfinitePropellant(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 19, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_NoCrashDamage(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 22, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_NoCrashDamage(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 23, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 30, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 31, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 38, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 39, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_Reputation(krpc_connection_t connection, float * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 48, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_float(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Reputation(krpc_connection_t connection, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 49, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_Science(krpc_connection_t connection, float * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 46, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_float(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Science(krpc_connection_t connection, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 47, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UnbreakableJoints(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 24, 0, NULL));
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

static inline krpc_error_t krpc_Debug_set_UnbreakableJoints(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 25, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

#ifdef __cplusplus
}  // extern "C"
#endif
