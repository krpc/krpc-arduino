#pragma once

#include <krpc/decoder.h>
#include <krpc/encoder.h>
#include <krpc/error.h>
#include <krpc/memory.h>
#include <krpc/types.h>
#include <pb_decode.h>
#include <pb_encode.h>

#include <krpc.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * A RemoteTech antenna. Obtained by calling RemoteTech::Comms::antennas or RemoteTech::antenna.
 */
typedef krpc_object_t krpc_RemoteTech_Antenna_t;
/**
 * Communications for a vessel.
 */
typedef krpc_object_t krpc_RemoteTech_Comms_t;

#ifndef KRPC_TYPE_LIST_STRING
#define KRPC_TYPE_LIST_STRING

typedef struct krpc_list_string_s krpc_list_string_t;
struct krpc_list_string_s {
  size_t size;
  char * * items;
};

krpc_error_t krpc_encode_list_string(
  pb_ostream_t * stream, const krpc_list_string_t * value);
krpc_error_t krpc_encode_size_list_string(
  size_t * size, const krpc_list_string_t * value);
bool krpc_encode_callback_list_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_list_string(
  pb_istream_t * stream, krpc_list_string_t * value);

#endif  // KRPC_TYPE_LIST_STRING

#ifndef KRPC_TYPE_LIST_OBJECT
#define KRPC_TYPE_LIST_OBJECT

typedef struct krpc_list_object_s krpc_list_object_t;
struct krpc_list_object_s {
  size_t size;
  krpc_RemoteTech_Antenna_t * items;
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
 * The type of object an antenna is targetting.
 * See RemoteTech::Antenna::target.
 */
typedef enum {
  /**
   * The active vessel.
   */
  KRPC_REMOTETECH_TARGET_ACTIVEVESSEL = 0,
  /**
   * A celestial body.
   */
  KRPC_REMOTETECH_TARGET_CELESTIALBODY = 1,
  /**
   * A ground station.
   */
  KRPC_REMOTETECH_TARGET_GROUNDSTATION = 2,
  /**
   * A specific vessel.
   */
  KRPC_REMOTETECH_TARGET_VESSEL = 3,
  /**
   * No target.
   */
  KRPC_REMOTETECH_TARGET_NONE = 4
} krpc_RemoteTech_Target_t;

/**
 * Get the antenna object for a particular part.
 */
krpc_error_t krpc_RemoteTech_Antenna(krpc_connection_t connection, krpc_RemoteTech_Antenna_t * returnValue, krpc_SpaceCenter_Part_t part);

/**
 * Get a communications object, representing the communication capability of a particular vessel.
 */
krpc_error_t krpc_RemoteTech_Comms(krpc_connection_t connection, krpc_RemoteTech_Comms_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Whether RemoteTech is installed.
 */
krpc_error_t krpc_RemoteTech_Available(krpc_connection_t connection, bool * returnValue);

/**
 * The names of the ground stations.
 */
krpc_error_t krpc_RemoteTech_GroundStations(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * The ground station the antenna is targetting.
 */
krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation(krpc_connection_t connection, char * * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * The object that the antenna is targetting.
 * This property can be used to set the target to RemoteTech::Target::none or RemoteTech::Target::active_vessel.
 * To set the target to a celestial body, ground station or vessel see RemoteTech::Antenna::target_body,
 * RemoteTech::Antenna::target_ground_station and RemoteTech::Antenna::target_vessel.
 */
krpc_error_t krpc_RemoteTech_Antenna_Target(krpc_connection_t connection, krpc_RemoteTech_Target_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * The vessel the antenna is targetting.
 */
krpc_error_t krpc_RemoteTech_Antenna_TargetVessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * The object that the antenna is targetting.
 * This property can be used to set the target to RemoteTech::Target::none or RemoteTech::Target::active_vessel.
 * To set the target to a celestial body, ground station or vessel see RemoteTech::Antenna::target_body,
 * RemoteTech::Antenna::target_ground_station and RemoteTech::Antenna::target_vessel.
 */
krpc_error_t krpc_RemoteTech_Antenna_set_Target(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_RemoteTech_Target_t value);

/**
 * The vessel the antenna is targetting.
 */
krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_Vessel_t value);

/**
 * Whether the antenna has a connection.
 */
krpc_error_t krpc_RemoteTech_Antenna_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * Get the part containing this antenna.
 */
krpc_error_t krpc_RemoteTech_Antenna_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * The celestial body the antenna is targetting.
 */
krpc_error_t krpc_RemoteTech_Antenna_TargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * The ground station the antenna is targetting.
 */
krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, const char * value);

/**
 * The celestial body the antenna is targetting.
 */
krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * The signal delay between the this vessel and another vessel, in seconds.
 * @param other
 */
krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance, krpc_SpaceCenter_Vessel_t other);

/**
 * Whether the vessel has a flight computer on board.
 */
krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * The signal delay between the vessel and the closest ground station, in seconds.
 */
krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * The shortest signal delay to the vessel, in seconds.
 */
krpc_error_t krpc_RemoteTech_Comms_SignalDelay(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Whether the vessel has a connection to a ground station.
 */
krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Get the vessel.
 */
krpc_error_t krpc_RemoteTech_Comms_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Whether the vessel can be controlled locally.
 */
krpc_error_t krpc_RemoteTech_Comms_HasLocalControl(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * The antennas for this vessel.
 */
krpc_error_t krpc_RemoteTech_Comms_Antennas(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Whether the vessel has any connection.
 */
krpc_error_t krpc_RemoteTech_Comms_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

// Implementation

#ifndef KRPC_IMPL_TYPE_LIST_STRING
#define KRPC_IMPL_TYPE_LIST_STRING

static bool krpc_encode_callback_items_list_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_string_t * value = (const krpc_list_string_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_string(&size, value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_string(stream, value->items[i]));
  }
  return true;
}

inline krpc_error_t krpc_encode_list_string(
  pb_ostream_t * stream, const krpc_list_string_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_string;
  message.items.arg = (krpc_list_string_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_list_string(
  size_t * size, const krpc_list_string_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_string(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_list_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_string");
  krpc_list_string_t * value = (krpc_list_string_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_string(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_string");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_string(stream, value));
  return true;
}

static bool krpc_decode_callback_item_list_string(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_list_string_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (char **)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(char *));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_string(stream, &state->value->items[i]));
  return true;
}

inline krpc_error_t krpc_decode_list_string(
  pb_istream_t * stream, krpc_list_string_t * value) {
  typedef struct { size_t capacity; krpc_list_string_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (char **)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(char *));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_string;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_STRING

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
    state->value->items = (krpc_RemoteTech_Antenna_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_RemoteTech_Antenna_t));
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
    value->items = (krpc_RemoteTech_Antenna_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_RemoteTech_Antenna_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_object;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_OBJECT

inline krpc_error_t krpc_RemoteTech_Antenna(krpc_connection_t connection, krpc_RemoteTech_Antenna_t * returnValue, krpc_SpaceCenter_Part_t part) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 2, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Comms(krpc_connection_t connection, krpc_RemoteTech_Comms_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 1, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
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

inline krpc_error_t krpc_RemoteTech_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 2, 3, 0, _arguments));
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

inline krpc_error_t krpc_RemoteTech_GroundStations(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 2, 4, 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_string(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation(krpc_connection_t connection, char * * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 11, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Antenna_Target(krpc_connection_t connection, krpc_RemoteTech_Target_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 7, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Antenna_TargetVessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 13, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Antenna_set_Target(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_RemoteTech_Target_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 2, 8, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_Vessel_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 2, 14, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_RemoteTech_Antenna_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 6, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Antenna_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 5, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Antenna_TargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 9, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 2, 12, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 2, 10, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance, krpc_SpaceCenter_Vessel_t other) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 2, 15, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &other));
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

inline krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 18, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 22, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Comms_SignalDelay(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 21, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 20, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Comms_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 16, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Comms_HasLocalControl(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 17, 1, _arguments));
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

inline krpc_error_t krpc_RemoteTech_Comms_Antennas(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 23, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_RemoteTech_Comms_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 2, 19, 1, _arguments));
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

#ifdef __cplusplus
}  // extern "C"
#endif
