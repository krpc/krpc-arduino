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
 * Represents a servo. Obtained using
 * InfernalRobotics::ServoGroup::servos,
 * InfernalRobotics::ServoGroup::servo_with_name
 * or InfernalRobotics::servo_with_name.
 */
typedef krpc_object_t krpc_InfernalRobotics_Servo_t;
/**
 * A group of servos, obtained by calling InfernalRobotics::servo_groups
 * or InfernalRobotics::servo_group_with_name. Represents the "Servo Groups"
 * in the InfernalRobotics UI.
 */
typedef krpc_object_t krpc_InfernalRobotics_ServoGroup_t;

#ifndef KRPC_TYPE_LIST_OBJECT
#define KRPC_TYPE_LIST_OBJECT

typedef struct krpc_list_object_s krpc_list_object_t;
struct krpc_list_object_s {
  size_t size;
  krpc_InfernalRobotics_ServoGroup_t * items;
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

#ifndef KRPC_TYPE_LIST_OBJECT
#define KRPC_TYPE_LIST_OBJECT

typedef struct krpc_list_object_s krpc_list_object_t;
struct krpc_list_object_s {
  size_t size;
  krpc_InfernalRobotics_Servo_t * items;
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

#ifndef KRPC_TYPE_LIST_OBJECT
#define KRPC_TYPE_LIST_OBJECT

typedef struct krpc_list_object_s krpc_list_object_t;
struct krpc_list_object_s {
  size_t size;
  krpc_SpaceCenter_Part_t * items;
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
 * Returns the servo group in the given vessel with the given name,
 * or null if none exists. If multiple servo groups have the same name, only one of them is returned.
 * @param vessel Vessel to check.
 * @param name Name of servo group to find.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroupWithName(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * A list of all the servo groups in the given vessel.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroups(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Returns the servo in the given vessel with the given name or
 * null if none exists. If multiple servos have the same name, only one of them is returned.
 * @param vessel Vessel to check.
 * @param name Name of the servo to find.
 */
krpc_error_t krpc_InfernalRobotics_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Whether Infernal Robotics is installed.
 */
krpc_error_t krpc_InfernalRobotics_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Moves the servo to the center.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to the left.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to the next preset.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to the previous preset.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to the right.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to position and sets the
 * speed multiplier to speed.
 * @param position The position to move the servo to.
 * @param speed Speed multiplier for the movement.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MoveTo(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position, float speed);

/**
 * Stops the servo.
 */
krpc_error_t krpc_InfernalRobotics_Servo_Stop(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * The current speed multiplier set in the UI.
 */
krpc_error_t krpc_InfernalRobotics_Servo_Acceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The maximum position of the servo, specified by the in-game tweak menu.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo is freely moving.
 */
krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The current speed at which the servo is moving.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_CurrentSpeed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The maximum position of the servo, specified by the in-game tweak menu.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The minimum position of the servo, specified by the in-game tweak menu.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MinPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The maximum position of the servo, specified by the part configuration.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servos axis is inverted.
 */
krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The part containing the servo.
 */
krpc_error_t krpc_InfernalRobotics_Servo_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servos axis is inverted.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * The speed multiplier of the servo, specified by the in-game tweak menu.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The name of the servo.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, const char * value);

/**
 * The name of the servo.
 */
krpc_error_t krpc_InfernalRobotics_Servo_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The speed multiplier of the servo, specified by the part configuration.
 */
krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo is moving.
 */
krpc_error_t krpc_InfernalRobotics_Servo_IsMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The minimum position of the servo, specified by the part configuration.
 */
krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo should be highlighted in-game.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * The position of the servo.
 */
krpc_error_t krpc_InfernalRobotics_Servo_Position(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The current speed at which the servo is moving.
 */
krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The current speed multiplier set in the UI.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Whether the servo is locked.
 */
krpc_error_t krpc_InfernalRobotics_Servo_IsLocked(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo is locked.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * The minimum position of the servo, specified by the in-game tweak menu.
 */
krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The speed multiplier of the servo, specified by the in-game tweak menu.
 */
krpc_error_t krpc_InfernalRobotics_Servo_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves all of the servos in the group to the center.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the left.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the next preset.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the previous preset.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the right.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Returns the servo with the given name from this group,
 * or null if none exists.
 * @param name Name of servo to find.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance, const char * name);

/**
 * Stops the servos in the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The speed multiplier for the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, float value);

/**
 * The name of the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * The name of the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The key assigned to be the "forward" key for the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The speed multiplier for the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether the group is expanded in the InfernalRobotics UI.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether the group is expanded in the InfernalRobotics UI.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * The key assigned to be the "reverse" key for the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * The parts containing the servos in the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The key assigned to be the "reverse" key for the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The servos that are in the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The key assigned to be the "forward" key for the group.
 */
krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

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
    state->value->items = (krpc_InfernalRobotics_ServoGroup_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_InfernalRobotics_ServoGroup_t));
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
    value->items = (krpc_InfernalRobotics_ServoGroup_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_InfernalRobotics_ServoGroup_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_object;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_OBJECT

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
    state->value->items = (krpc_InfernalRobotics_Servo_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_InfernalRobotics_Servo_t));
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
    value->items = (krpc_InfernalRobotics_Servo_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_InfernalRobotics_Servo_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_object;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_OBJECT

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
    state->value->items = (krpc_SpaceCenter_Part_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_SpaceCenter_Part_t));
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
    value->items = (krpc_SpaceCenter_Part_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_SpaceCenter_Part_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_object;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_OBJECT

inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroupWithName", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroups(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroups", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
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

inline krpc_error_t krpc_InfernalRobotics_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoWithName", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

inline krpc_error_t krpc_InfernalRobotics_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "get_Available", 0, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_MoveCenter", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_MoveLeft", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_MoveNextPreset", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_MovePrevPreset", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_MoveRight", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position, float speed) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_MoveTo", 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &position));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_float, &speed));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_Stop(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_Stop", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_Acceleration", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_MaxPosition", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_IsFreeMoving", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_set_CurrentSpeed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_CurrentSpeed", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_MaxPosition", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_MinPosition", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_MaxConfigPosition", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_IsAxisInverted", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_Part", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_IsAxisInverted", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_Speed", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_Name", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_Name", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_ConfigSpeed", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_IsMoving", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_MinConfigPosition", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_Highlight", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_Position(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_Position", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_CurrentSpeed", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_Acceleration", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_IsLocked", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_IsLocked", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_set_MinPosition", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_Servo_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "Servo_get_Speed", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_MoveCenter", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_MoveLeft", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_MoveNextPreset", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_MovePrevPreset", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_MoveRight", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_ServoWithName", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_Stop", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_set_Speed", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_set_Name", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_get_Name", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_get_ForwardKey", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_get_Speed", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_get_Expanded", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_set_Expanded", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_set_ReverseKey", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_get_Parts", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_get_ReverseKey", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_get_Servos", 1, _arguments));
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

inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "InfernalRobotics", "ServoGroup_set_ForwardKey", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

#ifdef __cplusplus
}  // extern "C"
#endif