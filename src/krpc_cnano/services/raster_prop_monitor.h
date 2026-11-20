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
#include <krpc_cnano/services/std_lib.h>

#ifdef __cplusplus
extern "C" {
#endif

KRPC_DEPRECATED_USES_BEGIN

/**
 * The Raster Prop Monitor computer of a part, which holds the variables its props show.
 * Obtained by calling krpc_RasterPropMonitor_Computer() or
 * krpc_RasterPropMonitor_Computers().
 */
typedef krpc_object_t krpc_RasterPropMonitor_Computer_t;
/**
 * A screen page that a script draws, and whose button presses it answers. Obtained by
 * calling krpc_RasterPropMonitor_Monitor_Display() or krpc_RasterPropMonitor_Display().
 *
 * A monitor shows a display on a page whose handler is `KRPCDisplay`. kRPC's
 * optional Module Manager patch adds such a page, named `krpc`, to every monitor.
 * The content is kept while KSP builds the IVA again, but not saved with the game.
 */
typedef krpc_object_t krpc_RasterPropMonitor_Display_t;
/**
 * A Raster Prop Monitor external camera: a part that the MFD camera pages show, such as
 * the JSI External Radial-mount Camera. Obtained by calling
 * krpc_RasterPropMonitor_Cameras().
 */
typedef krpc_object_t krpc_RasterPropMonitor_ExternalCamera_t;
/**
 * A Raster Prop Monitor screen in an IVA, such as an MFD.
 * Obtained by calling krpc_RasterPropMonitor_Monitors().
 *
 * Raster Prop Monitor draws a monitor only while the player is in the IVA of its pod, or
 * the IVA overlay is on. Reading another monitor's text or image updates it, in any camera
 * mode.
 */
typedef krpc_object_t krpc_RasterPropMonitor_Monitor_t;

#ifndef KRPC_TYPE_STDLIB_COLORRGBA
#define KRPC_TYPE_STDLIB_COLORRGBA

typedef struct krpc_StdLib_ColorRGBA_s krpc_StdLib_ColorRGBA_t;
struct krpc_StdLib_ColorRGBA_s {
  float r;
  float g;
  float b;
  float a;
};

static inline krpc_error_t krpc_encode_StdLib_ColorRGBA(
  pb_ostream_t * stream, const krpc_StdLib_ColorRGBA_t * value);
static inline krpc_error_t krpc_encode_size_StdLib_ColorRGBA(
  size_t * size, const krpc_StdLib_ColorRGBA_t * value);
static inline bool krpc_encode_callback_StdLib_ColorRGBA(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_StdLib_ColorRGBA(
  pb_istream_t * stream, krpc_StdLib_ColorRGBA_t * value);

#endif  // KRPC_TYPE_STDLIB_COLORRGBA

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
 * The type of a Raster Prop Monitor variable. See krpc_RasterPropMonitor_Computer_VariableType().
 */
typedef enum {
  /**
   * A number. Access using krpc_RasterPropMonitor_Computer_NumberVariable().
   */
  KRPC_RASTERPROPMONITOR_VARIABLETYPE_NUMBER = 0,
  /**
   * A string. Access using krpc_RasterPropMonitor_Computer_StringVariable().
   */
  KRPC_RASTERPROPMONITOR_VARIABLETYPE_STRING = 1
} krpc_RasterPropMonitor_VariableType_t;

#define KRPC_CLASS_RASTERPROPMONITOR_COMPUTER 17u, 3527601526u
#define KRPC_CLASS_RASTERPROPMONITOR_DISPLAY 17u, 3221807412u
#define KRPC_CLASS_RASTERPROPMONITOR_EXTERNALCAMERA 17u, 3693078039u
#define KRPC_CLASS_RASTERPROPMONITOR_MONITOR 17u, 4095553100u
#define KRPC_ENUMERATION_RASTERPROPMONITOR_VARIABLETYPE 17u, 4133917476u

/**
 * The external cameras on a vessel's parts.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel The vessel.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Cameras(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_RasterPropMonitor_Cameras() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Cameras_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Cameras(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Cameras_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The computer of a part.
 * Throws an exception if the part has no Raster Prop Monitor computer.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param part The part.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer(krpc_connection_t connection, krpc_RasterPropMonitor_Computer_t * returnValue, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The computers of the parts of a vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel The vessel.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computers(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_RasterPropMonitor_Computers() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computers_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computers(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computers_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The display of a vessel with the given name, which every page whose
 * `KRPCDisplay` handler names it shows.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel The vessel.
 * @param name The name of the display.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Display() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of a persistent variable of a vessel, or `null` if it is not set.
 * Throws an exception if the vessel has no Raster Prop Monitor computer.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param vessel The vessel.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 */
static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariable(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_GlobalPersistentVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_GlobalPersistentVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * An event that fires when krpc_RasterPropMonitor_GlobalPersistentVariable() changes.
 * The event lasts until it is removed.
 * Throws an exception if the vessel has no Raster Prop Monitor computer.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel The vessel.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 */
static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariableChanged(krpc_connection_t connection, uint64_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_GlobalPersistentVariableChanged() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariableChanged_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_GlobalPersistentVariableChanged(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariableChanged_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The monitors in the IVAs of a vessel's parts.
 * Throws an exception if the vessel is not the active vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel The active vessel.
 *
 * KSP builds IVAs only for the active vessel.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitors(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitors_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove a persistent variable of a vessel. The props that show it update.
 * Throws an exception if the vessel has no Raster Prop Monitor computer.
 * @param connection A connection object.
 * @param vessel The vessel.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 */
static inline krpc_error_t krpc_RasterPropMonitor_RemoveGlobalPersistentVariable(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_RemoveGlobalPersistentVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_RemoveGlobalPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_RemoveGlobalPersistentVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_RemoveGlobalPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set a persistent variable of a vessel. The props that show it update.
 * Throws an exception if the vessel has no Raster Prop Monitor computer.
 * @param connection A connection object.
 * @param vessel The vessel.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 * @param value The value.
 */
static inline krpc_error_t krpc_RasterPropMonitor_SetGlobalPersistentVariable(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel, const char * name, double value);

/**
 * Fills in the call krpc_RasterPropMonitor_SetGlobalPersistentVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_SetGlobalPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name, double value);

/**
 * Fills in the call template of krpc_RasterPropMonitor_SetGlobalPersistentVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_SetGlobalPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether Raster Prop Monitor is installed.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_RasterPropMonitor_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text with its variables formatted as a monitor page formats them, e.g.
 * `{0:SIP6.1}m $&$ ALTITUDE`. Each line takes its own variables.
 * Throws an exception if Raster Prop Monitor does not recognize a variable, or a
 * format is invalid.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param text The text, in the format of a monitor page.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_FormatVariables(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * text);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_FormatVariables() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_FormatVariables_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * text);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_FormatVariables(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_FormatVariables_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of a number variable. Raster Prop Monitor gives a boolean as 0 or 1.
 * Throws an exception if Raster Prop Monitor does not recognize the variable, or
 * its value is a string.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param name The name of the variable, e.g. `ALTITUDE`.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_NumberVariable(krpc_connection_t connection, double * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_NumberVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_NumberVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_NumberVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_NumberVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of a persistent variable of the part, or else of the vessel, or
 * `null` if neither is set. Props read it as `PERSISTENT_name`.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param instance The object to call the method on.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariable(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_PersistentVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_PersistentVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * An event that fires when krpc_RasterPropMonitor_Computer_PersistentVariable() changes, such as when a
 * switch in the IVA sets it. The event lasts until it is removed.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariableChanged(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_PersistentVariableChanged() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariableChanged_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_PersistentVariableChanged(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariableChanged_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove a persistent variable of the part. The props that show it update.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_RemovePersistentVariable(krpc_connection_t connection, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_RemovePersistentVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_RemovePersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_RemovePersistentVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_RemovePersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set a persistent variable of the part. The props that show it update.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param name The name of the variable, without the `PERSISTENT_` prefix.
 * @param value The value.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_SetPersistentVariable(krpc_connection_t connection, krpc_RasterPropMonitor_Computer_t instance, const char * name, double value);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_SetPersistentVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_SetPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name, double value);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_SetPersistentVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_SetPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of a variable as a string. A number gives its invariant culture string.
 * Throws an exception if Raster Prop Monitor does not recognize the variable.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param name The name of the variable, e.g. `ALTITUDE`.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_StringVariable(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_StringVariable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_StringVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_StringVariable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_StringVariable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The type of a variable's current value.
 * Throws an exception if Raster Prop Monitor does not recognize the variable.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param name The name of the variable, e.g. `ALTITUDE`.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_VariableType(krpc_connection_t connection, krpc_RasterPropMonitor_VariableType_t * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_VariableType() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_VariableType_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_VariableType(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_VariableType_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The part the computer is on.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RasterPropMonitor_Computer_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Computer_Part() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Computer_Part(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Computer_Part_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * An event that fires when a monitor showing the display has a button pressed.
 * The event lasts until it is removed.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param id The button's index in krpc_RasterPropMonitor_Monitor_Buttons().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonPressed(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Display_t instance, int32_t id);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_ButtonPressed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonPressed_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, int32_t id);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_ButtonPressed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonPressed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * An event that fires when a monitor showing the display has a button released.
 * The event lasts until it is removed.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param id The button's index in krpc_RasterPropMonitor_Monitor_Buttons().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonReleased(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Display_t instance, int32_t id);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_ButtonReleased() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonReleased_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, int32_t id);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_ButtonReleased(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonReleased_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Clear the text and the image.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Clear(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_Clear() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Clear_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_Clear(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Clear_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The background image of the display, drawn under the text and scaled to the
 * screen, as a PNG or JPEG image. `null` for none.
 * Throws an exception if the image does not decode.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, bool * returnValueIsNull, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The background image of the display, drawn under the text and scaled to the
 * screen, as a PNG or JPEG image. `null` for none.
 * Throws an exception if the image does not decode.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Image(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t instance, const krpc_bytes_t * value);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_set_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, const krpc_bytes_t * value);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_set_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The name of the display, or `null` for a monitor's own display.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Name(krpc_connection_t connection, char * * returnValue, bool * returnValueIsNull, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether a monitor shows the display now.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Shown(krpc_connection_t connection, bool * returnValue, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_Shown() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Shown_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_Shown(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Shown_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text of the display, in Raster Prop Monitor's page format. It can hold
 * markup, such as `[#ff0000]` for a color, and a line can format variables, as
 * in `{0:F0} m $&$ ALTITUDE`. Raster Prop Monitor updates the variables as
 * it draws.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Text(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_Text() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_Text(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_Text_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text of the display, in Raster Prop Monitor's page format. It can hold
 * markup, such as `[#ff0000]` for a color, and a line can format variables, as
 * in `{0:F0} m $&$ ALTITUDE`. Raster Prop Monitor updates the variables as
 * it draws.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Text(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t instance, const char * value);

/**
 * Fills in the call krpc_RasterPropMonitor_Display_set_Text() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, const char * value);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Display_set_Text(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Text_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The camera's view as an image, rendered now. Streamed at a rate, it is a video of
 * the camera, for which JPEG is smaller and faster.
 * Throws an exception if the camera is not on the active vessel.
 * @param connection A connection object.
 * @param returnValue The image data.
 * @param instance The object to call the method on.
 * @param width The width of the image, in pixels.
 * @param height The height of the image, in pixels.
 * @param format The format of the image.
 * @param quality The quality of a JPEG image, from 1 to 100.
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance, int32_t width, int32_t height, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call krpc_RasterPropMonitor_ExternalCamera_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance, int32_t width, int32_t height, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call template of krpc_RasterPropMonitor_ExternalCamera_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The field of view that krpc_RasterPropMonitor_ExternalCamera_Image() renders at, in degrees. It starts at
 * krpc_RasterPropMonitor_ExternalCamera_MaxFoV(), as on an MFD camera page, and a value set is clamped
 * to the camera's range.
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_FoV(krpc_connection_t connection, float * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_ExternalCamera_FoV() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_FoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_ExternalCamera_FoV(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_FoV_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The field of view that krpc_RasterPropMonitor_ExternalCamera_Image() renders at, in degrees. It starts at
 * krpc_RasterPropMonitor_ExternalCamera_MaxFoV(), as on an MFD camera page, and a value set is clamped
 * to the camera's range.
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_set_FoV(krpc_connection_t connection, krpc_RasterPropMonitor_ExternalCamera_t instance, float value);

/**
 * Fills in the call krpc_RasterPropMonitor_ExternalCamera_set_FoV() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_set_FoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance, float value);

/**
 * Fills in the call template of krpc_RasterPropMonitor_ExternalCamera_set_FoV(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_set_FoV_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The largest field of view of the camera, in degrees.
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MaxFoV(krpc_connection_t connection, float * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_ExternalCamera_MaxFoV() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MaxFoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_ExternalCamera_MaxFoV(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MaxFoV_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The smallest field of view of the camera, in degrees.
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MinFoV(krpc_connection_t connection, float * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_ExternalCamera_MinFoV() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MinFoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_ExternalCamera_MinFoV(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MinFoV_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The camera's identifier, e.g. `ExtCam1`, which the MFD camera pages select it
 * by. The player sets the number in the part's menu.
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Name(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_ExternalCamera_Name() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_ExternalCamera_Name(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Name_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The part the camera is on.
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_ExternalCamera_Part() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_ExternalCamera_Part(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Part_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Take a page button from Raster Prop Monitor. A press of the button then shows the
 * given page, such as the `krpc` page of the monitor's own display, in place of
 * the pages Raster Prop Monitor assigns it, and fires krpc_RasterPropMonitor_Monitor_CapturedButtonPressed().
 * The capture lasts while KSP builds the IVA again, but is not saved with the game.
 * Throws an exception if the button does not select the monitor's pages, or the
 * monitor has no page with the name.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param name The name of the button, from krpc_RasterPropMonitor_Monitor_PageButtons().
 * @param page The name of the page to show.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CaptureButton(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * name, const char * page);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_CaptureButton() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CaptureButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name, const char * page);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_CaptureButton(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CaptureButton_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * An event that fires when the player presses a captured page button.
 * The event lasts until it is removed.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param name The name of the button.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CapturedButtonPressed(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_CapturedButtonPressed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CapturedButtonPressed_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_CapturedButtonPressed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CapturedButtonPressed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The screen as an image, at krpc_RasterPropMonitor_Monitor_ScreenPixelWidth() by
 * krpc_RasterPropMonitor_Monitor_ScreenPixelHeight() pixels.
 * @param connection A connection object.
 * @param returnValue The image data.
 * @param instance The object to call the method on.
 * @param format The format of the image.
 * @param quality The quality of a JPEG image, from 1 to 100.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Press and release a button, as the player does. The release is on the next frame.
 * Throws an exception if the monitor has no button with the identifier.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param id The button's index in krpc_RasterPropMonitor_Monitor_Buttons().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressButton(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, int32_t id);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_PressButton() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, int32_t id);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_PressButton(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressButton_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Press and release a page button, as the player does. The release is on the next
 * frame. A captured button shows the page the script chose.
 * Throws an exception if the button does not select the monitor's pages.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param name The name of the button, from krpc_RasterPropMonitor_Monitor_PageButtons().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressPageButton(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_PressPageButton() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressPageButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_PressPageButton(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressPageButton_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Give a captured page button back to Raster Prop Monitor.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param name The name of the button.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ReleaseCapture(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * name);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_ReleaseCapture() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ReleaseCapture_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_ReleaseCapture(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ReleaseCapture_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Returns the name of the page the monitor shows, and sets it as a press of the page's
 * button does. Raster Prop Monitor can refuse the switch, or redirect it to another
 * page, as the prop's configuration sets. Throws an exception if the monitor has no page with
 * the name.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ActivePage(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_ActivePage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ActivePage_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_ActivePage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ActivePage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Returns the name of the page the monitor shows, and sets it as a press of the page's
 * button does. Raster Prop Monitor can refuse the switch, or redirect it to another
 * page, as the prop's configuration sets. Throws an exception if the monitor has no page with
 * the name.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_set_ActivePage(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * value);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_set_ActivePage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_set_ActivePage_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * value);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_set_ActivePage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_set_ActivePage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The names of the monitor's buttons, e.g. `button_UP`. A button's index in
 * this list is its identifier. A name is empty where the configuration leaves a gap.
 *
 * These are the buttons that the active page handles. The buttons that select pages
 * are not in the list.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Buttons(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_Buttons() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Buttons_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_Buttons(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Buttons_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of text with no color tag, on the active page.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_DefaultColor(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_DefaultColor() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_DefaultColor_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_DefaultColor(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_DefaultColor_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The monitor's own display, which its pages show when their `KRPCDisplay`
 * handler names no display.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Display(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_Display() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Display_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_Display(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Display_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The height of a character, in pixels.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterHeight(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_LetterHeight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterHeight_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_LetterHeight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterHeight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The width of a character, in pixels.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterWidth(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_LetterWidth() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterWidth_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_LetterWidth(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterWidth_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The names of the prop's buttons that select the monitor's pages, e.g.
 * `buttonR1`. A captured button is one of them.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PageButtons(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_PageButtons() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PageButtons_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_PageButtons(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PageButtons_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The names of the pages, in the order of the prop's configuration.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Pages(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_Pages() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Pages_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_Pages(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Pages_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The part the monitor is in.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_Part() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_Part(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Part_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The name of the prop, e.g. `RasterPropMonitorBasicMFD`.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PropName(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_PropName() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PropName_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_PropName(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PropName_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text of the active page with its variables formatted, and Raster Prop
 * Monitor's markup kept: colors `[#rrggbb]` and `[#rrggbbaa]`, nudges
 * `[@xN]` and `[@yN]` in pixels, `[hw]` and `[dw]` for half and
 * double width, `[sup]`, `[sub]` and `[fontN]`.
 *
 * The page's text overlay, drawn over the text, is not included.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_RawText(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_RawText() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_RawText_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_RawText(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_RawText_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The height of the screen, in lines.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenHeight(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_ScreenHeight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenHeight_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_ScreenHeight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenHeight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The height of the screen, in pixels.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelHeight(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_ScreenPixelHeight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelHeight_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_ScreenPixelHeight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelHeight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The width of the screen, in pixels.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelWidth(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_ScreenPixelWidth() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelWidth_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_ScreenPixelWidth(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelWidth_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The width of the screen, in characters.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenWidth(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_ScreenWidth() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenWidth_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_ScreenWidth(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenWidth_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text of the active page, as the screen shows it: one line per screen line,
 * holding the characters Raster Prop Monitor draws. The tags it draws nothing for,
 * such as colors, are removed.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Text(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_Text() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_Text(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Text_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The names of the variables the active page shows, in the order of its text.
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Variables(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call krpc_RasterPropMonitor_Monitor_Variables() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Variables_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance);

/**
 * Fills in the call template of krpc_RasterPropMonitor_Monitor_Variables(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Variables_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

#ifndef KRPC_IMPL_TYPE_STDLIB_COLORRGBA
#define KRPC_IMPL_TYPE_STDLIB_COLORRGBA

static inline bool krpc_encode_callback_items_StdLib_ColorRGBA(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_StdLib_ColorRGBA_t * value = (const krpc_StdLib_ColorRGBA_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_float(&size, value->r));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_float(stream, value->r));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_float(&size, value->g));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_float(stream, value->g));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_float(&size, value->b));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_float(stream, value->b));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_float(&size, value->a));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_float(stream, value->a));
  }
  return true;
}

static inline krpc_error_t krpc_encode_StdLib_ColorRGBA(
  pb_ostream_t * stream, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_StdLib_ColorRGBA;
  message.items.arg = (krpc_StdLib_ColorRGBA_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_StdLib_ColorRGBA(
  size_t * size, const krpc_StdLib_ColorRGBA_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_StdLib_ColorRGBA(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_StdLib_ColorRGBA(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for StdLib_ColorRGBA");
  krpc_StdLib_ColorRGBA_t * value = (krpc_StdLib_ColorRGBA_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_StdLib_ColorRGBA(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for StdLib_ColorRGBA");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_StdLib_ColorRGBA(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_StdLib_ColorRGBA(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_StdLib_ColorRGBA_t * value;} State;
  State * state = (State*)(*arg);
  krpc_StdLib_ColorRGBA_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_float(stream, &value->r));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_float(stream, &value->g));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_float(stream, &value->b));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_float(stream, &value->a));
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

static inline krpc_error_t krpc_decode_StdLib_ColorRGBA(
  pb_istream_t * stream, krpc_StdLib_ColorRGBA_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_StdLib_ColorRGBA;
  typedef struct State { size_t pos; krpc_StdLib_ColorRGBA_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 4)
    KRPC_FAIL(ENCODING, "Too few fields for a StdLib_ColorRGBA");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_STDLIB_COLORRGBA

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

static inline krpc_error_t krpc_RasterPropMonitor_Cameras(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3681924777, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Cameras_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3681924777, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Cameras_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3681924777, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer(krpc_connection_t connection, krpc_RasterPropMonitor_Computer_t * returnValue, krpc_SpaceCenter_Part_t part) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3527601526, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Computer_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3527601526, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &part));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3527601526, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computers(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3333622888, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Computers_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3333622888, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computers_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3333622888, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 3221807412, 2, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Display_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3221807412, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3221807412, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariable(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 1829828062, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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
      KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1829828062, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1829828062, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariableChanged(krpc_connection_t connection, uint64_t * returnValue, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 3194327178, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_uint64(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariableChanged_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3194327178, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_GlobalPersistentVariableChanged_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3194327178, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitors(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 370535122, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitors_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 370535122, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 370535122, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_RemoveGlobalPersistentVariable(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 1302159038, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_RemoveGlobalPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1302159038, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_RemoveGlobalPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1302159038, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_SetGlobalPersistentVariable(krpc_connection_t connection, krpc_SpaceCenter_Vessel_t vessel, const char * name, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 17, 1806357010, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_SetGlobalPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel, const char * name, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1806357010, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_SetGlobalPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1806357010, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 17, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_RasterPropMonitor_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 265274134, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_FormatVariables(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * text) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 1050302405, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &text));
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

static inline krpc_error_t krpc_RasterPropMonitor_Computer_FormatVariables_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * text) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1050302405, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &text));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_FormatVariables_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1050302405, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_NumberVariable(krpc_connection_t connection, double * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 838188508, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

static inline krpc_error_t krpc_RasterPropMonitor_Computer_NumberVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 838188508, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_NumberVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 838188508, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariable(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 328531931, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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
      KRPC_CHECK(krpc_decode_double(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 328531931, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 328531931, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariableChanged(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 2744264855, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_uint64(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariableChanged_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2744264855, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_PersistentVariableChanged_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2744264855, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_RemovePersistentVariable(krpc_connection_t connection, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 3108843985, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_RemovePersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3108843985, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_RemovePersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3108843985, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_SetPersistentVariable(krpc_connection_t connection, krpc_RasterPropMonitor_Computer_t instance, const char * name, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 17, 4089310206, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_SetPersistentVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 4089310206, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_SetPersistentVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 4089310206, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_StringVariable(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 3921112521, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

static inline krpc_error_t krpc_RasterPropMonitor_Computer_StringVariable_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3921112521, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_StringVariable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3921112521, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_VariableType(krpc_connection_t connection, krpc_RasterPropMonitor_VariableType_t * returnValue, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 3629936571, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
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

static inline krpc_error_t krpc_RasterPropMonitor_Computer_VariableType_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3629936571, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_VariableType_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3629936571, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RasterPropMonitor_Computer_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3297910862, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Computer_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Computer_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3297910862, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Computer_Part_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3297910862, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonPressed(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Display_t instance, int32_t id) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 1284993714, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &id));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_uint64(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonPressed_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, int32_t id) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1284993714, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &id));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonPressed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1284993714, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonReleased(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Display_t instance, int32_t id) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 811565487, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &id));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_uint64(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonReleased_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, int32_t id) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 811565487, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &id));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_ButtonReleased_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 811565487, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Clear(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3339281122, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Clear_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3339281122, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Clear_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3339281122, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, bool * returnValueIsNull, krpc_RasterPropMonitor_Display_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 224413189, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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
      KRPC_CHECK(krpc_decode_bytes(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 224413189, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 224413189, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Image(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t instance, const krpc_bytes_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 2908825596, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  if (value == NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 1));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bytes, value));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, const krpc_bytes_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2908825596, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  if (value == NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bytes, value));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2908825596, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Name(krpc_connection_t connection, char * * returnValue, bool * returnValueIsNull, krpc_RasterPropMonitor_Display_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1664010827, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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
      KRPC_CHECK(krpc_decode_string(&_stream, returnValue));
    }
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1664010827, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1664010827, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Shown(krpc_connection_t connection, bool * returnValue, krpc_RasterPropMonitor_Display_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3558150366, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Display_Shown_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3558150366, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Shown_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3558150366, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Text(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Display_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3794527197, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Display_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3794527197, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_Text_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3794527197, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Text(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 2412222035, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Display_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2412222035, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Display_set_Text_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2412222035, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance, int32_t width, int32_t height, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 17, 549679234, 5, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_int32, &height));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_int32, &quality));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_bytes(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance, int32_t width, int32_t height, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 549679234, 5));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_int32, &height));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_int32, &quality));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 549679234, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_FoV(krpc_connection_t connection, float * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1744347530, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_FoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1744347530, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_FoV_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1744347530, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_set_FoV(krpc_connection_t connection, krpc_RasterPropMonitor_ExternalCamera_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 610553795, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_set_FoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 610553795, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_set_FoV_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 610553795, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MaxFoV(krpc_connection_t connection, float * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3012159974, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MaxFoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3012159974, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MaxFoV_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3012159974, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MinFoV(krpc_connection_t connection, float * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 2662244298, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MinFoV_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2662244298, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_MinFoV_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2662244298, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Name(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 2964219586, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Name_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2964219586, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Name_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2964219586, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3394787990, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_ExternalCamera_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3394787990, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_ExternalCamera_Part_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3394787990, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CaptureButton(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * name, const char * page) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 17, 3201895572, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_string, &page));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CaptureButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name, const char * page) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3201895572, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_string, &page));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CaptureButton_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3201895572, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CapturedButtonPressed(krpc_connection_t connection, uint64_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 3306625244, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_uint64(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CapturedButtonPressed_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3306625244, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_CapturedButtonPressed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3306625244, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Image(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 17, 3119519838, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_int32, &quality));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_bytes(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3119519838, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_int32, &quality));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3119519838, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressButton(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, int32_t id) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 1821330098, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &id));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, int32_t id) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1821330098, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &id));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressButton_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1821330098, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressPageButton(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 3150751605, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressPageButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3150751605, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PressPageButton_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3150751605, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ReleaseCapture(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * name) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 641362452, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &name));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ReleaseCapture_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * name) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 641362452, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &name));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ReleaseCapture_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 641362452, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ActivePage(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1585348890, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ActivePage_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1585348890, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ActivePage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1585348890, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_set_ActivePage(krpc_connection_t connection, krpc_RasterPropMonitor_Monitor_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 17, 2329828859, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_set_ActivePage_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2329828859, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_set_ActivePage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2329828859, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Buttons(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3772410402, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Buttons_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3772410402, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Buttons_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3772410402, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_DefaultColor(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 2851547643, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGBA(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_DefaultColor_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2851547643, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_DefaultColor_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2851547643, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Display(krpc_connection_t connection, krpc_RasterPropMonitor_Display_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1416747262, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Display_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1416747262, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Display_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1416747262, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterHeight(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1391568044, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterHeight_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1391568044, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterHeight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1391568044, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterWidth(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 2049052086, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterWidth_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2049052086, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_LetterWidth_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2049052086, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PageButtons(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 2875280089, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PageButtons_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2875280089, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PageButtons_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2875280089, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Pages(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1861079396, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Pages_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1861079396, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Pages_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1861079396, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3564045327, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3564045327, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Part_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3564045327, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PropName(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 2468364001, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PropName_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 2468364001, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_PropName_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 2468364001, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_RawText(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3102938949, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_RawText_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3102938949, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_RawText_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3102938949, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenHeight(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 4217229574, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenHeight_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 4217229574, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenHeight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 4217229574, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelHeight(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1341494002, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelHeight_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1341494002, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelHeight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1341494002, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelWidth(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 918153427, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelWidth_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 918153427, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenPixelWidth_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 918153427, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenWidth(krpc_connection_t connection, int32_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 3933054207, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenWidth_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 3933054207, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_ScreenWidth_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 3933054207, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Text(krpc_connection_t connection, char * * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 1281375632, 1, _arguments));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 1281375632, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Text_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 1281375632, 0);
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Variables(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_RasterPropMonitor_Monitor_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 17, 49535626, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Variables_call(krpc_schema_ProcedureCall * procedureCall, krpc_RasterPropMonitor_Monitor_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 17, 49535626, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_RasterPropMonitor_Monitor_Variables_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 17, 49535626, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
