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

/**
 * The descent profile, which sets the attitude of the vessel during the descent.
 *
 * Each node covers a band of altitude, as a percentage of the height of the atmosphere.
 * A body without an atmosphere uses krpc_Trajectories_DescentProfile_FinalApproach() throughout.
 */
typedef krpc_object_t krpc_Trajectories_DescentProfile_t;
/**
 * A node of the descent profile.
 */
typedef krpc_object_t krpc_Trajectories_DescentProfileNode_t;
/**
 * A patch of the trajectory, at its position in krpc_Trajectories_Patches().
 *
 * Trajectories computes the trajectory again as the vessel flies, and the patch reads
 * the latest one. Throws an exception if the trajectory has fewer patches.
 */
typedef krpc_object_t krpc_Trajectories_Patch_t;

#ifndef KRPC_TYPE_LIST_OBJECT
#define KRPC_TYPE_LIST_OBJECT

typedef struct krpc_list_object_s krpc_list_object_t;
struct krpc_list_object_s {
  size_t size;
  krpc_object_t * items;
};

static inline krpc_error_t krpc_encode_list_object(
  pb_ostream_t * stream, const krpc_list_object_t * value);
static inline krpc_error_t krpc_encode_size_list_object(
  size_t * size, const krpc_list_object_t * value);
static inline bool krpc_encode_callback_list_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_object(
  pb_istream_t * stream, krpc_list_object_t * value);

#endif  // KRPC_TYPE_LIST_OBJECT

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

#ifndef KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_list_tuple_double_double_double_double_s krpc_list_tuple_double_double_double_double_t;
struct krpc_list_tuple_double_double_double_double_s {
  size_t size;
  krpc_tuple_double_double_double_double_t * items;
};

static inline krpc_error_t krpc_encode_list_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_list_tuple_double_double_double_double_t * value);
static inline krpc_error_t krpc_encode_size_list_tuple_double_double_double_double(
  size_t * size, const krpc_list_tuple_double_double_double_double_t * value);
static inline bool krpc_encode_callback_list_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_list_tuple_double_double_double_double_t * value);

#endif  // KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

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
 * The reference for the angle of a descent profile node.
 */
typedef enum {
  /**
   * The angle of attack, from prograde.
   */
  KRPC_TRAJECTORIES_DESCENTPROFILEMODE_ANGLEOFATTACK = 0,
  /**
   * The angle from the horizon.
   */
  KRPC_TRAJECTORIES_DESCENTPROFILEMODE_HORIZON = 1
} krpc_Trajectories_DescentProfileMode_t;

#define KRPC_CLASS_TRAJECTORIES_DESCENTPROFILE 13u, 2411436130u
#define KRPC_CLASS_TRAJECTORIES_DESCENTPROFILENODE 13u, 3566472254u
#define KRPC_CLASS_TRAJECTORIES_PATCH 13u, 1884566654u
#define KRPC_ENUMERATION_TRAJECTORIES_DESCENTPROFILEMODE 13u, 408157748u

/**
 * Clears the target.
 */
static inline krpc_error_t krpc_Trajectories_ClearTarget(krpc_connection_t connection);

/**
 * Fills in the call krpc_Trajectories_ClearTarget() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ClearTarget_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_ClearTarget(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ClearTarget_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The krpc_Trajectories_PlannedDirection(), corrected to steer towards the target.
 *
 * Suitable as the target direction of the auto-pilot.
 * @param connection A connection object.
 * @param returnValue The direction, or `null` without a target.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param referenceFrame The reference frame for the direction.
 */
static inline krpc_error_t krpc_Trajectories_CorrectedDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_CorrectedDirection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_CorrectedDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_CorrectedDirection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_CorrectedDirection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The patch of the trajectory that ends in an impact.
 * @param connection A connection object.
 * @param returnValue The patch, or `null` without an impact.
 */
static inline krpc_error_t krpc_Trajectories_ImpactPatch(krpc_connection_t connection, krpc_Trajectories_Patch_t * returnValue);

/**
 * Fills in the call krpc_Trajectories_ImpactPatch() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ImpactPatch_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_ImpactPatch(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ImpactPatch_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The position of the impact, or `null` without one.
 *
 * In a reference frame that rotates with the body, the position includes the
 * rotation of the body until the impact.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param referenceFrame The reference frame for the position.
 */
static inline krpc_error_t krpc_Trajectories_ImpactPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_ImpactPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ImpactPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_ImpactPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ImpactPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The velocity at the impact, or `null` without one.
 *
 * In a reference frame that rotates with the body, the velocity includes the
 * rotation of the body until the impact.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param referenceFrame The reference frame for the velocity.
 */
static inline krpc_error_t krpc_Trajectories_ImpactVelocity(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_ImpactVelocity() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ImpactVelocity_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_ImpactVelocity(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_ImpactVelocity_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The patches of the trajectory.
 */
static inline krpc_error_t krpc_Trajectories_Patches(krpc_connection_t connection, krpc_list_object_t * returnValue);

/**
 * Fills in the call krpc_Trajectories_Patches() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patches_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_Patches(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patches_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The direction that the descent profile sets for the vessel.
 * @param connection A connection object.
 * @param returnValue The direction, or `null` without a target.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param referenceFrame The reference frame for the direction.
 */
static inline krpc_error_t krpc_Trajectories_PlannedDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_PlannedDirection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_PlannedDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_PlannedDirection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_PlannedDirection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Sets the target.
 * @param connection A connection object.
 * @param referenceFrame The reference frame for the position.
 * @param position The position of the target.
 * @param body The body of the target, by default the body the active vessel
 * orbits.
 */
static inline krpc_error_t krpc_Trajectories_SetTarget(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_CelestialBody_t body);

/**
 * Fills in the call krpc_Trajectories_SetTarget() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_SetTarget_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_CelestialBody_t body);

/**
 * Fills in the call template of krpc_Trajectories_SetTarget(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_SetTarget_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The position of the target, or `null` without a target.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param referenceFrame The reference frame for the position.
 */
static inline krpc_error_t krpc_Trajectories_TargetPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_TargetPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_TargetPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_TargetPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_TargetPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Updates the trajectory.
 */
static inline krpc_error_t krpc_Trajectories_UpdateTrajectory(krpc_connection_t connection);

/**
 * Fills in the call krpc_Trajectories_UpdateTrajectory() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_UpdateTrajectory_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_UpdateTrajectory(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_UpdateTrajectory_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Trajectories updates the trajectory continuously.
 *
 * When `false`, krpc_Trajectories_UpdateTrajectory() updates the trajectory.
 */
static inline krpc_error_t krpc_Trajectories_AlwaysUpdate(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Trajectories_AlwaysUpdate() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_AlwaysUpdate_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_AlwaysUpdate(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_AlwaysUpdate_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Trajectories updates the trajectory continuously.
 *
 * When `false`, krpc_Trajectories_UpdateTrajectory() updates the trajectory.
 */
static inline krpc_error_t krpc_Trajectories_set_AlwaysUpdate(krpc_connection_t connection, bool value);

/**
 * Fills in the call krpc_Trajectories_set_AlwaysUpdate() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_set_AlwaysUpdate_call(krpc_schema_ProcedureCall * procedureCall, bool value);

/**
 * Fills in the call template of krpc_Trajectories_set_AlwaysUpdate(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_set_AlwaysUpdate_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Trajectories is available.
 */
static inline krpc_error_t krpc_Trajectories_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_Trajectories_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The descent profile.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile(krpc_connection_t connection, krpc_Trajectories_DescentProfile_t * returnValue);

/**
 * Fills in the call krpc_Trajectories_DescentProfile() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfile(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The body of the target, or `null` without a target.
 */
static inline krpc_error_t krpc_Trajectories_TargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue);

/**
 * Fills in the call krpc_Trajectories_TargetBody() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_TargetBody_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_TargetBody(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_TargetBody_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Sets every node to an angle of attack, and saves the descent profile.
 * @param connection A connection object.
 * @param aoa The angle of attack in degrees. The default, 180, is retrograde.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Reset(krpc_connection_t connection, double aoa);

/**
 * Fills in the call krpc_Trajectories_DescentProfile_Reset() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Reset_call(krpc_schema_ProcedureCall * procedureCall, double aoa);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfile_Reset(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Reset_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Saves the descent profile to the active vessel.
 *
 * A change to a node applies without saving. Saving keeps it in the saved game.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Save(krpc_connection_t connection);

/**
 * Fills in the call krpc_Trajectories_DescentProfile_Save() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Save_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfile_Save(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Save_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The node for atmospheric entry, from 50% to 100% of the height of the atmosphere.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Entry(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call krpc_Trajectories_DescentProfile_Entry() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Entry_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfile_Entry(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_Entry_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The node for the final approach, below 5% of the height of the atmosphere.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_FinalApproach(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call krpc_Trajectories_DescentProfile_FinalApproach() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_FinalApproach_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfile_FinalApproach(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_FinalApproach_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The node for high altitude, from 25% to 50% of the height of the atmosphere.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_HighAltitude(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call krpc_Trajectories_DescentProfile_HighAltitude() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_HighAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfile_HighAltitude(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_HighAltitude_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The node for low altitude, from 5% to 25% of the height of the atmosphere.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_LowAltitude(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call krpc_Trajectories_DescentProfile_LowAltitude() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_LowAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfile_LowAltitude(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfile_LowAltitude_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle in degrees, from -180 to 180.
 *
 * krpc_Trajectories_DescentProfileNode_Mode() sets what the angle is measured from. The default, 180, is
 * retrograde.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Angle(krpc_connection_t connection, double * returnValue, krpc_Trajectories_DescentProfileNode_t instance);

/**
 * Fills in the call krpc_Trajectories_DescentProfileNode_Angle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfileNode_Angle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Angle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The angle in degrees, from -180 to 180.
 *
 * krpc_Trajectories_DescentProfileNode_Mode() sets what the angle is measured from. The default, 180, is
 * retrograde.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Angle(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t instance, double value);

/**
 * Fills in the call krpc_Trajectories_DescentProfileNode_set_Angle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance, double value);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfileNode_set_Angle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Angle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether krpc_Trajectories_DescentProfileNode_Angle() is the angle of attack or the angle from the horizon.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Mode(krpc_connection_t connection, krpc_Trajectories_DescentProfileMode_t * returnValue, krpc_Trajectories_DescentProfileNode_t instance);

/**
 * Fills in the call krpc_Trajectories_DescentProfileNode_Mode() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Mode_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfileNode_Mode(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Mode_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether krpc_Trajectories_DescentProfileNode_Angle() is the angle of attack or the angle from the horizon.
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Mode(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t instance, krpc_Trajectories_DescentProfileMode_t value);

/**
 * Fills in the call krpc_Trajectories_DescentProfileNode_set_Mode() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Mode_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance, krpc_Trajectories_DescentProfileMode_t value);

/**
 * Fills in the call template of krpc_Trajectories_DescentProfileNode_set_Mode(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Mode_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The points of an atmospheric patch, or `null` for a patch in space.
 *
 * Each point is a tuple `(ut, x, y, z)`. In a reference frame that rotates with
 * krpc_Trajectories_Patch_Body(), the positions include the rotation of the body until each point.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param instance The object to call the method on.
 * @param referenceFrame The reference frame for the positions.
 */
static inline krpc_error_t krpc_Trajectories_Patch_AtmosphericTrajectory(krpc_connection_t connection, krpc_list_tuple_double_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_Patch_AtmosphericTrajectory() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_AtmosphericTrajectory_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_Patch_AtmosphericTrajectory(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_AtmosphericTrajectory_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The position of the impact, or `null` without one.
 *
 * In a reference frame that rotates with krpc_Trajectories_Patch_Body(), the position includes
 * the rotation of the body until the impact.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param instance The object to call the method on.
 * @param referenceFrame The reference frame for the position.
 */
static inline krpc_error_t krpc_Trajectories_Patch_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_Patch_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_Patch_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The velocity at the impact, or `null` without one.
 *
 * In a reference frame that rotates with krpc_Trajectories_Patch_Body(), the velocity includes
 * the rotation of the body until the impact.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param instance The object to call the method on.
 * @param referenceFrame The reference frame for the velocity.
 */
static inline krpc_error_t krpc_Trajectories_Patch_Velocity(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call krpc_Trajectories_Patch_Velocity() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Velocity_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame);

/**
 * Fills in the call template of krpc_Trajectories_Patch_Velocity(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Velocity_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the patch is inside an atmosphere.
 */
static inline krpc_error_t krpc_Trajectories_Patch_Atmospheric(krpc_connection_t connection, bool * returnValue, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call krpc_Trajectories_Patch_Atmospheric() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Atmospheric_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call template of krpc_Trajectories_Patch_Atmospheric(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Atmospheric_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The celestial body that the patch is relative to.
 */
static inline krpc_error_t krpc_Trajectories_Patch_Body(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call krpc_Trajectories_Patch_Body() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Body_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call template of krpc_Trajectories_Patch_Body(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_Body_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The universal time at the end of the patch, in seconds.
 *
 * For a patch that ends in an impact, this is the time of the impact.
 */
static inline krpc_error_t krpc_Trajectories_Patch_EndUT(krpc_connection_t connection, double * returnValue, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call krpc_Trajectories_Patch_EndUT() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_EndUT_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call template of krpc_Trajectories_Patch_EndUT(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_EndUT_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The orbit of a patch in space, or `null` for an atmospheric patch.
 */
static inline krpc_error_t krpc_Trajectories_Patch_OrbitalTrajectory(krpc_connection_t connection, krpc_SpaceCenter_Orbit_t * returnValue, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call krpc_Trajectories_Patch_OrbitalTrajectory() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_OrbitalTrajectory_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call template of krpc_Trajectories_Patch_OrbitalTrajectory(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_OrbitalTrajectory_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The universal time at the start of the patch, in seconds.
 */
static inline krpc_error_t krpc_Trajectories_Patch_StartUT(krpc_connection_t connection, double * returnValue, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call krpc_Trajectories_Patch_StartUT() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_StartUT_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance);

/**
 * Fills in the call template of krpc_Trajectories_Patch_StartUT(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Trajectories_Patch_StartUT_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

#ifndef KRPC_IMPL_TYPE_LIST_OBJECT
#define KRPC_IMPL_TYPE_LIST_OBJECT

static inline bool krpc_encode_callback_items_list_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_object_t * value = (const krpc_list_object_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_object(&size, value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_object(stream, value->items[i]));
  }
  return true;
}

static inline krpc_error_t krpc_encode_list_object(
  pb_ostream_t * stream, const krpc_list_object_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_object;
  message.items.arg = (krpc_list_object_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_object(
  size_t * size, const krpc_list_object_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_object(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_object");
  krpc_list_object_t * value = (krpc_list_object_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_object(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_object");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_object(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_list_object(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_object_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_object_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_object_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_object(stream, &state->value->items[i]));
  return true;
}

static inline krpc_error_t krpc_decode_list_object(
  pb_istream_t * stream, krpc_list_object_t * value) {
  typedef struct State { size_t capacity; krpc_list_object_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_object_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_object_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_object;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_OBJECT

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

#ifndef KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static inline bool krpc_encode_callback_items_list_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_tuple_double_double_double_double_t * value = (const krpc_list_tuple_double_double_double_double_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double_double_double(&size, &value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double_double(stream, &value->items[i]));
  }
  return true;
}

static inline krpc_error_t krpc_encode_list_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_list_tuple_double_double_double_double_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_tuple_double_double_double_double;
  message.items.arg = (krpc_list_tuple_double_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_tuple_double_double_double_double(
  size_t * size, const krpc_list_tuple_double_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_tuple_double_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_tuple_double_double_double_double");
  krpc_list_tuple_double_double_double_double_t * value = (krpc_list_tuple_double_double_double_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_tuple_double_double_double_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_tuple_double_double_double_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_tuple_double_double_double_double(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_list_tuple_double_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_tuple_double_double_double_double_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_tuple_double_double_double_double_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_double_double_double_double_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_tuple_double_double_double_double(stream, &state->value->items[i]));
  return true;
}

static inline krpc_error_t krpc_decode_list_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_list_tuple_double_double_double_double_t * value) {
  typedef struct State { size_t capacity; krpc_list_tuple_double_double_double_double_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_tuple_double_double_double_double_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_double_double_double_double_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_tuple_double_double_double_double;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

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

static inline krpc_error_t krpc_Trajectories_ClearTarget(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 3106207673, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ClearTarget_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3106207673, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ClearTarget_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3106207673, 0);
}

static inline krpc_error_t krpc_Trajectories_CorrectedDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 3329709977, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_CorrectedDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3329709977, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_CorrectedDirection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3329709977, 0);
}

static inline krpc_error_t krpc_Trajectories_ImpactPatch(krpc_connection_t connection, krpc_Trajectories_Patch_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 2211762164, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      *returnValue = KRPC_NULL;
    } else {
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ImpactPatch_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 2211762164, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ImpactPatch_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 2211762164, 0);
}

static inline krpc_error_t krpc_Trajectories_ImpactPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 1903878600, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ImpactPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1903878600, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ImpactPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1903878600, 0);
}

static inline krpc_error_t krpc_Trajectories_ImpactVelocity(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 655808215, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ImpactVelocity_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 655808215, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_ImpactVelocity_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 655808215, 0);
}

static inline krpc_error_t krpc_Trajectories_Patches(krpc_connection_t connection, krpc_list_object_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 1434526236, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_object(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patches_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1434526236, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patches_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1434526236, 0);
}

static inline krpc_error_t krpc_Trajectories_PlannedDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 3019775691, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_PlannedDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3019775691, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_PlannedDirection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3019775691, 0);
}

static inline krpc_error_t krpc_Trajectories_SetTarget(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_CelestialBody_t body) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 13, 1410374768, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, position));
  if (body == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 2));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &body));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_SetTarget_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_CelestialBody_t body) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1410374768, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, position));
  if (body == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 2));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_object, &body));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_SetTarget_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1410374768, 0);
}

static inline krpc_error_t krpc_Trajectories_TargetPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 3403783804, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_TargetPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3403783804, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_TargetPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3403783804, 0);
}

static inline krpc_error_t krpc_Trajectories_UpdateTrajectory(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 3478860866, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_UpdateTrajectory_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3478860866, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_UpdateTrajectory_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3478860866, 0);
}

static inline krpc_error_t krpc_Trajectories_AlwaysUpdate(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 4228658370, 0, NULL));
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

static inline krpc_error_t krpc_Trajectories_AlwaysUpdate_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 4228658370, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_AlwaysUpdate_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 4228658370, 0);
}

static inline krpc_error_t krpc_Trajectories_set_AlwaysUpdate(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 2324259664, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_set_AlwaysUpdate_call(krpc_schema_ProcedureCall * procedureCall, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 2324259664, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_set_AlwaysUpdate_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 2324259664, 0);
}

static inline krpc_error_t krpc_Trajectories_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_Trajectories_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 265274134, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfile(krpc_connection_t connection, krpc_Trajectories_DescentProfile_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 2053896628, 0, NULL));
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

static inline krpc_error_t krpc_Trajectories_DescentProfile_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 2053896628, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 2053896628, 0);
}

static inline krpc_error_t krpc_Trajectories_TargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 1025347416, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      *returnValue = KRPC_NULL;
    } else {
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_TargetBody_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1025347416, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_TargetBody_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1025347416, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Entry(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 3826087681, 1, _arguments));
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

static inline krpc_error_t krpc_Trajectories_DescentProfile_Entry_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3826087681, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Entry_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3826087681, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_FinalApproach(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 3557082180, 1, _arguments));
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

static inline krpc_error_t krpc_Trajectories_DescentProfile_FinalApproach_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3557082180, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_FinalApproach_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3557082180, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_HighAltitude(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 4148987762, 1, _arguments));
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

static inline krpc_error_t krpc_Trajectories_DescentProfile_HighAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 4148987762, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_HighAltitude_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 4148987762, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_LowAltitude(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t * returnValue, krpc_Trajectories_DescentProfile_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 778315935, 1, _arguments));
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

static inline krpc_error_t krpc_Trajectories_DescentProfile_LowAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfile_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 778315935, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_LowAltitude_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 778315935, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Reset(krpc_connection_t connection, double aoa) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 2100713411, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &aoa));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Reset_call(krpc_schema_ProcedureCall * procedureCall, double aoa) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 2100713411, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_double, &aoa));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Reset_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 2100713411, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Save(krpc_connection_t connection) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 13, 3106151903, 0, NULL));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Save_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3106151903, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfile_Save_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3106151903, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Angle(krpc_connection_t connection, double * returnValue, krpc_Trajectories_DescentProfileNode_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 1617721680, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1617721680, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Angle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1617721680, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Angle(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 13, 984074165, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 984074165, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Angle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 984074165, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Mode(krpc_connection_t connection, krpc_Trajectories_DescentProfileMode_t * returnValue, krpc_Trajectories_DescentProfileNode_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 1397451985, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Mode_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1397451985, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_Mode_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1397451985, 0);
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Mode(krpc_connection_t connection, krpc_Trajectories_DescentProfileNode_t instance, krpc_Trajectories_DescentProfileMode_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 13, 197448288, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Mode_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_DescentProfileNode_t instance, krpc_Trajectories_DescentProfileMode_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 197448288, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_DescentProfileNode_set_Mode_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 197448288, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_AtmosphericTrajectory(krpc_connection_t connection, krpc_list_tuple_double_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 13, 2874046619, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_list_tuple_double_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_AtmosphericTrajectory_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 2874046619, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_AtmosphericTrajectory_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 2874046619, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 13, 3410829938, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3410829938, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3410829938, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_Velocity(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, bool * returnValueIsNull, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 13, 290263365, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      if (returnValueIsNull)
        *returnValueIsNull = true;
    } else {
      if (returnValueIsNull)
        *returnValueIsNull = false;
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_Velocity_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance, krpc_SpaceCenter_ReferenceFrame_t referenceFrame) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 290263365, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_Velocity_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 290263365, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_Atmospheric(krpc_connection_t connection, bool * returnValue, krpc_Trajectories_Patch_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 676791880, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_Trajectories_Patch_Atmospheric_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 676791880, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_Atmospheric_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 676791880, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_Body(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_Trajectories_Patch_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 1352751993, 1, _arguments));
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

static inline krpc_error_t krpc_Trajectories_Patch_Body_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1352751993, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_Body_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1352751993, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_EndUT(krpc_connection_t connection, double * returnValue, krpc_Trajectories_Patch_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 1309222221, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_Trajectories_Patch_EndUT_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 1309222221, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_EndUT_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 1309222221, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_OrbitalTrajectory(krpc_connection_t connection, krpc_SpaceCenter_Orbit_t * returnValue, krpc_Trajectories_Patch_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 703894387, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    if (_result.message.is_null) {
      *returnValue = KRPC_NULL;
    } else {
      pb_istream_t _stream;
      KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
      KRPC_CHECK(krpc_decode_object(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_OrbitalTrajectory_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 703894387, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_OrbitalTrajectory_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 703894387, 0);
}

static inline krpc_error_t krpc_Trajectories_Patch_StartUT(krpc_connection_t connection, double * returnValue, krpc_Trajectories_Patch_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 13, 3850804812, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_Trajectories_Patch_StartUT_call(krpc_schema_ProcedureCall * procedureCall, krpc_Trajectories_Patch_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 13, 3850804812, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Trajectories_Patch_StartUT_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 13, 3850804812, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
