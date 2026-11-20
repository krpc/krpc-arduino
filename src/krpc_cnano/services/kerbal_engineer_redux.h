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

#ifndef KRPC_TYPE_KERBALENGINEERREDUX_BURNTIME
#define KRPC_TYPE_KERBALENGINEERREDUX_BURNTIME

typedef struct krpc_KerbalEngineerRedux_BurnTime_s krpc_KerbalEngineerRedux_BurnTime_t;
struct krpc_KerbalEngineerRedux_BurnTime_s {
  double duration;
  double half_duration;
};

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_BurnTime(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_BurnTime_t * value);
static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_BurnTime(
  size_t * size, const krpc_KerbalEngineerRedux_BurnTime_t * value);
static inline bool krpc_encode_callback_KerbalEngineerRedux_BurnTime(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_KerbalEngineerRedux_BurnTime(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_BurnTime_t * value);

#endif  // KRPC_TYPE_KERBALENGINEERREDUX_BURNTIME

#ifndef KRPC_TYPE_KERBALENGINEERREDUX_IMPACT
#define KRPC_TYPE_KERBALENGINEERREDUX_IMPACT

typedef struct krpc_KerbalEngineerRedux_Impact_s krpc_KerbalEngineerRedux_Impact_t;
struct krpc_KerbalEngineerRedux_Impact_s {
  double ut;
  double time_to;
  double latitude;
  double longitude;
  double elevation;
  char * biome;
};

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_Impact(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_Impact_t * value);
static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_Impact(
  size_t * size, const krpc_KerbalEngineerRedux_Impact_t * value);
static inline bool krpc_encode_callback_KerbalEngineerRedux_Impact(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_KerbalEngineerRedux_Impact(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_Impact_t * value);

#endif  // KRPC_TYPE_KERBALENGINEERREDUX_IMPACT

#ifndef KRPC_TYPE_KERBALENGINEERREDUX_RENDEZVOUS
#define KRPC_TYPE_KERBALENGINEERREDUX_RENDEZVOUS

typedef struct krpc_KerbalEngineerRedux_Rendezvous_s krpc_KerbalEngineerRedux_Rendezvous_t;
struct krpc_KerbalEngineerRedux_Rendezvous_s {
  double phase_angle;
  double intercept_angle;
  double time_to_intercept_angle;
  double angle_to_ascending_node;
  double angle_to_descending_node;
  double time_to_ascending_node;
  double time_to_descending_node;
};

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_Rendezvous(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_Rendezvous_t * value);
static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_Rendezvous(
  size_t * size, const krpc_KerbalEngineerRedux_Rendezvous_t * value);
static inline bool krpc_encode_callback_KerbalEngineerRedux_Rendezvous(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_KerbalEngineerRedux_Rendezvous(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_Rendezvous_t * value);

#endif  // KRPC_TYPE_KERBALENGINEERREDUX_RENDEZVOUS

#ifndef KRPC_TYPE_KERBALENGINEERREDUX_SUICIDEBURN
#define KRPC_TYPE_KERBALENGINEERREDUX_SUICIDEBURN

typedef struct krpc_KerbalEngineerRedux_SuicideBurn_s krpc_KerbalEngineerRedux_SuicideBurn_t;
struct krpc_KerbalEngineerRedux_SuicideBurn_s {
  double ut;
  double time_to;
  double altitude;
  double delta_v;
  double distance;
  double duration;
};

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_SuicideBurn(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_SuicideBurn_t * value);
static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_SuicideBurn(
  size_t * size, const krpc_KerbalEngineerRedux_SuicideBurn_t * value);
static inline bool krpc_encode_callback_KerbalEngineerRedux_SuicideBurn(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_KerbalEngineerRedux_SuicideBurn(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_SuicideBurn_t * value);

#endif  // KRPC_TYPE_KERBALENGINEERREDUX_SUICIDEBURN

#ifndef KRPC_TYPE_KERBALENGINEERREDUX_STAGE
#define KRPC_TYPE_KERBALENGINEERREDUX_STAGE

typedef struct krpc_KerbalEngineerRedux_Stage_s krpc_KerbalEngineerRedux_Stage_t;
struct krpc_KerbalEngineerRedux_Stage_s {
  int32_t number;
  double delta_v;
  double total_delta_v;
  double specific_impulse;
  double thrust;
  double available_thrust;
  double twr;
  double available_twr;
  double max_twr;
  double start_mass;
  double mass_lost;
  double resource_mass;
  double burn_time;
  double total_burn_time;
  double available_thrust_torque;
  double thrust_offset_angle;
  double rcs_specific_impulse;
  double rcs_thrust;
  double rcs_start_delta_v;
  double rcs_end_delta_v;
  double rcs_start_twr;
  double rcs_end_twr;
  double rcs_burn_time;
  double start_cost;
  double cost_lost;
  int32_t start_part_count;
  int32_t dropped_part_count;
};

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_Stage_t * value);
static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_Stage(
  size_t * size, const krpc_KerbalEngineerRedux_Stage_t * value);
static inline bool krpc_encode_callback_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_KerbalEngineerRedux_Stage(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_Stage_t * value);

#endif  // KRPC_TYPE_KERBALENGINEERREDUX_STAGE

#ifndef KRPC_TYPE_LIST_KERBALENGINEERREDUX_STAGE
#define KRPC_TYPE_LIST_KERBALENGINEERREDUX_STAGE

typedef struct krpc_list_KerbalEngineerRedux_Stage_s krpc_list_KerbalEngineerRedux_Stage_t;
struct krpc_list_KerbalEngineerRedux_Stage_s {
  size_t size;
  krpc_KerbalEngineerRedux_Stage_t * items;
};

static inline krpc_error_t krpc_encode_list_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const krpc_list_KerbalEngineerRedux_Stage_t * value);
static inline krpc_error_t krpc_encode_size_list_KerbalEngineerRedux_Stage(
  size_t * size, const krpc_list_KerbalEngineerRedux_Stage_t * value);
static inline bool krpc_encode_callback_list_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_KerbalEngineerRedux_Stage(
  pb_istream_t * stream, krpc_list_KerbalEngineerRedux_Stage_t * value);

#endif  // KRPC_TYPE_LIST_KERBALENGINEERREDUX_STAGE

#define KRPC_STRUCT_KERBALENGINEERREDUX_BURNTIME 15u, 3159479257u
#define KRPC_FIELD_KERBALENGINEERREDUX_BURNTIME_DURATION 0
#define KRPC_FIELD_KERBALENGINEERREDUX_BURNTIME_HALFDURATION 1
#define KRPC_STRUCT_KERBALENGINEERREDUX_IMPACT 15u, 222294737u
#define KRPC_FIELD_KERBALENGINEERREDUX_IMPACT_UT 0
#define KRPC_FIELD_KERBALENGINEERREDUX_IMPACT_TIMETO 1
#define KRPC_FIELD_KERBALENGINEERREDUX_IMPACT_LATITUDE 2
#define KRPC_FIELD_KERBALENGINEERREDUX_IMPACT_LONGITUDE 3
#define KRPC_FIELD_KERBALENGINEERREDUX_IMPACT_ELEVATION 4
#define KRPC_FIELD_KERBALENGINEERREDUX_IMPACT_BIOME 5
#define KRPC_STRUCT_KERBALENGINEERREDUX_RENDEZVOUS 15u, 3336555371u
#define KRPC_FIELD_KERBALENGINEERREDUX_RENDEZVOUS_PHASEANGLE 0
#define KRPC_FIELD_KERBALENGINEERREDUX_RENDEZVOUS_INTERCEPTANGLE 1
#define KRPC_FIELD_KERBALENGINEERREDUX_RENDEZVOUS_TIMETOINTERCEPTANGLE 2
#define KRPC_FIELD_KERBALENGINEERREDUX_RENDEZVOUS_ANGLETOASCENDINGNODE 3
#define KRPC_FIELD_KERBALENGINEERREDUX_RENDEZVOUS_ANGLETODESCENDINGNODE 4
#define KRPC_FIELD_KERBALENGINEERREDUX_RENDEZVOUS_TIMETOASCENDINGNODE 5
#define KRPC_FIELD_KERBALENGINEERREDUX_RENDEZVOUS_TIMETODESCENDINGNODE 6
#define KRPC_STRUCT_KERBALENGINEERREDUX_STAGE 15u, 1435010014u
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_NUMBER 0
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_DELTAV 1
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_TOTALDELTAV 2
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_SPECIFICIMPULSE 3
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_THRUST 4
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_AVAILABLETHRUST 5
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_TWR 6
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_AVAILABLETWR 7
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_MAXTWR 8
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_STARTMASS 9
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_MASSLOST 10
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RESOURCEMASS 11
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_BURNTIME 12
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_TOTALBURNTIME 13
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_AVAILABLETHRUSTTORQUE 14
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_THRUSTOFFSETANGLE 15
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RCSSPECIFICIMPULSE 16
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RCSTHRUST 17
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RCSSTARTDELTAV 18
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RCSENDDELTAV 19
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RCSSTARTTWR 20
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RCSENDTWR 21
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_RCSBURNTIME 22
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_STARTCOST 23
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_COSTLOST 24
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_STARTPARTCOUNT 25
#define KRPC_FIELD_KERBALENGINEERREDUX_STAGE_DROPPEDPARTCOUNT 26
#define KRPC_STRUCT_KERBALENGINEERREDUX_SUICIDEBURN 15u, 1181628214u
#define KRPC_FIELD_KERBALENGINEERREDUX_SUICIDEBURN_UT 0
#define KRPC_FIELD_KERBALENGINEERREDUX_SUICIDEBURN_TIMETO 1
#define KRPC_FIELD_KERBALENGINEERREDUX_SUICIDEBURN_ALTITUDE 2
#define KRPC_FIELD_KERBALENGINEERREDUX_SUICIDEBURN_DELTAV 3
#define KRPC_FIELD_KERBALENGINEERREDUX_SUICIDEBURN_DISTANCE 4
#define KRPC_FIELD_KERBALENGINEERREDUX_SUICIDEBURN_DURATION 5

/**
 * The time to burn a delta-v, or `null` if the vessel has too little delta-v.
 * Throws an exception if the vessel is not the active vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param vessel The active vessel.
 * @param deltaV The delta-v, in m/s.
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_BurnTime(krpc_connection_t connection, krpc_KerbalEngineerRedux_BurnTime_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel, double deltaV);

/**
 * Fills in the call krpc_KerbalEngineerRedux_BurnTime() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_BurnTime_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, double deltaV);

/**
 * Fills in the call template of krpc_KerbalEngineerRedux_BurnTime(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_BurnTime_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The stages of the vessel in the editor, lowest stage number first.
 *
 * The last is the first stage to activate, and the list is empty when the editor has no
 * vessel. The thrust-to-weight ratios are for the gravity at the body's surface. The
 * masses leave out the crew.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param body The body to launch from.
 * @param altitude The altitude for the atmospheric pressure, in meters.
 * @param mach The Mach number, for engines whose thrust depends on it.
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_EditorStages(krpc_connection_t connection, krpc_list_KerbalEngineerRedux_Stage_t * returnValue, krpc_SpaceCenter_CelestialBody_t body, double altitude, double mach);

/**
 * Fills in the call krpc_KerbalEngineerRedux_EditorStages() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_EditorStages_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double altitude, double mach);

/**
 * Fills in the call template of krpc_KerbalEngineerRedux_EditorStages(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_EditorStages_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The impact of the vessel with the terrain, or `null` if its orbit does not meet
 * the terrain. Throws an exception if the vessel is not the active vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param vessel The active vessel.
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Impact(krpc_connection_t connection, krpc_KerbalEngineerRedux_Impact_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_KerbalEngineerRedux_Impact() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Impact_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_KerbalEngineerRedux_Impact(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Impact_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The transfer to the vessel's target, or `null` if it has no target, or the
 * target is the body it orbits. Throws an exception if the vessel is not the active
 * vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param vessel The active vessel.
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Rendezvous(krpc_connection_t connection, krpc_KerbalEngineerRedux_Rendezvous_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_KerbalEngineerRedux_Rendezvous() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Rendezvous_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_KerbalEngineerRedux_Rendezvous(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Rendezvous_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The stages of the vessel, lowest stage number first. Throws an exception if the
 * vessel is not the active vessel.
 *
 * The last is the current stage. The thrust and thrust-to-weight ratios are for the
 * pressure and gravity at the vessel's altitude.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel The active vessel.
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Stages(krpc_connection_t connection, krpc_list_KerbalEngineerRedux_Stage_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_KerbalEngineerRedux_Stages() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Stages_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_KerbalEngineerRedux_Stages(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Stages_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The suicide burn that stops the vessel at the terrain, or `null` if its orbit
 * does not meet the terrain or its thrust cannot overcome gravity. Throws an exception
 * if the vessel is not the active vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param vessel The active vessel.
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_SuicideBurn(krpc_connection_t connection, krpc_KerbalEngineerRedux_SuicideBurn_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_KerbalEngineerRedux_SuicideBurn() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_SuicideBurn_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_KerbalEngineerRedux_SuicideBurn(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_SuicideBurn_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Kerbal Engineer Redux is available.
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_KerbalEngineerRedux_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_KerbalEngineerRedux_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalEngineerRedux_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

#ifndef KRPC_IMPL_TYPE_KERBALENGINEERREDUX_BURNTIME
#define KRPC_IMPL_TYPE_KERBALENGINEERREDUX_BURNTIME

static inline bool krpc_encode_callback_items_KerbalEngineerRedux_BurnTime(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_KerbalEngineerRedux_BurnTime_t * value = (const krpc_KerbalEngineerRedux_BurnTime_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->duration));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->duration));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->half_duration));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->half_duration));
  }
  return true;
}

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_BurnTime(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_BurnTime_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_KerbalEngineerRedux_BurnTime;
  message.items.arg = (krpc_KerbalEngineerRedux_BurnTime_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_BurnTime(
  size_t * size, const krpc_KerbalEngineerRedux_BurnTime_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_BurnTime(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_KerbalEngineerRedux_BurnTime(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for KerbalEngineerRedux_BurnTime");
  krpc_KerbalEngineerRedux_BurnTime_t * value = (krpc_KerbalEngineerRedux_BurnTime_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_KerbalEngineerRedux_BurnTime(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for KerbalEngineerRedux_BurnTime");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_BurnTime(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_KerbalEngineerRedux_BurnTime(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_KerbalEngineerRedux_BurnTime_t * value;} State;
  State * state = (State*)(*arg);
  krpc_KerbalEngineerRedux_BurnTime_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->duration));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->half_duration));
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

static inline krpc_error_t krpc_decode_KerbalEngineerRedux_BurnTime(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_BurnTime_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_KerbalEngineerRedux_BurnTime;
  typedef struct State { size_t pos; krpc_KerbalEngineerRedux_BurnTime_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 2)
    KRPC_FAIL(ENCODING, "Too few fields for a KerbalEngineerRedux_BurnTime");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_KERBALENGINEERREDUX_BURNTIME

#ifndef KRPC_IMPL_TYPE_KERBALENGINEERREDUX_IMPACT
#define KRPC_IMPL_TYPE_KERBALENGINEERREDUX_IMPACT

static inline bool krpc_encode_callback_items_KerbalEngineerRedux_Impact(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_KerbalEngineerRedux_Impact_t * value = (const krpc_KerbalEngineerRedux_Impact_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->ut));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->ut));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->time_to));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->time_to));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->latitude));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->latitude));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->longitude));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->longitude));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->elevation));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->elevation));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_string(&size, value->biome));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_string(stream, value->biome));
  }
  return true;
}

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_Impact(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_Impact_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_KerbalEngineerRedux_Impact;
  message.items.arg = (krpc_KerbalEngineerRedux_Impact_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_Impact(
  size_t * size, const krpc_KerbalEngineerRedux_Impact_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_Impact(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_KerbalEngineerRedux_Impact(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for KerbalEngineerRedux_Impact");
  krpc_KerbalEngineerRedux_Impact_t * value = (krpc_KerbalEngineerRedux_Impact_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_KerbalEngineerRedux_Impact(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for KerbalEngineerRedux_Impact");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_Impact(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_KerbalEngineerRedux_Impact(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_KerbalEngineerRedux_Impact_t * value;} State;
  State * state = (State*)(*arg);
  krpc_KerbalEngineerRedux_Impact_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->ut));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->time_to));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->latitude));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->longitude));
    break;
  case 4:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->elevation));
    break;
  case 5:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_string(stream, &value->biome));
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

static inline krpc_error_t krpc_decode_KerbalEngineerRedux_Impact(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_Impact_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_KerbalEngineerRedux_Impact;
  typedef struct State { size_t pos; krpc_KerbalEngineerRedux_Impact_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 6)
    KRPC_FAIL(ENCODING, "Too few fields for a KerbalEngineerRedux_Impact");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_KERBALENGINEERREDUX_IMPACT

#ifndef KRPC_IMPL_TYPE_KERBALENGINEERREDUX_RENDEZVOUS
#define KRPC_IMPL_TYPE_KERBALENGINEERREDUX_RENDEZVOUS

static inline bool krpc_encode_callback_items_KerbalEngineerRedux_Rendezvous(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_KerbalEngineerRedux_Rendezvous_t * value = (const krpc_KerbalEngineerRedux_Rendezvous_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->phase_angle));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->phase_angle));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->intercept_angle));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->intercept_angle));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->time_to_intercept_angle));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->time_to_intercept_angle));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->angle_to_ascending_node));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->angle_to_ascending_node));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->angle_to_descending_node));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->angle_to_descending_node));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->time_to_ascending_node));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->time_to_ascending_node));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->time_to_descending_node));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->time_to_descending_node));
  }
  return true;
}

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_Rendezvous(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_Rendezvous_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_KerbalEngineerRedux_Rendezvous;
  message.items.arg = (krpc_KerbalEngineerRedux_Rendezvous_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_Rendezvous(
  size_t * size, const krpc_KerbalEngineerRedux_Rendezvous_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_Rendezvous(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_KerbalEngineerRedux_Rendezvous(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for KerbalEngineerRedux_Rendezvous");
  krpc_KerbalEngineerRedux_Rendezvous_t * value = (krpc_KerbalEngineerRedux_Rendezvous_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_KerbalEngineerRedux_Rendezvous(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for KerbalEngineerRedux_Rendezvous");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_Rendezvous(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_KerbalEngineerRedux_Rendezvous(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_KerbalEngineerRedux_Rendezvous_t * value;} State;
  State * state = (State*)(*arg);
  krpc_KerbalEngineerRedux_Rendezvous_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->phase_angle));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->intercept_angle));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->time_to_intercept_angle));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->angle_to_ascending_node));
    break;
  case 4:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->angle_to_descending_node));
    break;
  case 5:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->time_to_ascending_node));
    break;
  case 6:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->time_to_descending_node));
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

static inline krpc_error_t krpc_decode_KerbalEngineerRedux_Rendezvous(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_Rendezvous_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_KerbalEngineerRedux_Rendezvous;
  typedef struct State { size_t pos; krpc_KerbalEngineerRedux_Rendezvous_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 7)
    KRPC_FAIL(ENCODING, "Too few fields for a KerbalEngineerRedux_Rendezvous");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_KERBALENGINEERREDUX_RENDEZVOUS

#ifndef KRPC_IMPL_TYPE_KERBALENGINEERREDUX_SUICIDEBURN
#define KRPC_IMPL_TYPE_KERBALENGINEERREDUX_SUICIDEBURN

static inline bool krpc_encode_callback_items_KerbalEngineerRedux_SuicideBurn(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_KerbalEngineerRedux_SuicideBurn_t * value = (const krpc_KerbalEngineerRedux_SuicideBurn_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->ut));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->ut));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->time_to));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->time_to));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->altitude));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->altitude));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->delta_v));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->delta_v));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->distance));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->distance));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->duration));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->duration));
  }
  return true;
}

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_SuicideBurn(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_SuicideBurn_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_KerbalEngineerRedux_SuicideBurn;
  message.items.arg = (krpc_KerbalEngineerRedux_SuicideBurn_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_SuicideBurn(
  size_t * size, const krpc_KerbalEngineerRedux_SuicideBurn_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_SuicideBurn(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_KerbalEngineerRedux_SuicideBurn(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for KerbalEngineerRedux_SuicideBurn");
  krpc_KerbalEngineerRedux_SuicideBurn_t * value = (krpc_KerbalEngineerRedux_SuicideBurn_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_KerbalEngineerRedux_SuicideBurn(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for KerbalEngineerRedux_SuicideBurn");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_SuicideBurn(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_KerbalEngineerRedux_SuicideBurn(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_KerbalEngineerRedux_SuicideBurn_t * value;} State;
  State * state = (State*)(*arg);
  krpc_KerbalEngineerRedux_SuicideBurn_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->ut));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->time_to));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->altitude));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->delta_v));
    break;
  case 4:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->distance));
    break;
  case 5:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->duration));
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

static inline krpc_error_t krpc_decode_KerbalEngineerRedux_SuicideBurn(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_SuicideBurn_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_KerbalEngineerRedux_SuicideBurn;
  typedef struct State { size_t pos; krpc_KerbalEngineerRedux_SuicideBurn_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 6)
    KRPC_FAIL(ENCODING, "Too few fields for a KerbalEngineerRedux_SuicideBurn");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_KERBALENGINEERREDUX_SUICIDEBURN

#ifndef KRPC_IMPL_TYPE_KERBALENGINEERREDUX_STAGE
#define KRPC_IMPL_TYPE_KERBALENGINEERREDUX_STAGE

static inline bool krpc_encode_callback_items_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_KerbalEngineerRedux_Stage_t * value = (const krpc_KerbalEngineerRedux_Stage_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_int32(&size, value->number));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_int32(stream, value->number));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->delta_v));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->delta_v));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->total_delta_v));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->total_delta_v));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->specific_impulse));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->specific_impulse));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->thrust));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->thrust));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->available_thrust));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->available_thrust));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->twr));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->twr));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->available_twr));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->available_twr));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->max_twr));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->max_twr));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->start_mass));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->start_mass));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->mass_lost));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->mass_lost));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->resource_mass));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->resource_mass));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->burn_time));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->burn_time));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->total_burn_time));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->total_burn_time));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->available_thrust_torque));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->available_thrust_torque));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->thrust_offset_angle));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->thrust_offset_angle));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->rcs_specific_impulse));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->rcs_specific_impulse));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->rcs_thrust));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->rcs_thrust));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->rcs_start_delta_v));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->rcs_start_delta_v));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->rcs_end_delta_v));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->rcs_end_delta_v));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->rcs_start_twr));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->rcs_start_twr));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->rcs_end_twr));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->rcs_end_twr));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->rcs_burn_time));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->rcs_burn_time));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->start_cost));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->start_cost));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->cost_lost));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->cost_lost));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_int32(&size, value->start_part_count));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_int32(stream, value->start_part_count));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_int32(&size, value->dropped_part_count));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_int32(stream, value->dropped_part_count));
  }
  return true;
}

static inline krpc_error_t krpc_encode_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const krpc_KerbalEngineerRedux_Stage_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_KerbalEngineerRedux_Stage;
  message.items.arg = (krpc_KerbalEngineerRedux_Stage_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_KerbalEngineerRedux_Stage(
  size_t * size, const krpc_KerbalEngineerRedux_Stage_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_Stage(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for KerbalEngineerRedux_Stage");
  krpc_KerbalEngineerRedux_Stage_t * value = (krpc_KerbalEngineerRedux_Stage_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_KerbalEngineerRedux_Stage(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for KerbalEngineerRedux_Stage");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_Stage(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_KerbalEngineerRedux_Stage(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_KerbalEngineerRedux_Stage_t * value;} State;
  State * state = (State*)(*arg);
  krpc_KerbalEngineerRedux_Stage_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_int32(stream, &value->number));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->delta_v));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->total_delta_v));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->specific_impulse));
    break;
  case 4:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->thrust));
    break;
  case 5:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->available_thrust));
    break;
  case 6:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->twr));
    break;
  case 7:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->available_twr));
    break;
  case 8:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->max_twr));
    break;
  case 9:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->start_mass));
    break;
  case 10:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->mass_lost));
    break;
  case 11:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->resource_mass));
    break;
  case 12:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->burn_time));
    break;
  case 13:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->total_burn_time));
    break;
  case 14:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->available_thrust_torque));
    break;
  case 15:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->thrust_offset_angle));
    break;
  case 16:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->rcs_specific_impulse));
    break;
  case 17:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->rcs_thrust));
    break;
  case 18:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->rcs_start_delta_v));
    break;
  case 19:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->rcs_end_delta_v));
    break;
  case 20:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->rcs_start_twr));
    break;
  case 21:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->rcs_end_twr));
    break;
  case 22:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->rcs_burn_time));
    break;
  case 23:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->start_cost));
    break;
  case 24:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->cost_lost));
    break;
  case 25:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_int32(stream, &value->start_part_count));
    break;
  case 26:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_int32(stream, &value->dropped_part_count));
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

static inline krpc_error_t krpc_decode_KerbalEngineerRedux_Stage(
  pb_istream_t * stream, krpc_KerbalEngineerRedux_Stage_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_KerbalEngineerRedux_Stage;
  typedef struct State { size_t pos; krpc_KerbalEngineerRedux_Stage_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 27)
    KRPC_FAIL(ENCODING, "Too few fields for a KerbalEngineerRedux_Stage");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_KERBALENGINEERREDUX_STAGE

#ifndef KRPC_IMPL_TYPE_LIST_KERBALENGINEERREDUX_STAGE
#define KRPC_IMPL_TYPE_LIST_KERBALENGINEERREDUX_STAGE

static inline bool krpc_encode_callback_items_list_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_KerbalEngineerRedux_Stage_t * value = (const krpc_list_KerbalEngineerRedux_Stage_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_KerbalEngineerRedux_Stage(&size, &value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_KerbalEngineerRedux_Stage(stream, &value->items[i]));
  }
  return true;
}

static inline krpc_error_t krpc_encode_list_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const krpc_list_KerbalEngineerRedux_Stage_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_KerbalEngineerRedux_Stage;
  message.items.arg = (krpc_list_KerbalEngineerRedux_Stage_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_KerbalEngineerRedux_Stage(
  size_t * size, const krpc_list_KerbalEngineerRedux_Stage_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_KerbalEngineerRedux_Stage(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_KerbalEngineerRedux_Stage(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_KerbalEngineerRedux_Stage");
  krpc_list_KerbalEngineerRedux_Stage_t * value = (krpc_list_KerbalEngineerRedux_Stage_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_KerbalEngineerRedux_Stage(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_KerbalEngineerRedux_Stage");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_KerbalEngineerRedux_Stage(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_list_KerbalEngineerRedux_Stage(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_KerbalEngineerRedux_Stage_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_KerbalEngineerRedux_Stage_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_KerbalEngineerRedux_Stage_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_KerbalEngineerRedux_Stage(stream, &state->value->items[i]));
  return true;
}

static inline krpc_error_t krpc_decode_list_KerbalEngineerRedux_Stage(
  pb_istream_t * stream, krpc_list_KerbalEngineerRedux_Stage_t * value) {
  typedef struct State { size_t capacity; krpc_list_KerbalEngineerRedux_Stage_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_KerbalEngineerRedux_Stage_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_KerbalEngineerRedux_Stage_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_KerbalEngineerRedux_Stage;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_KERBALENGINEERREDUX_STAGE

static inline krpc_error_t krpc_KerbalEngineerRedux_BurnTime(krpc_connection_t connection, krpc_KerbalEngineerRedux_BurnTime_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel, double deltaV) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 15, 3159479257, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &deltaV));
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
      KRPC_CHECK(krpc_decode_KerbalEngineerRedux_BurnTime(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_BurnTime_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, double deltaV) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 15, 3159479257, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &deltaV));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_BurnTime_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 15, 3159479257, 0);
}

static inline krpc_error_t krpc_KerbalEngineerRedux_EditorStages(krpc_connection_t connection, krpc_list_KerbalEngineerRedux_Stage_t * returnValue, krpc_SpaceCenter_CelestialBody_t body, double altitude, double mach) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 15, 1707752305, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &altitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &mach));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_KerbalEngineerRedux_Stage(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_EditorStages_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double altitude, double mach) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 15, 1707752305, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &altitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &mach));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_EditorStages_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 15, 1707752305, 0);
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Impact(krpc_connection_t connection, krpc_KerbalEngineerRedux_Impact_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 15, 222294737, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
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
      KRPC_CHECK(krpc_decode_KerbalEngineerRedux_Impact(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Impact_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 15, 222294737, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Impact_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 15, 222294737, 0);
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Rendezvous(krpc_connection_t connection, krpc_KerbalEngineerRedux_Rendezvous_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 15, 3336555371, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
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
      KRPC_CHECK(krpc_decode_KerbalEngineerRedux_Rendezvous(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Rendezvous_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 15, 3336555371, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Rendezvous_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 15, 3336555371, 0);
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Stages(krpc_connection_t connection, krpc_list_KerbalEngineerRedux_Stage_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 15, 1319769914, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_KerbalEngineerRedux_Stage(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Stages_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 15, 1319769914, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Stages_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 15, 1319769914, 0);
}

static inline krpc_error_t krpc_KerbalEngineerRedux_SuicideBurn(krpc_connection_t connection, krpc_KerbalEngineerRedux_SuicideBurn_t * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 15, 1181628214, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
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
      KRPC_CHECK(krpc_decode_KerbalEngineerRedux_SuicideBurn(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_SuicideBurn_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 15, 1181628214, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_SuicideBurn_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 15, 1181628214, 0);
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 15, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_KerbalEngineerRedux_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 15, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalEngineerRedux_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 15, 265274134, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
