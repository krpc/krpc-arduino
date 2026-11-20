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
 * Represents a servo. Obtained using
 * krpc_InfernalRobotics_ServoGroup_Servos(),
 * krpc_InfernalRobotics_ServoGroup_ServoWithName()
 * or krpc_InfernalRobotics_ServoWithName().
 */
typedef krpc_object_t krpc_InfernalRobotics_Servo_t;
/**
 * A group of servos, obtained by calling krpc_InfernalRobotics_ServoGroups()
 * or krpc_InfernalRobotics_ServoGroupWithName(). Represents the "Servo Groups"
 * in the InfernalRobotics UI.
 */
typedef krpc_object_t krpc_InfernalRobotics_ServoGroup_t;

#ifndef KRPC_TYPE_LIST_FLOAT
#define KRPC_TYPE_LIST_FLOAT

typedef struct krpc_list_float_s krpc_list_float_t;
struct krpc_list_float_s {
  size_t size;
  float * items;
};

static inline krpc_error_t krpc_encode_list_float(
  pb_ostream_t * stream, const krpc_list_float_t * value);
static inline krpc_error_t krpc_encode_size_list_float(
  size_t * size, const krpc_list_float_t * value);
static inline bool krpc_encode_callback_list_float(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_float(
  pb_istream_t * stream, krpc_list_float_t * value);

#endif  // KRPC_TYPE_LIST_FLOAT

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
 * The mode a servo is operating in. See krpc_InfernalRobotics_Servo_Mode().
 */
typedef enum {
  /**
   * The part acts as a servo, driving towards a target position.
   */
  KRPC_INFERNALROBOTICS_SERVOMODE_SERVO = 1,
  /**
   * The part acts as a rotor, spinning continuously.
   */
  KRPC_INFERNALROBOTICS_SERVOMODE_ROTOR = 2
} krpc_InfernalRobotics_ServoMode_t;

#define KRPC_CLASS_INFERNALROBOTICS_SERVO 4u, 2600283206u
#define KRPC_CLASS_INFERNALROBOTICS_SERVOGROUP 4u, 495794600u
#define KRPC_ENUMERATION_INFERNALROBOTICS_SERVOMODE 4u, 2250324114u

/**
 * Returns the servo group in the given vessel with the given name,
 * or `null` if none exists. If multiple servo groups have the same name, only one of them is returned.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel Vessel to check.
 * @param name Name of servo group to find.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroupWithName() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroupWithName(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A list of all the servo groups in the given vessel.
 *
 * Works for any loaded vessel, not just the active one. Groups on a non-active vessel
 * support movement and per-servo control, but not preset, key, speed-factor or
 * expanded state, which are only tracked by Infernal Robotics for the active vessel.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroups(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroups() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroups_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroups(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroups_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Returns the servo in the given vessel with the given name or
 * `null` if none exists. If multiple servos have the same name, only one of them is returned.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel Vessel to check.
 * @param name Name of the servo to find.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call krpc_InfernalRobotics_ServoWithName() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoWithName_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoWithName(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoWithName_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Infernal Robotics is installed.
 */
static inline krpc_error_t krpc_InfernalRobotics_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_InfernalRobotics_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_InfernalRobotics_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Adds a preset position to the servo.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param position The position of the preset.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_AddPreset() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float position);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_AddPreset(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves the servo to the center.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MoveCenter() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MoveCenter(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves the servo to the left.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MoveLeft() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MoveLeft(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves the servo to the right.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MoveRight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MoveRight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves the servo to position and sets the
 * speed multiplier to speed.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param position The position to move the servo to.
 * @param speed Speed multiplier for the movement.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position, float speed);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MoveTo() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float position, float speed);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MoveTo(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Removes the preset position at the given index.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param index The index of the preset to remove.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, int32_t index);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_RemovePresetAt() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, int32_t index);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_RemovePresetAt(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Sorts the preset positions of the servo into ascending order.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_SortPresets() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_SortPresets(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Stops the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_Stop() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_Stop(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The current speed multiplier set in the UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_Acceleration() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_Acceleration(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The current speed multiplier set in the UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_Acceleration() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_Acceleration(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo can have its range of movement limited.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_CanHaveLimits() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_CanHaveLimits(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The position the servo is currently being commanded to move to.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_CommandedPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_CommandedPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The speed multiplier of the servo, specified by the part configuration.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_ConfigSpeed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_ConfigSpeed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The current speed at which the servo is moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_CurrentSpeed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_CurrentSpeed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The strength of the servo's damping.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_DampingPower() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_DampingPower(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The strength of the servo's damping.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_DampingPower() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_DampingPower(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The default (built) position of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_DefaultPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_DefaultPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rate at which the servo consumes electric charge, in units/s,
 * when moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_ElectricChargeRequired() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_ElectricChargeRequired(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The force limit of the servo, as a percentage of the maximum force.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_ForceLimit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_ForceLimit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The force limit of the servo, as a percentage of the maximum force.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_ForceLimit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_ForceLimit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo has a spring.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_HasSpring() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_HasSpring(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo should be highlighted in-game.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_Highlight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_Highlight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servos axis is inverted.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsAxisInverted() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsAxisInverted(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servos axis is inverted.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_IsAxisInverted() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_IsAxisInverted(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo is freely moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsFreeMoving() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsFreeMoving(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo's range of movement is limited to the configured minimum and
 * maximum positions.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsLimited() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsLimited(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo's range of movement is limited to the configured minimum and
 * maximum positions.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_IsLimited() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_IsLimited(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo is locked.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsLocked() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsLocked(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo is locked.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_IsLocked() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_IsLocked(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo is moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsMoving() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsMoving(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo moves rotationally (as opposed to linearly).
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsRotational() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsRotational(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the servo is running, when operating as a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsRunning() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsRunning(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the part is operating as a servo (rather than a rotor).
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_IsServo() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_IsServo(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The maximum acceleration the servo can achieve.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MaxAcceleration() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MaxAcceleration(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The maximum position of the servo, specified by the part configuration.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MaxConfigPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MaxConfigPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The maximum force the servo can generate.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MaxForce() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MaxForce(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The maximum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MaxPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MaxPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The maximum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_MaxPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_MaxPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The maximum speed the servo can achieve.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MaxSpeed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MaxSpeed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The minimum position of the servo, specified by the part configuration.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MinConfigPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MinConfigPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The minimum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_MinPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_MinPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The minimum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_MinPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_MinPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the part acts as a servo or a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode(krpc_connection_t connection, krpc_InfernalRobotics_ServoMode_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_Mode() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_Mode(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The name of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The name of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, const char * value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, const char * value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The part containing the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_Part() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_Part(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Part_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The position of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Position(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The list of preset positions configured for the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions(krpc_connection_t connection, krpc_list_float_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_PresetPositions() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_PresetPositions(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The acceleration of the servo when operating as a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_RotorAcceleration() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_RotorAcceleration(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The acceleration of the servo when operating as a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_RotorAcceleration() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_RotorAcceleration(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The speed multiplier of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_Speed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_Speed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The speed multiplier of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_Speed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_Speed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The strength of the servo's spring, when it has one.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_SpringPower() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_SpringPower(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The strength of the servo's spring, when it has one.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_set_SpringPower() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_set_SpringPower(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The target position the servo is moving towards.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_TargetPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_TargetPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The target speed the servo is moving at.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_TargetSpeed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_TargetSpeed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The unique identifier of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_UID(krpc_connection_t connection, uint32_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_Servo_UID() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_UID_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_Servo_UID(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_UID_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves all of the servos in the group to the center.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_MoveCenter() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_MoveCenter(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves all of the servos in the group to the left.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_MoveLeft() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_MoveLeft(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves all of the servos in the group to the next preset.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_MoveNextPreset() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_MoveNextPreset(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves all of the servos in the group to the previous preset.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_MovePrevPreset() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_MovePrevPreset(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Moves all of the servos in the group to the right.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_MoveRight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_MoveRight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Returns the servo with the given name from this group,
 * or `null` if none exists.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param name Name of servo to find.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance, const char * name);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_ServoWithName() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * name);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_ServoWithName(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Stops the servos in the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_Stop() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_Stop(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the group is in advanced mode.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_AdvancedMode() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_AdvancedMode(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the group is in advanced mode.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_AdvancedMode() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_AdvancedMode(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the build aid is enabled for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_BuildAid() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_BuildAid(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the build aid is enabled for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_BuildAid() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_BuildAid(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The total rate at which the servos in the group consume electric charge, in units
 * per second, when moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the group is expanded in the InfernalRobotics UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_Expanded() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_Expanded(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the group is expanded in the InfernalRobotics UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_Expanded() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_Expanded(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The key assigned to be the "forward" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_ForwardKey() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_ForwardKey(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The key assigned to be the "forward" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_ForwardKey() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_ForwardKey(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether inverse kinematics is active for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_IKActive() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_IKActive(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether inverse kinematics is active for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_IKActive() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_IKActive(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The direction the group is currently moving in: -1 for reverse, 0 for stopped
 * and 1 for forward.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection(krpc_connection_t connection, int32_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_MovingDirection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_MovingDirection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The name of the group.
 *
 * Renaming a group renames it for every servo in it. This object identifies the
 * group by its name, so a rename destroys every object for the group, including the
 * one the rename was made through. Obtain the group again under the new name.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The name of the group.
 *
 * Renaming a group renames it for every servo in it. This object identifies the
 * group by its name, so a rename destroys every object for the group, including the
 * one the rename was made through. Obtain the group again under the new name.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The parts containing the servos in the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_Parts() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_Parts(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The key assigned to be the "reverse" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_ReverseKey() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_ReverseKey(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The key assigned to be the "reverse" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_ReverseKey() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_ReverseKey(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The servos that are in the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_Servos() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_Servos(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The speed multiplier for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_Speed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_Speed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The speed multiplier for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, float value);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_set_Speed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, float value);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_set_Speed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The vessel the group belongs to.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call krpc_InfernalRobotics_ServoGroup_Vessel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Fills in the call template of krpc_InfernalRobotics_ServoGroup_Vessel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

#ifndef KRPC_IMPL_TYPE_LIST_FLOAT
#define KRPC_IMPL_TYPE_LIST_FLOAT

static inline bool krpc_encode_callback_items_list_float(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_float_t * value = (const krpc_list_float_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_float(&size, value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_float(stream, value->items[i]));
  }
  return true;
}

static inline krpc_error_t krpc_encode_list_float(
  pb_ostream_t * stream, const krpc_list_float_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_float;
  message.items.arg = (krpc_list_float_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_float(
  size_t * size, const krpc_list_float_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_float(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_float(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_float");
  krpc_list_float_t * value = (krpc_list_float_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_float(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_float");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_float(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_list_float(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_float_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (float*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(float));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_float(stream, &state->value->items[i]));
  return true;
}

static inline krpc_error_t krpc_decode_list_float(
  pb_istream_t * stream, krpc_list_float_t * value) {
  typedef struct State { size_t capacity; krpc_list_float_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (float*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(float));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_float;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_FLOAT

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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 352707851, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 352707851, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 352707851, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroups(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2626060439, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroups_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2626060439, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroups_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2626060439, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1366967805, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoWithName_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1366967805, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoWithName_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1366967805, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 4, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_InfernalRobotics_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 265274134, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1259995786, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &position));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float position) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1259995786, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &position));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1259995786, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 588500457, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 588500457, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 588500457, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2517376430, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2517376430, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2517376430, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3390522426, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3390522426, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3390522426, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position, float speed) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 4, 2097771625, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &position));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_float, &speed));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float position, float speed) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2097771625, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &position));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_float, &speed));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2097771625, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, int32_t index) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 2669927657, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &index));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, int32_t index) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2669927657, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &index));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2669927657, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3069060024, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3069060024, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3069060024, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2301030995, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2301030995, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2301030995, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 974763055, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 974763055, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 974763055, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 790962151, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 790962151, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 790962151, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2053166385, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2053166385, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2053166385, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2350751431, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2350751431, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2350751431, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 848558888, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 848558888, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 848558888, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2347585647, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2347585647, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2347585647, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3999812557, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3999812557, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3999812557, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 2652306403, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2652306403, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2652306403, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1964964253, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1964964253, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1964964253, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 11959453, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 11959453, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 11959453, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 391278425, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 391278425, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 391278425, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 3761137458, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3761137458, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3761137458, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 589005576, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 589005576, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 589005576, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 179174207, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 179174207, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 179174207, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3581214018, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3581214018, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3581214018, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 3895546170, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3895546170, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3895546170, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3372340485, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3372340485, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3372340485, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 425118225, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 425118225, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 425118225, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 20410079, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 20410079, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 20410079, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2568247240, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2568247240, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2568247240, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 2080711035, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2080711035, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2080711035, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 91202634, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 91202634, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 91202634, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3192788824, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3192788824, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3192788824, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1370115411, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1370115411, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1370115411, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3078908650, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3078908650, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3078908650, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 502461060, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 502461060, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 502461060, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 153204740, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 153204740, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 153204740, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3644066586, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3644066586, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3644066586, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2047312465, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2047312465, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2047312465, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1590559007, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1590559007, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1590559007, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3323642841, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3323642841, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3323642841, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1715864710, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1715864710, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1715864710, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1550368659, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1550368659, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1550368659, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1951393399, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1951393399, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1951393399, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode(krpc_connection_t connection, krpc_InfernalRobotics_ServoMode_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3588737877, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3588737877, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3588737877, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1904550896, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1904550896, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1904550896, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 103797212, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 103797212, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 103797212, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3317331224, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3317331224, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Part_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3317331224, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Position(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 70498365, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 70498365, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 70498365, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions(krpc_connection_t connection, krpc_list_float_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 549902551, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_float(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 549902551, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 549902551, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1603225232, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1603225232, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1603225232, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 3912208718, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3912208718, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3912208718, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3030403734, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3030403734, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3030403734, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 2321726807, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2321726807, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2321726807, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3189473273, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3189473273, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3189473273, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 4188709360, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 4188709360, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 4188709360, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1546220084, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1546220084, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1546220084, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1707372558, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1707372558, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1707372558, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_UID(krpc_connection_t connection, uint32_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3691048095, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_uint32(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_UID_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_Servo_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3691048095, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_UID_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3691048095, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 438696749, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 438696749, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 438696749, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3001224352, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3001224352, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3001224352, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2034872076, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2034872076, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2034872076, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1528714584, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1528714584, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1528714584, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1714110431, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1714110431, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1714110431, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 4279080952, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 4279080952, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 4279080952, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2225427543, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2225427543, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2225427543, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3341573602, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3341573602, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3341573602, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1930089646, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1930089646, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1930089646, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1562799785, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1562799785, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1562799785, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 2429125722, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2429125722, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2429125722, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 673838456, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 673838456, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 673838456, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 869697578, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 869697578, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 869697578, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1079676074, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1079676074, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1079676074, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1063108467, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1063108467, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1063108467, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1770025396, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1770025396, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1770025396, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3168774942, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3168774942, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3168774942, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 2059317225, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2059317225, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2059317225, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection(krpc_connection_t connection, int32_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 2105874821, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2105874821, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2105874821, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 3061455257, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 3061455257, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 3061455257, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 4115263237, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 4115263237, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 4115263237, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 64733683, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 64733683, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 64733683, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1506829137, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1506829137, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1506829137, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 2069548739, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 2069548739, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 2069548739, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 4228090886, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 4228090886, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 4228090886, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1228821781, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1228821781, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1228821781, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 1569974175, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1569974175, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1569974175, 0);
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1956555152, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_InfernalRobotics_ServoGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 4, 1956555152, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 4, 1956555152, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
