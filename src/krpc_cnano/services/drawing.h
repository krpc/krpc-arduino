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
#include <krpc_cnano/services/ui.h>

#ifdef __cplusplus
extern "C" {
#endif

KRPC_DEPRECATED_USES_BEGIN

/**
 * An arc of a circle. Created using krpc_Drawing_AddArc().
 */
typedef krpc_object_t krpc_Drawing_Arc_t;
/**
 * The edges of a box. Created using krpc_Drawing_AddBox().
 */
typedef krpc_object_t krpc_Drawing_Box_t;
/**
 * A circle. Created using krpc_Drawing_AddCircle().
 */
typedef krpc_object_t krpc_Drawing_Circle_t;
/**
 * An image that markers can be drawn with. Created using krpc_Drawing_AddImage().
 *
 * An image is kept across scene changes, until it is removed or the client that
 * created it disconnects.
 */
typedef krpc_object_t krpc_Drawing_Image_t;
/**
 * A line. Created using krpc_Drawing_AddLine().
 */
typedef krpc_object_t krpc_Drawing_Line_t;
/**
 * A marker drawn in the map view, with one of the game's own map icons. Created using
 * krpc_Drawing_AddMapMarker().
 */
typedef krpc_object_t krpc_Drawing_MapMarker_t;
/**
 * A marker drawn on the navball. Created using krpc_Drawing_AddNavballMarker().
 */
typedef krpc_object_t krpc_Drawing_NavballMarker_t;
/**
 * The path of an orbit. Created using krpc_Drawing_AddOrbit().
 */
typedef krpc_object_t krpc_Drawing_OrbitPath_t;
/**
 * A point, drawn as a dot that keeps its size on screen. Created using
 * krpc_Drawing_AddPoint().
 */
typedef krpc_object_t krpc_Drawing_Point_t;
/**
 * A polygon. Created using krpc_Drawing_AddPolygon().
 */
typedef krpc_object_t krpc_Drawing_Polygon_t;
/**
 * A line through a list of vertices, open at its ends. Created using
 * krpc_Drawing_AddPolyline().
 */
typedef krpc_object_t krpc_Drawing_Polyline_t;
/**
 * A solid sphere. Created using krpc_Drawing_AddSphere().
 *
 * The sphere is drawn with an additive material, so a darker color draws it more
 * transparent.
 */
typedef krpc_object_t krpc_Drawing_Sphere_t;
/**
 * Text. Created using krpc_Drawing_AddText().
 */
typedef krpc_object_t krpc_Drawing_Text_t;

#ifndef KRPC_TYPE_STDLIB_COLORRGB
#define KRPC_TYPE_STDLIB_COLORRGB

typedef struct krpc_StdLib_ColorRGB_s krpc_StdLib_ColorRGB_t;
struct krpc_StdLib_ColorRGB_s {
  float r;
  float g;
  float b;
};

static inline krpc_error_t krpc_encode_StdLib_ColorRGB(
  pb_ostream_t * stream, const krpc_StdLib_ColorRGB_t * value);
static inline krpc_error_t krpc_encode_size_StdLib_ColorRGB(
  size_t * size, const krpc_StdLib_ColorRGB_t * value);
static inline bool krpc_encode_callback_StdLib_ColorRGB(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_StdLib_ColorRGB(
  pb_istream_t * stream, krpc_StdLib_ColorRGB_t * value);

#endif  // KRPC_TYPE_STDLIB_COLORRGB

#ifndef KRPC_TYPE_LIST_STDLIB_COLORRGB
#define KRPC_TYPE_LIST_STDLIB_COLORRGB

typedef struct krpc_list_StdLib_ColorRGB_s krpc_list_StdLib_ColorRGB_t;
struct krpc_list_StdLib_ColorRGB_s {
  size_t size;
  krpc_StdLib_ColorRGB_t * items;
};

static inline krpc_error_t krpc_encode_list_StdLib_ColorRGB(
  pb_ostream_t * stream, const krpc_list_StdLib_ColorRGB_t * value);
static inline krpc_error_t krpc_encode_size_list_StdLib_ColorRGB(
  size_t * size, const krpc_list_StdLib_ColorRGB_t * value);
static inline bool krpc_encode_callback_list_StdLib_ColorRGB(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_StdLib_ColorRGB(
  pb_istream_t * stream, krpc_list_StdLib_ColorRGB_t * value);

#endif  // KRPC_TYPE_LIST_STDLIB_COLORRGB

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

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_double_s krpc_tuple_double_double_double_t;
struct krpc_tuple_double_double_double_s {
  double e0;
  double e1;
  double e2;
};

static inline krpc_error_t krpc_encode_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_t * value);
static inline krpc_error_t krpc_encode_size_tuple_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_t * value);
static inline bool krpc_encode_callback_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_tuple_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_t * value);

#endif  // KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_list_tuple_double_double_double_s krpc_list_tuple_double_double_double_t;
struct krpc_list_tuple_double_double_double_s {
  size_t size;
  krpc_tuple_double_double_double_t * items;
};

static inline krpc_error_t krpc_encode_list_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_list_tuple_double_double_double_t * value);
static inline krpc_error_t krpc_encode_size_list_tuple_double_double_double(
  size_t * size, const krpc_list_tuple_double_double_double_t * value);
static inline bool krpc_encode_callback_list_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_list_tuple_double_double_double(
  pb_istream_t * stream, krpc_list_tuple_double_double_double_t * value);

#endif  // KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_double_double_s krpc_tuple_double_double_double_double_t;
struct krpc_tuple_double_double_double_double_s {
  double e0;
  double e1;
  double e2;
  double e3;
};

static inline krpc_error_t krpc_encode_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_double_t * value);
static inline krpc_error_t krpc_encode_size_tuple_double_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_double_t * value);
static inline bool krpc_encode_callback_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_double_t * value);

#endif  // KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

/**
 * The icon a krpc_Drawing_MapMarker_t is drawn with, from the game's own map icons.
 */
typedef enum {
  /**
   * A plain marker.
   */
  KRPC_DRAWING_MAPMARKERICON_GENERIC = 0,
  /**
   * A celestial body.
   */
  KRPC_DRAWING_MAPMARKERICON_CELESTIALBODY = 1,
  /**
   * An apoapsis.
   */
  KRPC_DRAWING_MAPMARKERICON_APOAPSIS = 2,
  /**
   * A periapsis.
   */
  KRPC_DRAWING_MAPMARKERICON_PERIAPSIS = 3,
  /**
   * An ascending node.
   */
  KRPC_DRAWING_MAPMARKERICON_ASCENDINGNODE = 4,
  /**
   * A descending node.
   */
  KRPC_DRAWING_MAPMARKERICON_DESCENDINGNODE = 5,
  /**
   * A maneuver node.
   */
  KRPC_DRAWING_MAPMARKERICON_MANEUVERNODE = 6,
  /**
   * An encounter with a sphere of influence.
   */
  KRPC_DRAWING_MAPMARKERICON_ENCOUNTER = 7,
  /**
   * An escape from a sphere of influence.
   */
  KRPC_DRAWING_MAPMARKERICON_ESCAPE = 8,
  /**
   * An impact with the surface.
   */
  KRPC_DRAWING_MAPMARKERICON_IMPACT = 9,
  /**
   * A closest approach to a target.
   */
  KRPC_DRAWING_MAPMARKERICON_CLOSEAPPROACH = 10,
  /**
   * An intersection with the orbit of a target.
   */
  KRPC_DRAWING_MAPMARKERICON_INTERSECT = 11,
  /**
   * A ship.
   */
  KRPC_DRAWING_MAPMARKERICON_SHIP = 12,
  /**
   * A probe.
   */
  KRPC_DRAWING_MAPMARKERICON_PROBE = 13,
  /**
   * A relay.
   */
  KRPC_DRAWING_MAPMARKERICON_RELAY = 14,
  /**
   * A station.
   */
  KRPC_DRAWING_MAPMARKERICON_STATION = 15,
  /**
   * A base.
   */
  KRPC_DRAWING_MAPMARKERICON_BASE = 16,
  /**
   * A lander.
   */
  KRPC_DRAWING_MAPMARKERICON_LANDER = 17,
  /**
   * A rover.
   */
  KRPC_DRAWING_MAPMARKERICON_ROVER = 18,
  /**
   * A plane.
   */
  KRPC_DRAWING_MAPMARKERICON_PLANE = 19,
  /**
   * A kerbal on EVA.
   */
  KRPC_DRAWING_MAPMARKERICON_EVA = 20,
  /**
   * A flag.
   */
  KRPC_DRAWING_MAPMARKERICON_FLAG = 21,
  /**
   * Debris.
   */
  KRPC_DRAWING_MAPMARKERICON_DEBRIS = 22,
  /**
   * An asteroid or comet.
   */
  KRPC_DRAWING_MAPMARKERICON_SPACEOBJECT = 23,
  /**
   * Deployed science equipment.
   */
  KRPC_DRAWING_MAPMARKERICON_DEPLOYEDSCIENCE = 24,
  /**
   * A launch site.
   */
  KRPC_DRAWING_MAPMARKERICON_LAUNCHSITE = 25,
  /**
   * A runway.
   */
  KRPC_DRAWING_MAPMARKERICON_RUNWAY = 26,
  /**
   * The Kerbal Space Center.
   */
  KRPC_DRAWING_MAPMARKERICON_KSC = 27
} krpc_Drawing_MapMarkerIcon_t;

#define KRPC_CLASS_DRAWING_ARC 3u, 3065090418u
#define KRPC_CLASS_DRAWING_BOX 3u, 3335728977u
#define KRPC_CLASS_DRAWING_CIRCLE 3u, 3459988921u
#define KRPC_CLASS_DRAWING_IMAGE 3u, 197895194u
#define KRPC_CLASS_DRAWING_LINE 3u, 3492578775u
#define KRPC_CLASS_DRAWING_MAPMARKER 3u, 14961310u
#define KRPC_CLASS_DRAWING_NAVBALLMARKER 3u, 416122201u
#define KRPC_CLASS_DRAWING_ORBITPATH 3u, 1747433783u
#define KRPC_CLASS_DRAWING_POINT 3u, 616939567u
#define KRPC_CLASS_DRAWING_POLYGON 3u, 3708155662u
#define KRPC_CLASS_DRAWING_POLYLINE 3u, 1737090581u
#define KRPC_CLASS_DRAWING_SPHERE 3u, 513861833u
#define KRPC_CLASS_DRAWING_TEXT 3u, 1301059697u
#define KRPC_ENUMERATION_DRAWING_MAPMARKERICON 3u, 1262083705u

/**
 * Draw an arc of a circle in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param center Position of the center of the arc.
 * @param normal Normal of the plane of the arc.
 * @param startDirection Direction from the center to the start of the arc.
 * @param angle Angle of the arc, in radians.
 * @param radius Radius of the arc, in meters.
 * @param referenceFrame Reference frame that the position and directions are in.
 * @param visible Whether the arc is visible.
 *
 * The arc turns counterclockwise about the normal, seen from the side it points to.
 * Throws an exception if the normal is zero, or the start direction is parallel to it.
 */
static inline krpc_error_t krpc_Drawing_AddArc(krpc_connection_t connection, krpc_Drawing_Arc_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, const krpc_tuple_double_double_double_t * startDirection, double angle, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddArc() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddArc_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, const krpc_tuple_double_double_double_t * startDirection, double angle, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddArc(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddArc_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw the axes of a reference frame in the scene, as arrows from its origin.
 * @param connection A connection object.
 * @param returnValue The lines for the x, y and z axes, colored red, green and blue.
 * @param referenceFrame The reference frame.
 * @param length The length of each axis.
 * @param visible Whether the axes are visible.
 */
static inline krpc_error_t krpc_Drawing_AddAxes(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Fills in the call krpc_Drawing_AddAxes() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddAxes_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddAxes(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddAxes_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw the edges of a box in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param center Position of the center of the box.
 * @param size Lengths of the sides of the box along its x, y and z axes, in meters.
 * @param referenceFrame Reference frame that the position and rotation are in.
 * @param rotation Rotation of the box, as a quaternion.
 * @param visible Whether the box is visible.
 */
static inline krpc_error_t krpc_Drawing_AddBox(krpc_connection_t connection, krpc_Drawing_Box_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * size, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_double_t * rotation, bool visible);

/**
 * Fills in the call krpc_Drawing_AddBox() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddBox_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * size, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_double_t * rotation, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddBox(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddBox_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a circle in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param center Position of the center of the circle.
 * @param normal Normal of the plane of the circle.
 * @param radius Radius of the circle, in meters.
 * @param referenceFrame Reference frame that the position and normal are in.
 * @param visible Whether the circle is visible.
 *
 * Throws an exception if the normal is zero.
 */
static inline krpc_error_t krpc_Drawing_AddCircle(krpc_connection_t connection, krpc_Drawing_Circle_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddCircle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddCircle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddCircle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddCircle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a direction vector in the scene, starting from the origin of the given reference frame.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param direction Direction to draw the line in.
 * @param referenceFrame Reference frame that the direction is in and defines the start position.
 * @param length The length of the line.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddDirection(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Fills in the call krpc_Drawing_AddDirection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddDirection_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddDirection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddDirection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a direction vector in the scene, from the center of mass of the active vessel.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param direction Direction to draw the line in.
 * @param referenceFrame Reference frame that the direction is in.
 * @param length The length of the line.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddDirectionFromCom(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Fills in the call krpc_Drawing_AddDirectionFromCom() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddDirectionFromCom_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddDirectionFromCom(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddDirectionFromCom_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Load an image that markers can be drawn with, from the contents of a PNG or JPEG
 * file. The transparency of a PNG image is kept.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param data The contents of the image file.
 *
 * Throws an exception if the data is not a PNG or JPEG image.
 */
static inline krpc_error_t krpc_Drawing_AddImage(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_bytes_t data);

/**
 * Fills in the call krpc_Drawing_AddImage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddImage_call(krpc_schema_ProcedureCall * procedureCall, krpc_bytes_t data);

/**
 * Fills in the call template of krpc_Drawing_AddImage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddImage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a line in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param start Position of the start of the line.
 * @param end Position of the end of the line.
 * @param referenceFrame Reference frame that the positions are in.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddLine(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddLine() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddLine_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddLine(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddLine_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a marker in the map view, with one of the game's own map icons.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param position Position of the marker.
 * @param referenceFrame Reference frame that the position is in.
 * @param icon The icon that the marker is drawn with.
 * @param caption The caption shown when the mouse is over the marker.
 * @param visible Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_AddMapMarker(krpc_connection_t connection, krpc_Drawing_MapMarker_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_Drawing_MapMarkerIcon_t icon, const char * caption, bool visible);

/**
 * Fills in the call krpc_Drawing_AddMapMarker() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddMapMarker_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_Drawing_MapMarkerIcon_t icon, const char * caption, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddMapMarker(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddMapMarker_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a marker on the navball, pointing in the given direction.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param direction Direction that the marker points in.
 * @param referenceFrame Reference frame that the direction is in.
 * @param visible Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_AddNavballMarker(krpc_connection_t connection, krpc_Drawing_NavballMarker_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddNavballMarker() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddNavballMarker_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddNavballMarker(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddNavballMarker_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw the path of an orbit in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param orbit The orbit.
 * @param visible Whether the path is visible.
 *
 * The path follows the orbit as it changes, and ends where the orbit leaves the
 * sphere of influence of its body.
 */
static inline krpc_error_t krpc_Drawing_AddOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t * returnValue, krpc_SpaceCenter_Orbit_t orbit, bool visible);

/**
 * Fills in the call krpc_Drawing_AddOrbit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Orbit_t orbit, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddOrbit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddOrbit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a point in the scene, as a dot that keeps its size on screen.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param position Position of the point.
 * @param referenceFrame Reference frame that the position is in.
 * @param visible Whether the point is visible.
 */
static inline krpc_error_t krpc_Drawing_AddPoint(krpc_connection_t connection, krpc_Drawing_Point_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddPoint() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddPoint_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddPoint(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddPoint_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a polygon in the scene, defined by a list of vertices.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vertices Vertices of the polygon.
 * @param referenceFrame Reference frame that the vertices are in.
 * @param visible Whether the polygon is visible.
 */
static inline krpc_error_t krpc_Drawing_AddPolygon(krpc_connection_t connection, krpc_Drawing_Polygon_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddPolygon() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddPolygon_call(krpc_schema_ProcedureCall * procedureCall, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddPolygon(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddPolygon_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw an open line through a list of vertices in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param vertices Vertices of the line.
 * @param referenceFrame Reference frame that the vertices are in.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddPolyline(krpc_connection_t connection, krpc_Drawing_Polyline_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddPolyline() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddPolyline_call(krpc_schema_ProcedureCall * procedureCall, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddPolyline(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddPolyline_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw a solid sphere in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param center Position of the center of the sphere.
 * @param radius Radius of the sphere, in meters.
 * @param referenceFrame Reference frame that the position is in.
 * @param visible Whether the sphere is visible.
 */
static inline krpc_error_t krpc_Drawing_AddSphere(krpc_connection_t connection, krpc_Drawing_Sphere_t * returnValue, const krpc_tuple_double_double_double_t * center, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call krpc_Drawing_AddSphere() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddSphere_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddSphere(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddSphere_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw text in the scene.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param text The string to draw.
 * @param referenceFrame Reference frame that the text position is in.
 * @param position Position of the text.
 * @param rotation Rotation of the text, as a quaternion.
 * @param visible Whether the text is visible.
 */
static inline krpc_error_t krpc_Drawing_AddText(krpc_connection_t connection, krpc_Drawing_Text_t * returnValue, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible);

/**
 * Fills in the call krpc_Drawing_AddText() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddText_call(krpc_schema_ProcedureCall * procedureCall, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible);

/**
 * Fills in the call template of krpc_Drawing_AddText(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_AddText_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove all objects being drawn.
 * @param connection A connection object.
 * @param clientOnly If true, only remove objects created by the calling client.
 */
static inline krpc_error_t krpc_Drawing_Clear(krpc_connection_t connection, bool clientOnly);

/**
 * Fills in the call krpc_Drawing_Clear() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Clear_call(krpc_schema_ProcedureCall * procedureCall, bool clientOnly);

/**
 * Fills in the call template of krpc_Drawing_Clear(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Clear_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Arc_Remove(krpc_connection_t connection, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Angle of the arc, in radians.
 */
static inline krpc_error_t krpc_Drawing_Arc_Angle(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Angle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Angle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Angle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Angle of the arc, in radians.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Angle(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Angle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, double value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Angle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Angle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Arc_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Arc_set_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Center(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Arc_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Color(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Arc_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Colors(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Arc_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Dashed(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Arc_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Arc_set_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Arc_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Label(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Arc_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Material(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Normal of the plane of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Normal() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Normal(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Normal_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Normal of the plane of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Normal(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Normal() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Normal(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Normal_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Radius of the arc, in meters.
 */
static inline krpc_error_t krpc_Drawing_Arc_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Radius() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Radius(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Radius_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Radius of the arc, in meters.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Radius(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Radius() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, double value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Radius(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Radius_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Arc_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Arc_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Arc_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Arc_set_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Direction from the center to the start of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_StartDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_StartDirection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_StartDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_StartDirection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_StartDirection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Direction from the center to the start of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Arc_set_StartDirection() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_StartDirection(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Arc_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Thickness(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Arc_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call krpc_Drawing_Arc_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance);

/**
 * Fills in the call template of krpc_Drawing_Arc_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Visible(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Arc_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Arc_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Box_Remove(krpc_connection_t connection, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Center(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Box_set_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Color(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Box_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Box_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Material(krpc_connection_t connection, krpc_Drawing_Box_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Box_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the position and rotation of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the position and rotation of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Box_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Box_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Rotation of the box, as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Box_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Rotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Rotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Rotation of the box, as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Rotation(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Box_set_Rotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_Rotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Lengths of the sides of the box along its x, y and z axes, in meters.
 */
static inline krpc_error_t krpc_Drawing_Box_Size(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Lengths of the sides of the box along its x, y and z axes, in meters.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Size(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Box_set_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Thickness(krpc_connection_t connection, krpc_Drawing_Box_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Box_set_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Box_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Box_t instance);

/**
 * Fills in the call krpc_Drawing_Box_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance);

/**
 * Fills in the call template of krpc_Drawing_Box_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Visible(krpc_connection_t connection, krpc_Drawing_Box_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Box_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Box_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Box_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Circle_Remove(krpc_connection_t connection, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Circle_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Circle_set_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Center(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Circle_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Color(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Circle_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Colors(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Circle_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Dashed(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Circle_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Circle_set_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Circle_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Label(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Circle_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Material(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Normal of the plane of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Normal() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Normal(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Normal_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Normal of the plane of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Normal(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Normal() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Normal(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Normal_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Radius of the circle, in meters.
 */
static inline krpc_error_t krpc_Drawing_Circle_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Radius() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Radius(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Radius_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Radius of the circle, in meters.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Radius(krpc_connection_t connection, krpc_Drawing_Circle_t instance, double value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Radius() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, double value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Radius(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Radius_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Circle_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Circle_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Circle_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Circle_set_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Circle_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Thickness(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Circle_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call krpc_Drawing_Circle_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance);

/**
 * Fills in the call template of krpc_Drawing_Circle_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Visible(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Circle_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Circle_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the image. A marker drawn with it goes back to its own icon.
 */
static inline krpc_error_t krpc_Drawing_Image_Remove(krpc_connection_t connection, krpc_Drawing_Image_t instance);

/**
 * Fills in the call krpc_Drawing_Image_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Image_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Image_t instance);

/**
 * Fills in the call template of krpc_Drawing_Image_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Image_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The height of the image, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Image_Height(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance);

/**
 * Fills in the call krpc_Drawing_Image_Height() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Image_Height_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Image_t instance);

/**
 * Fills in the call template of krpc_Drawing_Image_Height(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Image_Height_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The width of the image, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Image_Width(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance);

/**
 * Fills in the call krpc_Drawing_Image_Width() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Image_Width_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Image_t instance);

/**
 * Fills in the call template of krpc_Drawing_Image_Width(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Image_Width_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Line_Remove(krpc_connection_t connection, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Line_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Line_set_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Line_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Color(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Line_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Line_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Colors(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Line_set_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Line_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Dashed(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Line_set_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * End position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_End(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_End() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_End_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_End(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_End_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * End position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_set_End(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Line_set_End() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_End_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_End(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_End_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Line_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Line_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Line_set_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Line_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Label(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Line_set_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Line_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Material(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Line_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Line_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Start position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_Start(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Start() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Start_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Start(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Start_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Start position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Start(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Line_set_Start() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Start_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Start(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Start_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Line_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Line_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Line_set_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Line_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Thickness(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Line_set_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Line_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Fills in the call krpc_Drawing_Line_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance);

/**
 * Fills in the call template of krpc_Drawing_Line_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Visible(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Line_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Line_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Line_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Remove(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The caption shown when the mouse is over the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Caption(krpc_connection_t connection, char * * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_Caption() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Caption_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_Caption(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Caption_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The caption shown when the mouse is over the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_MapMarker_set_Caption() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_set_Caption(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Color(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_MapMarker_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The icon that the marker is drawn with.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Icon(krpc_connection_t connection, krpc_Drawing_MapMarkerIcon_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_Icon() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_Icon(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Icon_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The icon that the marker is drawn with.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_MapMarkerIcon_t value);

/**
 * Fills in the call krpc_Drawing_MapMarker_set_Icon() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, krpc_Drawing_MapMarkerIcon_t value);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_set_Icon(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Image(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_Image_t value);

/**
 * Fills in the call krpc_Drawing_MapMarker_set_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, krpc_Drawing_Image_t value);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_set_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Position(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_MapMarker_set_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_set_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame that the position of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame that the position of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_MapMarker_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call krpc_Drawing_MapMarker_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_MapMarker_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_MapMarker_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the marker.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Remove(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A list of all available icons, taken from "GameData/Squad/Contracts/Icons/".
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * Fills in the call krpc_Drawing_NavballMarker_AvailableIcons() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_AvailableIcons(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_NavballMarker_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Direction that the marker is drawn at.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Direction(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_Direction() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Direction_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_Direction(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Direction_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Direction that the marker is drawn at.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_NavballMarker_set_Direction() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_set_Direction(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The icon that the marker is drawn with.
 * See krpc_Drawing_NavballMarker_AvailableIcons() for the icons that can be used.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Icon(krpc_connection_t connection, char * * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_Icon() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_Icon(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Icon_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The icon that the marker is drawn with.
 * See krpc_Drawing_NavballMarker_AvailableIcons() for the icons that can be used.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_NavballMarker_set_Icon() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_set_Icon(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_Drawing_Image_t value);

/**
 * Fills in the call krpc_Drawing_NavballMarker_set_Image() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, krpc_Drawing_Image_t value);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_set_Image(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame that the direction of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame that the direction of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_NavballMarker_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Size of the marker, relative to the size of the navball's own markers.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Size of the marker, relative to the size of the navball's own markers.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, float value);

/**
 * Fills in the call krpc_Drawing_NavballMarker_set_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_set_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the marker is visible.
 *
 * A visible marker is still hidden while it is on the far side of the navball.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call krpc_Drawing_NavballMarker_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the marker is visible.
 *
 * A visible marker is still hidden while it is on the far side of the navball.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_NavballMarker_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_NavballMarker_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Remove(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The true anomaly at which the path ends, in radians.
 *
 * Setting this sets krpc_Drawing_OrbitPath_WholeOrbit() to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_EndTrueAnomaly() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_EndTrueAnomaly(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The true anomaly at which the path ends, in radians.
 *
 * Setting this sets krpc_Drawing_OrbitPath_WholeOrbit() to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_EndTrueAnomaly() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, double value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_EndTrueAnomaly(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The orbit.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit(krpc_connection_t connection, krpc_SpaceCenter_Orbit_t * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Orbit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Orbit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The orbit.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, krpc_SpaceCenter_Orbit_t value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Orbit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, krpc_SpaceCenter_Orbit_t value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Orbit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The true anomaly at which the path starts, in radians.
 *
 * Setting this sets krpc_Drawing_OrbitPath_WholeOrbit() to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_StartTrueAnomaly() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_StartTrueAnomaly(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The true anomaly at which the path starts, in radians.
 *
 * Setting this sets krpc_Drawing_OrbitPath_WholeOrbit() to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_StartTrueAnomaly() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, double value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_StartTrueAnomaly(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the whole orbit is drawn, up to where it leaves the sphere of influence of
 * its body. When false, the orbit is drawn from krpc_Drawing_OrbitPath_StartTrueAnomaly()
 * to krpc_Drawing_OrbitPath_EndTrueAnomaly().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call krpc_Drawing_OrbitPath_WholeOrbit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_WholeOrbit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the whole orbit is drawn, up to where it leaves the sphere of influence of
 * its body. When false, the orbit is drawn from krpc_Drawing_OrbitPath_StartTrueAnomaly()
 * to krpc_Drawing_OrbitPath_EndTrueAnomaly().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_OrbitPath_set_WholeOrbit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_OrbitPath_set_WholeOrbit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Point_Remove(krpc_connection_t connection, krpc_Drawing_Point_t instance);

/**
 * Fills in the call krpc_Drawing_Point_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance);

/**
 * Fills in the call template of krpc_Drawing_Point_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Point_t instance);

/**
 * Fills in the call krpc_Drawing_Point_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance);

/**
 * Fills in the call template of krpc_Drawing_Point_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Color(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Point_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Point_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Point_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Point_t instance);

/**
 * Fills in the call krpc_Drawing_Point_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance);

/**
 * Fills in the call template of krpc_Drawing_Point_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Material(krpc_connection_t connection, krpc_Drawing_Point_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Point_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Point_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the point.
 */
static inline krpc_error_t krpc_Drawing_Point_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Point_t instance);

/**
 * Fills in the call krpc_Drawing_Point_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance);

/**
 * Fills in the call template of krpc_Drawing_Point_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the point.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Position(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Point_set_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Point_set_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Point_t instance);

/**
 * Fills in the call krpc_Drawing_Point_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance);

/**
 * Fills in the call template of krpc_Drawing_Point_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Point_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Point_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Point_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Diameter of the point, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Point_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_Point_t instance);

/**
 * Fills in the call krpc_Drawing_Point_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance);

/**
 * Fills in the call template of krpc_Drawing_Point_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Diameter of the point, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Size(krpc_connection_t connection, krpc_Drawing_Point_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Point_set_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Point_set_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Point_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Point_t instance);

/**
 * Fills in the call krpc_Drawing_Point_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance);

/**
 * Fills in the call template of krpc_Drawing_Point_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Visible(krpc_connection_t connection, krpc_Drawing_Point_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Point_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Point_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Point_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Remove(krpc_connection_t connection, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Color(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Colors(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polygon_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Label(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Material(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Vertices for the polygon.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Vertices() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Vertices(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Vertices for the polygon.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Vertices() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Vertices(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call krpc_Drawing_Polygon_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polygon_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Visible(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polygon_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polygon_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Remove(krpc_connection_t connection, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_ArrowSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_ArrowSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Color(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Colors(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Colors() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Colors(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Dashed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Dashed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polyline_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_EndArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_EndArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Label(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Label() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Label(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Material(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_StartArrow() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_StartArrow(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Thickness() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Thickness(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Vertices for the polyline.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Vertices() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Vertices(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Vertices for the polyline.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Vertices() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const krpc_list_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Vertices(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call krpc_Drawing_Polyline_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance);

/**
 * Fills in the call template of krpc_Drawing_Polyline_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Visible(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Polyline_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Polyline_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Remove(krpc_connection_t connection, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call krpc_Drawing_Sphere_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call template of krpc_Drawing_Sphere_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the sphere.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call krpc_Drawing_Sphere_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call template of krpc_Drawing_Sphere_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the center of the sphere.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Center(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Sphere_set_Center() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Sphere_set_Center(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call krpc_Drawing_Sphere_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call template of krpc_Drawing_Sphere_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Color(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Sphere_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Sphere_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call krpc_Drawing_Sphere_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call template of krpc_Drawing_Sphere_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Material(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Sphere_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Sphere_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Radius of the sphere, in meters.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call krpc_Drawing_Sphere_Radius() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call template of krpc_Drawing_Sphere_Radius(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Radius_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Radius of the sphere, in meters.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Radius(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, double value);

/**
 * Fills in the call krpc_Drawing_Sphere_set_Radius() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, double value);

/**
 * Fills in the call template of krpc_Drawing_Sphere_set_Radius(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Radius_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call krpc_Drawing_Sphere_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call template of krpc_Drawing_Sphere_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Sphere_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Sphere_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call krpc_Drawing_Sphere_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance);

/**
 * Fills in the call template of krpc_Drawing_Sphere_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Visible(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Sphere_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Sphere_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Text_Remove(krpc_connection_t connection, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A list of all available fonts.
 */
static inline krpc_error_t krpc_Drawing_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * Fills in the call krpc_Drawing_Text_AvailableFonts() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_AvailableFonts_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_Drawing_Text_AvailableFonts(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_AvailableFonts_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_Drawing_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAlignment_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Alignment() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Alignment(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Alignment(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value);

/**
 * Fills in the call krpc_Drawing_Text_set_Alignment() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Alignment(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Anchor.
 */
static inline krpc_error_t krpc_Drawing_Text_Anchor(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Anchor() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Anchor_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Anchor(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Anchor_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Anchor.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Anchor(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value);

/**
 * Fills in the call krpc_Drawing_Text_set_Anchor() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Anchor_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Anchor(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Anchor_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Character size.
 */
static inline krpc_error_t krpc_Drawing_Text_CharacterSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_CharacterSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_CharacterSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_CharacterSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_CharacterSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Character size.
 */
static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Text_set_CharacterSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_CharacterSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_Text_set_Color(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call krpc_Drawing_Text_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text string
 */
static inline krpc_error_t krpc_Drawing_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Content() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Content(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Content_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text string
 */
static inline krpc_error_t krpc_Drawing_Text_set_Content(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Text_set_Content() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Content(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Content_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the text turns to face the camera, in place of its krpc_Drawing_Text_Rotation().
 */
static inline krpc_error_t krpc_Drawing_Text_FaceCamera(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_FaceCamera() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_FaceCamera_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_FaceCamera(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_FaceCamera_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the text turns to face the camera, in place of its krpc_Drawing_Text_Rotation().
 */
static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Text_set_FaceCamera() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_FaceCamera(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Name of the font
 */
static inline krpc_error_t krpc_Drawing_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Font() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Font(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Font_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Name of the font
 */
static inline krpc_error_t krpc_Drawing_Text_set_Font(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Text_set_Font() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Font(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Font_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_Drawing_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_LineSpacing() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_LineSpacing(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value);

/**
 * Fills in the call krpc_Drawing_Text_set_LineSpacing() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, float value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_LineSpacing(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Text_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Material(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Fills in the call krpc_Drawing_Text_set_Material() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const char * value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Material(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the text.
 */
static inline krpc_error_t krpc_Drawing_Text_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the text.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Position(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Text_set_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call krpc_Drawing_Text_set_ReferenceFrame() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_ReferenceFrame(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Rotation of the text as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Text_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Rotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Rotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Rotation of the text as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Rotation(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Fills in the call krpc_Drawing_Text_set_Rotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Rotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font size.
 */
static inline krpc_error_t krpc_Drawing_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font size.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Size(krpc_connection_t connection, krpc_Drawing_Text_t instance, int32_t value);

/**
 * Fills in the call krpc_Drawing_Text_set_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, int32_t value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font style.
 */
static inline krpc_error_t krpc_Drawing_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Style() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Style(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Style_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font style.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Style(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value);

/**
 * Fills in the call krpc_Drawing_Text_set_Style() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Style(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Style_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance);

/**
 * Fills in the call krpc_Drawing_Text_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance);

/**
 * Fills in the call template of krpc_Drawing_Text_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Visible(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value);

/**
 * Fills in the call krpc_Drawing_Text_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, bool value);

/**
 * Fills in the call template of krpc_Drawing_Text_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_Drawing_Text_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

// Implementation

#ifndef KRPC_IMPL_TYPE_STDLIB_COLORRGB
#define KRPC_IMPL_TYPE_STDLIB_COLORRGB

static inline bool krpc_encode_callback_items_StdLib_ColorRGB(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_StdLib_ColorRGB_t * value = (const krpc_StdLib_ColorRGB_t*)(*arg);
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
  return true;
}

static inline krpc_error_t krpc_encode_StdLib_ColorRGB(
  pb_ostream_t * stream, const krpc_StdLib_ColorRGB_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_StdLib_ColorRGB;
  message.items.arg = (krpc_StdLib_ColorRGB_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_StdLib_ColorRGB(
  size_t * size, const krpc_StdLib_ColorRGB_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_StdLib_ColorRGB(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_StdLib_ColorRGB(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for StdLib_ColorRGB");
  krpc_StdLib_ColorRGB_t * value = (krpc_StdLib_ColorRGB_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_StdLib_ColorRGB(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for StdLib_ColorRGB");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_StdLib_ColorRGB(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_StdLib_ColorRGB(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_StdLib_ColorRGB_t * value;} State;
  State * state = (State*)(*arg);
  krpc_StdLib_ColorRGB_t * value = state->value;
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

static inline krpc_error_t krpc_decode_StdLib_ColorRGB(
  pb_istream_t * stream, krpc_StdLib_ColorRGB_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_StdLib_ColorRGB;
  typedef struct State { size_t pos; krpc_StdLib_ColorRGB_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 3)
    KRPC_FAIL(ENCODING, "Too few fields for a StdLib_ColorRGB");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_STDLIB_COLORRGB

#ifndef KRPC_IMPL_TYPE_LIST_STDLIB_COLORRGB
#define KRPC_IMPL_TYPE_LIST_STDLIB_COLORRGB

static inline bool krpc_encode_callback_items_list_StdLib_ColorRGB(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_StdLib_ColorRGB_t * value = (const krpc_list_StdLib_ColorRGB_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_StdLib_ColorRGB(&size, &value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_StdLib_ColorRGB(stream, &value->items[i]));
  }
  return true;
}

static inline krpc_error_t krpc_encode_list_StdLib_ColorRGB(
  pb_ostream_t * stream, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_StdLib_ColorRGB;
  message.items.arg = (krpc_list_StdLib_ColorRGB_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_StdLib_ColorRGB(
  size_t * size, const krpc_list_StdLib_ColorRGB_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_StdLib_ColorRGB(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_StdLib_ColorRGB(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_StdLib_ColorRGB");
  krpc_list_StdLib_ColorRGB_t * value = (krpc_list_StdLib_ColorRGB_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_StdLib_ColorRGB(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_StdLib_ColorRGB");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_StdLib_ColorRGB(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_list_StdLib_ColorRGB(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_StdLib_ColorRGB_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_StdLib_ColorRGB_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_StdLib_ColorRGB_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_StdLib_ColorRGB(stream, &state->value->items[i]));
  return true;
}

static inline krpc_error_t krpc_decode_list_StdLib_ColorRGB(
  pb_istream_t * stream, krpc_list_StdLib_ColorRGB_t * value) {
  typedef struct State { size_t capacity; krpc_list_StdLib_ColorRGB_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_StdLib_ColorRGB_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_StdLib_ColorRGB_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_StdLib_ColorRGB;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_STDLIB_COLORRGB

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

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

static inline bool krpc_encode_callback_items_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_tuple_double_double_double_t * value = (const krpc_tuple_double_double_double_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e0));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e0));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e1));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e1));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e2));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e2));
  }
  return true;
}

static inline krpc_error_t krpc_encode_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double_double;
  message.items.arg = (krpc_tuple_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_tuple_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple_double_double_double");
  krpc_tuple_double_double_double_t * value = (krpc_tuple_double_double_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple_double_double_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_tuple_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_tuple_double_double_double_t * value;} State;
  State * state = (State*)(*arg);
  krpc_tuple_double_double_double_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e0));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e1));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e2));
    break;
  default:
    // Items past the size of the tuple type are skipped
    if (!pb_read(stream, NULL, stream->bytes_left))
      KRPC_CALLBACK_RETURN_ERROR("skipping an extra tuple item");
    break;
  }
  state->pos++;
  return true;
}

static inline krpc_error_t krpc_decode_tuple_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double_double;
  typedef struct State { size_t pos; krpc_tuple_double_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 3)
    KRPC_FAIL(ENCODING, "Too few items for a tuple_double_double_double");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE

static inline bool krpc_encode_callback_items_list_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_tuple_double_double_double_t * value = (const krpc_list_tuple_double_double_double_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double_double(&size, &value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double(stream, &value->items[i]));
  }
  return true;
}

static inline krpc_error_t krpc_encode_list_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_list_tuple_double_double_double_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_tuple_double_double_double;
  message.items.arg = (krpc_list_tuple_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_list_tuple_double_double_double(
  size_t * size, const krpc_list_tuple_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_tuple_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_list_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_tuple_double_double_double");
  krpc_list_tuple_double_double_double_t * value = (krpc_list_tuple_double_double_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_tuple_double_double_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_tuple_double_double_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_tuple_double_double_double(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_list_tuple_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State { size_t capacity; krpc_list_tuple_double_double_double_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_tuple_double_double_double_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_double_double_double_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_tuple_double_double_double(stream, &state->value->items[i]));
  return true;
}

static inline krpc_error_t krpc_decode_list_tuple_double_double_double(
  pb_istream_t * stream, krpc_list_tuple_double_double_double_t * value) {
  typedef struct State { size_t capacity; krpc_list_tuple_double_double_double_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_tuple_double_double_double_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_double_double_double_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_tuple_double_double_double;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static inline bool krpc_encode_callback_items_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_tuple_double_double_double_double_t * value = (const krpc_tuple_double_double_double_double_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e0));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e0));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e1));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e1));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e2));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e2));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_double(&size, value->e3));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_double(stream, value->e3));
  }
  return true;
}

static inline krpc_error_t krpc_encode_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double_double_double;
  message.items.arg = (krpc_tuple_double_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_tuple_double_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple_double_double_double_double");
  krpc_tuple_double_double_double_double_t * value = (krpc_tuple_double_double_double_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double_double_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple_double_double_double_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double_double(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_tuple_double_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_tuple_double_double_double_double_t * value;} State;
  State * state = (State*)(*arg);
  krpc_tuple_double_double_double_double_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e0));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e1));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e2));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e3));
    break;
  default:
    // Items past the size of the tuple type are skipped
    if (!pb_read(stream, NULL, stream->bytes_left))
      KRPC_CALLBACK_RETURN_ERROR("skipping an extra tuple item");
    break;
  }
  state->pos++;
  return true;
}

static inline krpc_error_t krpc_decode_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double_double_double;
  typedef struct State { size_t pos; krpc_tuple_double_double_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 4)
    KRPC_FAIL(ENCODING, "Too few items for a tuple_double_double_double_double");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static inline krpc_error_t krpc_Drawing_AddArc(krpc_connection_t connection, krpc_Drawing_Arc_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, const krpc_tuple_double_double_double_t * startDirection, double angle, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[7];
  KRPC_CHECK(krpc_call(&_call, 3, 1616662606, 7, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, normal));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_tuple_double_double_double, startDirection));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_double, &angle));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_double, &radius));
  KRPC_CHECK(krpc_add_argument(&_call, 5, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 6, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddArc_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, const krpc_tuple_double_double_double_t * startDirection, double angle, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1616662606, 7));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, normal));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_tuple_double_double_double, startDirection));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_double, &angle));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_double, &radius));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 5, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 6, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddArc_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1616662606, 0);
}

static inline krpc_error_t krpc_Drawing_AddAxes(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 109417902, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &length));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddAxes_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 109417902, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &length));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddAxes_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 109417902, 0);
}

static inline krpc_error_t krpc_Drawing_AddBox(krpc_connection_t connection, krpc_Drawing_Box_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * size, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_double_t * rotation, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 3703619675, 5, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, size));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_tuple_double_double_double_double, rotation));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddBox_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * size, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_double_t * rotation, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3703619675, 5));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, size));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_tuple_double_double_double_double, rotation));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddBox_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3703619675, 0);
}

static inline krpc_error_t krpc_Drawing_AddCircle(krpc_connection_t connection, krpc_Drawing_Circle_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 2394952666, 5, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, normal));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_double, &radius));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddCircle_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2394952666, 5));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, normal));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_double, &radius));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddCircle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2394952666, 0);
}

static inline krpc_error_t krpc_Drawing_AddDirection(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 2758104352, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_float, &length));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddDirection_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2758104352, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_float, &length));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddDirection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2758104352, 0);
}

static inline krpc_error_t krpc_Drawing_AddDirectionFromCom(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 1547956901, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_float, &length));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddDirectionFromCom_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1547956901, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_float, &length));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddDirectionFromCom_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1547956901, 0);
}

static inline krpc_error_t krpc_Drawing_AddImage(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_bytes_t data) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1236600668, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bytes, &data));
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

static inline krpc_error_t krpc_Drawing_AddImage_call(krpc_schema_ProcedureCall * procedureCall, krpc_bytes_t data) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1236600668, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bytes, &data));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddImage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1236600668, 0);
}

static inline krpc_error_t krpc_Drawing_AddLine(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 150925270, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, start));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, end));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddLine_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 150925270, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, start));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, end));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddLine_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 150925270, 0);
}

static inline krpc_error_t krpc_Drawing_AddMapMarker(krpc_connection_t connection, krpc_Drawing_MapMarker_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_Drawing_MapMarkerIcon_t icon, const char * caption, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 373044379, 5, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_enum, &icon));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_string, &caption));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddMapMarker_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_Drawing_MapMarkerIcon_t icon, const char * caption, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 373044379, 5));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_enum, &icon));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_string, &caption));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddMapMarker_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 373044379, 0);
}

static inline krpc_error_t krpc_Drawing_AddNavballMarker(krpc_connection_t connection, krpc_Drawing_NavballMarker_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 4123281634, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddNavballMarker_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4123281634, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, direction));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddNavballMarker_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4123281634, 0);
}

static inline krpc_error_t krpc_Drawing_AddOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t * returnValue, krpc_SpaceCenter_Orbit_t orbit, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2081679705, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &orbit));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_SpaceCenter_Orbit_t orbit, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2081679705, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_object, &orbit));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddOrbit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2081679705, 0);
}

static inline krpc_error_t krpc_Drawing_AddPoint(krpc_connection_t connection, krpc_Drawing_Point_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 3123009781, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddPoint_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3123009781, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddPoint_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3123009781, 0);
}

static inline krpc_error_t krpc_Drawing_AddPolygon(krpc_connection_t connection, krpc_Drawing_Polygon_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 1853787714, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_list_tuple_double_double_double, vertices));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddPolygon_call(krpc_schema_ProcedureCall * procedureCall, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1853787714, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_list_tuple_double_double_double, vertices));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddPolygon_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1853787714, 0);
}

static inline krpc_error_t krpc_Drawing_AddPolyline(krpc_connection_t connection, krpc_Drawing_Polyline_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 3027610456, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_list_tuple_double_double_double, vertices));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddPolyline_call(krpc_schema_ProcedureCall * procedureCall, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3027610456, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_list_tuple_double_double_double, vertices));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddPolyline_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3027610456, 0);
}

static inline krpc_error_t krpc_Drawing_AddSphere(krpc_connection_t connection, krpc_Drawing_Sphere_t * returnValue, const krpc_tuple_double_double_double_t * center, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 2285046821, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &radius));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddSphere_call(krpc_schema_ProcedureCall * procedureCall, const krpc_tuple_double_double_double_t * center, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2285046821, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_tuple_double_double_double, center));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &radius));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddSphere_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2285046821, 0);
}

static inline krpc_error_t krpc_Drawing_AddText(krpc_connection_t connection, krpc_Drawing_Text_t * returnValue, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 2425673547, 5, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &text));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_tuple_double_double_double_double, rotation));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_bool, &visible));
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

static inline krpc_error_t krpc_Drawing_AddText_call(krpc_schema_ProcedureCall * procedureCall, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2425673547, 5));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_string, &text));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &referenceFrame));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_tuple_double_double_double, position));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_tuple_double_double_double_double, rotation));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_AddText_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2425673547, 0);
}

static inline krpc_error_t krpc_Drawing_Clear(krpc_connection_t connection, bool clientOnly) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 573354371, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &clientOnly));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Clear_call(krpc_schema_ProcedureCall * procedureCall, bool clientOnly) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 573354371, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &clientOnly));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Clear_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 573354371, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Remove(krpc_connection_t connection, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3959635963, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3959635963, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3959635963, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Angle(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 207094049, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 207094049, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Angle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 207094049, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Angle(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2038815022, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Angle_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2038815022, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Angle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2038815022, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 213133905, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 213133905, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 213133905, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2224183841, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2224183841, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2224183841, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1773168222, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1773168222, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1773168222, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Center(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3015089098, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3015089098, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3015089098, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3245127095, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3245127095, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3245127095, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Color(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1313024047, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1313024047, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1313024047, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1839710392, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1839710392, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1839710392, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Colors(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 458170932, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 458170932, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 458170932, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1141292583, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1141292583, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1141292583, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Dashed(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1655049799, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1655049799, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1655049799, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2752179009, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2752179009, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2752179009, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1649921317, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1649921317, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1649921317, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3232210336, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3232210336, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3232210336, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Label(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3177308889, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3177308889, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3177308889, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3495920954, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3495920954, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3495920954, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Material(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3480209927, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3480209927, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3480209927, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 11144667, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 11144667, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Normal_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 11144667, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Normal(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 224556883, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 224556883, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Normal_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 224556883, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4169152639, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4169152639, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Radius_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4169152639, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Radius(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1023555548, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1023555548, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Radius_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1023555548, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 813868682, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 813868682, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 813868682, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Arc_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 591667844, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 591667844, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 591667844, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3051826357, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3051826357, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3051826357, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 339363595, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 339363595, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 339363595, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_StartDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3318172384, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_StartDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3318172384, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_StartDirection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3318172384, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 4001233862, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4001233862, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4001233862, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3103100458, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3103100458, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3103100458, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Thickness(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3668119725, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3668119725, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3668119725, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 776871238, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 776871238, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 776871238, 0);
}

static inline krpc_error_t krpc_Drawing_Arc_set_Visible(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3253838814, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Arc_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3253838814, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3253838814, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Remove(krpc_connection_t connection, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1439891184, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1439891184, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1439891184, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 388383932, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 388383932, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 388383932, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_Center(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1604095840, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1604095840, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1604095840, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1934898075, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1934898075, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1934898075, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_Color(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1780446622, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1780446622, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1780446622, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3599708314, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3599708314, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3599708314, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_Material(krpc_connection_t connection, krpc_Drawing_Box_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1231679120, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1231679120, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1231679120, 0);
}

static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3930869137, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3930869137, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3930869137, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Box_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 539617531, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 539617531, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 539617531, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3946390370, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3946390370, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3946390370, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_Rotation(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 4099415171, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4099415171, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4099415171, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Size(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4028784017, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4028784017, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4028784017, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_Size(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 459627060, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 459627060, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 459627060, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2405653168, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2405653168, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2405653168, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_Thickness(krpc_connection_t connection, krpc_Drawing_Box_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3089894980, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3089894980, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3089894980, 0);
}

static inline krpc_error_t krpc_Drawing_Box_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1081415470, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1081415470, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1081415470, 0);
}

static inline krpc_error_t krpc_Drawing_Box_set_Visible(krpc_connection_t connection, krpc_Drawing_Box_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 814546377, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Box_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 814546377, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 814546377, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Remove(krpc_connection_t connection, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1910163076, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1910163076, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1910163076, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4234294049, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4234294049, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4234294049, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2526055759, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2526055759, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2526055759, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2436494872, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2436494872, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2436494872, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Center(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2029955209, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2029955209, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2029955209, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1731077583, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1731077583, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1731077583, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Color(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 825494427, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 825494427, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 825494427, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2907464330, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2907464330, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2907464330, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Colors(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2075697385, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2075697385, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2075697385, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2812371876, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2812371876, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2812371876, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Dashed(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3014495047, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3014495047, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3014495047, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2959615012, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2959615012, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2959615012, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3140628154, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3140628154, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3140628154, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2169215460, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2169215460, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2169215460, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Label(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3236480649, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3236480649, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3236480649, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3417569965, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3417569965, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3417569965, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Material(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2054459192, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2054459192, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2054459192, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3553998120, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3553998120, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Normal_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3553998120, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Normal(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2333984492, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Normal_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2333984492, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Normal_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2333984492, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2846546465, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2846546465, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Radius_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2846546465, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Radius(krpc_connection_t connection, krpc_Drawing_Circle_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 68482586, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 68482586, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Radius_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 68482586, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3372997766, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3372997766, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3372997766, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Circle_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3598744121, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3598744121, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3598744121, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1919144457, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1919144457, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1919144457, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 734142910, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 734142910, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 734142910, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1842337872, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1842337872, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1842337872, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Thickness(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 485528260, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 485528260, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 485528260, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3454258091, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3454258091, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3454258091, 0);
}

static inline krpc_error_t krpc_Drawing_Circle_set_Visible(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 749850666, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Circle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 749850666, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 749850666, 0);
}

static inline krpc_error_t krpc_Drawing_Image_Remove(krpc_connection_t connection, krpc_Drawing_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3956900175, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Image_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3956900175, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Image_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3956900175, 0);
}

static inline krpc_error_t krpc_Drawing_Image_Height(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2248776961, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Image_Height_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2248776961, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Image_Height_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2248776961, 0);
}

static inline krpc_error_t krpc_Drawing_Image_Width(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1761031405, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Image_Width_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1761031405, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Image_Width_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1761031405, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Remove(krpc_connection_t connection, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 24955990, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 24955990, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 24955990, 0);
}

static inline krpc_error_t krpc_Drawing_Line_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3046028313, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3046028313, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3046028313, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2180703152, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2180703152, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2180703152, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3016919860, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3016919860, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3016919860, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Color(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1607068857, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1607068857, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1607068857, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4207164597, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4207164597, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4207164597, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Colors(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3027497455, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3027497455, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3027497455, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1346208019, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1346208019, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1346208019, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Dashed(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3928918119, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3928918119, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3928918119, 0);
}

static inline krpc_error_t krpc_Drawing_Line_End(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3667439072, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_End_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3667439072, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_End_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3667439072, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_End(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 4100736161, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_End_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4100736161, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_End_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4100736161, 0);
}

static inline krpc_error_t krpc_Drawing_Line_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 7297406, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 7297406, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 7297406, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3564485952, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3564485952, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3564485952, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2307179766, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2307179766, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2307179766, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Label(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 875344069, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 875344069, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 875344069, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3680358351, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3680358351, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3680358351, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Material(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 447054806, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 447054806, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 447054806, 0);
}

static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3632999589, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3632999589, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3632999589, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3015195699, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3015195699, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3015195699, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Start(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 396123418, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Start_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 396123418, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Start_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 396123418, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Start(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2549577050, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Start_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2549577050, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Start_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2549577050, 0);
}

static inline krpc_error_t krpc_Drawing_Line_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3139993821, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3139993821, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3139993821, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 540380429, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 540380429, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 540380429, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4233237417, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4233237417, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4233237417, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Thickness(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 68361436, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 68361436, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 68361436, 0);
}

static inline krpc_error_t krpc_Drawing_Line_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1612289009, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1612289009, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1612289009, 0);
}

static inline krpc_error_t krpc_Drawing_Line_set_Visible(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3026455879, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Line_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3026455879, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3026455879, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_Remove(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1025267677, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1025267677, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1025267677, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_Caption(krpc_connection_t connection, char * * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2114440112, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_Caption_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2114440112, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Caption_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2114440112, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 343913930, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 343913930, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 343913930, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3051392020, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3051392020, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3051392020, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Color(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1066531367, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1066531367, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1066531367, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_Icon(krpc_connection_t connection, krpc_Drawing_MapMarkerIcon_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3876320262, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3876320262, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Icon_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3876320262, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_MapMarkerIcon_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3088459175, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, krpc_Drawing_MapMarkerIcon_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3088459175, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3088459175, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3705875917, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_Drawing_MapMarker_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3705875917, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3705875917, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Image(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_Image_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2815213343, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  if (value == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 1));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, krpc_Drawing_Image_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2815213343, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  if (value == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2815213343, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3377842462, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3377842462, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3377842462, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Position(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2902806384, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2902806384, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2902806384, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2741345002, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2741345002, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2741345002, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 331318042, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 331318042, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 331318042, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3974309753, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3974309753, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3974309753, 0);
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3477228390, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_MapMarker_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3477228390, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3477228390, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Remove(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2022133575, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2022133575, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2022133575, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2265122900, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2265122900, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2265122900, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1289552826, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1289552826, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1289552826, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Direction(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4168547140, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Direction_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4168547140, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Direction_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4168547140, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3539315252, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3539315252, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3539315252, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Icon(krpc_connection_t connection, char * * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 92716061, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 92716061, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Icon_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 92716061, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 735231121, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 735231121, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 735231121, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3377078333, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3377078333, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3377078333, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_Drawing_Image_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3929793729, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  if (value == KRPC_NULL) {
    KRPC_CHECK(krpc_add_null_argument(&_call, 1));
  } else {
    KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  }
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, krpc_Drawing_Image_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3929793729, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  if (value == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3929793729, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3137224476, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3137224476, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3137224476, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3762355793, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3762355793, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3762355793, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3794557079, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3794557079, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3794557079, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1675597903, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1675597903, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1675597903, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2378499090, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2378499090, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2378499090, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3807399109, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_NavballMarker_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3807399109, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3807399109, 0);
}

static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 3, 2526532613, 0, NULL));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2526532613, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2526532613, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Remove(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1896911756, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1896911756, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1896911756, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3561445021, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3561445021, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3561445021, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 845333306, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 845333306, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 845333306, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3255856471, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3255856471, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3255856471, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1593598636, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1593598636, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1593598636, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2269441755, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2269441755, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2269441755, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3097646046, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3097646046, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3097646046, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1511797996, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1511797996, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1511797996, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1607250326, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1607250326, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1607250326, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1183871253, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1183871253, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1183871253, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 41499595, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 41499595, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 41499595, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2665121821, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2665121821, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2665121821, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1586597130, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1586597130, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1586597130, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 308505471, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 308505471, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 308505471, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3752710688, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3752710688, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3752710688, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3105447549, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3105447549, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3105447549, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1897326242, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1897326242, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1897326242, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit(krpc_connection_t connection, krpc_SpaceCenter_Orbit_t * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3664790339, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3664790339, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3664790339, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, krpc_SpaceCenter_Orbit_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3020035772, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, krpc_SpaceCenter_Orbit_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3020035772, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3020035772, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2980749008, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2980749008, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2980749008, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2233065555, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2233065555, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2233065555, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1250819265, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1250819265, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1250819265, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 4207713746, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4207713746, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4207713746, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3166513586, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3166513586, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3166513586, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3182851122, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3182851122, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3182851122, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3415262358, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3415262358, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3415262358, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3490526205, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3490526205, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3490526205, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3721236775, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3721236775, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3721236775, 0);
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2538807503, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_OrbitPath_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2538807503, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2538807503, 0);
}

static inline krpc_error_t krpc_Drawing_Point_Remove(krpc_connection_t connection, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3310906047, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3310906047, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3310906047, 0);
}

static inline krpc_error_t krpc_Drawing_Point_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1739986525, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1739986525, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1739986525, 0);
}

static inline krpc_error_t krpc_Drawing_Point_set_Color(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 418267182, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 418267182, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 418267182, 0);
}

static inline krpc_error_t krpc_Drawing_Point_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3942387621, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3942387621, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3942387621, 0);
}

static inline krpc_error_t krpc_Drawing_Point_set_Material(krpc_connection_t connection, krpc_Drawing_Point_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1491863787, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1491863787, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1491863787, 0);
}

static inline krpc_error_t krpc_Drawing_Point_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2953629428, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2953629428, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2953629428, 0);
}

static inline krpc_error_t krpc_Drawing_Point_set_Position(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3483081352, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3483081352, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3483081352, 0);
}

static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3618738954, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3618738954, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3618738954, 0);
}

static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Point_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1237061706, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1237061706, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1237061706, 0);
}

static inline krpc_error_t krpc_Drawing_Point_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2081443657, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2081443657, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2081443657, 0);
}

static inline krpc_error_t krpc_Drawing_Point_set_Size(krpc_connection_t connection, krpc_Drawing_Point_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2519826505, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2519826505, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2519826505, 0);
}

static inline krpc_error_t krpc_Drawing_Point_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1728198318, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1728198318, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1728198318, 0);
}

static inline krpc_error_t krpc_Drawing_Point_set_Visible(krpc_connection_t connection, krpc_Drawing_Point_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1630954280, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Point_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1630954280, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1630954280, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Remove(krpc_connection_t connection, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 353226605, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 353226605, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 353226605, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 486486103, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 486486103, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 486486103, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3074601430, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3074601430, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3074601430, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2850121545, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2850121545, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2850121545, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Color(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3580940816, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3580940816, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3580940816, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1256654890, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1256654890, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1256654890, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Colors(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 892238851, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 892238851, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 892238851, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2083045376, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2083045376, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2083045376, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3786716992, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3786716992, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3786716992, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2628241836, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2628241836, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2628241836, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1511824338, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1511824338, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1511824338, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3979730994, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3979730994, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3979730994, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Label(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3921028371, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3921028371, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3921028371, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1218891235, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1218891235, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1218891235, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Material(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2231668130, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2231668130, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2231668130, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 826910094, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 826910094, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 826910094, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2695223913, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2695223913, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2695223913, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3604556804, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3604556804, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3604556804, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 4222486146, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4222486146, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4222486146, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2370971607, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2370971607, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2370971607, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2263498779, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2263498779, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2263498779, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3615736568, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3615736568, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3615736568, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 4083926165, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4083926165, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4083926165, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1193199662, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1193199662, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1193199662, 0);
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Visible(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 207820725, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polygon_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 207820725, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 207820725, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Remove(krpc_connection_t connection, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3524494990, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3524494990, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3524494990, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 893875216, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 893875216, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 893875216, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1934520663, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1934520663, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1934520663, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3808483895, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3808483895, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3808483895, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Color(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1011509384, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1011509384, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1011509384, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 963089161, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 963089161, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 963089161, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Colors(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3831325820, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Colors_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3831325820, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Colors_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3831325820, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2415127122, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2415127122, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2415127122, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1339795298, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1339795298, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1339795298, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4253841281, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4253841281, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4253841281, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1936935503, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1936935503, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1936935503, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4081242355, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4081242355, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4081242355, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Label(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1325309052, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Label_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1325309052, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Label_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1325309052, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2090021328, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2090021328, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2090021328, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Material(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1674877464, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1674877464, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1674877464, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2400985456, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2400985456, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2400985456, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3770396660, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3770396660, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3770396660, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1676436949, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1676436949, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1676436949, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1377712813, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1377712813, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1377712813, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3782625041, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3782625041, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3782625041, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1634466708, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1634466708, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1634466708, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 600068337, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 600068337, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 600068337, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1712833586, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, const krpc_list_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1712833586, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1712833586, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1699682341, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1699682341, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1699682341, 0);
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Visible(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1792193890, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Polyline_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1792193890, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1792193890, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_Remove(krpc_connection_t connection, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1609841437, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1609841437, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1609841437, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 748127097, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 748127097, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 748127097, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Center(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1205224633, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Center_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1205224633, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Center_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1205224633, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1299612976, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1299612976, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1299612976, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Color(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1174491695, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1174491695, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1174491695, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2867872395, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2867872395, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2867872395, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Material(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1095170677, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1095170677, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1095170677, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 77856435, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 77856435, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Radius_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 77856435, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Radius(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 166942357, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Radius_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, double value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 166942357, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_double, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Radius_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 166942357, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1727902798, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1727902798, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1727902798, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 522786253, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 522786253, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 522786253, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 76092369, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 76092369, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 76092369, 0);
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Visible(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 442780259, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Sphere_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 442780259, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 442780259, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Remove(krpc_connection_t connection, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2692121567, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2692121567, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2692121567, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAlignment_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2680949421, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2680949421, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2680949421, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Alignment(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2320562096, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2320562096, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2320562096, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Anchor(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4145119194, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Anchor_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4145119194, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Anchor_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4145119194, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Anchor(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3788516849, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Anchor_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3788516849, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Anchor_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3788516849, 0);
}

static inline krpc_error_t krpc_Drawing_Text_CharacterSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3975745872, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_CharacterSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3975745872, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_CharacterSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3975745872, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2736694173, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2736694173, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2736694173, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 4281926002, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_StdLib_ColorRGB(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4281926002, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4281926002, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Color(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1933194689, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const krpc_StdLib_ColorRGB_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1933194689, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1933194689, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3366855688, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3366855688, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Content_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3366855688, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Content(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 481167652, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 481167652, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Content_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 481167652, 0);
}

static inline krpc_error_t krpc_Drawing_Text_FaceCamera(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 598015507, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_FaceCamera_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 598015507, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_FaceCamera_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 598015507, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3421235988, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3421235988, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3421235988, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2996949535, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2996949535, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Font_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2996949535, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Font(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3605684839, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3605684839, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Font_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3605684839, 0);
}

static inline krpc_error_t krpc_Drawing_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1505753613, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1505753613, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1505753613, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3497701888, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3497701888, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3497701888, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1659196917, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1659196917, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1659196917, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Material(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2786800342, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Material_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2786800342, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Material_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2786800342, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3728094046, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3728094046, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3728094046, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Position(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 69781992, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 69781992, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 69781992, 0);
}

static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3472455448, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3472455448, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3472455448, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2884855346, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2884855346, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2884855346, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 3738836511, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3738836511, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3738836511, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Rotation(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 4057404547, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 4057404547, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 4057404547, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2656720513, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2656720513, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2656720513, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Size(krpc_connection_t connection, krpc_Drawing_Text_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 2397814667, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, int32_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2397814667, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2397814667, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 2525179682, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2525179682, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Style_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2525179682, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Style(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 3426595386, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 3426595386, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Style_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 3426595386, 0);
}

static inline krpc_error_t krpc_Drawing_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 1265886062, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1265886062, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1265886062, 0);
}

static inline krpc_error_t krpc_Drawing_Text_set_Visible(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 1409852883, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_Drawing_Text_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 1409852883, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 1409852883, 0);
}

static inline krpc_error_t krpc_Drawing_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 3, 2887362683, 0, NULL));
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

static inline krpc_error_t krpc_Drawing_Text_AvailableFonts_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 3, 2887362683, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_AvailableFonts_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 3, 2887362683, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
