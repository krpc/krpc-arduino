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

/**
 * Exert a constant force on a part, acting at the given position.
 * @param connection A connection object.
 * @param returnValue An object that can be used to remove or modify the force.
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
 * Fills in the call krpc_Debug_AddForce() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_AddForce_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Debug_AddForce(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_AddForce_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Rotate a vessel about the given axis, in its own reference frame, by the given angle.
 * @param connection A connection object.
 * @param angle Angle to rotate by, in degrees.
 * @param axis Axis to rotate about.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_ApplyRotation(krpc_connection_t connection, double angle, const krpc_tuple_double_double_double_t * axis, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_Debug_ApplyRotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_ApplyRotation_call(krpc_schema_ProcedureCall * procedureCall, double angle, const krpc_tuple_double_double_double_t * axis, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_Debug_ApplyRotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_ApplyRotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fill every resource tank on a vessel to its maximum capacity.
 * @param connection A connection object.
 * @param vessel Vessel to fill. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_FillAllResources(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_Debug_FillAllResources() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_FillAllResources_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_Debug_FillAllResources(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_FillAllResources_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fill the tanks of a single resource on a vessel to their maximum capacity.
 * @param connection A connection object.
 * @param resourceName Name of the resource to fill, for example
 * `"LiquidFuel"`.
 * @param vessel Vessel to fill. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_FillResources(krpc_connection_t connection, const char * resourceName, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_Debug_FillResources() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_FillResources_call(krpc_schema_ProcedureCall * procedureCall, const char * resourceName, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_Debug_FillResources(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_FillResources_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Exert an instantaneous force on a part, acting at the given position.
 * @param connection A connection object.
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
 * Fills in the call krpc_Debug_InstantaneousForce() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_InstantaneousForce_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Debug_InstantaneousForce(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_InstantaneousForce_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Raise every kerbal in the roster to the highest experience level.
 */
static inline krpc_error_t krpc_Debug_MaxKerbalExperience(krpc_connection_t connection);

/**
 * Fills in the call krpc_Debug_MaxKerbalExperience() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_MaxKerbalExperience_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_MaxKerbalExperience(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_MaxKerbalExperience_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the angular velocity of a vessel, expressed in the given reference frame. Pass a
 * zero vector to stop the vessel rotating.
 *
 * The whole vessel is put into a rigid rotation about its center of mass, so it spins in
 * place rather than shearing apart or translating.
 * @param connection A connection object.
 * @param angularVelocity Angular velocity, in rad/s. The direction
 * is the axis of rotation and the magnitude is the rate.
 * @param referenceFrame Reference frame the angular velocity is in. Defaults to
 * the vessel's surface reference frame.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_SetAngularVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * angularVelocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_Debug_SetAngularVelocity() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetAngularVelocity_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * angularVelocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_Debug_SetAngularVelocity(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetAngularVelocity_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Move the active vessel onto a circular orbit around a body.
 * @param connection A connection object.
 * @param body Body to orbit.
 * @param altitude Altitude of the orbit, in meters above sea level.
 */
static inline krpc_error_t krpc_Debug_SetCircularOrbit(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double altitude);

/**
 * Fills in the call krpc_Debug_SetCircularOrbit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetCircularOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double altitude);

/**
 * Fills in the call template of krpc_Debug_SetCircularOrbit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetCircularOrbit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Point a vessel along the given direction in the given reference frame, and stop it
 * rotating. This is krpc_Debug_SetPitchHeadingRoll() with a pointing vector instead
 * of a pitch and heading, matching the attitude the autopilot holds for the same
 * target direction and roll.
 * @param connection A connection object.
 * @param direction Direction to point the nose of the vessel in.
 * @param roll Target roll, in degrees, or `NaN` to leave the roll
 * uncontrolled.
 * @param referenceFrame Reference frame the direction and roll are in. Defaults
 * to the vessel's surface reference frame.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_SetDirection(krpc_connection_t connection, const krpc_tuple_double_double_double_t * direction, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_Debug_SetDirection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetDirection_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_Debug_SetDirection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetDirection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Place the active vessel in atmospheric flight over the given point: at the given altitude
 * and airspeed, pointing along the given heading at the given pitch and roll, and
 * let physics resume so that it is flying. Use this to set up an in-air scenario
 * without flying the craft up from the runway.
 *
 * The pitch, heading and roll match those reported by the vessel's
 * krpc_SpaceCenter_Flight_t.
 * @param connection A connection object.
 * @param body Body to fly over.
 * @param latitude Latitude in degrees.
 * @param longitude Longitude in degrees.
 * @param altitude Altitude in meters above sea level.
 * @param speed Airspeed in m/s, relative to the surface.
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
 * Fills in the call krpc_Debug_SetFlight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetFlight_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude, double speed, double heading, double pitch, double roll, double angleOfAttack);

/**
 * Fills in the call template of krpc_Debug_SetFlight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetFlight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Place the active vessel on the surface of a body at the given latitude and longitude,
 * and wait for it to come to rest.
 * @param connection A connection object.
 * @param body Body to land on.
 * @param latitude Latitude in degrees.
 * @param longitude Longitude in degrees.
 * @param altitude Height above the terrain to settle at, in meters.
 * Defaults to 0, resting on the surface.
 */
static inline krpc_error_t krpc_Debug_SetLanded(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude);

/**
 * Fills in the call krpc_Debug_SetLanded() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetLanded_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude);

/**
 * Fills in the call template of krpc_Debug_SetLanded(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetLanded_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Move the active vessel onto the orbit with the given orbital elements. The angles use
 * the same units and conventions as krpc_SpaceCenter_Orbit_t.
 * @param connection A connection object.
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
 * Fills in the call krpc_Debug_SetOrbit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double semiMajorAxis, double eccentricity, double inclination, double longitudeOfAscendingNode, double argumentOfPeriapsis, double meanAnomalyAtEpoch, double epoch);

/**
 * Fills in the call template of krpc_Debug_SetOrbit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetOrbit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the attitude of a vessel to the given pitch, heading and roll in the given
 * reference frame, and stop it rotating. Lets a script start from a fixed, still
 * pose without first flying the autopilot there.
 *
 * The angles match those reported by the vessel's
 * krpc_SpaceCenter_Flight_t.
 * @param connection A connection object.
 * @param pitch Target pitch, in degrees.
 * @param heading Target heading, in degrees.
 * @param roll Target roll, in degrees.
 * @param referenceFrame Reference frame the angles are in. Defaults to the
 * vessel's surface reference frame.
 * @param vessel Vessel to rotate. Defaults to the active vessel.
 */
static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll(krpc_connection_t connection, double pitch, double heading, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_Debug_SetPitchHeadingRoll() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll_call(krpc_schema_ProcedureCall * procedureCall, double pitch, double heading, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_Debug_SetPitchHeadingRoll(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Move the active vessel to the given position, leaving its velocity as it is. To put it
 * alongside another vessel, pass a position in that vessel's reference frame.
 *
 * This is the inverse of krpc_SpaceCenter_Vessel_Position() in the same
 * reference frame.
 * @param connection A connection object.
 * @param position Position of the vessel's center of mass, in meters.
 * @param referenceFrame Reference frame the position is in. Defaults to the
 * reference frame of the body being orbited.
 */
static inline krpc_error_t krpc_Debug_SetPosition(krpc_connection_t connection, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Debug_SetPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetPosition_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Debug_SetPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the velocity of the active vessel, leaving it where it is. The vessel is moved onto the
 * orbit that passes through its current position at the new velocity, so this works
 * in orbit and in the atmosphere alike.
 *
 * This is the inverse of krpc_SpaceCenter_Vessel_Velocity() in the same
 * reference frame.
 * @param connection A connection object.
 * @param velocity Velocity in m/s.
 * @param referenceFrame Reference frame the velocity is in. Defaults to the
 * reference frame of the body being orbited, which rotates with it, so a zero velocity
 * leaves the vessel at rest relative to the ground.
 */
static inline krpc_error_t krpc_Debug_SetVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * velocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Debug_SetVelocity() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetVelocity_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * velocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Debug_SetVelocity(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_SetVelocity_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Research every node in the technology tree and purchase every part in it.
 * Only available in career and science mode.
 */
static inline krpc_error_t krpc_Debug_UnlockTechnologyTree(krpc_connection_t connection);

/**
 * Fills in the call krpc_Debug_UnlockTechnologyTree() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_UnlockTechnologyTree_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_UnlockTechnologyTree(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_UnlockTechnologyTree_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Upgrade every building at the space center to its highest level.
 * Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_UpgradeFacilities(krpc_connection_t connection);

/**
 * Fills in the call krpc_Debug_UpgradeFacilities() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_UpgradeFacilities_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_UpgradeFacilities(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_UpgradeFacilities_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts may be placed so that they intersect one another in the editor.
 */
static inline krpc_error_t krpc_Debug_AllowPartClipping(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_AllowPartClipping() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_AllowPartClipping_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_AllowPartClipping(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_AllowPartClipping_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts may be placed so that they intersect one another in the editor.
 */
static inline krpc_error_t krpc_Debug_set_AllowPartClipping(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_AllowPartClipping() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_AllowPartClipping_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_AllowPartClipping(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_AllowPartClipping_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether biome boundaries are drawn on the surface of bodies.
 */
static inline krpc_error_t krpc_Debug_BiomesVisible(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_BiomesVisible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_BiomesVisible_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_BiomesVisible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_BiomesVisible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether biome boundaries are drawn on the surface of bodies.
 */
static inline krpc_error_t krpc_Debug_set_BiomesVisible(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_BiomesVisible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_BiomesVisible_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_BiomesVisible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_BiomesVisible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number of funds the player has. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_Funds(krpc_connection_t connection, double * returnValue);

/**
 * Fills in the call krpc_Debug_Funds() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_Funds_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_Funds(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_Funds_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number of funds the player has. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_set_Funds(krpc_connection_t connection, double value);

/**
 * Fills in the call krpc_Debug_set_Funds() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_Funds_call(krpc_schema_ProcedureCall * procedureCall, double value);

/**
 * Fills in the call template of krpc_Debug_set_Funds(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_Funds_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Multiplier applied to the force of gravity on every vessel. 1 is normal gravity,
 * 0 is weightlessness.
 */
static inline krpc_error_t krpc_Debug_GravityMultiplier(krpc_connection_t connection, double * returnValue);

/**
 * Fills in the call krpc_Debug_GravityMultiplier() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_GravityMultiplier_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_GravityMultiplier(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_GravityMultiplier_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Multiplier applied to the force of gravity on every vessel. 1 is normal gravity,
 * 0 is weightlessness.
 */
static inline krpc_error_t krpc_Debug_set_GravityMultiplier(krpc_connection_t connection, double value);

/**
 * Fills in the call krpc_Debug_set_GravityMultiplier() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_GravityMultiplier_call(krpc_schema_ProcedureCall * procedureCall, double value);

/**
 * Fills in the call template of krpc_Debug_set_GravityMultiplier(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_GravityMultiplier_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether contracts are offered regardless of the agency mindset that normally
 * restricts which ones appear.
 */
static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_IgnoreAgencyMindsetOnContracts() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_IgnoreAgencyMindsetOnContracts(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether contracts are offered regardless of the agency mindset that normally
 * restricts which ones appear.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_IgnoreAgencyMindsetOnContracts() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_IgnoreAgencyMindsetOnContracts(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether EVA construction may move parts heavier than a kerbal can normally carry.
 */
static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_IgnoreEVAConstructionMassLimit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_IgnoreEVAConstructionMassLimit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether EVA construction may move parts heavier than a kerbal can normally carry.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_IgnoreEVAConstructionMassLimit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_IgnoreEVAConstructionMassLimit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether a kerbal's inventory may hold more than its slot and mass limits allow.
 */
static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_IgnoreKerbalInventoryLimits() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_IgnoreKerbalInventoryLimits(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether a kerbal's inventory may hold more than its slot and mass limits allow.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_IgnoreKerbalInventoryLimits() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_IgnoreKerbalInventoryLimits(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts survive temperatures above their maximum, instead of exploding.
 */
static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_IgnoreMaxTemperature() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_IgnoreMaxTemperature(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts survive temperatures above their maximum, instead of exploding.
 */
static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_IgnoreMaxTemperature() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_IgnoreMaxTemperature(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts draw no electric charge.
 */
static inline krpc_error_t krpc_Debug_InfiniteElectricity(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_InfiniteElectricity() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_InfiniteElectricity_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_InfiniteElectricity(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_InfiniteElectricity_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts draw no electric charge.
 */
static inline krpc_error_t krpc_Debug_set_InfiniteElectricity(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_InfiniteElectricity() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_InfiniteElectricity_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_InfiniteElectricity(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_InfiniteElectricity_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether engines and RCS thrusters draw no propellant.
 */
static inline krpc_error_t krpc_Debug_InfinitePropellant(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_InfinitePropellant() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_InfinitePropellant_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_InfinitePropellant(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_InfinitePropellant_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether engines and RCS thrusters draw no propellant.
 */
static inline krpc_error_t krpc_Debug_set_InfinitePropellant(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_InfinitePropellant() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_InfinitePropellant_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_InfinitePropellant(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_InfinitePropellant_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts survive collisions that would otherwise destroy them.
 */
static inline krpc_error_t krpc_Debug_NoCrashDamage(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_NoCrashDamage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_NoCrashDamage_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_NoCrashDamage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_NoCrashDamage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts survive collisions that would otherwise destroy them.
 */
static inline krpc_error_t krpc_Debug_set_NoCrashDamage(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_NoCrashDamage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_NoCrashDamage_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_NoCrashDamage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_NoCrashDamage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts may be attached in any orientation, rather than only the ones their
 * attachment nodes allow.
 */
static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_NonStrictAttachmentOrientation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_NonStrictAttachmentOrientation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether parts may be attached in any orientation, rather than only the ones their
 * attachment nodes allow.
 */
static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_NonStrictAttachmentOrientation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_NonStrictAttachmentOrientation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the game pauses whenever a vessel comes off rails.
 */
static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_PauseOnVesselUnpack() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_PauseOnVesselUnpack(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the game pauses whenever a vessel comes off rails.
 */
static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_PauseOnVesselUnpack() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_PauseOnVesselUnpack(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The player's reputation. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_Reputation(krpc_connection_t connection, float * returnValue);

/**
 * Fills in the call krpc_Debug_Reputation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_Reputation_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_Reputation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_Reputation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The player's reputation. Only available in career mode.
 */
static inline krpc_error_t krpc_Debug_set_Reputation(krpc_connection_t connection, float value);

/**
 * Fills in the call krpc_Debug_set_Reputation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_Reputation_call(krpc_schema_ProcedureCall * procedureCall, float value);

/**
 * Fills in the call template of krpc_Debug_set_Reputation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_Reputation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The amount of science the player has. Only available in career and science mode.
 */
static inline krpc_error_t krpc_Debug_Science(krpc_connection_t connection, float * returnValue);

/**
 * Fills in the call krpc_Debug_Science() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_Science_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_Science(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_Science_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The amount of science the player has. Only available in career and science mode.
 */
static inline krpc_error_t krpc_Debug_set_Science(krpc_connection_t connection, float value);

/**
 * Fills in the call krpc_Debug_set_Science() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_Science_call(krpc_schema_ProcedureCall * procedureCall, float value);

/**
 * Fills in the call template of krpc_Debug_set_Science(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_Science_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the joints between parts are rigid and cannot break.
 */
static inline krpc_error_t krpc_Debug_UnbreakableJoints(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Debug_UnbreakableJoints() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_UnbreakableJoints_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Debug_UnbreakableJoints(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_UnbreakableJoints_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the joints between parts are rigid and cannot break.
 */
static inline krpc_error_t krpc_Debug_set_UnbreakableJoints(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Debug_set_UnbreakableJoints() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_UnbreakableJoints_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Debug_set_UnbreakableJoints(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Debug_set_UnbreakableJoints_call_template(krpc_schema_ProcedureCall * procedureCall);

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

static inline krpc_error_t krpc_Debug_AddForce(krpc_connection_t connection, krpc_SpaceCenter_Force_t * returnValue, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 2035699119, 4, _arguments));
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

static inline krpc_error_t krpc_Debug_AddForce_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2035699119, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &part));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, force));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_AddForce_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2035699119, 0);
}

static inline krpc_error_t krpc_Debug_ApplyRotation(krpc_connection_t connection, double angle, const krpc_tuple_double_double_double_t * axis, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 12, 2197835217, 3, _arguments));
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

static inline krpc_error_t krpc_Debug_ApplyRotation_call(krpc_schema_ProcedureCall * procedureCall, double angle, const krpc_tuple_double_double_double_t * axis, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2197835217, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &angle));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, axis));
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 2));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_object, &vessel));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_ApplyRotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2197835217, 0);
}

static inline krpc_error_t krpc_Debug_FillAllResources(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 1029007538, 1, _arguments));
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

static inline krpc_error_t krpc_Debug_FillAllResources_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1029007538, 1));
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 0));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_FillAllResources_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1029007538, 0);
}

static inline krpc_error_t krpc_Debug_FillResources(krpc_connection_t connection, const char * resourceName, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 1439281140, 2, _arguments));
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

static inline krpc_error_t krpc_Debug_FillResources_call(krpc_schema_ProcedureCall * procedureCall, const char * resourceName, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1439281140, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_string, &resourceName));
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &vessel));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_FillResources_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1439281140, 0);
}

static inline krpc_error_t krpc_Debug_InstantaneousForce(krpc_connection_t connection, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 2928951935, 4, _arguments));
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

static inline krpc_error_t krpc_Debug_InstantaneousForce_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part, const krpc_tuple_double_double_double_t * force, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2928951935, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &part));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, force));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_InstantaneousForce_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2928951935, 0);
}

static inline krpc_error_t krpc_Debug_MaxKerbalExperience(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 3073672985, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_MaxKerbalExperience_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3073672985, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_MaxKerbalExperience_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3073672985, 0);
}

static inline krpc_error_t krpc_Debug_SetAngularVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * angularVelocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 12, 920618650, 3, _arguments));
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

static inline krpc_error_t krpc_Debug_SetAngularVelocity_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * angularVelocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 920618650, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, angularVelocity));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  }
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 2));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_object, &vessel));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetAngularVelocity_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 920618650, 0);
}

static inline krpc_error_t krpc_Debug_SetCircularOrbit(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double altitude) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 3275027074, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &altitude));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetCircularOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double altitude) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3275027074, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &altitude));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetCircularOrbit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3275027074, 0);
}

static inline krpc_error_t krpc_Debug_SetDirection(krpc_connection_t connection, const krpc_tuple_double_double_double_t * direction, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 3098019753, 4, _arguments));
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

static inline krpc_error_t krpc_Debug_SetDirection_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3098019753, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &roll));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 2));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_object, &referenceFrame));
  }
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 3));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_object, &vessel));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetDirection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3098019753, 0);
}

static inline krpc_error_t krpc_Debug_SetFlight(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude, double speed, double heading, double pitch, double roll, double angleOfAttack) {
  krpc_call_t _call;
  krpc_argument_t _arguments[9];
  KRPC_CHECK(krpc_call(&_call, 12, 4055841821, 9, _arguments));
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

static inline krpc_error_t krpc_Debug_SetFlight_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude, double speed, double heading, double pitch, double roll, double angleOfAttack) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 4055841821, 9));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_double, &altitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_double, &speed));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 5, &krpc_encode_callback_double, &heading));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 6, &krpc_encode_callback_double, &pitch));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 7, &krpc_encode_callback_double, &roll));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 8, &krpc_encode_callback_double, &angleOfAttack));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetFlight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 4055841821, 0);
}

static inline krpc_error_t krpc_Debug_SetLanded(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 12, 2505770738, 4, _arguments));
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

static inline krpc_error_t krpc_Debug_SetLanded_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, double altitude) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2505770738, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_double, &altitude));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetLanded_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2505770738, 0);
}

static inline krpc_error_t krpc_Debug_SetOrbit(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t body, double semiMajorAxis, double eccentricity, double inclination, double longitudeOfAscendingNode, double argumentOfPeriapsis, double meanAnomalyAtEpoch, double epoch) {
  krpc_call_t _call;
  krpc_argument_t _arguments[8];
  KRPC_CHECK(krpc_call(&_call, 12, 3954267084, 8, _arguments));
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

static inline krpc_error_t krpc_Debug_SetOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double semiMajorAxis, double eccentricity, double inclination, double longitudeOfAscendingNode, double argumentOfPeriapsis, double meanAnomalyAtEpoch, double epoch) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3954267084, 8));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &semiMajorAxis));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &eccentricity));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_double, &inclination));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_double, &longitudeOfAscendingNode));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 5, &krpc_encode_callback_double, &argumentOfPeriapsis));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 6, &krpc_encode_callback_double, &meanAnomalyAtEpoch));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 7, &krpc_encode_callback_double, &epoch));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetOrbit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3954267084, 0);
}

static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll(krpc_connection_t connection, double pitch, double heading, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 12, 2001187082, 5, _arguments));
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

static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll_call(krpc_schema_ProcedureCall * procedureCall, double pitch, double heading, double roll, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2001187082, 5));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &pitch));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &heading));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &roll));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 3));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_object, &referenceFrame));
  }
  if (vessel == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 4));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_object, &vessel));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetPitchHeadingRoll_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2001187082, 0);
}

static inline krpc_error_t krpc_Debug_SetPosition(krpc_connection_t connection, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 3859924827, 2, _arguments));
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

static inline krpc_error_t krpc_Debug_SetPosition_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3859924827, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, position));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3859924827, 0);
}

static inline krpc_error_t krpc_Debug_SetVelocity(krpc_connection_t connection, const krpc_tuple_double_double_double_t * velocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 12, 3543650289, 2, _arguments));
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

static inline krpc_error_t krpc_Debug_SetVelocity_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * velocity, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3543650289, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, velocity));
  if (referenceFrame == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_SetVelocity_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3543650289, 0);
}

static inline krpc_error_t krpc_Debug_UnlockTechnologyTree(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 1658156401, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UnlockTechnologyTree_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1658156401, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UnlockTechnologyTree_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1658156401, 0);
}

static inline krpc_error_t krpc_Debug_UpgradeFacilities(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 3179475168, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UpgradeFacilities_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3179475168, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UpgradeFacilities_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3179475168, 0);
}

static inline krpc_error_t krpc_Debug_AllowPartClipping(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 2615560750, 0, NULL));
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

static inline krpc_error_t krpc_Debug_AllowPartClipping_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2615560750, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_AllowPartClipping_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2615560750, 0);
}

static inline krpc_error_t krpc_Debug_set_AllowPartClipping(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 4225600089, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_AllowPartClipping_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 4225600089, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_AllowPartClipping_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 4225600089, 0);
}

static inline krpc_error_t krpc_Debug_BiomesVisible(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 928214410, 0, NULL));
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

static inline krpc_error_t krpc_Debug_BiomesVisible_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 928214410, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_BiomesVisible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 928214410, 0);
}

static inline krpc_error_t krpc_Debug_set_BiomesVisible(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 443863755, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_BiomesVisible_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 443863755, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_BiomesVisible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 443863755, 0);
}

static inline krpc_error_t krpc_Debug_Funds(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 1156689296, 0, NULL));
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

static inline krpc_error_t krpc_Debug_Funds_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1156689296, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_Funds_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1156689296, 0);
}

static inline krpc_error_t krpc_Debug_set_Funds(krpc_connection_t connection, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 2209330057, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Funds_call(krpc_schema_ProcedureCall * procedureCall, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2209330057, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Funds_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2209330057, 0);
}

static inline krpc_error_t krpc_Debug_GravityMultiplier(krpc_connection_t connection, double * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 3132129146, 0, NULL));
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

static inline krpc_error_t krpc_Debug_GravityMultiplier_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3132129146, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_GravityMultiplier_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3132129146, 0);
}

static inline krpc_error_t krpc_Debug_set_GravityMultiplier(krpc_connection_t connection, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 951329358, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_GravityMultiplier_call(krpc_schema_ProcedureCall * procedureCall, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 951329358, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_GravityMultiplier_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 951329358, 0);
}

static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 1389679238, 0, NULL));
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

static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1389679238, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreAgencyMindsetOnContracts_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1389679238, 0);
}

static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 85744538, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 85744538, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreAgencyMindsetOnContracts_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 85744538, 0);
}

static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 1065584523, 0, NULL));
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

static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1065584523, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreEVAConstructionMassLimit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1065584523, 0);
}

static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 2617212684, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2617212684, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreEVAConstructionMassLimit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2617212684, 0);
}

static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 2761825116, 0, NULL));
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

static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2761825116, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreKerbalInventoryLimits_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2761825116, 0);
}

static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 1837092172, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1837092172, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreKerbalInventoryLimits_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1837092172, 0);
}

static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 1165681792, 0, NULL));
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

static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1165681792, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_IgnoreMaxTemperature_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1165681792, 0);
}

static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 59774092, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 59774092, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_IgnoreMaxTemperature_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 59774092, 0);
}

static inline krpc_error_t krpc_Debug_InfiniteElectricity(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 4240498745, 0, NULL));
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

static inline krpc_error_t krpc_Debug_InfiniteElectricity_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 4240498745, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_InfiniteElectricity_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 4240498745, 0);
}

static inline krpc_error_t krpc_Debug_set_InfiniteElectricity(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 2589550676, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_InfiniteElectricity_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2589550676, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_InfiniteElectricity_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2589550676, 0);
}

static inline krpc_error_t krpc_Debug_InfinitePropellant(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 450100294, 0, NULL));
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

static inline krpc_error_t krpc_Debug_InfinitePropellant_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 450100294, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_InfinitePropellant_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 450100294, 0);
}

static inline krpc_error_t krpc_Debug_set_InfinitePropellant(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 1580107006, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_InfinitePropellant_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1580107006, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_InfinitePropellant_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1580107006, 0);
}

static inline krpc_error_t krpc_Debug_NoCrashDamage(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 990565722, 0, NULL));
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

static inline krpc_error_t krpc_Debug_NoCrashDamage_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 990565722, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_NoCrashDamage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 990565722, 0);
}

static inline krpc_error_t krpc_Debug_set_NoCrashDamage(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 890186598, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_NoCrashDamage_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 890186598, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_NoCrashDamage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 890186598, 0);
}

static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 606797756, 0, NULL));
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

static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 606797756, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_NonStrictAttachmentOrientation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 606797756, 0);
}

static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 482279160, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 482279160, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_NonStrictAttachmentOrientation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 482279160, 0);
}

static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 1339866956, 0, NULL));
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

static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1339866956, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_PauseOnVesselUnpack_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1339866956, 0);
}

static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 1887234636, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1887234636, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_PauseOnVesselUnpack_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1887234636, 0);
}

static inline krpc_error_t krpc_Debug_Reputation(krpc_connection_t connection, float * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 2394837320, 0, NULL));
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

static inline krpc_error_t krpc_Debug_Reputation_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2394837320, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_Reputation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2394837320, 0);
}

static inline krpc_error_t krpc_Debug_set_Reputation(krpc_connection_t connection, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 348753237, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Reputation_call(krpc_schema_ProcedureCall * procedureCall, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 348753237, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Reputation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 348753237, 0);
}

static inline krpc_error_t krpc_Debug_Science(krpc_connection_t connection, float * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 3850453225, 0, NULL));
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

static inline krpc_error_t krpc_Debug_Science_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 3850453225, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_Science_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 3850453225, 0);
}

static inline krpc_error_t krpc_Debug_set_Science(krpc_connection_t connection, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 2858499727, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Science_call(krpc_schema_ProcedureCall * procedureCall, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2858499727, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_Science_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2858499727, 0);
}

static inline krpc_error_t krpc_Debug_UnbreakableJoints(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 12, 1378116202, 0, NULL));
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

static inline krpc_error_t krpc_Debug_UnbreakableJoints_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 1378116202, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_UnbreakableJoints_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 1378116202, 0);
}

static inline krpc_error_t krpc_Debug_set_UnbreakableJoints(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 12, 2317889998, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_UnbreakableJoints_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 12, 2317889998, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Debug_set_UnbreakableJoints_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 12, 2317889998, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
