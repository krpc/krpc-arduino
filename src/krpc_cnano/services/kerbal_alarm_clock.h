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
 * Represents an alarm. Obtained by calling
 * krpc_KerbalAlarmClock_Alarms(),
 * krpc_KerbalAlarmClock_AlarmWithName() or
 * krpc_KerbalAlarmClock_AlarmsWithType().
 */
typedef krpc_object_t krpc_KerbalAlarmClock_Alarm_t;

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

/**
 * The action performed by an alarm when it fires.
 */
typedef enum {
  /**
   * Don't do anything at all...
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_DONOTHING = 0,
  /**
   * Don't do anything, and delete the alarm.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_DONOTHINGDELETEWHENPASSED = 1,
  /**
   * Drop out of time warp and display a message.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_KILLWARP = 2,
  /**
   * Drop out of time warp, without displaying a message.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_KILLWARPONLY = 3,
  /**
   * Display a message, without affecting time warp.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_MESSAGEONLY = 4,
  /**
   * Pause the game and display a message.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_PAUSEGAME = 5,
  /**
   * A combination of actions configured in the Kerbal Alarm Clock user
   * interface that does not correspond to any of the other values.
   * Setting an alarm's action to this value has no effect.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_CUSTOM = 6,
  /**
   * The alarm was converted from an older version of Kerbal Alarm Clock
   * and its action has not been set since.
   * Setting an alarm's action to this value has no effect.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_CONVERTED = 7
} krpc_KerbalAlarmClock_AlarmAction_t;

/**
 * The type of an alarm.
 */
typedef enum {
  /**
   * An alarm for a specific date/time or a specific period in the future.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_RAW = 0,
  /**
   * An alarm based on the next maneuver node on the current ships flight path.
   * This node will be stored and can be restored when you come back to the ship.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_MANEUVER = 1,
  /**
   * See #KRPC_KERBALALARMCLOCK_ALARMTYPE_MANEUVER.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_MANEUVERAUTO = 2,
  /**
   * An alarm for furthest part of the orbit from the planet.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_APOAPSIS = 3,
  /**
   * An alarm for nearest part of the orbit from the planet.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_PERIAPSIS = 4,
  /**
   * Ascending node for the targeted object, or equatorial ascending node.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_ASCENDINGNODE = 5,
  /**
   * Descending node for the targeted object, or equatorial descending node.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_DESCENDINGNODE = 6,
  /**
   * An alarm based on the closest approach of this vessel to the targeted
   * vessel, some number of orbits into the future.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_CLOSEST = 7,
  /**
   * An alarm based on the expiry or deadline of contracts in career modes.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_CONTRACT = 8,
  /**
   * See #KRPC_KERBALALARMCLOCK_ALARMTYPE_CONTRACT.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_CONTRACTAUTO = 9,
  /**
   * An alarm that is attached to a crew member.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_CREW = 10,
  /**
   * An alarm that is triggered when a selected target comes within a chosen distance.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_DISTANCE = 11,
  /**
   * An alarm based on the time in the "Earth" alternative Universe (aka the Real World).
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_EARTHTIME = 12,
  /**
   * An alarm that fires as your landed craft passes under the orbit of your target.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_LAUNCHRENDEVOUS = 13,
  /**
   * An alarm manually based on when the next SOI point is on the flight path
   * or set to continually monitor the active flight path and add alarms as it
   * detects SOI changes.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_SOICHANGE = 14,
  /**
   * See #KRPC_KERBALALARMCLOCK_ALARMTYPE_SOICHANGE.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_SOICHANGEAUTO = 15,
  /**
   * An alarm based on Interplanetary Transfer Phase Angles, i.e. when should
   * I launch to planet X? Based on Kosmo Not's post and used in Olex's
   * Calculator.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_TRANSFER = 16,
  /**
   * See #KRPC_KERBALALARMCLOCK_ALARMTYPE_TRANSFER.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_TRANSFERMODELLED = 17,
  /**
   * An alarm for when a science lab has finished processing data.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_SCIENCELAB = 18
} krpc_KerbalAlarmClock_AlarmType_t;

#define KRPC_CLASS_KERBALALARMCLOCK_ALARM 5u, 1467594483u
#define KRPC_ENUMERATION_KERBALALARMCLOCK_ALARMACTION 5u, 2642665552u
#define KRPC_ENUMERATION_KERBALALARMCLOCK_ALARMTYPE 5u, 465921516u

/**
 * Get the alarm with the given name, or `null`
 * if no alarms have that name. If more than one alarm has the name,
 * only returns one of them.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param name Name of the alarm to search for.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_AlarmWithName(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, const char * name);

/**
 * Fills in the call krpc_KerbalAlarmClock_AlarmWithName() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_AlarmWithName_call(krpc_schema_ProcedureCall * procedureCall, const char * name);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_AlarmWithName(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_AlarmWithName_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Get a list of alarms of the specified type.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param type Type of alarm to return.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type);

/**
 * Fills in the call krpc_KerbalAlarmClock_AlarmsWithType() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_AlarmType_t type);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_AlarmsWithType(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Create a new alarm and return it.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param type Type of the new alarm.
 * @param name Name of the new alarm.
 * @param ut Time at which the new alarm should trigger.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_CreateAlarm(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type, const char * name, double ut);

/**
 * Fills in the call krpc_KerbalAlarmClock_CreateAlarm() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_CreateAlarm_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_AlarmType_t type, const char * name, double ut);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_CreateAlarm(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_CreateAlarm_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A list of all the alarms.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarms(krpc_connection_t connection, krpc_list_object_t * returnValue);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarms() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarms_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarms(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarms_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Kerbal Alarm Clock is available.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_KerbalAlarmClock_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Removes the alarm. Any further use of this object throws an exception.
 *
 * Any further use of this object throws an exception.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The action that the alarm triggers.
 *
 * An alarm that plays a sound has the action #KRPC_KERBALALARMCLOCK_ALARMACTION_CUSTOM.
 * See krpc_KerbalAlarmClock_Alarm_PlaySound().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmAction_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Action() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Action_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Action(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Action_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The action that the alarm triggers.
 *
 * An alarm that plays a sound has the action #KRPC_KERBALALARMCLOCK_ALARMACTION_CUSTOM.
 * See krpc_KerbalAlarmClock_Alarm_PlaySound().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_KerbalAlarmClock_AlarmAction_t value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Action() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_KerbalAlarmClock_AlarmAction_t value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Action(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the alarm is enabled. A disabled alarm does not fire.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Enabled(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Enabled() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Enabled_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Enabled(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Enabled_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the alarm is enabled. A disabled alarm does not fire.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Enabled(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Enabled() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Enabled_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, bool value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Enabled(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Enabled_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The unique identifier for the alarm.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_ID(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_ID() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_ID_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_ID(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_ID_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number of seconds before the event that the alarm will fire.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Margin() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Margin(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number of seconds before the event that the alarm will fire.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Margin() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Margin(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The short name of the alarm.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Name(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The short name of the alarm.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, const char * value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The long description of the alarm.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Notes() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Notes(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The long description of the alarm.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Notes() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, const char * value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Notes(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the alarm plays a sound when it fires.
 *
 * An alarm that plays a sound has the action #KRPC_KERBALALARMCLOCK_ALARMACTION_CUSTOM.
 * Setting krpc_KerbalAlarmClock_Alarm_Action() to any other value turns the sound off.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_PlaySound(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_PlaySound() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_PlaySound_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_PlaySound(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_PlaySound_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the alarm plays a sound when it fires.
 *
 * An alarm that plays a sound has the action #KRPC_KERBALALARMCLOCK_ALARMACTION_CUSTOM.
 * Setting krpc_KerbalAlarmClock_Alarm_Action() to any other value turns the sound off.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_PlaySound(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_PlaySound() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_PlaySound_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, bool value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_PlaySound(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_PlaySound_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number of seconds until the alarm will fire.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Remaining() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Remaining(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the alarm will be repeated after it has fired.
 * Only has an effect for alarm types that support repeating
 * (see krpc_KerbalAlarmClock_Alarm_SupportsRepeat()).
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Repeat() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Repeat(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the alarm will be repeated after it has fired.
 * Only has an effect for alarm types that support repeating
 * (see krpc_KerbalAlarmClock_Alarm_SupportsRepeat()).
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Repeat() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, bool value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Repeat(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The time delay to automatically create an alarm after it has fired.
 * Only has an effect for alarm types that support a repeat period
 * (see krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod()).
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_RepeatPeriod() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_RepeatPeriod(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The time delay to automatically create an alarm after it has fired.
 * Only has an effect for alarm types that support a repeat period
 * (see krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod()).
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether this alarm's type supports repeating
 * (see krpc_KerbalAlarmClock_Alarm_Repeat()).
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeat(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_SupportsRepeat() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeat_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_SupportsRepeat(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeat_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether this alarm's type supports a repeat period
 * (see krpc_KerbalAlarmClock_Alarm_RepeatPeriod()).
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The time at which the alarm will fire.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Time(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Time() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Time_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Time(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Time_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The time at which the alarm will fire.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Time() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Time(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the alarm has fired. Remains true once the alarm has fired;
 * stream this or use it in an event expression to react to the alarm
 * firing.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Triggered(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Triggered() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Triggered_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Triggered(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Triggered_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The type of the alarm.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Type(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmType_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Type() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Type_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Type(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Type_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The vessel that the alarm is attached to.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_Vessel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_Vessel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The vessel that the alarm is attached to.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_Vessel_t value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_Vessel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_Vessel_t value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_Vessel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The celestial body the vessel is departing from.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_XferOriginBody() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_XferOriginBody(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The celestial body the vessel is departing from.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_XferOriginBody() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_XferOriginBody(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The celestial body the vessel is arriving at.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_XferTargetBody() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_XferTargetBody(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The celestial body the vessel is arriving at.
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * Fills in the call krpc_KerbalAlarmClock_Alarm_set_XferTargetBody() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * Fills in the call template of krpc_KerbalAlarmClock_Alarm_set_XferTargetBody(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody_call_template(krpc_schema_ProcedureCall * procedureCall);

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

static inline krpc_error_t krpc_KerbalAlarmClock_AlarmWithName(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 3729363774, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &name));
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

static inline krpc_error_t krpc_KerbalAlarmClock_AlarmWithName_call(krpc_schema_ProcedureCall * procedureCall, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3729363774, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_AlarmWithName_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3729363774, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2140180822, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_enum, &type));
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

static inline krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_AlarmType_t type) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2140180822, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_enum, &type));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2140180822, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_CreateAlarm(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type, const char * name, double ut) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 5, 3906561953, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_enum, &type));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &ut));
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

static inline krpc_error_t krpc_KerbalAlarmClock_CreateAlarm_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_AlarmType_t type, const char * name, double ut) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3906561953, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_enum, &type));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &ut));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_CreateAlarm_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3906561953, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarms(krpc_connection_t connection, krpc_list_object_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 5, 1321064488, 0, NULL));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarms_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 1321064488, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarms_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 1321064488, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 5, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 265274134, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 249926927, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 249926927, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 249926927, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmAction_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 4154109548, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Action_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 4154109548, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Action_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 4154109548, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_KerbalAlarmClock_AlarmAction_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 4041864534, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_KerbalAlarmClock_AlarmAction_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 4041864534, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 4041864534, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Enabled(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 3949777468, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Enabled_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3949777468, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Enabled_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3949777468, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Enabled(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 864677575, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Enabled_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 864677575, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Enabled_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 864677575, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_ID(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2843815609, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_ID_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2843815609, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_ID_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2843815609, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2220540399, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2220540399, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2220540399, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 1640019728, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 1640019728, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 1640019728, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Name(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 31720482, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 31720482, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 31720482, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 958350250, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 958350250, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 958350250, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2685765964, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2685765964, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2685765964, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 3699963018, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3699963018, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3699963018, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_PlaySound(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 639764460, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_PlaySound_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 639764460, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_PlaySound_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 639764460, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_PlaySound(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 1396104664, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_PlaySound_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 1396104664, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_PlaySound_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 1396104664, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 1446877472, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 1446877472, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 1446877472, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 1950233385, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 1950233385, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 1950233385, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 235057737, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 235057737, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 235057737, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2239964374, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2239964374, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2239964374, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 2075552561, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2075552561, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2075552561, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeat(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 1762252320, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeat_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 1762252320, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeat_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 1762252320, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 3040693138, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3040693138, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_SupportsRepeatPeriod_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3040693138, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Time(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 3838325530, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Time_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3838325530, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Time_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3838325530, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 3579348862, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3579348862, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3579348862, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Triggered(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2433817354, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Triggered_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2433817354, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Triggered_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2433817354, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Type(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmType_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 59608276, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Type_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 59608276, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Type_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 59608276, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 3968101467, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3968101467, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3968101467, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_Vessel_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 2748543587, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_Vessel_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2748543587, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2748543587, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2779397156, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2779397156, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2779397156, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 3160166465, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3160166465, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3160166465, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 3877845033, 1, _arguments));
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

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 3877845033, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 3877845033, 0);
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 2167673950, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 5, 2167673950, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 5, 2167673950, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
