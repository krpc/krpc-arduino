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
 * Represents an alarm. Obtained by calling
 * KerbalAlarmClock::alarms,
 * KerbalAlarmClock::alarm_with_name or
 * KerbalAlarmClock::alarms_with_type.
 */
typedef krpc_object_t krpc_KerbalAlarmClock_Alarm_t;

#ifndef KRPC_TYPE_LIST_OBJECT
#define KRPC_TYPE_LIST_OBJECT

typedef struct krpc_list_object_s krpc_list_object_t;
struct krpc_list_object_s {
  size_t size;
  krpc_object_t * items;
};

krpc_error_t krpc_encode_list_object(
  pb_ostream_t * stream, const krpc_list_object_t * value);
krpc_error_t krpc_encode_size_list_object(
  size_t * size, const krpc_list_object_t * value);
bool krpc_encode_callback_list_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_list_object(
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
   * Drop out of time warp.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_KILLWARP = 2,
  /**
   * Drop out of time warp.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_KILLWARPONLY = 3,
  /**
   * Display a message.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_MESSAGEONLY = 4,
  /**
   * Pause the game.
   */
  KRPC_KERBALALARMCLOCK_ALARMACTION_PAUSEGAME = 5
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
   * See KerbalAlarmClock::AlarmType::maneuver.
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
   * See KerbalAlarmClock::AlarmType::contract.
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
   * See KerbalAlarmClock::AlarmType::soi_change.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_SOICHANGEAUTO = 15,
  /**
   * An alarm based on Interplanetary Transfer Phase Angles, i.e. when should
   * I launch to planet X? Based on Kosmo Not's post and used in Olex's
   * Calculator.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_TRANSFER = 16,
  /**
   * See KerbalAlarmClock::AlarmType::transfer.
   */
  KRPC_KERBALALARMCLOCK_ALARMTYPE_TRANSFERMODELLED = 17
} krpc_KerbalAlarmClock_AlarmType_t;

/**
 * Get the alarm with the given name, or null
 * if no alarms have that name. If more than one alarm has the name,
 * only returns one of them.
 * @param name Name of the alarm to search for.
 */
krpc_error_t krpc_KerbalAlarmClock_AlarmWithName(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, const char * name);

/**
 * Get a list of alarms of the specified type.
 * @param type Type of alarm to return.
 */
krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type);

/**
 * Create a new alarm and return it.
 * @param type Type of the new alarm.
 * @param name Name of the new alarm.
 * @param ut Time at which the new alarm should trigger.
 */
krpc_error_t krpc_KerbalAlarmClock_CreateAlarm(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type, const char * name, double ut);

/**
 * A list of all the alarms.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarms(krpc_connection_t connection, krpc_list_object_t * returnValue);

/**
 * Whether Kerbal Alarm Clock is available.
 */
krpc_error_t krpc_KerbalAlarmClock_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Removes the alarm.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The action that the alarm triggers.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmAction_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The action that the alarm triggers.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_KerbalAlarmClock_AlarmAction_t value);

/**
 * The unique identifier for the alarm.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_ID(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The number of seconds before the event that the alarm will fire.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The number of seconds before the event that the alarm will fire.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * The short name of the alarm.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Name(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The short name of the alarm.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value);

/**
 * The long description of the alarm.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The long description of the alarm.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value);

/**
 * The number of seconds until the alarm will fire.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Whether the alarm will be repeated after it has fired.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * Whether the alarm will be repeated after it has fired.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value);

/**
 * The time delay to automatically create an alarm after it has fired.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The time delay to automatically create an alarm after it has fired.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * The time at which the alarm will fire.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Time(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The time at which the alarm will fire.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value);

/**
 * The type of the alarm.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Type(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmType_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The vessel that the alarm is attached to.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The vessel that the alarm is attached to.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_Vessel_t value);

/**
 * The celestial body the vessel is departing from.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The celestial body the vessel is departing from.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * The celestial body the vessel is arriving at.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance);

/**
 * The celestial body the vessel is arriving at.
 */
krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value);

// Implementation

#ifndef KRPC_IMPL_TYPE_LIST_OBJECT
#define KRPC_IMPL_TYPE_LIST_OBJECT

static bool krpc_encode_callback_items_list_object(
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

inline krpc_error_t krpc_encode_list_object(
  pb_ostream_t * stream, const krpc_list_object_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_object;
  message.items.arg = (krpc_list_object_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_list_object(
  size_t * size, const krpc_list_object_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_object(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_list_object(
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

static bool krpc_decode_callback_item_list_object(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_list_object_t * value; } State;
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

inline krpc_error_t krpc_decode_list_object(
  pb_istream_t * stream, krpc_list_object_t * value) {
  typedef struct { size_t capacity; krpc_list_object_t * value; } State;
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

inline krpc_error_t krpc_KerbalAlarmClock_AlarmWithName(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 1, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &name));
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

inline krpc_error_t krpc_KerbalAlarmClock_AlarmsWithType(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 2, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_CreateAlarm(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t * returnValue, krpc_KerbalAlarmClock_AlarmType_t type, const char * name, double ut) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 5, 3, 3, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarms(krpc_connection_t connection, krpc_list_object_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 5, 5, 0, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 5, 4, 0, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remove(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 6, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmAction_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 7, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Action(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_KerbalAlarmClock_AlarmAction_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 8, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_ID(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 14, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Margin(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 9, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Margin(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 10, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Name(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 15, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Name(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 16, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Notes(krpc_connection_t connection, char * * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 17, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Notes(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 18, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Remaining(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 19, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Repeat(krpc_connection_t connection, bool * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 20, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Repeat(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 21, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_RepeatPeriod(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 22, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_RepeatPeriod(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 23, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Time(krpc_connection_t connection, double * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 11, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Time(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 12, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Type(krpc_connection_t connection, krpc_KerbalAlarmClock_AlarmType_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 13, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 24, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_Vessel(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_Vessel_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 25, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferOriginBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 26, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferOriginBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 27, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_XferTargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_KerbalAlarmClock_Alarm_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 5, 28, 1, _arguments));
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

inline krpc_error_t krpc_KerbalAlarmClock_Alarm_set_XferTargetBody(krpc_connection_t connection, krpc_KerbalAlarmClock_Alarm_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 5, 29, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

#ifdef __cplusplus
}  // extern "C"
#endif
