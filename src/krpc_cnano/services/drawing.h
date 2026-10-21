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

/**
 * An arc of a circle. Created using Drawing::add_arc.
 */
typedef krpc_object_t krpc_Drawing_Arc_t;
/**
 * The edges of a box. Created using Drawing::add_box.
 */
typedef krpc_object_t krpc_Drawing_Box_t;
/**
 * A circle. Created using Drawing::add_circle.
 */
typedef krpc_object_t krpc_Drawing_Circle_t;
/**
 * An image that markers can be drawn with. Created using Drawing::add_image.
 *
 * An image is kept across scene changes, until it is removed or the client that
 * created it disconnects.
 */
typedef krpc_object_t krpc_Drawing_Image_t;
/**
 * A line. Created using Drawing::add_line.
 */
typedef krpc_object_t krpc_Drawing_Line_t;
/**
 * A marker drawn in the map view, with one of the game's own map icons. Created using
 * Drawing::add_map_marker.
 */
typedef krpc_object_t krpc_Drawing_MapMarker_t;
/**
 * A marker drawn on the navball. Created using Drawing::add_navball_marker.
 */
typedef krpc_object_t krpc_Drawing_NavballMarker_t;
/**
 * The path of an orbit. Created using Drawing::add_orbit.
 */
typedef krpc_object_t krpc_Drawing_OrbitPath_t;
/**
 * A point, drawn as a dot that keeps its size on screen. Created using
 * Drawing::add_point.
 */
typedef krpc_object_t krpc_Drawing_Point_t;
/**
 * A polygon. Created using Drawing::add_polygon.
 */
typedef krpc_object_t krpc_Drawing_Polygon_t;
/**
 * A line through a list of vertices, open at its ends. Created using
 * Drawing::add_polyline.
 */
typedef krpc_object_t krpc_Drawing_Polyline_t;
/**
 * A solid sphere. Created using Drawing::add_sphere.
 *
 * The sphere is drawn with an additive material, so a darker color draws it more
 * transparent.
 */
typedef krpc_object_t krpc_Drawing_Sphere_t;
/**
 * Text. Created using Drawing::add_text.
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
 * The icon a Drawing::MapMarker is drawn with, from the game's own map icons.
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

/**
 * Draw an arc of a circle in the scene.
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
 * Draw the axes of a reference frame in the scene, as arrows from its origin.
 * @param referenceFrame The reference frame.
 * @param length The length of each axis.
 * @param visible Whether the axes are visible.
 * @return The lines for the x, y and z axes, colored red, green and blue.
 */
static inline krpc_error_t krpc_Drawing_AddAxes(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Draw the edges of a box in the scene.
 * @param center Position of the center of the box.
 * @param size Lengths of the sides of the box along its x, y and z axes, in meters.
 * @param referenceFrame Reference frame that the position and rotation are in.
 * @param rotation Rotation of the box, as a quaternion.
 * @param visible Whether the box is visible.
 */
static inline krpc_error_t krpc_Drawing_AddBox(krpc_connection_t connection, krpc_Drawing_Box_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * size, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_double_t * rotation, bool visible);

/**
 * Draw a circle in the scene.
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
 * Draw a direction vector in the scene, starting from the origin of the given reference frame.
 * @param direction Direction to draw the line in.
 * @param referenceFrame Reference frame that the direction is in and defines the start position.
 * @param length The length of the line.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddDirection(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Draw a direction vector in the scene, from the center of mass of the active vessel.
 * @param direction Direction to draw the line in.
 * @param referenceFrame Reference frame that the direction is in.
 * @param length The length of the line.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddDirectionFromCom(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Load an image that markers can be drawn with, from the contents of a PNG or JPEG
 * file. The transparency of a PNG image is kept.
 * @param data The contents of the image file.
 *
 * Throws an exception if the data is not a PNG or JPEG image.
 */
static inline krpc_error_t krpc_Drawing_AddImage(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_bytes_t data);

/**
 * Draw a line in the scene.
 * @param start Position of the start of the line.
 * @param end Position of the end of the line.
 * @param referenceFrame Reference frame that the positions are in.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddLine(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw a marker in the map view, with one of the game's own map icons.
 * @param position Position of the marker.
 * @param referenceFrame Reference frame that the position is in.
 * @param icon The icon that the marker is drawn with.
 * @param caption The caption shown when the mouse is over the marker.
 * @param visible Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_AddMapMarker(krpc_connection_t connection, krpc_Drawing_MapMarker_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_Drawing_MapMarkerIcon_t icon, const char * caption, bool visible);

/**
 * Draw a marker on the navball, pointing in the given direction.
 * @param direction Direction that the marker points in.
 * @param referenceFrame Reference frame that the direction is in.
 * @param visible Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_AddNavballMarker(krpc_connection_t connection, krpc_Drawing_NavballMarker_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw the path of an orbit in the scene.
 * @param orbit The orbit.
 * @param visible Whether the path is visible.
 *
 * The path follows the orbit as it changes, and ends where the orbit leaves the
 * sphere of influence of its body.
 */
static inline krpc_error_t krpc_Drawing_AddOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t * returnValue, krpc_SpaceCenter_Orbit_t orbit, bool visible);

/**
 * Draw a point in the scene, as a dot that keeps its size on screen.
 * @param position Position of the point.
 * @param referenceFrame Reference frame that the position is in.
 * @param visible Whether the point is visible.
 */
static inline krpc_error_t krpc_Drawing_AddPoint(krpc_connection_t connection, krpc_Drawing_Point_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw a polygon in the scene, defined by a list of vertices.
 * @param vertices Vertices of the polygon.
 * @param referenceFrame Reference frame that the vertices are in.
 * @param visible Whether the polygon is visible.
 */
static inline krpc_error_t krpc_Drawing_AddPolygon(krpc_connection_t connection, krpc_Drawing_Polygon_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw an open line through a list of vertices in the scene.
 * @param vertices Vertices of the line.
 * @param referenceFrame Reference frame that the vertices are in.
 * @param visible Whether the line is visible.
 */
static inline krpc_error_t krpc_Drawing_AddPolyline(krpc_connection_t connection, krpc_Drawing_Polyline_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw a solid sphere in the scene.
 * @param center Position of the center of the sphere.
 * @param radius Radius of the sphere, in meters.
 * @param referenceFrame Reference frame that the position is in.
 * @param visible Whether the sphere is visible.
 */
static inline krpc_error_t krpc_Drawing_AddSphere(krpc_connection_t connection, krpc_Drawing_Sphere_t * returnValue, const krpc_tuple_double_double_double_t * center, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw text in the scene.
 * @param text The string to draw.
 * @param referenceFrame Reference frame that the text position is in.
 * @param position Position of the text.
 * @param rotation Rotation of the text, as a quaternion.
 * @param visible Whether the text is visible.
 */
static inline krpc_error_t krpc_Drawing_AddText(krpc_connection_t connection, krpc_Drawing_Text_t * returnValue, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible);

/**
 * Remove all objects being drawn.
 * @param clientOnly If true, only remove objects created by the calling client.
 */
static inline krpc_error_t krpc_Drawing_Clear(krpc_connection_t connection, bool clientOnly);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Arc_Remove(krpc_connection_t connection, krpc_Drawing_Arc_t instance);

/**
 * Angle of the arc, in radians.
 */
static inline krpc_error_t krpc_Drawing_Arc_Angle(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Angle of the arc, in radians.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Angle(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Arc_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value);

/**
 * Position of the center of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Position of the center of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Center(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Arc_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Color(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Arc_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Colors(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Arc_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Dashed(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Arc_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Arc_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Label(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Arc_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Material(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value);

/**
 * Normal of the plane of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Normal of the plane of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Normal(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Radius of the arc, in meters.
 */
static inline krpc_error_t krpc_Drawing_Arc_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Radius of the arc, in meters.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Radius(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Arc_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Arc_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Direction from the center to the start of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_StartDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Direction from the center to the start of the arc.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Arc_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Thickness(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Arc_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Arc_set_Visible(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Box_Remove(krpc_connection_t connection, krpc_Drawing_Box_t instance);

/**
 * Position of the center of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Position of the center of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Center(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * The color of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * The color of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Color(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Box_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Box_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Material(krpc_connection_t connection, krpc_Drawing_Box_t instance, const char * value);

/**
 * Reference frame for the position and rotation of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Reference frame for the position and rotation of the box.
 */
static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Box_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Rotation of the box, as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Box_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Rotation of the box, as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Rotation(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Lengths of the sides of the box along its x, y and z axes, in meters.
 */
static inline krpc_error_t krpc_Drawing_Box_Size(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance);

/**
 * Lengths of the sides of the box along its x, y and z axes, in meters.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Size(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * The thickness of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Box_t instance);

/**
 * The thickness of the edges.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Thickness(krpc_connection_t connection, krpc_Drawing_Box_t instance, float value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Box_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Box_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Box_set_Visible(krpc_connection_t connection, krpc_Drawing_Box_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Circle_Remove(krpc_connection_t connection, krpc_Drawing_Circle_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Circle_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value);

/**
 * Position of the center of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Position of the center of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Center(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Circle_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Color(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Circle_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Colors(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Circle_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Dashed(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Circle_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Circle_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Label(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Circle_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Material(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value);

/**
 * Normal of the plane of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Normal of the plane of the circle.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Normal(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Radius of the circle, in meters.
 */
static inline krpc_error_t krpc_Drawing_Circle_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Radius of the circle, in meters.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Radius(krpc_connection_t connection, krpc_Drawing_Circle_t instance, double value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Circle_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Circle_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Circle_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Thickness(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Circle_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Circle_set_Visible(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value);

/**
 * Remove the image. A marker drawn with it goes back to its own icon.
 */
static inline krpc_error_t krpc_Drawing_Image_Remove(krpc_connection_t connection, krpc_Drawing_Image_t instance);

/**
 * The height of the image, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Image_Height(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance);

/**
 * The width of the image, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Image_Width(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Line_Remove(krpc_connection_t connection, krpc_Drawing_Line_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Line_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Line_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Color(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Line_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Colors(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Line_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Dashed(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * End position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_End(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * End position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_set_End(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Line_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Line_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Line_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Label(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Line_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Material(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Start position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_Start(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Start position of the line.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Start(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Line_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Line_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Line_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Thickness(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Line_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Line_set_Visible(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * Remove the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Remove(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance);

/**
 * The caption shown when the mouse is over the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Caption(krpc_connection_t connection, char * * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * The caption shown when the mouse is over the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const char * value);

/**
 * The color of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * The color of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Color(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The icon that the marker is drawn with.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Icon(krpc_connection_t connection, krpc_Drawing_MapMarkerIcon_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * The icon that the marker is drawn with.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_MapMarkerIcon_t value);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Image(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_Image_t value);

/**
 * Position of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Position of the marker.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Position(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Reference frame that the position of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Reference frame that the position of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_MapMarker_t instance);

/**
 * Whether the marker is visible.
 */
static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, bool value);

/**
 * Remove the marker.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Remove(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance);

/**
 * A list of all available icons, taken from "GameData/Squad/Contracts/Icons/".
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Direction that the marker is drawn at.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Direction(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Direction that the marker is drawn at.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * The icon that the marker is drawn with.
 * See Drawing::NavballMarker::available_icons for the icons that can be used.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Icon(krpc_connection_t connection, char * * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * The icon that the marker is drawn with.
 * See Drawing::NavballMarker::available_icons for the icons that can be used.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const char * value);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * The image that the marker is drawn with in place of its icon, or null to draw the
 * icon.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_Drawing_Image_t value);

/**
 * Reference frame that the direction of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Reference frame that the direction of the marker is in.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Size of the marker, relative to the size of the navball's own markers.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Size of the marker, relative to the size of the navball's own markers.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, float value);

/**
 * Whether the marker is visible.
 *
 * A visible marker is still hidden while it is on the far side of the navball.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_NavballMarker_t instance);

/**
 * Whether the marker is visible.
 *
 * A visible marker is still hidden while it is on the far side of the navball.
 */
static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Remove(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * The true anomaly at which the path ends, in radians.
 *
 * Setting this sets Drawing::OrbitPath::whole_orbit to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * The true anomaly at which the path ends, in radians.
 *
 * Setting this sets Drawing::OrbitPath::whole_orbit to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value);

/**
 * The orbit.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit(krpc_connection_t connection, krpc_SpaceCenter_Orbit_t * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * The orbit.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, krpc_SpaceCenter_Orbit_t value);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * The true anomaly at which the path starts, in radians.
 *
 * Setting this sets Drawing::OrbitPath::whole_orbit to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * The true anomaly at which the path starts, in radians.
 *
 * Setting this sets Drawing::OrbitPath::whole_orbit to false.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Whether the whole orbit is drawn, up to where it leaves the sphere of influence of
 * its body. When false, the orbit is drawn from Drawing::OrbitPath::start_true_anomaly
 * to Drawing::OrbitPath::end_true_anomaly.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance);

/**
 * Whether the whole orbit is drawn, up to where it leaves the sphere of influence of
 * its body. When false, the orbit is drawn from Drawing::OrbitPath::start_true_anomaly
 * to Drawing::OrbitPath::end_true_anomaly.
 */
static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Point_Remove(krpc_connection_t connection, krpc_Drawing_Point_t instance);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Point_t instance);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Color(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Point_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Point_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Material(krpc_connection_t connection, krpc_Drawing_Point_t instance, const char * value);

/**
 * Position of the point.
 */
static inline krpc_error_t krpc_Drawing_Point_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Point_t instance);

/**
 * Position of the point.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Position(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Point_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Point_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Diameter of the point, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Point_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_Point_t instance);

/**
 * Diameter of the point, in pixels.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Size(krpc_connection_t connection, krpc_Drawing_Point_t instance, float value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Point_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Point_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Point_set_Visible(krpc_connection_t connection, krpc_Drawing_Point_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Remove(krpc_connection_t connection, krpc_Drawing_Polygon_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Color(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Colors(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polygon_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Label(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Material(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value);

/**
 * Vertices for the polygon.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Vertices for the polygon.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polygon_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polygon_set_Visible(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Remove(krpc_connection_t connection, krpc_Drawing_Polyline_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * The size of the arrow heads, relative to the thickness.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * The color of the path.
 *
 * For a path drawn with more than one color, this is the color at its start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Color(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * The colors of the path, blended evenly from its start to its end.
 *
 * Throws an exception if the list is empty or holds more than 8 colors.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Colors(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_StdLib_ColorRGB_t * value);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Whether the path is drawn as a dashed line.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polyline_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Whether an arrow head is drawn at the end.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Text drawn halfway along the path, facing the camera. Empty for no label.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Label(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Material(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Whether an arrow head is drawn at the start.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * The thickness of the path.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value);

/**
 * Vertices for the polyline.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Vertices for the polyline.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_tuple_double_double_double_t * value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polyline_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Polyline_set_Visible(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Remove(krpc_connection_t connection, krpc_Drawing_Sphere_t instance);

/**
 * Position of the center of the sphere.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Position of the center of the sphere.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Center(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * The color of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Color(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Material(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const char * value);

/**
 * Radius of the sphere, in meters.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Radius of the sphere, in meters.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Radius(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, double value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Sphere_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Sphere_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Sphere_set_Visible(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, bool value);

/**
 * Remove the object.
 */
static inline krpc_error_t krpc_Drawing_Text_Remove(krpc_connection_t connection, krpc_Drawing_Text_t instance);

/**
 * A list of all available fonts.
 */
static inline krpc_error_t krpc_Drawing_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_Drawing_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAlignment_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Alignment(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value);

/**
 * Anchor.
 */
static inline krpc_error_t krpc_Drawing_Text_Anchor(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Anchor.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Anchor(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value);

/**
 * Character size.
 */
static inline krpc_error_t krpc_Drawing_Text_CharacterSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance);

/**
 * Character size.
 */
static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Set the color
 */
static inline krpc_error_t krpc_Drawing_Text_set_Color(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_StdLib_ColorRGB_t * value);

/**
 * The text string
 */
static inline krpc_error_t krpc_Drawing_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * The text string
 */
static inline krpc_error_t krpc_Drawing_Text_set_Content(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Whether the text turns to face the camera, in place of its Drawing::Text::rotation.
 */
static inline krpc_error_t krpc_Drawing_Text_FaceCamera(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance);

/**
 * Whether the text turns to face the camera, in place of its Drawing::Text::rotation.
 */
static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value);

/**
 * Name of the font
 */
static inline krpc_error_t krpc_Drawing_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Name of the font
 */
static inline krpc_error_t krpc_Drawing_Text_set_Font(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_Drawing_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Text_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Material(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Position of the text.
 */
static inline krpc_error_t krpc_Drawing_Text_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Position of the text.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Position(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Reference frame for the positions of the object.
 */
static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Rotation of the text as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Text_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Rotation of the text as a quaternion.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Rotation(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Font size.
 */
static inline krpc_error_t krpc_Drawing_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Font size.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Size(krpc_connection_t connection, krpc_Drawing_Text_t instance, int32_t value);

/**
 * Font style.
 */
static inline krpc_error_t krpc_Drawing_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Font style.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Style(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance);

/**
 * Whether the object is visible.
 */
static inline krpc_error_t krpc_Drawing_Text_set_Visible(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value);

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
    KRPC_RETURN_ERROR(DECODING_FAILED, "too few fields for a StdLib_ColorRGB");
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
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
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
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
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
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static inline krpc_error_t krpc_Drawing_AddArc(krpc_connection_t connection, krpc_Drawing_Arc_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, const krpc_tuple_double_double_double_t * startDirection, double angle, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[7];
  KRPC_CHECK(krpc_call(&_call, 3, 8, 7, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddAxes(krpc_connection_t connection, krpc_list_object_t * returnValue, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 4, 3, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddBox(krpc_connection_t connection, krpc_Drawing_Box_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * size, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_double_t * rotation, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 10, 5, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddCircle(krpc_connection_t connection, krpc_Drawing_Circle_t * returnValue, const krpc_tuple_double_double_double_t * center, const krpc_tuple_double_double_double_t * normal, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 7, 5, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddDirection(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 2, 4, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddDirectionFromCom(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 3, 4, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddImage(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_bytes_t data) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 16, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddLine(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 1, 4, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddMapMarker(krpc_connection_t connection, krpc_Drawing_MapMarker_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, krpc_Drawing_MapMarkerIcon_t icon, const char * caption, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 15, 5, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddNavballMarker(krpc_connection_t connection, krpc_Drawing_NavballMarker_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 14, 3, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t * returnValue, krpc_SpaceCenter_Orbit_t orbit, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 9, 2, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddPoint(krpc_connection_t connection, krpc_Drawing_Point_t * returnValue, const krpc_tuple_double_double_double_t * position, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 11, 3, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddPolygon(krpc_connection_t connection, krpc_Drawing_Polygon_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 5, 3, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddPolyline(krpc_connection_t connection, krpc_Drawing_Polyline_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 3, 6, 3, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddSphere(krpc_connection_t connection, krpc_Drawing_Sphere_t * returnValue, const krpc_tuple_double_double_double_t * center, double radius, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 3, 12, 4, _arguments));
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

static inline krpc_error_t krpc_Drawing_AddText(krpc_connection_t connection, krpc_Drawing_Text_t * returnValue, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 3, 13, 5, _arguments));
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

static inline krpc_error_t krpc_Drawing_Clear(krpc_connection_t connection, bool clientOnly) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 17, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &clientOnly));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Remove(krpc_connection_t connection, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 18, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Angle(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 25, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Angle(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 26, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 39, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 40, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 19, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Center(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 20, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 31, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Color(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 32, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 33, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Colors(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 34, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 43, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Dashed(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 44, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 37, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 38, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 41, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Label(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 42, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 49, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Material(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 50, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 21, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Normal(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 22, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 27, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Radius(krpc_connection_t connection, krpc_Drawing_Arc_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 28, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 29, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Arc_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 30, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 35, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 36, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_StartDirection(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 23, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_StartDirection(krpc_connection_t connection, krpc_Drawing_Arc_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 24, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 45, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Thickness(krpc_connection_t connection, krpc_Drawing_Arc_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 46, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Arc_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Arc_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 47, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Arc_set_Visible(krpc_connection_t connection, krpc_Drawing_Arc_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 48, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Remove(krpc_connection_t connection, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 51, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 54, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_Center(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 55, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 60, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_Color(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 61, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 66, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_Material(krpc_connection_t connection, krpc_Drawing_Box_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 67, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 52, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Box_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 53, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 58, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_Rotation(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 59, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Size(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 56, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_Size(krpc_connection_t connection, krpc_Drawing_Box_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 57, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 62, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_Thickness(krpc_connection_t connection, krpc_Drawing_Box_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 63, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Box_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Box_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 64, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Box_set_Visible(krpc_connection_t connection, krpc_Drawing_Box_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 65, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Remove(krpc_connection_t connection, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 68, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 85, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 86, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 69, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Center(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 70, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 77, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Color(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 78, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 79, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Colors(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 80, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 89, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Dashed(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 90, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 83, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 84, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 87, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Label(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 88, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 95, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Material(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 96, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Normal(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 71, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Normal(krpc_connection_t connection, krpc_Drawing_Circle_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 72, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 73, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Radius(krpc_connection_t connection, krpc_Drawing_Circle_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 74, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 75, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Circle_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 76, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 81, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 82, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 91, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Thickness(krpc_connection_t connection, krpc_Drawing_Circle_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 92, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Circle_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Circle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 93, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Circle_set_Visible(krpc_connection_t connection, krpc_Drawing_Circle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 94, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Image_Remove(krpc_connection_t connection, krpc_Drawing_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 97, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Image_Height(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 99, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Image_Width(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 98, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_Remove(krpc_connection_t connection, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 100, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 115, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 116, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 107, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Color(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 108, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 109, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Colors(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 110, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 119, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Dashed(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 120, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_End(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 103, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_End(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 104, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 113, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 114, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 117, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Label(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 118, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 125, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Material(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 126, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 105, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 106, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Start(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 101, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Start(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 102, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 111, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 112, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 121, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Thickness(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 122, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Line_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 123, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Line_set_Visible(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 124, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Remove(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 127, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Caption(krpc_connection_t connection, char * * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 138, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_set_Caption(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 139, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 140, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_set_Color(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 141, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Icon(krpc_connection_t connection, krpc_Drawing_MapMarkerIcon_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 134, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_MapMarkerIcon_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 135, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 136, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_set_Image(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_Drawing_Image_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 137, 2, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 132, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_set_Position(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 133, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 128, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 129, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_MapMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_MapMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 130, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_MapMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_MapMarker_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 131, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Remove(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 142, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 150, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Color(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 151, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Direction(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 148, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Direction(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 149, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Icon(krpc_connection_t connection, char * * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 152, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Icon(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 153, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Image(krpc_connection_t connection, krpc_Drawing_Image_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 154, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Image(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_Drawing_Image_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 155, 2, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 144, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 145, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 156, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Size(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 157, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_NavballMarker_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 146, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_NavballMarker_set_Visible(krpc_connection_t connection, krpc_Drawing_NavballMarker_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 147, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_NavballMarker_AvailableIcons(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 3, 143, 0, NULL));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_Remove(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 158, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 175, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 176, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 167, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Color(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 168, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 169, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Colors(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 170, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 179, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Dashed(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 180, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 173, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 174, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_EndTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 165, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_EndTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 166, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 177, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Label(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 178, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 185, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Material(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 186, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Orbit(krpc_connection_t connection, krpc_SpaceCenter_Orbit_t * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 159, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Orbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, krpc_SpaceCenter_Orbit_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 160, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 171, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartArrow(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 172, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_StartTrueAnomaly(krpc_connection_t connection, double * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 163, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_StartTrueAnomaly(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 164, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 181, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Thickness(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 182, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 183, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_Visible(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 184, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_OrbitPath_WholeOrbit(krpc_connection_t connection, bool * returnValue, krpc_Drawing_OrbitPath_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 161, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_OrbitPath_set_WholeOrbit(krpc_connection_t connection, krpc_Drawing_OrbitPath_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 162, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Remove(krpc_connection_t connection, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 187, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 194, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_set_Color(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 195, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 198, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_set_Material(krpc_connection_t connection, krpc_Drawing_Point_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 199, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 188, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_set_Position(krpc_connection_t connection, krpc_Drawing_Point_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 189, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 192, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Point_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 193, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Size(krpc_connection_t connection, float * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 190, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_set_Size(krpc_connection_t connection, krpc_Drawing_Point_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 191, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Point_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Point_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 196, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Point_set_Visible(krpc_connection_t connection, krpc_Drawing_Point_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 197, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Remove(krpc_connection_t connection, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 200, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 213, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 214, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 205, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Color(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 206, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 207, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Colors(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 208, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 217, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 218, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 211, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 212, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 215, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Label(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 216, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 223, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Material(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 224, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 203, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 204, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 209, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 210, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 219, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 220, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 201, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 202, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polygon_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 221, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polygon_set_Visible(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 222, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Remove(krpc_connection_t connection, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 225, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_ArrowSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 238, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_ArrowSize(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 239, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 230, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Color(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 231, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Colors(krpc_connection_t connection, krpc_list_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 232, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Colors(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 233, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Dashed(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 242, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Dashed(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 243, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_EndArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 236, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_EndArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 237, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Label(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 240, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Label(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 241, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 248, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Material(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 249, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 228, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 229, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_StartArrow(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 234, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_StartArrow(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 235, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 244, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 245, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 226, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, const krpc_list_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 227, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Polyline_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polyline_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 246, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Polyline_set_Visible(krpc_connection_t connection, krpc_Drawing_Polyline_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 247, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Remove(krpc_connection_t connection, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 250, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Center(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 251, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_set_Center(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 252, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 257, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_set_Color(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 258, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 261, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_set_Material(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 262, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Radius(krpc_connection_t connection, double * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 253, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_set_Radius(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 254, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_double, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 255, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 256, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Sphere_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Sphere_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 259, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Sphere_set_Visible(krpc_connection_t connection, krpc_Drawing_Sphere_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 260, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Remove(krpc_connection_t connection, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 264, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAlignment_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 283, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Alignment(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 284, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Anchor(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 287, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Anchor(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 288, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_CharacterSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 279, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_CharacterSize(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 280, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGB_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 289, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Color(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_StdLib_ColorRGB_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 290, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGB, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 273, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Content(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 274, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_FaceCamera(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 271, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_FaceCamera(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 272, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 275, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Font(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 276, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 285, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_LineSpacing(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 286, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 293, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Material(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 294, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 267, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Position(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 268, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 265, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 266, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 269, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Rotation(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 270, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 277, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Size(krpc_connection_t connection, krpc_Drawing_Text_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 278, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 281, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Style(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 282, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 3, 291, 1, _arguments));
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

static inline krpc_error_t krpc_Drawing_Text_set_Visible(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 3, 292, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_Drawing_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 3, 263, 0, NULL));
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

#ifdef __cplusplus
}  // extern "C"
#endif
