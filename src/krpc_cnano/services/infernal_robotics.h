#pragma once

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
 * The mode a servo is operating in. See InfernalRobotics::Servo::mode.
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

/**
 * Returns the servo group in the given vessel with the given name,
 * or null if none exists. If multiple servo groups have the same name, only one of them is returned.
 * @param vessel Vessel to check.
 * @param name Name of servo group to find.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroupWithName(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * A list of all the servo groups in the given vessel.
 *
 * Works for any loaded vessel, not just the active one. Groups on a non-active vessel
 * support movement and per-servo control, but not preset, key, speed-factor or
 * expanded state, which are only tracked by Infernal Robotics for the active vessel.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroups(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Returns the servo in the given vessel with the given name or
 * null if none exists. If multiple servos have the same name, only one of them is returned.
 * @param vessel Vessel to check.
 * @param name Name of the servo to find.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Whether Infernal Robotics is installed.
 */
static inline krpc_error_t krpc_InfernalRobotics_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Whether Infernal Robotics API is ready.
 */
static inline krpc_error_t krpc_InfernalRobotics_Ready(krpc_connection_t connection, bool * returnValue);

/**
 * Adds a preset position to the servo.
 * @param position The position of the preset.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position);

/**
 * Moves the servo to the center.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to the left.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to the right.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves the servo to position and sets the
 * speed multiplier to speed.
 * @param position The position to move the servo to.
 * @param speed Speed multiplier for the movement.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position, float speed);

/**
 * Removes the preset position at the given index.
 * @param index The index of the preset to remove.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, int32_t index);

/**
 * Sorts the preset positions of the servo into ascending order.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * Stops the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance);

/**
 * The current speed multiplier set in the UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The current speed multiplier set in the UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Whether the servo can have its range of movement limited.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The position the servo is currently being commanded to move to.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The speed multiplier of the servo, specified by the part configuration.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The current speed at which the servo is moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The strength of the servo's damping.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The strength of the servo's damping.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The default (built) position of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The rate at which the servo consumes electric charge, in units per second, when moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The force limit of the servo, as a percentage of the maximum force.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The force limit of the servo, as a percentage of the maximum force.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Whether the servo has a spring.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo should be highlighted in-game.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Whether the servos axis is inverted.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servos axis is inverted.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Whether the servo is freely moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo's range of movement is limited to the configured minimum and
 * maximum positions.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo's range of movement is limited to the configured minimum and
 * maximum positions.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Whether the servo is locked.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo is locked.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value);

/**
 * Whether the servo is moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo moves rotationally (as opposed to linearly).
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the servo is running, when operating as a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Whether the part is operating as a servo (rather than a rotor).
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The maximum acceleration the servo can achieve.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The maximum position of the servo, specified by the part configuration.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The maximum force the servo can generate.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The maximum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The maximum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The maximum speed the servo can achieve.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The minimum position of the servo, specified by the part configuration.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The minimum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The minimum position of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * Whether the part acts as a servo or a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode(krpc_connection_t connection, krpc_InfernalRobotics_ServoMode_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The name of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The name of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, const char * value);

/**
 * The part containing the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The position of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Position(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The list of preset positions configured for the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions(krpc_connection_t connection, krpc_list_float_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The acceleration of the servo when operating as a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The acceleration of the servo when operating as a rotor.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The speed multiplier of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The speed multiplier of the servo, specified by the in-game tweak menu.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The strength of the servo's spring, when it has one.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The strength of the servo's spring, when it has one.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value);

/**
 * The target position the servo is moving towards.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The target speed the servo is moving at.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * The unique identifier of the servo.
 */
static inline krpc_error_t krpc_InfernalRobotics_Servo_UID(krpc_connection_t connection, uint32_t * returnValue, krpc_InfernalRobotics_Servo_t instance);

/**
 * Moves all of the servos in the group to the center.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the left.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the next preset.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the previous preset.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Moves all of the servos in the group to the right.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Returns the servo with the given name from this group,
 * or null if none exists.
 * @param name Name of servo to find.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance, const char * name);

/**
 * Stops the servos in the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether the group is in advanced mode.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether the group is in advanced mode.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * Whether the build aid is enabled for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether the build aid is enabled for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * The total rate at which the servos in the group consume electric charge, in units
 * per second, when moving.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether the group is expanded in the InfernalRobotics UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether the group is expanded in the InfernalRobotics UI.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * The key assigned to be the "forward" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The key assigned to be the "forward" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * Whether inverse kinematics is active for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * Whether inverse kinematics is active for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value);

/**
 * The direction the group is currently moving in: -1 for reverse, 0 for stopped
 * and 1 for forward.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection(krpc_connection_t connection, int32_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The name of the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The name of the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * The parts containing the servos in the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The key assigned to be the "reverse" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The key assigned to be the "reverse" key for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value);

/**
 * The servos that are in the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The speed multiplier for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

/**
 * The speed multiplier for the group.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, float value);

/**
 * The vessel the group belongs to, or null if it is not available.
 */
static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance);

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
  KRPC_CHECK(krpc_call(&_call, 4, 2, 2, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroups(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 1, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 3, 2, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 4, 4, 0, NULL));
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

static inline krpc_error_t krpc_InfernalRobotics_Ready(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 4, 5, 0, NULL));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_AddPreset(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 11, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &position));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 8, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 7, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 6, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MoveTo(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float position, float speed) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 4, 9, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &position));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_float, &speed));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_RemovePresetAt(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, int32_t index) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 12, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &index));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_SortPresets(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 13, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Stop(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 10, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Acceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 31, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Acceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 32, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_CanHaveLimits(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 59, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_CommandedPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 41, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_ConfigSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 27, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_CurrentSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 30, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_DampingPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 51, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_DampingPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 52, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_DefaultPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 42, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 48, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_ForceLimit(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 43, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_ForceLimit(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 44, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_HasSpring(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 60, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Highlight(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 19, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsAxisInverted(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 37, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsAxisInverted(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 38, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsFreeMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 34, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLimited(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 55, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLimited(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 56, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsLocked(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 35, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_IsLocked(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 36, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsMoving(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 33, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRotational(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 57, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsRunning(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 61, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_IsServo(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 58, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 46, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 22, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxForce(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 45, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 25, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MaxPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 26, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_MaxSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 47, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinConfigPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 21, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_MinPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 23, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_MinPosition(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 24, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Mode(krpc_connection_t connection, krpc_InfernalRobotics_ServoMode_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 18, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 14, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 15, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 17, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_Position(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 20, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_PresetPositions(krpc_connection_t connection, krpc_list_float_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 62, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_RotorAcceleration(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 53, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_RotorAcceleration(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 54, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 28, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 29, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_SpringPower(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 49, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_set_SpringPower(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 50, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetPosition(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 39, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_TargetSpeed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 40, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_Servo_UID(krpc_connection_t connection, uint32_t * returnValue, krpc_InfernalRobotics_Servo_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 16, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveCenter(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 66, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveLeft(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 65, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveNextPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 67, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovePrevPreset(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 68, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MoveRight(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 64, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ServoWithName(krpc_connection_t connection, krpc_InfernalRobotics_Servo_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 63, 2, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Stop(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 69, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_AdvancedMode(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 82, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_AdvancedMode(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 83, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_BuildAid(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 85, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_BuildAid(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 86, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ElectricChargeRequired(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 84, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Expanded(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 78, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Expanded(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 79, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ForwardKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 72, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ForwardKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 73, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_IKActive(krpc_connection_t connection, bool * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 87, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_IKActive(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 88, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_MovingDirection(krpc_connection_t connection, int32_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 81, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Name(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 70, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Name(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 71, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Parts(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 90, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_ReverseKey(krpc_connection_t connection, char * * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 74, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_ReverseKey(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 75, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Servos(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 89, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Speed(krpc_connection_t connection, float * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 76, 1, _arguments));
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

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_set_Speed(krpc_connection_t connection, krpc_InfernalRobotics_ServoGroup_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 4, 77, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_InfernalRobotics_ServoGroup_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_InfernalRobotics_ServoGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 4, 80, 1, _arguments));
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

#ifdef __cplusplus
}  // extern "C"
#endif
