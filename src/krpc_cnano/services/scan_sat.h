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
 * A SCANsat scanner on a part. Obtained by calling krpc_ScanSat_Scanner() or
 * krpc_ScanSat_Scanners().
 */
typedef krpc_object_t krpc_ScanSat_Scanner_t;

#ifndef KRPC_TYPE_NULLABLE_STRING
#define KRPC_TYPE_NULLABLE_STRING

typedef struct krpc_nullable_string_s krpc_nullable_string_t;
struct krpc_nullable_string_s {
  char * value;
  bool has_value;
};

static inline krpc_error_t krpc_encode_nullable_string(
  pb_ostream_t * stream, const krpc_nullable_string_t * value);
static inline krpc_error_t krpc_encode_size_nullable_string(
  size_t * size, const krpc_nullable_string_t * value);
static inline bool krpc_encode_callback_nullable_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_nullable_string(
  pb_istream_t * stream, krpc_nullable_string_t * value);

#endif  // KRPC_TYPE_NULLABLE_STRING

#ifndef KRPC_TYPE_SCANSAT_ANOMALY
#define KRPC_TYPE_SCANSAT_ANOMALY

typedef struct krpc_ScanSat_Anomaly_s krpc_ScanSat_Anomaly_t;
struct krpc_ScanSat_Anomaly_s {
  krpc_nullable_string_t name;
  double latitude;
  double longitude;
};

static inline krpc_error_t krpc_encode_ScanSat_Anomaly(
  pb_ostream_t * stream, const krpc_ScanSat_Anomaly_t * value);
static inline krpc_error_t krpc_encode_size_ScanSat_Anomaly(
  size_t * size, const krpc_ScanSat_Anomaly_t * value);
static inline bool krpc_encode_callback_ScanSat_Anomaly(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_ScanSat_Anomaly(
  pb_istream_t * stream, krpc_ScanSat_Anomaly_t * value);

#endif  // KRPC_TYPE_SCANSAT_ANOMALY

#ifndef KRPC_TYPE_LIST_SCANSAT_ANOMALY
#define KRPC_TYPE_LIST_SCANSAT_ANOMALY

typedef struct krpc_list_ScanSat_Anomaly_s krpc_list_ScanSat_Anomaly_t;
struct krpc_list_ScanSat_Anomaly_s {
  size_t size;
  krpc_ScanSat_Anomaly_t * items;
};

static inline krpc_error_t krpc_encode_list_ScanSat_Anomaly(
  pb_ostream_t * stream, const krpc_list_ScanSat_Anomaly_t * value);
static inline krpc_error_t krpc_encode_size_list_ScanSat_Anomaly(
  size_t * size, const krpc_list_ScanSat_Anomaly_t * value);
static inline bool krpc_encode_callback_list_ScanSat_Anomaly(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_ScanSat_Anomaly(
  pb_istream_t * stream, krpc_list_ScanSat_Anomaly_t * value);

#endif  // KRPC_TYPE_LIST_SCANSAT_ANOMALY

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
 * The projection of a map. See krpc_ScanSat_Map().
 */
typedef enum {
  /**
   * Equirectangular: longitude and latitude map linearly to the horizontal and vertical.
   */
  KRPC_SCANSAT_MAPPROJECTION_RECTANGULAR = 0,
  /**
   * Kavrayskiy VII, a compromise projection with less distortion at the poles.
   */
  KRPC_SCANSAT_MAPPROJECTION_KAVRAYSKIYVII = 1,
  /**
   * Two polar views side by side, the southern hemisphere on the left.
   */
  KRPC_SCANSAT_MAPPROJECTION_POLAR = 2
} krpc_ScanSat_MapProjection_t;

/**
 * The type of a map. See krpc_ScanSat_Map().
 */
typedef enum {
  /**
   * Terrain height, from the altimetry scans.
   */
  KRPC_SCANSAT_MAPTYPE_ALTIMETRY = 0,
  /**
   * Terrain slope, from the altimetry scans.
   */
  KRPC_SCANSAT_MAPTYPE_SLOPE = 1,
  /**
   * Biomes, from the biome scan, over the terrain height.
   */
  KRPC_SCANSAT_MAPTYPE_BIOME = 2,
  /**
   * The surface as seen from orbit, from the visual scans.
   */
  KRPC_SCANSAT_MAPTYPE_VISUAL = 3
} krpc_ScanSat_MapType_t;

/**
 * A set of scan types. Each scan type has its own coverage of a body.
 *
 * The values may be combined.
 */
typedef enum {
  /**
   * No scan types.
   */
  KRPC_SCANSAT_SCANTYPE_NONE = 0,
  /**
   * Low resolution altimetry, the terrain height in steps of 500 meters.
   */
  KRPC_SCANSAT_SCANTYPE_ALTIMETRYLORES = 1,
  /**
   * High resolution altimetry, the terrain height and slope.
   */
  KRPC_SCANSAT_SCANTYPE_ALTIMETRYHIRES = 2,
  /**
   * Low resolution visual imaging.
   */
  KRPC_SCANSAT_SCANTYPE_VISUALLORES = 4,
  /**
   * Biomes.
   */
  KRPC_SCANSAT_SCANTYPE_BIOME = 8,
  /**
   * The positions of anomalies.
   */
  KRPC_SCANSAT_SCANTYPE_ANOMALY = 16,
  /**
   * The positions and names of anomalies, from close range.
   */
  KRPC_SCANSAT_SCANTYPE_ANOMALYDETAIL = 32,
  /**
   * High resolution visual imaging.
   */
  KRPC_SCANSAT_SCANTYPE_VISUALHIRES = 64,
  /**
   * Low resolution resource abundance, in steps of 5%.
   */
  KRPC_SCANSAT_SCANTYPE_RESOURCELORES = 128,
  /**
   * High resolution resource abundance.
   */
  KRPC_SCANSAT_SCANTYPE_RESOURCEHIRES = 256,
  /**
   * Both altimetry scans.
   */
  KRPC_SCANSAT_SCANTYPE_ALTIMETRY = 3,
  /**
   * Both visual scans.
   */
  KRPC_SCANSAT_SCANTYPE_VISUAL = 68,
  /**
   * Both anomaly scans.
   */
  KRPC_SCANSAT_SCANTYPE_ANOMALIES = 48,
  /**
   * Both resource scans.
   */
  KRPC_SCANSAT_SCANTYPE_RESOURCES = 384,
  /**
   * Every scan type.
   */
  KRPC_SCANSAT_SCANTYPE_ALL = 511
} krpc_ScanSat_ScanType_t;

/**
 * The state of a scanner. See krpc_ScanSat_Scanner_State().
 */
typedef enum {
  /**
   * Switched off.
   */
  KRPC_SCANSAT_SCANNERSTATE_OFF = 0,
  /**
   * Switched on, and outside its minimum and maximum altitudes.
   */
  KRPC_SCANSAT_SCANNERSTATE_OUTOFRANGE = 1,
  /**
   * Switched on, and paused as it needs light and the ground below it is in darkness.
   */
  KRPC_SCANSAT_SCANNERSTATE_INDARKNESS = 2,
  /**
   * Scanning between its minimum and best altitudes, with a reduced field of view.
   */
  KRPC_SCANSAT_SCANNERSTATE_INRANGE = 3,
  /**
   * Scanning between its best and maximum altitudes, with its full field of view.
   */
  KRPC_SCANSAT_SCANNERSTATE_INBESTRANGE = 4
} krpc_ScanSat_ScannerState_t;

#define KRPC_CLASS_SCANSAT_SCANNER 16u, 2513425521u
#define KRPC_ENUMERATION_SCANSAT_MAPPROJECTION 16u, 993910098u
#define KRPC_ENUMERATION_SCANSAT_MAPTYPE 16u, 2773514408u
#define KRPC_ENUMERATION_SCANSAT_SCANTYPE 16u, 318732918u
#define KRPC_ENUMERATION_SCANSAT_SCANNERSTATE 16u, 2291994256u
#define KRPC_STRUCT_SCANSAT_ANOMALY 16u, 673735289u
#define KRPC_FIELD_SCANSAT_ANOMALY_NAME 0
#define KRPC_FIELD_SCANSAT_ANOMALY_LATITUDE 1
#define KRPC_FIELD_SCANSAT_ANOMALY_LONGITUDE 2

/**
 * The anomalies on a body found by either anomaly scan.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param body The body.
 */
static inline krpc_error_t krpc_ScanSat_Anomalies(krpc_connection_t connection, krpc_list_ScanSat_Anomaly_t * returnValue, krpc_SpaceCenter_CelestialBody_t body);

/**
 * Fills in the call krpc_ScanSat_Anomalies() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Anomalies_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body);

/**
 * Fills in the call template of krpc_ScanSat_Anomalies(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Anomalies_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The name of the biome at a position, or `null` if the biome scan does not
 * cover it.
 * Throws an exception if the body has no biomes.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param body The body.
 * @param latitude The latitude, in degrees.
 * @param longitude The longitude, in degrees.
 */
static inline krpc_error_t krpc_ScanSat_Biome(krpc_connection_t connection, char * * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude);

/**
 * Fills in the call krpc_ScanSat_Biome() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Biome_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude);

/**
 * Fills in the call template of krpc_ScanSat_Biome(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Biome_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The fraction of a body covered by scan types, between 0 and 1. For a combination,
 * the mean coverage of its scan types, so 1 only once every one of them is complete.
 * SCANsat reports at most 0.999 until the coverage is complete.
 * Throws an exception if no scan types are given.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param body The body.
 * @param type The scan types.
 */
static inline krpc_error_t krpc_ScanSat_Coverage(krpc_connection_t connection, double * returnValue, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_ScanType_t type);

/**
 * Fills in the call krpc_ScanSat_Coverage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Coverage_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_ScanType_t type);

/**
 * Fills in the call template of krpc_ScanSat_Coverage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Coverage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The height of the terrain relative to sea level at a position, in meters, or
 * `null` if no altimetry scan covers it. It is negative over the sea floor. With
 * low resolution altimetry only, the height is rounded toward zero to a multiple of
 * 500 meters.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param body The body.
 * @param latitude The latitude, in degrees.
 * @param longitude The longitude, in degrees.
 */
static inline krpc_error_t krpc_ScanSat_Elevation(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude);

/**
 * Fills in the call krpc_ScanSat_Elevation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Elevation_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude);

/**
 * Fills in the call template of krpc_ScanSat_Elevation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Elevation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether at least one of the scan types covers a position on a body. For a
 * combination, this is `true` where any one of its scan types covers the position,
 * and not only where all of them do.
 * Throws an exception if no scan types are given.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param body The body.
 * @param latitude The latitude, in degrees.
 * @param longitude The longitude, in degrees.
 * @param type The scan types.
 */
static inline krpc_error_t krpc_ScanSat_IsCovered(krpc_connection_t connection, bool * returnValue, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, krpc_ScanSat_ScanType_t type);

/**
 * Fills in the call krpc_ScanSat_IsCovered() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_IsCovered_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, krpc_ScanSat_ScanType_t type);

/**
 * Fills in the call template of krpc_ScanSat_IsCovered(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_IsCovered_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A map of a body from the scan data, as an image. The map is half as high as it is
 * wide. Building it takes several game frames.
 * Throws an exception if SCANsat cannot render the map, as when its visual maps are
 * switched off.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param body The body.
 * @param type The type of map.
 * @param width The width of the image in pixels, between 360 and 1440.
 * @param projection The projection.
 * @param color Whether the map is in color, or in grayscale.
 * @param resource The name of a resource to overlay, or an empty string for
 * none. See krpc_ScanSat_Resources().
 * @param format The format of the image.
 * @param quality The quality of a JPEG image, from 1 to 100.
 */
static inline krpc_error_t krpc_ScanSat_Map(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_MapType_t type, int32_t width, krpc_ScanSat_MapProjection_t projection, bool color, const char * resource, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call krpc_ScanSat_Map() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Map_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_MapType_t type, int32_t width, krpc_ScanSat_MapProjection_t projection, bool color, const char * resource, krpc_StdLib_ImageFormat_t format, int32_t quality);

/**
 * Fills in the call template of krpc_ScanSat_Map(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Map_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The abundance of a resource at a position, between 0 and 1, or `null` if no
 * resource scan covers it. With the low resolution scan only, the abundance is rounded
 * down to a multiple of 0.05.
 * Throws an exception if SCANsat's resource scanning is off, or SCANsat does not map
 * the resource.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param body The body.
 * @param latitude The latitude, in degrees.
 * @param longitude The longitude, in degrees.
 * @param resource The name of the resource. See krpc_ScanSat_Resources().
 */
static inline krpc_error_t krpc_ScanSat_ResourceAbundance(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, const char * resource);

/**
 * Fills in the call krpc_ScanSat_ResourceAbundance() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_ResourceAbundance_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, const char * resource);

/**
 * Fills in the call template of krpc_ScanSat_ResourceAbundance(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_ResourceAbundance_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The scanner on a part.
 * Throws an exception if the part has no SCANsat scanner.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param part The part.
 */
static inline krpc_error_t krpc_ScanSat_Scanner(krpc_connection_t connection, krpc_ScanSat_Scanner_t * returnValue, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call krpc_ScanSat_Scanner() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part);

/**
 * Fills in the call template of krpc_ScanSat_Scanner(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The SCANsat scanners on a vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vessel The vessel.
 */
static inline krpc_error_t krpc_ScanSat_Scanners(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call krpc_ScanSat_Scanners() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanners_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel);

/**
 * Fills in the call template of krpc_ScanSat_Scanners(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanners_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The terrain slope at a position, in degrees, or `null` if high resolution
 * altimetry does not cover it. The slope is averaged over points 5 meters apart.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param returnValueIsNull Set to whether the value returned is null.
 * @param body The body.
 * @param latitude The latitude, in degrees.
 * @param longitude The longitude, in degrees.
 */
static inline krpc_error_t krpc_ScanSat_Slope(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude);

/**
 * Fills in the call krpc_ScanSat_Slope() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Slope_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude);

/**
 * Fills in the call template of krpc_ScanSat_Slope(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Slope_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether SCANsat is available.
 */
static inline krpc_error_t krpc_ScanSat_Available(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_ScanSat_Available() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Available_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_Available(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Available_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether scanners scan while their vessel is not the active vessel. A setting of
 * SCANsat.
 */
static inline krpc_error_t krpc_ScanSat_BackgroundScanning(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_ScanSat_BackgroundScanning() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_BackgroundScanning_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_BackgroundScanning(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_BackgroundScanning_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether resource abundances are approximate until a surface sample is taken in the
 * biome. A setting of SCANsat.
 */
static inline krpc_error_t krpc_ScanSat_BiomeLock(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_ScanSat_BiomeLock() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_BiomeLock_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_BiomeLock(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_BiomeLock_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether scanners that need light stop scanning in darkness. A setting of SCANsat.
 */
static inline krpc_error_t krpc_ScanSat_DaylightCheck(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_ScanSat_DaylightCheck() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_DaylightCheck_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_DaylightCheck(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_DaylightCheck_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the stock orbital survey fills the high resolution resource scan of a body
 * at once. A setting of SCANsat.
 */
static inline krpc_error_t krpc_ScanSat_InstantResourceScan(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_ScanSat_InstantResourceScan() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_InstantResourceScan_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_InstantResourceScan(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_InstantResourceScan_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether a narrow-band scanner is needed on the vessel for exact resource
 * abundances. A setting of SCANsat.
 */
static inline krpc_error_t krpc_ScanSat_RequireNarrowBand(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_ScanSat_RequireNarrowBand() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_RequireNarrowBand_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_RequireNarrowBand(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_RequireNarrowBand_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The names of the resources SCANsat maps. Empty if SCANsat's resource scanning
 * is off.
 */
static inline krpc_error_t krpc_ScanSat_Resources(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * Fills in the call krpc_ScanSat_Resources() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Resources_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_Resources(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Resources_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the stock resource scanners work. A setting of SCANsat.
 */
static inline krpc_error_t krpc_ScanSat_StockResourceScan(krpc_connection_t connection, bool * returnValue);

/**
 * Fills in the call krpc_ScanSat_StockResourceScan() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_StockResourceScan_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_ScanSat_StockResourceScan(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_StockResourceScan_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Returns whether the scanner is switched on, and switches it on or off, as the buttons
 * of the part do.
 *
 * A resource scanner only switches on when krpc_ScanSat_InstantResourceScan()
 * is off, or krpc_ScanSat_StockResourceScan() is off.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_Active(krpc_connection_t connection, bool * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_Active() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_Active_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_Active(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_Active_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Returns whether the scanner is switched on, and switches it on or off, as the buttons
 * of the part do.
 *
 * A resource scanner only switches on when krpc_ScanSat_InstantResourceScan()
 * is off, or krpc_ScanSat_StockResourceScan() is off.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_set_Active(krpc_connection_t connection, krpc_ScanSat_Scanner_t instance, bool value);

/**
 * Fills in the call krpc_ScanSat_Scanner_set_Active() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_set_Active_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance, bool value);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_set_Active(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_set_Active_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The lowest altitude for the full field of view, in meters.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_BestAltitude(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_BestAltitude() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_BestAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_BestAltitude(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_BestAltitude_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The field of view of the scanner at its best altitude, in degrees.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_FieldOfView(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_FieldOfView() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_FieldOfView_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_FieldOfView(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_FieldOfView_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The highest altitude the scanner scans at, in meters.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_MaxAltitude(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_MaxAltitude() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_MaxAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_MaxAltitude(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_MaxAltitude_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The lowest altitude the scanner scans at, in meters.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_MinAltitude(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_MinAltitude() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_MinAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_MinAltitude(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_MinAltitude_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The part containing this scanner.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_Part() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_Part(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_Part_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the scanner only scans in daylight, when krpc_ScanSat_DaylightCheck()
 * is on.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_RequiresLight(krpc_connection_t connection, bool * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_RequiresLight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_RequiresLight_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_RequiresLight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_RequiresLight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The scan types of the scanner.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_ScanTypes(krpc_connection_t connection, krpc_ScanSat_ScanType_t * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_ScanTypes() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_ScanTypes_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_ScanTypes(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_ScanTypes_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The state of the scanner.
 */
static inline krpc_error_t krpc_ScanSat_Scanner_State(krpc_connection_t connection, krpc_ScanSat_ScannerState_t * returnValue, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call krpc_ScanSat_Scanner_State() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_State_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance);

/**
 * Fills in the call template of krpc_ScanSat_Scanner_State(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_ScanSat_Scanner_State_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

#ifndef KRPC_IMPL_TYPE_NULLABLE_STRING
#define KRPC_IMPL_TYPE_NULLABLE_STRING


static inline krpc_error_t krpc_encode_nullable_string(
  pb_ostream_t * stream, const krpc_nullable_string_t * value) {
  // A nullable position carries a presence bool before its value, and holds nothing else
  // when that bool is false
  KRPC_RETURN_ON_ERROR(krpc_encode_bool(stream, value->has_value));
  if (value->has_value)
    KRPC_RETURN_ON_ERROR(krpc_encode_string(stream, value->value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_nullable_string(
  size_t * size, const krpc_nullable_string_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_nullable_string(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_nullable_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for nullable_string");
  krpc_nullable_string_t * value = (krpc_nullable_string_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_nullable_string(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for nullable_string");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_nullable_string(stream, value));
  return true;
}


static inline krpc_error_t krpc_decode_nullable_string(
  pb_istream_t * stream, krpc_nullable_string_t * value) {
  // An absent value is left zeroed, so the member is defined whatever the caller passed in
  memset(&value->value, 0, sizeof(value->value));
  uint32_t present;
  if (!pb_decode_varint32(stream, &present))
    KRPC_FAIL_STREAM(ENCODING, "A nullable value carries no presence bool", stream);
  if (present > 1)
    KRPC_FAIL(ENCODING, "A presence bool is neither 0 nor 1");
  value->has_value = present == 1;
  if (value->has_value) {
    KRPC_RETURN_ON_ERROR(krpc_decode_string(stream, &value->value));
  } else if (stream->bytes_left > 0) {
    KRPC_FAIL(ENCODING, "A null value carries data");
  }
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_NULLABLE_STRING

#ifndef KRPC_IMPL_TYPE_SCANSAT_ANOMALY
#define KRPC_IMPL_TYPE_SCANSAT_ANOMALY

static inline bool krpc_encode_callback_items_ScanSat_Anomaly(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_ScanSat_Anomaly_t * value = (const krpc_ScanSat_Anomaly_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_nullable_string(&size, &value->name));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_nullable_string(stream, &value->name));
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
  return true;
}

static inline krpc_error_t krpc_encode_ScanSat_Anomaly(
  pb_ostream_t * stream, const krpc_ScanSat_Anomaly_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_ScanSat_Anomaly;
  message.items.arg = (krpc_ScanSat_Anomaly_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_ScanSat_Anomaly(
  size_t * size, const krpc_ScanSat_Anomaly_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_ScanSat_Anomaly(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_ScanSat_Anomaly(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for ScanSat_Anomaly");
  krpc_ScanSat_Anomaly_t * value = (krpc_ScanSat_Anomaly_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_ScanSat_Anomaly(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for ScanSat_Anomaly");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_ScanSat_Anomaly(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_ScanSat_Anomaly(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_ScanSat_Anomaly_t * value;} State;
  State * state = (State*)(*arg);
  krpc_ScanSat_Anomaly_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_nullable_string(stream, &value->name));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->latitude));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->longitude));
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

static inline krpc_error_t krpc_decode_ScanSat_Anomaly(
  pb_istream_t * stream, krpc_ScanSat_Anomaly_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_ScanSat_Anomaly;
  typedef struct State { size_t pos; krpc_ScanSat_Anomaly_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 3)
    KRPC_FAIL(ENCODING, "Too few fields for a ScanSat_Anomaly");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_SCANSAT_ANOMALY

#ifndef KRPC_IMPL_TYPE_LIST_SCANSAT_ANOMALY
#define KRPC_IMPL_TYPE_LIST_SCANSAT_ANOMALY

static inline bool krpc_encode_callback_items_list_ScanSat_Anomaly(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_ScanSat_Anomaly_t * value = (const krpc_list_ScanSat_Anomaly_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_ScanSat_Anomaly(&size, &value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_ScanSat_Anomaly(stream, &value->items[i]));
  }
  return true;
}

static inline krpc_error_t krpc_encode_list_ScanSat_Anomaly(
  pb_ostream_t * stream, const krpc_list_ScanSat_Anomaly_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_ScanSat_Anomaly;
  message.items.arg = (krpc_list_ScanSat_Anomaly_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_ScanSat_Anomaly(
  size_t * size, const krpc_list_ScanSat_Anomaly_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_ScanSat_Anomaly(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_ScanSat_Anomaly(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_ScanSat_Anomaly");
  krpc_list_ScanSat_Anomaly_t * value = (krpc_list_ScanSat_Anomaly_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_ScanSat_Anomaly(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_ScanSat_Anomaly");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_ScanSat_Anomaly(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_list_ScanSat_Anomaly(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_ScanSat_Anomaly_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_ScanSat_Anomaly_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_ScanSat_Anomaly_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_ScanSat_Anomaly(stream, &state->value->items[i]));
  return true;
}

static inline krpc_error_t krpc_decode_list_ScanSat_Anomaly(
  pb_istream_t * stream, krpc_list_ScanSat_Anomaly_t * value) {
  typedef struct State { size_t capacity; krpc_list_ScanSat_Anomaly_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_ScanSat_Anomaly_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_ScanSat_Anomaly_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_ScanSat_Anomaly;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_SCANSAT_ANOMALY

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

static inline krpc_error_t krpc_ScanSat_Anomalies(krpc_connection_t connection, krpc_list_ScanSat_Anomaly_t * returnValue, krpc_SpaceCenter_CelestialBody_t body) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 3965984940, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_ScanSat_Anomaly(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Anomalies_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 3965984940, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Anomalies_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 3965984940, 0);
}

static inline krpc_error_t krpc_ScanSat_Biome(krpc_connection_t connection, char * * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 16, 126074083, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &longitude));
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

static inline krpc_error_t krpc_ScanSat_Biome_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 126074083, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &longitude));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Biome_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 126074083, 0);
}

static inline krpc_error_t krpc_ScanSat_Coverage(krpc_connection_t connection, double * returnValue, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_ScanType_t type) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 16, 2777101394, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &type));
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

static inline krpc_error_t krpc_ScanSat_Coverage_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_ScanType_t type) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2777101394, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &type));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Coverage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2777101394, 0);
}

static inline krpc_error_t krpc_ScanSat_Elevation(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 16, 2387377546, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &longitude));
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

static inline krpc_error_t krpc_ScanSat_Elevation_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2387377546, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &longitude));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Elevation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2387377546, 0);
}

static inline krpc_error_t krpc_ScanSat_IsCovered(krpc_connection_t connection, bool * returnValue, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, krpc_ScanSat_ScanType_t type) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 16, 1804432789, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_enum, &type));
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

static inline krpc_error_t krpc_ScanSat_IsCovered_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, krpc_ScanSat_ScanType_t type) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 1804432789, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_enum, &type));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_IsCovered_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 1804432789, 0);
}

static inline krpc_error_t krpc_ScanSat_Map(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_MapType_t type, int32_t width, krpc_ScanSat_MapProjection_t projection, bool color, const char * resource, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  krpc_call_t _call;
  krpc_argument_t _arguments[8];
  KRPC_CHECK(krpc_call(&_call, 16, 7018430, 8, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &type));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_enum, &projection));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_bool, &color));
  KRPC_CHECK(krpc_add_argument(&_call, 5, &krpc_encode_callback_string, &resource));
  KRPC_CHECK(krpc_add_argument(&_call, 6, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_add_argument(&_call, 7, &krpc_encode_callback_int32, &quality));
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

static inline krpc_error_t krpc_ScanSat_Map_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, krpc_ScanSat_MapType_t type, int32_t width, krpc_ScanSat_MapProjection_t projection, bool color, const char * resource, krpc_StdLib_ImageFormat_t format, int32_t quality) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 7018430, 8));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &type));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_enum, &projection));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_bool, &color));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 5, &krpc_encode_callback_string, &resource));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 6, &krpc_encode_callback_enum, &format));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 7, &krpc_encode_callback_int32, &quality));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Map_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 7018430, 0);
}

static inline krpc_error_t krpc_ScanSat_ResourceAbundance(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, const char * resource) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 16, 1063341705, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_string, &resource));
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

static inline krpc_error_t krpc_ScanSat_ResourceAbundance_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude, const char * resource) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 1063341705, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &longitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_string, &resource));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_ResourceAbundance_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 1063341705, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner(krpc_connection_t connection, krpc_ScanSat_Scanner_t * returnValue, krpc_SpaceCenter_Part_t part) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 2513425521, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Part_t part) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2513425521, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &part));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2513425521, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanners(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_Vessel_t vessel) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 2332234472, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanners_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Vessel_t vessel) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2332234472, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &vessel));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanners_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2332234472, 0);
}

static inline krpc_error_t krpc_ScanSat_Slope(krpc_connection_t connection, double * returnValue, bool * returnValueIsNull, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 16, 4168736694, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &longitude));
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

static inline krpc_error_t krpc_ScanSat_Slope_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_CelestialBody_t body, double latitude, double longitude) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 4168736694, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &body));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &latitude));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &longitude));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Slope_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 4168736694, 0);
}

static inline krpc_error_t krpc_ScanSat_Available(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 265274134, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_Available_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 265274134, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Available_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 265274134, 0);
}

static inline krpc_error_t krpc_ScanSat_BackgroundScanning(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 3353123505, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_BackgroundScanning_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 3353123505, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_BackgroundScanning_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 3353123505, 0);
}

static inline krpc_error_t krpc_ScanSat_BiomeLock(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 2069454022, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_BiomeLock_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2069454022, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_BiomeLock_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2069454022, 0);
}

static inline krpc_error_t krpc_ScanSat_DaylightCheck(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 1899757221, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_DaylightCheck_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 1899757221, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_DaylightCheck_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 1899757221, 0);
}

static inline krpc_error_t krpc_ScanSat_InstantResourceScan(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 1648611848, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_InstantResourceScan_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 1648611848, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_InstantResourceScan_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 1648611848, 0);
}

static inline krpc_error_t krpc_ScanSat_RequireNarrowBand(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 1065794876, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_RequireNarrowBand_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 1065794876, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_RequireNarrowBand_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 1065794876, 0);
}

static inline krpc_error_t krpc_ScanSat_Resources(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 998352219, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_Resources_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 998352219, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Resources_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 998352219, 0);
}

static inline krpc_error_t krpc_ScanSat_StockResourceScan(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 16, 1124066223, 0, NULL));
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

static inline krpc_error_t krpc_ScanSat_StockResourceScan_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 1124066223, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_StockResourceScan_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 1124066223, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_Active(krpc_connection_t connection, bool * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 2529081629, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_Active_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2529081629, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_Active_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2529081629, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_set_Active(krpc_connection_t connection, krpc_ScanSat_Scanner_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 16, 3474994100, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_set_Active_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 3474994100, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_set_Active_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 3474994100, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_BestAltitude(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 1416605503, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_BestAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 1416605503, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_BestAltitude_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 1416605503, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_FieldOfView(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 2708275159, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_FieldOfView_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2708275159, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_FieldOfView_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2708275159, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_MaxAltitude(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 2362943845, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_MaxAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2362943845, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_MaxAltitude_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2362943845, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_MinAltitude(krpc_connection_t connection, float * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 3733254459, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_MinAltitude_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 3733254459, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_MinAltitude_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 3733254459, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_Part(krpc_connection_t connection, krpc_SpaceCenter_Part_t * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 4235791356, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_Part_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 4235791356, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_Part_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 4235791356, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_RequiresLight(krpc_connection_t connection, bool * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 2235780376, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_RequiresLight_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 2235780376, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_RequiresLight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 2235780376, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_ScanTypes(krpc_connection_t connection, krpc_ScanSat_ScanType_t * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 3927486322, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_ScanTypes_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 3927486322, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_ScanTypes_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 3927486322, 0);
}

static inline krpc_error_t krpc_ScanSat_Scanner_State(krpc_connection_t connection, krpc_ScanSat_ScannerState_t * returnValue, krpc_ScanSat_Scanner_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 16, 634315412, 1, _arguments));
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

static inline krpc_error_t krpc_ScanSat_Scanner_State_call(krpc_schema_ProcedureCall * procedureCall, krpc_ScanSat_Scanner_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 16, 634315412, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_ScanSat_Scanner_State_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 16, 634315412, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
