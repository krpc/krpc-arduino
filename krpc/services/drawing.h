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
 * A line. Created using Drawing::add_line.
 */
typedef krpc_object_t krpc_Drawing_Line_t;
/**
 * A polygon. Created using Drawing::add_polygon.
 */
typedef krpc_object_t krpc_Drawing_Polygon_t;
/**
 * Text. Created using Drawing::add_text.
 */
typedef krpc_object_t krpc_Drawing_Text_t;

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_double_double_s krpc_tuple_double_double_double_double_t;
struct krpc_tuple_double_double_double_double_s {
  double e0;
  double e1;
  double e2;
  double e3;
};

krpc_error_t krpc_encode_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_double_t * value);
krpc_error_t krpc_encode_size_tuple_double_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_double_t * value);
bool krpc_encode_callback_tuple_double_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_double_t * value);

#endif  // KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_double_s krpc_tuple_double_double_double_t;
struct krpc_tuple_double_double_double_s {
  double e0;
  double e1;
  double e2;
};

krpc_error_t krpc_encode_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_t * value);
krpc_error_t krpc_encode_size_tuple_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_t * value);
bool krpc_encode_callback_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_tuple_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_t * value);

#endif  // KRPC_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE

typedef struct krpc_list_tuple_double_double_double_s krpc_list_tuple_double_double_double_t;
struct krpc_list_tuple_double_double_double_s {
  size_t size;
  krpc_tuple_double_double_double_t * items;
};

krpc_error_t krpc_encode_list_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_list_tuple_double_double_double_t * value);
krpc_error_t krpc_encode_size_list_tuple_double_double_double(
  size_t * size, const krpc_list_tuple_double_double_double_t * value);
bool krpc_encode_callback_list_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_list_tuple_double_double_double(
  pb_istream_t * stream, krpc_list_tuple_double_double_double_t * value);

#endif  // KRPC_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE

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

/**
 * Draw a direction vector in the scene, from the center of mass of the active vessel.
 * @param direction Direction to draw the line in.
 * @param referenceFrame Reference frame that the direction is in.
 * @param length The length of the line.
 * @param visible Whether the line is visible.
 */
krpc_error_t krpc_Drawing_AddDirection(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible);

/**
 * Draw a line in the scene.
 * @param start Position of the start of the line.
 * @param end Position of the end of the line.
 * @param referenceFrame Reference frame that the positions are in.
 * @param visible Whether the line is visible.
 */
krpc_error_t krpc_Drawing_AddLine(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw a polygon in the scene, defined by a list of vertices.
 * @param vertices Vertices of the polygon.
 * @param referenceFrame Reference frame that the vertices are in.
 * @param visible Whether the polygon is visible.
 */
krpc_error_t krpc_Drawing_AddPolygon(krpc_connection_t connection, krpc_Drawing_Polygon_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible);

/**
 * Draw text in the scene.
 * @param text The string to draw.
 * @param referenceFrame Reference frame that the text position is in.
 * @param position Position of the text.
 * @param rotation Rotation of the text, as a quaternion.
 * @param visible Whether the text is visible.
 */
krpc_error_t krpc_Drawing_AddText(krpc_connection_t connection, krpc_Drawing_Text_t * returnValue, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible);

/**
 * Remove all objects being drawn.
 * @param clientOnly If true, only remove objects created by the calling client.
 */
krpc_error_t krpc_Drawing_Clear(krpc_connection_t connection, bool clientOnly);

/**
 * Remove the object.
 */
krpc_error_t krpc_Drawing_Line_Remove(krpc_connection_t connection, krpc_Drawing_Line_t instance);

/**
 * Set the thickness
 */
krpc_error_t krpc_Drawing_Line_set_Thickness(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value);

/**
 * End position of the line.
 */
krpc_error_t krpc_Drawing_Line_End(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Whether the object is visible.
 */
krpc_error_t krpc_Drawing_Line_set_Visible(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value);

/**
 * Start position of the line.
 */
krpc_error_t krpc_Drawing_Line_Start(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Set the color
 */
krpc_error_t krpc_Drawing_Line_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
krpc_error_t krpc_Drawing_Line_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
krpc_error_t krpc_Drawing_Line_set_Material(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value);

/**
 * Set the thickness
 */
krpc_error_t krpc_Drawing_Line_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance);

/**
 * End position of the line.
 */
krpc_error_t krpc_Drawing_Line_set_End(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Reference frame for the positions of the object.
 */
krpc_error_t krpc_Drawing_Line_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Start position of the line.
 */
krpc_error_t krpc_Drawing_Line_set_Start(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Set the color
 */
krpc_error_t krpc_Drawing_Line_set_Color(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Whether the object is visible.
 */
krpc_error_t krpc_Drawing_Line_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance);

/**
 * Reference frame for the positions of the object.
 */
krpc_error_t krpc_Drawing_Line_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Line_t instance);

/**
 * Remove the object.
 */
krpc_error_t krpc_Drawing_Polygon_Remove(krpc_connection_t connection, krpc_Drawing_Polygon_t instance);

/**
 * Set the thickness
 */
krpc_error_t krpc_Drawing_Polygon_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
krpc_error_t krpc_Drawing_Polygon_set_Material(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value);

/**
 * Set the color
 */
krpc_error_t krpc_Drawing_Polygon_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
krpc_error_t krpc_Drawing_Polygon_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Vertices for the polygon.
 */
krpc_error_t krpc_Drawing_Polygon_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Vertices for the polygon.
 */
krpc_error_t krpc_Drawing_Polygon_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value);

/**
 * Set the thickness
 */
krpc_error_t krpc_Drawing_Polygon_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Whether the object is visible.
 */
krpc_error_t krpc_Drawing_Polygon_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Reference frame for the positions of the object.
 */
krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Whether the object is visible.
 */
krpc_error_t krpc_Drawing_Polygon_set_Visible(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value);

/**
 * Set the color
 */
krpc_error_t krpc_Drawing_Polygon_set_Color(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Reference frame for the positions of the object.
 */
krpc_error_t krpc_Drawing_Polygon_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polygon_t instance);

/**
 * Remove the object.
 */
krpc_error_t krpc_Drawing_Text_Remove(krpc_connection_t connection, krpc_Drawing_Text_t instance);

/**
 * A list of all available fonts.
 */
krpc_error_t krpc_Drawing_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue);

/**
 * Font style.
 */
krpc_error_t krpc_Drawing_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Line spacing.
 */
krpc_error_t krpc_Drawing_Text_set_LineSpacing(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value);

/**
 * Reference frame for the positions of the object.
 */
krpc_error_t krpc_Drawing_Text_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Character size.
 */
krpc_error_t krpc_Drawing_Text_CharacterSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance);

/**
 * The text string
 */
krpc_error_t krpc_Drawing_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Reference frame for the positions of the object.
 */
krpc_error_t krpc_Drawing_Text_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value);

/**
 * Set the color
 */
krpc_error_t krpc_Drawing_Text_set_Color(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Character size.
 */
krpc_error_t krpc_Drawing_Text_set_CharacterSize(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value);

/**
 * Font style.
 */
krpc_error_t krpc_Drawing_Text_set_Style(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value);

/**
 * The text string
 */
krpc_error_t krpc_Drawing_Text_set_Content(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Line spacing.
 */
krpc_error_t krpc_Drawing_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
krpc_error_t krpc_Drawing_Text_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Rotation of the text as a quaternion.
 */
krpc_error_t krpc_Drawing_Text_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Anchor.
 */
krpc_error_t krpc_Drawing_Text_set_Anchor(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value);

/**
 * Name of the font
 */
krpc_error_t krpc_Drawing_Text_set_Font(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Rotation of the text as a quaternion.
 */
krpc_error_t krpc_Drawing_Text_set_Rotation(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Material used to render the object.
 * Creates the material from a shader with the given name.
 */
krpc_error_t krpc_Drawing_Text_set_Material(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value);

/**
 * Whether the object is visible.
 */
krpc_error_t krpc_Drawing_Text_set_Visible(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value);

/**
 * Font size.
 */
krpc_error_t krpc_Drawing_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Position of the text.
 */
krpc_error_t krpc_Drawing_Text_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Anchor.
 */
krpc_error_t krpc_Drawing_Text_Anchor(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Set the color
 */
krpc_error_t krpc_Drawing_Text_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Whether the object is visible.
 */
krpc_error_t krpc_Drawing_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance);

/**
 * Font size.
 */
krpc_error_t krpc_Drawing_Text_set_Size(krpc_connection_t connection, krpc_Drawing_Text_t instance, int32_t value);

/**
 * Position of the text.
 */
krpc_error_t krpc_Drawing_Text_set_Position(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Name of the font
 */
krpc_error_t krpc_Drawing_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance);

/**
 * Alignment.
 */
krpc_error_t krpc_Drawing_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAlignment_t * returnValue, krpc_Drawing_Text_t instance);

/**
 * Alignment.
 */
krpc_error_t krpc_Drawing_Text_set_Alignment(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value);

// Implementation

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

static bool krpc_encode_callback_items_tuple_double_double_double_double(
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

inline krpc_error_t krpc_encode_tuple_double_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double_double_double;
  message.items.arg = (krpc_tuple_double_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_tuple_double_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_tuple_double_double_double_double(
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

static bool krpc_decode_callback_item_tuple_double_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct {size_t pos; krpc_tuple_double_double_double_double_t * value;} State;
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

inline krpc_error_t krpc_decode_tuple_double_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double_double_double;
  typedef struct { size_t pos; krpc_tuple_double_double_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

static bool krpc_encode_callback_items_tuple_double_double_double(
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

inline krpc_error_t krpc_encode_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double_double;
  message.items.arg = (krpc_tuple_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_tuple_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_tuple_double_double_double(
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

static bool krpc_decode_callback_item_tuple_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct {size_t pos; krpc_tuple_double_double_double_t * value;} State;
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

inline krpc_error_t krpc_decode_tuple_double_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double_double;
  typedef struct { size_t pos; krpc_tuple_double_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE_DOUBLE

#ifndef KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_LIST_TUPLE_DOUBLE_DOUBLE_DOUBLE

static bool krpc_encode_callback_items_list_tuple_double_double_double(
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

inline krpc_error_t krpc_encode_list_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_list_tuple_double_double_double_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_tuple_double_double_double;
  message.items.arg = (krpc_list_tuple_double_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_list_tuple_double_double_double(
  size_t * size, const krpc_list_tuple_double_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_tuple_double_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_list_tuple_double_double_double(
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

static bool krpc_decode_callback_item_list_tuple_double_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_list_tuple_double_double_double_t * value; } State;
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

inline krpc_error_t krpc_decode_list_tuple_double_double_double(
  pb_istream_t * stream, krpc_list_tuple_double_double_double_t * value) {
  typedef struct { size_t capacity; krpc_list_tuple_double_double_double_t * value; } State;
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

inline krpc_error_t krpc_Drawing_AddDirection(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * direction, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, float length, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "AddDirection", 4, _arguments));
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

inline krpc_error_t krpc_Drawing_AddLine(krpc_connection_t connection, krpc_Drawing_Line_t * returnValue, const krpc_tuple_double_double_double_t * start, const krpc_tuple_double_double_double_t * end, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "AddLine", 4, _arguments));
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

inline krpc_error_t krpc_Drawing_AddPolygon(krpc_connection_t connection, krpc_Drawing_Polygon_t * returnValue, const krpc_list_tuple_double_double_double_t * vertices, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "AddPolygon", 3, _arguments));
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

inline krpc_error_t krpc_Drawing_AddText(krpc_connection_t connection, krpc_Drawing_Text_t * returnValue, const char * text, krpc_SpaceCenter_ReferenceFrame_t referenceFrame, const krpc_tuple_double_double_double_t * position, const krpc_tuple_double_double_double_double_t * rotation, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "AddText", 5, _arguments));
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

inline krpc_error_t krpc_Drawing_Clear(krpc_connection_t connection, bool clientOnly) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Clear", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &clientOnly));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_Remove(krpc_connection_t connection, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_set_Thickness(krpc_connection_t connection, krpc_Drawing_Line_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_set_Thickness", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_End(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_get_End", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Line_set_Visible(krpc_connection_t connection, krpc_Drawing_Line_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_Start(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_get_Start", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Line_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_get_Color", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Line_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_get_Material", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Line_set_Material(krpc_connection_t connection, krpc_Drawing_Line_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_set_Material", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_get_Thickness", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Line_set_End(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_set_End", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Line_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_set_ReferenceFrame", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_set_Start(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_set_Start", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_set_Color(krpc_connection_t connection, krpc_Drawing_Line_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_set_Color", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Line_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Line_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Line_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Line_get_ReferenceFrame", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Polygon_Remove(krpc_connection_t connection, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Polygon_set_Thickness(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_set_Thickness", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Polygon_set_Material(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_set_Material", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Polygon_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_get_Color", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Polygon_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_get_Material", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Polygon_Vertices(krpc_connection_t connection, krpc_list_tuple_double_double_double_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_get_Vertices", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Polygon_set_Vertices(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_list_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_set_Vertices", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Polygon_Thickness(krpc_connection_t connection, float * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_get_Thickness", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Polygon_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Polygon_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_set_ReferenceFrame", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Polygon_set_Visible(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Polygon_set_Color(krpc_connection_t connection, krpc_Drawing_Polygon_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_set_Color", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Polygon_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Polygon_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Polygon_get_ReferenceFrame", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Remove(krpc_connection_t connection, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Style", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_set_LineSpacing(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_LineSpacing", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_ReferenceFrame(krpc_connection_t connection, krpc_SpaceCenter_ReferenceFrame_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_ReferenceFrame", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_CharacterSize(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_CharacterSize", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Content", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_set_ReferenceFrame(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_SpaceCenter_ReferenceFrame_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_ReferenceFrame", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Color(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Color", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_CharacterSize(krpc_connection_t connection, krpc_Drawing_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_CharacterSize", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Style(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_FontStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Style", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Content(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Content", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_LineSpacing", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Material(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Material", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Rotation", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_set_Anchor(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Anchor", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Font(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Font", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Rotation(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Rotation", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Material(krpc_connection_t connection, krpc_Drawing_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Material", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Visible(krpc_connection_t connection, krpc_Drawing_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Size", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Position(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Position", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Anchor(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Anchor", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Color", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_set_Size(krpc_connection_t connection, krpc_Drawing_Text_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Size", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_set_Position(krpc_connection_t connection, krpc_Drawing_Text_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Position", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Font", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAlignment_t * returnValue, krpc_Drawing_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_get_Alignment", 1, _arguments));
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

inline krpc_error_t krpc_Drawing_Text_set_Alignment(krpc_connection_t connection, krpc_Drawing_Text_t instance, krpc_UI_TextAlignment_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_set_Alignment", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_Drawing_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "Drawing", "Text_static_AvailableFonts", 0, _arguments));
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
