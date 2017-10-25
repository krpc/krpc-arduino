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
 * A text label. See UI::Panel::add_button.
 */
typedef krpc_object_t krpc_UI_Button_t;
/**
 * A canvas for user interface elements. See UI::stock_canvas and UI::add_canvas.
 */
typedef krpc_object_t krpc_UI_Canvas_t;
/**
 * An input field. See UI::Panel::add_input_field.
 */
typedef krpc_object_t krpc_UI_InputField_t;
/**
 * A container for user interface elements. See UI::Canvas::add_panel.
 */
typedef krpc_object_t krpc_UI_Panel_t;
/**
 * A Unity engine Rect Transform for a UI object.
 * See the <a href="https://docs.unity3d.com/Manual/class-RectTransform.html">Unity manual</a> for more details.
 */
typedef krpc_object_t krpc_UI_RectTransform_t;
/**
 * A text label. See UI::Panel::add_text.
 */
typedef krpc_object_t krpc_UI_Text_t;

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_s krpc_tuple_double_double_t;
struct krpc_tuple_double_double_s {
  double e0;
  double e1;
};

krpc_error_t krpc_encode_tuple_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_t * value);
krpc_error_t krpc_encode_size_tuple_double_double(
  size_t * size, const krpc_tuple_double_double_t * value);
bool krpc_encode_callback_tuple_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_tuple_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_t * value);

#endif  // KRPC_TYPE_TUPLE_DOUBLE_DOUBLE

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
 * Font style.
 */
typedef enum {
  /**
   * Normal.
   */
  KRPC_UI_FONTSTYLE_NORMAL = 0,
  /**
   * Bold.
   */
  KRPC_UI_FONTSTYLE_BOLD = 1,
  /**
   * Italic.
   */
  KRPC_UI_FONTSTYLE_ITALIC = 2,
  /**
   * Bold and italic.
   */
  KRPC_UI_FONTSTYLE_BOLDANDITALIC = 3
} krpc_UI_FontStyle_t;

/**
 * Message position.
 */
typedef enum {
  /**
   * Bottom center.
   */
  KRPC_UI_MESSAGEPOSITION_BOTTOMCENTER = 0,
  /**
   * Top center.
   */
  KRPC_UI_MESSAGEPOSITION_TOPCENTER = 1,
  /**
   * Top left.
   */
  KRPC_UI_MESSAGEPOSITION_TOPLEFT = 2,
  /**
   * Top right.
   */
  KRPC_UI_MESSAGEPOSITION_TOPRIGHT = 3
} krpc_UI_MessagePosition_t;

/**
 * Text alignment.
 */
typedef enum {
  /**
   * Left aligned.
   */
  KRPC_UI_TEXTALIGNMENT_LEFT = 0,
  /**
   * Right aligned.
   */
  KRPC_UI_TEXTALIGNMENT_RIGHT = 1,
  /**
   * Center aligned.
   */
  KRPC_UI_TEXTALIGNMENT_CENTER = 2
} krpc_UI_TextAlignment_t;

/**
 * Text alignment.
 */
typedef enum {
  /**
   * Lower center.
   */
  KRPC_UI_TEXTANCHOR_LOWERCENTER = 0,
  /**
   * Lower left.
   */
  KRPC_UI_TEXTANCHOR_LOWERLEFT = 1,
  /**
   * Lower right.
   */
  KRPC_UI_TEXTANCHOR_LOWERRIGHT = 2,
  /**
   * Middle center.
   */
  KRPC_UI_TEXTANCHOR_MIDDLECENTER = 3,
  /**
   * Middle left.
   */
  KRPC_UI_TEXTANCHOR_MIDDLELEFT = 4,
  /**
   * Middle right.
   */
  KRPC_UI_TEXTANCHOR_MIDDLERIGHT = 5,
  /**
   * Upper center.
   */
  KRPC_UI_TEXTANCHOR_UPPERCENTER = 6,
  /**
   * Upper left.
   */
  KRPC_UI_TEXTANCHOR_UPPERLEFT = 7,
  /**
   * Upper right.
   */
  KRPC_UI_TEXTANCHOR_UPPERRIGHT = 8
} krpc_UI_TextAnchor_t;

/**
 * Add a new canvas.
 *
 * If you want to add UI elements to KSPs stock UI canvas, use UI::stock_canvas.
 */
krpc_error_t krpc_UI_AddCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue);

/**
 * Remove all user interface elements.
 * @param clientOnly If true, only remove objects created by the calling client.
 */
krpc_error_t krpc_UI_Clear(krpc_connection_t connection, bool clientOnly);

/**
 * Display a message on the screen.
 *
 * The message appears just like a stock message, for example quicksave or quickload messages.
 * @param content Message content.
 * @param duration Duration before the message disappears, in seconds.
 * @param position Position to display the message.
 */
krpc_error_t krpc_UI_Message(krpc_connection_t connection, const char * content, float duration, krpc_UI_MessagePosition_t position);

/**
 * The stock UI canvas.
 */
krpc_error_t krpc_UI_StockCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue);

/**
 * Remove the UI object.
 */
krpc_error_t krpc_UI_Button_Remove(krpc_connection_t connection, krpc_UI_Button_t instance);

/**
 * Whether the button has been clicked.
 *
 * This property is set to true when the user clicks the button.
 * A client script should reset the property to false in order to detect subsequent button presses.
 */
krpc_error_t krpc_UI_Button_Clicked(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Button_set_Visible(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

/**
 * Whether the button has been clicked.
 *
 * This property is set to true when the user clicks the button.
 * A client script should reset the property to false in order to detect subsequent button presses.
 */
krpc_error_t krpc_UI_Button_set_Clicked(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

/**
 * The rect transform for the text.
 */
krpc_error_t krpc_UI_Button_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Button_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Button_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * The text for the button.
 */
krpc_error_t krpc_UI_Button_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Button_t instance);

/**
 * Add a button to the canvas.
 * @param content The label for the button.
 * @param visible Whether the button is visible.
 */
krpc_error_t krpc_UI_Canvas_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Add an input field to the canvas.
 * @param visible Whether the input field is visible.
 */
krpc_error_t krpc_UI_Canvas_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Create a new container for user interface elements.
 * @param visible Whether the panel is visible.
 */
krpc_error_t krpc_UI_Canvas_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Add text to the canvas.
 * @param content The text.
 * @param visible Whether the text is visible.
 */
krpc_error_t krpc_UI_Canvas_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Remove the UI object.
 */
krpc_error_t krpc_UI_Canvas_Remove(krpc_connection_t connection, krpc_UI_Canvas_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Canvas_set_Visible(krpc_connection_t connection, krpc_UI_Canvas_t instance, bool value);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Canvas_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Canvas_t instance);

/**
 * The rect transform for the canvas.
 */
krpc_error_t krpc_UI_Canvas_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Canvas_t instance);

/**
 * Remove the UI object.
 */
krpc_error_t krpc_UI_InputField_Remove(krpc_connection_t connection, krpc_UI_InputField_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_InputField_set_Visible(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * The text component of the input field.
 *
 * Use UI::InputField::value to get and set the value in the field.
 * This object can be used to alter the style of the input field's text.
 */
krpc_error_t krpc_UI_InputField_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Whether the input field has been changed.
 *
 * This property is set to true when the user modifies the value of the input field.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
krpc_error_t krpc_UI_InputField_set_Changed(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * Whether the input field has been changed.
 *
 * This property is set to true when the user modifies the value of the input field.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
krpc_error_t krpc_UI_InputField_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * The value of the input field.
 */
krpc_error_t krpc_UI_InputField_Value(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance);

/**
 * The rect transform for the input field.
 */
krpc_error_t krpc_UI_InputField_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_InputField_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * The value of the input field.
 */
krpc_error_t krpc_UI_InputField_set_Value(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value);

/**
 * Add a button to the panel.
 * @param content The label for the button.
 * @param visible Whether the button is visible.
 */
krpc_error_t krpc_UI_Panel_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Add an input field to the panel.
 * @param visible Whether the input field is visible.
 */
krpc_error_t krpc_UI_Panel_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Create a panel within this panel.
 * @param visible Whether the new panel is visible.
 */
krpc_error_t krpc_UI_Panel_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Add text to the panel.
 * @param content The text.
 * @param visible Whether the text is visible.
 */
krpc_error_t krpc_UI_Panel_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Remove the UI object.
 */
krpc_error_t krpc_UI_Panel_Remove(krpc_connection_t connection, krpc_UI_Panel_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Panel_set_Visible(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Panel_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance);

/**
 * The rect transform for the panel.
 */
krpc_error_t krpc_UI_Panel_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_set_LocalPosition(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Rotation, as a quaternion, of the object around its pivot point.
 */
krpc_error_t krpc_UI_RectTransform_set_Rotation(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * The anchor point for the lower left corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
krpc_error_t krpc_UI_RectTransform_set_AnchorMax(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_LocalPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_Position(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles upper right corner relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_set_UpperRight(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Position of the rectangles upper right corner relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_UpperRight(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Scale factor applied to the object in the x, y and z dimensions.
 */
krpc_error_t krpc_UI_RectTransform_set_Scale(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Location of the pivot point around which the rectangle rotates, defined as a fraction of the size of the rectangle itself.
 */
krpc_error_t krpc_UI_RectTransform_set_Pivot(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * The anchor point for the upper right corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
krpc_error_t krpc_UI_RectTransform_set_AnchorMin(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * The anchor point for the lower left corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
krpc_error_t krpc_UI_RectTransform_AnchorMax(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * The anchor point for the upper right corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
krpc_error_t krpc_UI_RectTransform_AnchorMin(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Scale factor applied to the object in the x, y and z dimensions.
 */
krpc_error_t krpc_UI_RectTransform_Scale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Width and height of the rectangle.
 */
krpc_error_t krpc_UI_RectTransform_set_Size(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Location of the pivot point around which the rectangle rotates, defined as a fraction of the size of the rectangle itself.
 */
krpc_error_t krpc_UI_RectTransform_Pivot(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles lower left corner relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_set_LowerLeft(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Position of the rectangles lower left corner relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_LowerLeft(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
krpc_error_t krpc_UI_RectTransform_set_Position(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Rotation, as a quaternion, of the object around its pivot point.
 */
krpc_error_t krpc_UI_RectTransform_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Set the minimum and maximum anchor points as a fraction of the size of the parent rectangle.
 */
krpc_error_t krpc_UI_RectTransform_set_Anchor(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Width and height of the rectangle.
 */
krpc_error_t krpc_UI_RectTransform_Size(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Remove the UI object.
 */
krpc_error_t krpc_UI_Text_Remove(krpc_connection_t connection, krpc_UI_Text_t instance);

/**
 * Name of the font
 */
krpc_error_t krpc_UI_Text_set_Font(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value);

/**
 * Font style.
 */
krpc_error_t krpc_UI_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_UI_Text_t instance);

/**
 * Font size.
 */
krpc_error_t krpc_UI_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Text_t instance);

/**
 * The text string
 */
krpc_error_t krpc_UI_Text_set_Content(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value);

/**
 * Line spacing.
 */
krpc_error_t krpc_UI_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_UI_Text_t instance);

/**
 * Set the color
 */
krpc_error_t krpc_UI_Text_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_Text_t instance);

/**
 * Line spacing.
 */
krpc_error_t krpc_UI_Text_set_LineSpacing(krpc_connection_t connection, krpc_UI_Text_t instance, float value);

/**
 * A list of all available fonts.
 */
krpc_error_t krpc_UI_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Text_t instance);

/**
 * The text string
 */
krpc_error_t krpc_UI_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance);

/**
 * The rect transform for the text.
 */
krpc_error_t krpc_UI_Text_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Text_t instance);

/**
 * Font size.
 */
krpc_error_t krpc_UI_Text_set_Size(krpc_connection_t connection, krpc_UI_Text_t instance, int32_t value);

/**
 * Set the color
 */
krpc_error_t krpc_UI_Text_set_Color(krpc_connection_t connection, krpc_UI_Text_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Name of the font
 */
krpc_error_t krpc_UI_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance);

/**
 * Whether the UI object is visible.
 */
krpc_error_t krpc_UI_Text_set_Visible(krpc_connection_t connection, krpc_UI_Text_t instance, bool value);

/**
 * Font style.
 */
krpc_error_t krpc_UI_Text_set_Style(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value);

/**
 * Alignment.
 */
krpc_error_t krpc_UI_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Text_t instance);

/**
 * Alignment.
 */
krpc_error_t krpc_UI_Text_set_Alignment(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value);

// Implementation

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE

static bool krpc_encode_callback_items_tuple_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_tuple_double_double_t * value = (const krpc_tuple_double_double_t*)(*arg);
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
  return true;
}

inline krpc_error_t krpc_encode_tuple_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double;
  message.items.arg = (krpc_tuple_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_tuple_double_double(
  size_t * size, const krpc_tuple_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_tuple_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple_double_double");
  krpc_tuple_double_double_t * value = (krpc_tuple_double_double_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_double_double(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple_double_double");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_double_double(stream, value));
  return true;
}

static bool krpc_decode_callback_item_tuple_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct {size_t pos; krpc_tuple_double_double_t * value;} State;
  State * state = (State*)(*arg);
  krpc_tuple_double_double_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e0));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_double(stream, &value->e1));
    break;
  default:
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
  }
  state->pos++;
  return true;
}

inline krpc_error_t krpc_decode_tuple_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double;
  typedef struct { size_t pos; krpc_tuple_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE

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

inline krpc_error_t krpc_UI_AddCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "UI", "AddCanvas", 0, _arguments));
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

inline krpc_error_t krpc_UI_Clear(krpc_connection_t connection, bool clientOnly) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Clear", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &clientOnly));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Message(krpc_connection_t connection, const char * content, float duration, krpc_UI_MessagePosition_t position) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, "UI", "Message", 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &duration));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_enum, &position));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_StockCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, "UI", "get_StockCanvas", 0, _arguments));
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

inline krpc_error_t krpc_UI_Button_Remove(krpc_connection_t connection, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Button_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Button_Clicked(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Button_get_Clicked", 1, _arguments));
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

inline krpc_error_t krpc_UI_Button_set_Visible(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Button_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Button_set_Clicked(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Button_set_Clicked", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Button_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Button_get_RectTransform", 1, _arguments));
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

inline krpc_error_t krpc_UI_Button_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Button_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_UI_Button_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Button_get_Text", 1, _arguments));
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

inline krpc_error_t krpc_UI_Canvas_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_AddButton", 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &content));
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

inline krpc_error_t krpc_UI_Canvas_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_AddInputField", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_UI_Canvas_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_AddPanel", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_UI_Canvas_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_AddText", 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &content));
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

inline krpc_error_t krpc_UI_Canvas_Remove(krpc_connection_t connection, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Canvas_set_Visible(krpc_connection_t connection, krpc_UI_Canvas_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Canvas_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_UI_Canvas_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Canvas_get_RectTransform", 1, _arguments));
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

inline krpc_error_t krpc_UI_InputField_Remove(krpc_connection_t connection, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_InputField_set_Visible(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_InputField_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_get_Text", 1, _arguments));
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

inline krpc_error_t krpc_UI_InputField_set_Changed(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_set_Changed", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_InputField_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_get_Changed", 1, _arguments));
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

inline krpc_error_t krpc_UI_InputField_Value(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_get_Value", 1, _arguments));
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

inline krpc_error_t krpc_UI_InputField_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_get_RectTransform", 1, _arguments));
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

inline krpc_error_t krpc_UI_InputField_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_UI_InputField_set_Value(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "InputField_set_Value", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Panel_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_AddButton", 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &content));
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

inline krpc_error_t krpc_UI_Panel_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_AddInputField", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_UI_Panel_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_AddPanel", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

inline krpc_error_t krpc_UI_Panel_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_AddText", 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &content));
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

inline krpc_error_t krpc_UI_Panel_Remove(krpc_connection_t connection, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Panel_set_Visible(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Panel_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_UI_Panel_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Panel_get_RectTransform", 1, _arguments));
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

inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_LocalPosition", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_Rotation(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_Rotation", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_AnchorMax", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_LocalPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_LocalPosition", 1, _arguments));
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

inline krpc_error_t krpc_UI_RectTransform_Position(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_Position", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_UpperRight(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_UpperRight", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_UpperRight(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_UpperRight", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_Scale(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_Scale", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_Pivot(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_Pivot", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_AnchorMin", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_AnchorMax(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_AnchorMax", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_AnchorMin(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_AnchorMin", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_Scale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_Scale", 1, _arguments));
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

inline krpc_error_t krpc_UI_RectTransform_set_Size(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_Size", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_Pivot(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_Pivot", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_LowerLeft", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_LowerLeft(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_LowerLeft", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_set_Position(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_Position", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_Rotation", 1, _arguments));
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

inline krpc_error_t krpc_UI_RectTransform_set_Anchor(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_set_Anchor", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_RectTransform_Size(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "RectTransform_get_Size", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_tuple_double_double(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_Remove(krpc_connection_t connection, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_Remove", 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_set_Font(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_Font", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_Style", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_Size", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_set_Content(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_Content", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_LineSpacing", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_Color(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_Color", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_set_LineSpacing(krpc_connection_t connection, krpc_UI_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_LineSpacing", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_AvailableFonts", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_Content", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_Visible", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_RectTransform", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_set_Size(krpc_connection_t connection, krpc_UI_Text_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_Size", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_set_Color(krpc_connection_t connection, krpc_UI_Text_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_Color", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_Font", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_set_Visible(krpc_connection_t connection, krpc_UI_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_Visible", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_set_Style(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_Style", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_UI_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_get_Alignment", 1, _arguments));
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

inline krpc_error_t krpc_UI_Text_set_Alignment(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, "UI", "Text_set_Alignment", 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

#ifdef __cplusplus
}  // extern "C"
#endif
