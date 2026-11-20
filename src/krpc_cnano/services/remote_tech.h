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
 * A RemoteTech antenna. Obtained by calling krpc_RemoteTech_Comms_Antennas() or krpc_RemoteTech_Antenna().
 */
typedef krpc_object_t krpc_RemoteTech_Antenna_t;
/**
 * Communications for a vessel.
 */
typedef krpc_object_t krpc_RemoteTech_Comms_t;

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

#ifndef KRPC_TYPE_LIST_STRING
#define KRPC_TYPE_LIST_STRING

typedef struct krpc_list_string_s krpc_list_string_t;
struct krpc_list_string_s {
  size_t size;
  char * * items;
};

static inline krpc_error_t krpc_encode_list_string(
  pb_ostream_t * stream, const krpc_list_string_t * value);
static inline krpc_error_t krpc_encode_size_list_string(
  size_t * size, const krpc_list_string_t * value);
static inline bool krpc_encode_callback_list_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_string(
  pb_istream_t * stream, krpc_list_string_t * value);

#endif  // KRPC_TYPE_LIST_STRING

/**
 * The type of object an antenna is targetting.
 * See krpc_RemoteTech_Antenna_Target().
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

#define KRPC_CLASS_REMOTETECH_ANTENNA 6u, 90975867u
#define KRPC_CLASS_REMOTETECH_COMMS 6u, 2704736000u
#define KRPC_ENUMERATION_REMOTETECH_TARGET 6u, 3679749015u

/**
 * Get the antenna object for a particular part.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna(krpc_connection_t connection, krpc_RemoteTech_Antenna_t * returnValue, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call krpc_RemoteTech_Antenna() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Get a communications object, representing the communication capability of a particular vessel.
 */
static inline krpc_error_t krpc_RemoteTech_Comms(krpc_connection_t connection, krpc_RemoteTech_Comms_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_RemoteTech_Comms() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_RemoteTech_Comms(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether RemoteTech is installed.
 */
static inline krpc_error_t krpc_RemoteTech_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_RemoteTech_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_RemoteTech_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The names of the ground stations.
 */
static inline krpc_error_t krpc_RemoteTech_GroundStations(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * Fills in the call krpc_RemoteTech_GroundStations() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_GroundStations_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_RemoteTech_GroundStations(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_GroundStations_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the antenna has a connection.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call krpc_RemoteTech_Antenna_HasConnection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_HasConnection_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_HasConnection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_HasConnection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Get the part containing this antenna.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call krpc_RemoteTech_Antenna_Part() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_Part(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_Part_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The object that the antenna is targetting.
 * This property can be used to set the target to #KRPC_REMOTETECH_TARGET_NONE or #KRPC_REMOTETECH_TARGET_ACTIVEVESSEL.
 * To set the target to a celestial body, ground station or vessel see krpc_RemoteTech_Antenna_TargetBody(),
 * krpc_RemoteTech_Antenna_TargetGroundStation() and krpc_RemoteTech_Antenna_TargetVessel().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_Target(krpc_connection_t connection, krpc_RemoteTech_Target_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call krpc_RemoteTech_Antenna_Target() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_Target_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_Target(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_Target_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The object that the antenna is targetting.
 * This property can be used to set the target to #KRPC_REMOTETECH_TARGET_NONE or #KRPC_REMOTETECH_TARGET_ACTIVEVESSEL.
 * To set the target to a celestial body, ground station or vessel see krpc_RemoteTech_Antenna_TargetBody(),
 * krpc_RemoteTech_Antenna_TargetGroundStation() and krpc_RemoteTech_Antenna_TargetVessel().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_Target(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_RemoteTech_Target_t value);

/**
 * Fills in the call krpc_RemoteTech_Antenna_set_Target() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_Target_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, krpc_RemoteTech_Target_t value);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_set_Target(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_Target_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The celestial body the antenna is targetting.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call krpc_RemoteTech_Antenna_TargetBody() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_TargetBody(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetBody_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The celestial body the antenna is targetting.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * Fills in the call krpc_RemoteTech_Antenna_set_TargetBody() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_CelestialBody_t value);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_set_TargetBody(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The ground station the antenna is targetting.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation(krpc_connection_t connection, char * * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call krpc_RemoteTech_Antenna_TargetGroundStation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_TargetGroundStation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The ground station the antenna is targetting.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, const char * value);

/**
 * Fills in the call krpc_RemoteTech_Antenna_set_TargetGroundStation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, const char * value);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_set_TargetGroundStation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The vessel the antenna is targetting.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetVessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call krpc_RemoteTech_Antenna_TargetVessel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetVessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_TargetVessel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_TargetVessel_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The vessel the antenna is targetting.
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_Vessel_t value);

/**
 * Fills in the call krpc_RemoteTech_Antenna_set_TargetVessel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_Vessel_t value);

/**
 * Fills in the call template of krpc_RemoteTech_Antenna_set_TargetVessel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The signal delay between the this vessel and another vessel, in seconds.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param other
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance, krpc_SpaceCenter_Vessel_t other);

/**
 * Fills in the call krpc_RemoteTech_Comms_SignalDelayToVessel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance, krpc_SpaceCenter_Vessel_t other);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_SignalDelayToVessel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The antennas for this vessel.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_Antennas(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_Antennas() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_Antennas_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_Antennas(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_Antennas_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the vessel has any connection.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_HasConnection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasConnection_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_HasConnection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasConnection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the vessel has a connection to a ground station.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_HasConnectionToGroundStation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_HasConnectionToGroundStation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the vessel has a flight computer on board.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_HasFlightComputer() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_HasFlightComputer(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the vessel can be controlled locally.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasLocalControl(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_HasLocalControl() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasLocalControl_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_HasLocalControl(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_HasLocalControl_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The shortest signal delay to the vessel, in seconds.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelay(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_SignalDelay() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelay_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_SignalDelay(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelay_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The signal delay between the vessel and the closest ground station, in seconds.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_SignalDelayToGroundStation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_SignalDelayToGroundStation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Get the vessel.
 */
static inline krpc_error_t krpc_RemoteTech_Comms_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call krpc_RemoteTech_Comms_Vessel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance);

/**
 * Fills in the call template of krpc_RemoteTech_Comms_Vessel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RemoteTech_Comms_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall);

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

#ifndef KRPC_IMPL_TYPE_LIST_STRING
#define KRPC_IMPL_TYPE_LIST_STRING

static inline bool krpc_encode_callback_items_list_string(
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

static inline krpc_error_t krpc_encode_list_string(
  pb_ostream_t * stream, const krpc_list_string_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_string;
  message.items.arg = (krpc_list_string_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_string(
  size_t * size, const krpc_list_string_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_string(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_string(
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

static inline bool krpc_decode_callback_item_list_string(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_string_t * value; } State;
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

static inline krpc_error_t krpc_decode_list_string(
  pb_istream_t * stream, krpc_list_string_t * value) {
  typedef struct State { size_t capacity; krpc_list_string_t * value; } State;
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

static inline krpc_error_t krpc_RemoteTech_Antenna(krpc_connection_t connection, krpc_RemoteTech_Antenna_t * returnValue, krpc_SpaceCenter_Part_t part) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 90975867, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Antenna_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 90975867, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &part));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 90975867, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms(krpc_connection_t connection, krpc_RemoteTech_Comms_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 2704736000, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 2704736000, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 2704736000, 0);
}

static inline krpc_error_t krpc_RemoteTech_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 6, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_RemoteTech_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 265274134, 0);
}

static inline krpc_error_t krpc_RemoteTech_GroundStations(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 6, 4210187787, 0, NULL));
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

static inline krpc_error_t krpc_RemoteTech_GroundStations_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 4210187787, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_GroundStations_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 4210187787, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 2756202687, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Antenna_HasConnection_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 2756202687, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_HasConnection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 2756202687, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 3299023893, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Antenna_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 3299023893, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_Part_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 3299023893, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_Target(krpc_connection_t connection, krpc_RemoteTech_Target_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 368954199, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Antenna_Target_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 368954199, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_Target_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 368954199, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_Target(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_RemoteTech_Target_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 6, 3385968638, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_Target_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, krpc_RemoteTech_Target_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 3385968638, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_Target_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 3385968638, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetBody(krpc_connection_t connection, krpc_SpaceCenter_CelestialBody_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 4001250977, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 4001250977, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetBody_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 4001250977, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 6, 3867630114, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_CelestialBody_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 3867630114, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetBody_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 3867630114, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation(krpc_connection_t connection, char * * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 265169964, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 265169964, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 265169964, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 6, 3249822409, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 3249822409, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 3249822409, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetVessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Antenna_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 3600431310, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetVessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 3600431310, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_TargetVessel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 3600431310, 0);
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel(krpc_connection_t connection, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_Vessel_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 6, 4215079514, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Antenna_t instance, krpc_SpaceCenter_Vessel_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 4215079514, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Antenna_set_TargetVessel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 4215079514, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance, krpc_SpaceCenter_Vessel_t other) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 6, 1529379322, 2, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance, krpc_SpaceCenter_Vessel_t other) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 1529379322, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &other));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToVessel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 1529379322, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_Antennas(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 4092151210, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_Antennas_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 4092151210, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_Antennas_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 4092151210, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasConnection(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 2597482700, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_HasConnection_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 2597482700, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasConnection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 2597482700, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 4070021703, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 4070021703, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasConnectionToGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 4070021703, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 49020657, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 49020657, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasFlightComputer_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 49020657, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasLocalControl(krpc_connection_t connection, bool * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 2422974080, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_HasLocalControl_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 2422974080, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_HasLocalControl_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 2422974080, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelay(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 739601261, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelay_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 739601261, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelay_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 739601261, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation(krpc_connection_t connection, double * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 381115479, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 381115479, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_SignalDelayToGroundStation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 381115479, 0);
}

static inline krpc_error_t krpc_RemoteTech_Comms_Vessel(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t * returnValue, krpc_RemoteTech_Comms_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 6, 1331193400, 1, _arguments));
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

static inline krpc_error_t krpc_RemoteTech_Comms_Vessel_call(krpc_schema_ProcedureCall * procedureCall, krpc_RemoteTech_Comms_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 6, 1331193400, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RemoteTech_Comms_Vessel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 6, 1331193400, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
