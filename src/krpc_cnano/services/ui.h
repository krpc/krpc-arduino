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

#include <krpc_cnano/services/std_lib.h>

#ifdef __cplusplus
extern "C" {
#endif

KRPC_DEPRECATED_USES_BEGIN

/**
 * A button that the user can click.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 */
typedef krpc_object_t krpc_UI_Button_t;
/**
 * A canvas for user interface elements. See krpc_UI_StockCanvas() and krpc_UI_AddCanvas().
 */
typedef krpc_object_t krpc_UI_Canvas_t;
/**
 * A control for choosing one of a list of options, which are shown when it is clicked.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 */
typedef krpc_object_t krpc_UI_Dropdown_t;
/**
 * A picture, or a plain colored rectangle.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 */
typedef krpc_object_t krpc_UI_Image_t;
/**
 * An input field.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 */
typedef krpc_object_t krpc_UI_InputField_t;
/**
 * Arranges the elements of a panel automatically, so that they do not have to be
 * positioned one by one. See krpc_UI_Panel_AddHorizontalLayout(),
 * krpc_UI_Panel_AddVerticalLayout() and krpc_UI_Panel_AddGridLayout().
 */
typedef krpc_object_t krpc_UI_Layout_t;
/**
 * How much space a user interface element asks a krpc_UI_Layout_t for.
 *
 * A layout gives every element its minimum size first. Any space left over is shared
 * out to bring elements up to their preferred size, and anything still left over is
 * shared between the elements with a flexible size, in proportion to it.
 */
typedef krpc_object_t krpc_UI_LayoutElement_t;
/**
 * A container for user interface elements.
 * Added to a krpc_UI_Canvas_t or another panel.
 */
typedef krpc_object_t krpc_UI_Panel_t;
/**
 * A Unity engine Rect Transform for a UI object.
 * See the <a href="https://docs.unity3d.com/Manual/class-RectTransform.html">Unity manual</a> for more details.
 */
typedef krpc_object_t krpc_UI_RectTransform_t;
/**
 * A view onto a panel that is larger than the space available for it, with scroll bars
 * to move around it.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 *
 * Add the elements to krpc_UI_ScrollView_Content(), not to the scroll view itself. Giving
 * the content a layout and setting its size fitter to the preferred size is the
 * simplest way to have it grow to hold what is put in it.
 */
typedef krpc_object_t krpc_UI_ScrollView_t;
/**
 * Sizes a panel to fit what it contains, rather than the other way round.
 * See krpc_UI_Panel_SizeFitter().
 */
typedef krpc_object_t krpc_UI_SizeFitter_t;
/**
 * A control for choosing a number by dragging a handle along a track.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 */
typedef krpc_object_t krpc_UI_Slider_t;
/**
 * A text label.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 */
typedef krpc_object_t krpc_UI_Text_t;
/**
 * A control that is either checked or not.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 *
 * On its own a toggle is a check box. Put several of them in the same
 * krpc_UI_ToggleGroup_t and they become radio buttons, as only one toggle in a
 * group can be checked at a time.
 */
typedef krpc_object_t krpc_UI_Toggle_t;
/**
 * A set of toggles of which only one can be checked at a time, which is what turns
 * a set of krpc_UI_Toggle_t controls into radio buttons.
 * Added to a krpc_UI_Canvas_t or a krpc_UI_Panel_t.
 *
 * A group does not contain its toggles, it only refers to them, so toggles can be
 * grouped independently of how they are laid out. A column of radio buttons in a grid
 * of them is one group, even though each row is laid out separately.
 */
typedef krpc_object_t krpc_UI_ToggleGroup_t;

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

#ifndef KRPC_TYPE_UI_PADDING
#define KRPC_TYPE_UI_PADDING

typedef struct krpc_UI_Padding_s krpc_UI_Padding_t;
struct krpc_UI_Padding_s {
  int32_t left;
  int32_t right;
  int32_t top;
  int32_t bottom;
};

static inline krpc_error_t krpc_encode_UI_Padding(
  pb_ostream_t * stream, const krpc_UI_Padding_t * value);
static inline krpc_error_t krpc_encode_size_UI_Padding(
  size_t * size, const krpc_UI_Padding_t * value);
static inline bool krpc_encode_callback_UI_Padding(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_UI_Padding(
  pb_istream_t * stream, krpc_UI_Padding_t * value);

#endif  // KRPC_TYPE_UI_PADDING

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

#ifndef KRPC_TYPE_TUPLE_DOUBLE_DOUBLE
#define KRPC_TYPE_TUPLE_DOUBLE_DOUBLE

typedef struct krpc_tuple_double_double_s krpc_tuple_double_double_t;
struct krpc_tuple_double_double_s {
  double e0;
  double e1;
};

static inline krpc_error_t krpc_encode_tuple_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_t * value);
static inline krpc_error_t krpc_encode_size_tuple_double_double(
  size_t * size, const krpc_tuple_double_double_t * value);
static inline bool krpc_encode_callback_tuple_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_tuple_double_double(
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

static inline krpc_error_t krpc_encode_tuple_double_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_double_t * value);
static inline krpc_error_t krpc_encode_size_tuple_double_double_double(
  size_t * size, const krpc_tuple_double_double_double_t * value);
static inline bool krpc_encode_callback_tuple_double_double_double(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
static inline krpc_error_t krpc_decode_tuple_double_double_double(
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
 * How a size fitter sizes a panel along one direction.
 */
typedef enum {
  /**
   * Leave the size alone.
   */
  KRPC_UI_CONTENTSIZEFIT_UNCONSTRAINED = 0,
  /**
   * Use the smallest size the contents will fit in.
   */
  KRPC_UI_CONTENTSIZEFIT_MINSIZE = 1,
  /**
   * Use the size the contents ask for.
   */
  KRPC_UI_CONTENTSIZEFIT_PREFERREDSIZE = 2
} krpc_UI_ContentSizeFit_t;

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
 * What fixes the shape of a grid layout.
 */
typedef enum {
  /**
   * Fit as many columns and rows as the size of the panel allows.
   */
  KRPC_UI_GRIDCONSTRAINT_FLEXIBLE = 0,
  /**
   * Use a fixed number of columns, and as many rows as are needed.
   */
  KRPC_UI_GRIDCONSTRAINT_FIXEDCOLUMNCOUNT = 1,
  /**
   * Use a fixed number of rows, and as many columns as are needed.
   */
  KRPC_UI_GRIDCONSTRAINT_FIXEDROWCOUNT = 2
} krpc_UI_GridConstraint_t;

/**
 * What an input field lets the user type into it.
 */
typedef enum {
  /**
   * Any text.
   */
  KRPC_UI_INPUTCONTENTTYPE_STANDARD = 0,
  /**
   * A whole number: digits, with a leading minus sign.
   */
  KRPC_UI_INPUTCONTENTTYPE_INTEGER = 1,
  /**
   * A number: digits, with a decimal separator and a leading minus sign.
   */
  KRPC_UI_INPUTCONTENTTYPE_DECIMAL = 2,
  /**
   * Letters and digits.
   */
  KRPC_UI_INPUTCONTENTTYPE_ALPHANUMERIC = 3,
  /**
   * Any text, drawn as asterisks so that it cannot be read off the screen.
   */
  KRPC_UI_INPUTCONTENTTYPE_PASSWORD = 4
} krpc_UI_InputContentType_t;

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
 * How the background of a panel is drawn.
 */
typedef enum {
  /**
   * As a window, the heavier of the two frames the game uses.
   */
  KRPC_UI_PANELSTYLE_WINDOW = 0,
  /**
   * As a box, the lighter frame the game groups related controls in.
   */
  KRPC_UI_PANELSTYLE_BOX = 1,
  /**
   * Not drawn at all, leaving whatever is behind the panel showing through.
   */
  KRPC_UI_PANELSTYLE_NONE = 2
} krpc_UI_PanelStyle_t;

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

#define KRPC_CLASS_UI_BUTTON 7u, 212565616u
#define KRPC_CLASS_UI_CANVAS 7u, 4104725560u
#define KRPC_CLASS_UI_DROPDOWN 7u, 2380104748u
#define KRPC_CLASS_UI_IMAGE 7u, 197895194u
#define KRPC_CLASS_UI_INPUTFIELD 7u, 3379388771u
#define KRPC_CLASS_UI_LAYOUT 7u, 2442138021u
#define KRPC_CLASS_UI_LAYOUTELEMENT 7u, 2302522774u
#define KRPC_CLASS_UI_PANEL 7u, 1930549712u
#define KRPC_CLASS_UI_RECTTRANSFORM 7u, 3528360479u
#define KRPC_CLASS_UI_SCROLLVIEW 7u, 3374709434u
#define KRPC_CLASS_UI_SIZEFITTER 7u, 4015068595u
#define KRPC_CLASS_UI_SLIDER 7u, 2218980116u
#define KRPC_CLASS_UI_TEXT 7u, 1301059697u
#define KRPC_CLASS_UI_TOGGLE 7u, 3735094077u
#define KRPC_CLASS_UI_TOGGLEGROUP 7u, 3051164679u
#define KRPC_ENUMERATION_UI_CONTENTSIZEFIT 7u, 3977055410u
#define KRPC_ENUMERATION_UI_FONTSTYLE 7u, 3396009759u
#define KRPC_ENUMERATION_UI_GRIDCONSTRAINT 7u, 1649336542u
#define KRPC_ENUMERATION_UI_INPUTCONTENTTYPE 7u, 362303957u
#define KRPC_ENUMERATION_UI_MESSAGEPOSITION 7u, 3710758254u
#define KRPC_ENUMERATION_UI_PANELSTYLE 7u, 774323570u
#define KRPC_ENUMERATION_UI_TEXTALIGNMENT 7u, 1519258954u
#define KRPC_ENUMERATION_UI_TEXTANCHOR 7u, 271379048u
#define KRPC_STRUCT_UI_PADDING 7u, 4034530798u
#define KRPC_FIELD_UI_PADDING_LEFT 0
#define KRPC_FIELD_UI_PADDING_RIGHT 1
#define KRPC_FIELD_UI_PADDING_TOP 2
#define KRPC_FIELD_UI_PADDING_BOTTOM 3

/**
 * Add a new canvas.
 *
 * If you want to add UI elements to KSPs stock UI canvas, use krpc_UI_StockCanvas().
 */
static inline krpc_error_t krpc_UI_AddCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue);

/**
 * Fills in the call krpc_UI_AddCanvas() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_AddCanvas_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_UI_AddCanvas(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_AddCanvas_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove all user interface elements.
 * @param connection A connection object.
 * @param clientOnly If true, only remove objects created by the calling client.
 */
static inline krpc_error_t krpc_UI_Clear(krpc_connection_t connection, bool clientOnly);

/**
 * Fills in the call krpc_UI_Clear() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Clear_call(krpc_schema_ProcedureCall * procedureCall, bool clientOnly);

/**
 * Fills in the call template of krpc_UI_Clear(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Clear_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Display a message on the screen.
 *
 * The message appears just like a stock message, for example quicksave or quickload messages.
 * @param connection A connection object.
 * @param content Message content.
 * @param duration Duration before the message disappears, in seconds.
 * @param position Position to display the message.
 * @param size Size of the message, differs per position.
 * @param color The color of the message.
 */
static inline krpc_error_t krpc_UI_Message(krpc_connection_t connection, const char * content, float duration, krpc_UI_MessagePosition_t position, const krpc_StdLib_ColorRGBA_t * color, float size);

/**
 * Fills in the call krpc_UI_Message() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Message_call(krpc_schema_ProcedureCall * procedureCall, const char * content, float duration, krpc_UI_MessagePosition_t position, const krpc_StdLib_ColorRGBA_t * color, float size);

/**
 * Fills in the call template of krpc_UI_Message(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Message_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The stock UI canvas.
 */
static inline krpc_error_t krpc_UI_StockCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue);

/**
 * Fills in the call krpc_UI_StockCanvas() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_StockCanvas_call(krpc_schema_ProcedureCall * procedureCall);

/**
 * Fills in the call template of krpc_UI_StockCanvas(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_StockCanvas_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Button_Remove(krpc_connection_t connection, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the button has been clicked.
 *
 * This property is set to true when the user clicks the button.
 * A client script should reset the property to false in order to detect subsequent button presses.
 */
static inline krpc_error_t krpc_UI_Button_Clicked(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Clicked() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Clicked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Clicked(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Clicked_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the button has been clicked.
 *
 * This property is set to true when the user clicks the button.
 * A client script should reset the property to false in order to detect subsequent button presses.
 */
static inline krpc_error_t krpc_UI_Button_set_Clicked(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

/**
 * Fills in the call krpc_UI_Button_set_Clicked() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Clicked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Button_set_Clicked(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Clicked_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Button_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Button_set_Color(krpc_connection_t connection, krpc_UI_Button_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_Button_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_Button_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Button_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Button_set_Interactable(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

/**
 * Fills in the call krpc_UI_Button_set_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Button_set_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Button_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the user is holding the button down right now.
 *
 * True from the button being pressed until the pointer is released, however far
 * it has moved by then. Polling this repeats an action for as long as the
 * button is held, for nudging a value; krpc_UI_Button_Clicked() reports each
 * completed click instead.
 */
static inline krpc_error_t krpc_UI_Button_Pressed(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Pressed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Pressed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Pressed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Pressed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Button_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text for the button.
 */
static inline krpc_error_t krpc_UI_Button_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Text() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Text(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Text_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Button_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Button_set_Tooltip(krpc_connection_t connection, krpc_UI_Button_t instance, const char * value);

/**
 * Fills in the call krpc_UI_Button_set_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_Button_set_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Button_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * Fills in the call krpc_UI_Button_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance);

/**
 * Fills in the call template of krpc_UI_Button_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Button_set_Visible(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

/**
 * Fills in the call krpc_UI_Button_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Button_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Button_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a button to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param content The label for the button.
 * @param visible Whether the button is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddButton() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddButton(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddButton_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a dropdown to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the dropdown is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddDropdown() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddDropdown_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddDropdown(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddDropdown_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add an image to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the image is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddImage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddImage_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddImage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddImage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add an input field to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the input field is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddInputField() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddInputField_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddInputField(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddInputField_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Create a panel within this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the new panel is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddPanel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddPanel_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddPanel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddPanel_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a scroll view to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the scroll view is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddScrollView() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddScrollView_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddScrollView(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddScrollView_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a slider to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param vertical Whether the slider runs from bottom to top, rather than from left to right.
 * @param visible Whether the slider is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Canvas_t instance, bool vertical, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddSlider() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddSlider_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool vertical, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddSlider(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddSlider_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add text to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param content The text.
 * @param visible Whether the text is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddText() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddText_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddText(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddText_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a toggle to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param content The label for the toggle.
 * @param visible Whether the toggle is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Fills in the call krpc_UI_Canvas_AddToggle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggle_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Fills in the call template of krpc_UI_Canvas_AddToggle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a toggle group to this object, to make a set of toggles into radio buttons.
 *
 * The group is not drawn and does not take up any space. The toggles that belong
 * to it can be added anywhere.
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Canvas_t instance);

/**
 * Fills in the call krpc_UI_Canvas_AddToggleGroup() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance);

/**
 * Fills in the call template of krpc_UI_Canvas_AddToggleGroup(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Canvas_Remove(krpc_connection_t connection, krpc_UI_Canvas_t instance);

/**
 * Fills in the call krpc_UI_Canvas_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance);

/**
 * Fills in the call template of krpc_UI_Canvas_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Canvas_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Canvas_t instance);

/**
 * Fills in the call krpc_UI_Canvas_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance);

/**
 * Fills in the call template of krpc_UI_Canvas_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Canvas_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Canvas_t instance);

/**
 * Fills in the call krpc_UI_Canvas_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance);

/**
 * Fills in the call template of krpc_UI_Canvas_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Canvas_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Canvas_t instance);

/**
 * Fills in the call krpc_UI_Canvas_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance);

/**
 * Fills in the call template of krpc_UI_Canvas_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Canvas_set_Visible(krpc_connection_t connection, krpc_UI_Canvas_t instance, bool value);

/**
 * Fills in the call krpc_UI_Canvas_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Canvas_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Canvas_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Dropdown_Remove(krpc_connection_t connection, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the chosen option has been changed.
 *
 * This property is set to true when the user chooses an option, and not when a
 * client chooses one.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Dropdown_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the chosen option has been changed.
 *
 * This property is set to true when the user chooses an option, and not when a
 * client chooses one.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Changed(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value);

/**
 * Fills in the call krpc_UI_Dropdown_set_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Dropdown_set_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Dropdown_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Color(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_Dropdown_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_Dropdown_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Dropdown_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Interactable(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value);

/**
 * Fills in the call krpc_UI_Dropdown_set_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Dropdown_set_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Dropdown_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The options that the dropdown offers.
 *
 * Setting the options resets the selection to the first of them, or to nothing
 * when the list is empty.
 */
static inline krpc_error_t krpc_UI_Dropdown_Options(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_Options() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Options_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_Options(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Options_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The options that the dropdown offers.
 *
 * Setting the options resets the selection to the first of them, or to nothing
 * when the list is empty.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Options(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const krpc_list_string_t * value);

/**
 * Fills in the call krpc_UI_Dropdown_set_Options() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Options_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, const krpc_list_string_t * value);

/**
 * Fills in the call template of krpc_UI_Dropdown_set_Options(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Options_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Dropdown_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The position in krpc_UI_Dropdown_Options() of the option that is chosen.
 *
 * Zero while the dropdown has no options, as there is nothing to choose.
 */
static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_SelectedIndex() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_SelectedIndex(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The position in krpc_UI_Dropdown_Options() of the option that is chosen.
 *
 * Zero while the dropdown has no options, as there is nothing to choose.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex(krpc_connection_t connection, krpc_UI_Dropdown_t instance, int32_t value);

/**
 * Fills in the call krpc_UI_Dropdown_set_SelectedIndex() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, int32_t value);

/**
 * Fills in the call template of krpc_UI_Dropdown_set_SelectedIndex(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Dropdown_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const char * value);

/**
 * Fills in the call krpc_UI_Dropdown_set_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_Dropdown_set_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Dropdown_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call krpc_UI_Dropdown_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance);

/**
 * Fills in the call template of krpc_UI_Dropdown_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Visible(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value);

/**
 * Fills in the call krpc_UI_Dropdown_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Dropdown_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Image_Remove(krpc_connection_t connection, krpc_UI_Image_t instance);

/**
 * Fills in the call krpc_UI_Image_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance);

/**
 * Fills in the call template of krpc_UI_Image_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw the picture from raw pixels rather than a file, so that a client can
 * draw whatever it likes, a graph for instance, and redraw it as often as it
 * likes.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param data The pixels, 4 bytes per pixel: red, green, blue and alpha, each 0 to 255.
 * Pixels run left to right and rows run top to bottom, the way image files
 * store them, so the array must hold width times height times 4 bytes.
 * @param width How many pixels wide the picture is.
 * @param height How many pixels tall the picture is.
 *
 * Redrawing at an unchanged size draws into the picture already there, so a
 * picture redrawn every update does not build a new one each time.
 */
static inline krpc_error_t krpc_UI_Image_SetPixels(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t width, int32_t height);

/**
 * Fills in the call krpc_UI_Image_SetPixels() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_SetPixels_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t width, int32_t height);

/**
 * Fills in the call template of krpc_UI_Image_SetPixels(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_SetPixels_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Redraw part of a picture drawn with krpc_UI_Image_SetPixels(): a block of the
 * given size, with its top left corner x pixels in from the left edge and y
 * pixels down from the top. The rest of the picture is left as it is, so a
 * change to a small part of a large picture, one new column of a scrolling
 * graph for instance, only sends the part that changed.
 * @param connection A connection object.
 * @param instance The object to call the method on.
 * @param data The pixels of the block, laid out as for krpc_UI_Image_SetPixels(): 4 bytes
 * per pixel, rows top to bottom, width times height times 4 bytes in all.
 * @param x How many pixels the block sits in from the left edge.
 * @param y How many pixels the block sits down from the top.
 * @param width How many pixels wide the block is.
 * @param height How many pixels tall the block is.
 *
 * The image must already be showing a picture drawn from raw pixels, which is
 * what sets the size, and the block must fit inside it. A picture loaded from
 * a file cannot be redrawn this way: the file contents a client reads back
 * would no longer be what is on the screen.
 */
static inline krpc_error_t krpc_UI_Image_UpdatePixels(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t x, int32_t y, int32_t width, int32_t height);

/**
 * Fills in the call krpc_UI_Image_UpdatePixels() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_UpdatePixels_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t x, int32_t y, int32_t width, int32_t height);

/**
 * Fills in the call template of krpc_UI_Image_UpdatePixels(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_UpdatePixels_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the image is tinted with, or the color of the rectangle when no
 * picture is set.
 */
static inline krpc_error_t krpc_UI_Image_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Image_t instance);

/**
 * Fills in the call krpc_UI_Image_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance);

/**
 * Fills in the call template of krpc_UI_Image_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the image is tinted with, or the color of the rectangle when no
 * picture is set.
 */
static inline krpc_error_t krpc_UI_Image_set_Color(krpc_connection_t connection, krpc_UI_Image_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_Image_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_Image_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The picture to show, as the contents of a PNG or JPEG file. Set it to an empty
 * array to show a plain rectangle instead.
 *
 * Reading this returns what was last set, not what is on the screen, and returns
 * an empty array if no picture has been set. A picture drawn with
 * krpc_UI_Image_SetPixels() is not returned here either.
 */
static inline krpc_error_t krpc_UI_Image_Content(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_UI_Image_t instance);

/**
 * Fills in the call krpc_UI_Image_Content() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance);

/**
 * Fills in the call template of krpc_UI_Image_Content(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Content_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The picture to show, as the contents of a PNG or JPEG file. Set it to an empty
 * array to show a plain rectangle instead.
 *
 * Reading this returns what was last set, not what is on the screen, and returns
 * an empty array if no picture has been set. A picture drawn with
 * krpc_UI_Image_SetPixels() is not returned here either.
 */
static inline krpc_error_t krpc_UI_Image_set_Content(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t value);

/**
 * Fills in the call krpc_UI_Image_set_Content() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_set_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, krpc_bytes_t value);

/**
 * Fills in the call template of krpc_UI_Image_set_Content(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_set_Content_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Image_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Image_t instance);

/**
 * Fills in the call krpc_UI_Image_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance);

/**
 * Fills in the call template of krpc_UI_Image_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Image_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Image_t instance);

/**
 * Fills in the call krpc_UI_Image_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance);

/**
 * Fills in the call template of krpc_UI_Image_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Image_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Image_t instance);

/**
 * Fills in the call krpc_UI_Image_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance);

/**
 * Fills in the call template of krpc_UI_Image_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Image_set_Visible(krpc_connection_t connection, krpc_UI_Image_t instance, bool value);

/**
 * Fills in the call krpc_UI_Image_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Image_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Image_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_InputField_Remove(krpc_connection_t connection, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the input field has been changed.
 *
 * This property is set to true when the user modifies the value of the input field,
 * and not when a client sets it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_InputField_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the input field has been changed.
 *
 * This property is set to true when the user modifies the value of the input field,
 * and not when a client sets it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_InputField_set_Changed(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call krpc_UI_InputField_set_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_InputField_set_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The most characters the user can type into the field, or 0 for no limit.
 */
static inline krpc_error_t krpc_UI_InputField_CharacterLimit(krpc_connection_t connection, int32_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_CharacterLimit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_CharacterLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_CharacterLimit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_CharacterLimit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The most characters the user can type into the field, or 0 for no limit.
 */
static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit(krpc_connection_t connection, krpc_UI_InputField_t instance, int32_t value);

/**
 * Fills in the call krpc_UI_InputField_set_CharacterLimit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, int32_t value);

/**
 * Fills in the call template of krpc_UI_InputField_set_CharacterLimit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_InputField_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_InputField_set_Color(krpc_connection_t connection, krpc_UI_InputField_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_InputField_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_InputField_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The content the field accepts from the user. Keystrokes that do not fit are
 * ignored as they are typed, so a numeric field only ever shows a number.
 *
 * The filter applies to typing alone. A value set by a client is shown as it is
 * given.
 */
static inline krpc_error_t krpc_UI_InputField_ContentType(krpc_connection_t connection, krpc_UI_InputContentType_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_ContentType() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_ContentType_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_ContentType(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_ContentType_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The content the field accepts from the user. Keystrokes that do not fit are
 * ignored as they are typed, so a numeric field only ever shows a number.
 *
 * The filter applies to typing alone. A value set by a client is shown as it is
 * given.
 */
static inline krpc_error_t krpc_UI_InputField_set_ContentType(krpc_connection_t connection, krpc_UI_InputField_t instance, krpc_UI_InputContentType_t value);

/**
 * Fills in the call krpc_UI_InputField_set_ContentType() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_ContentType_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, krpc_UI_InputContentType_t value);

/**
 * Fills in the call template of krpc_UI_InputField_set_ContentType(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_ContentType_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_InputField_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_InputField_set_Interactable(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call krpc_UI_InputField_set_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_InputField_set_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_InputField_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The placeholder text component of the input field.
 *
 * Set its krpc_UI_Text_Content() to the hint to show while the field is empty.
 * The hint is hidden as soon as the field has a value.
 */
static inline krpc_error_t krpc_UI_InputField_Placeholder(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Placeholder() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Placeholder_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Placeholder(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Placeholder_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the user is stopped from editing the field. The value can still be
 * selected and copied, and a client can still set it.
 *
 * A read-only field is drawn as normal. Make the field not interactable instead
 * to gray it out and stop the user selecting it.
 */
static inline krpc_error_t krpc_UI_InputField_ReadOnly(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_ReadOnly() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_ReadOnly_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_ReadOnly(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_ReadOnly_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the user is stopped from editing the field. The value can still be
 * selected and copied, and a client can still set it.
 *
 * A read-only field is drawn as normal. Make the field not interactable instead
 * to gray it out and stop the user selecting it.
 */
static inline krpc_error_t krpc_UI_InputField_set_ReadOnly(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call krpc_UI_InputField_set_ReadOnly() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_ReadOnly_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_InputField_set_ReadOnly(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_ReadOnly_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_InputField_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text component of the input field.
 *
 * Use krpc_UI_InputField_Value() to get and set the value in the field.
 * This object can be used to alter the style of the input field's text.
 */
static inline krpc_error_t krpc_UI_InputField_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Text() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Text(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Text_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_InputField_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_InputField_set_Tooltip(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value);

/**
 * Fills in the call krpc_UI_InputField_set_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_InputField_set_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of the input field.
 */
static inline krpc_error_t krpc_UI_InputField_Value(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Value() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Value(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Value_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of the input field.
 */
static inline krpc_error_t krpc_UI_InputField_set_Value(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value);

/**
 * Fills in the call krpc_UI_InputField_set_Value() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_InputField_set_Value(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Value_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_InputField_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * Fills in the call krpc_UI_InputField_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance);

/**
 * Fills in the call template of krpc_UI_InputField_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_InputField_set_Visible(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call krpc_UI_InputField_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_InputField_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_InputField_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of each cell of a grid layout, in pixels.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts, whose
 * elements are sized individually using their layout elements.
 */
static inline krpc_error_t krpc_UI_Layout_CellSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_Layout_t instance);

/**
 * Fills in the call krpc_UI_Layout_CellSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_CellSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance);

/**
 * Fills in the call template of krpc_UI_Layout_CellSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_CellSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size of each cell of a grid layout, in pixels.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts, whose
 * elements are sized individually using their layout elements.
 */
static inline krpc_error_t krpc_UI_Layout_set_CellSize(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_Layout_set_CellSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_CellSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_Layout_set_CellSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_CellSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Where the elements are placed within the space the layout has to fill.
 */
static inline krpc_error_t krpc_UI_Layout_ChildAlignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Layout_t instance);

/**
 * Fills in the call krpc_UI_Layout_ChildAlignment() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_ChildAlignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance);

/**
 * Fills in the call template of krpc_UI_Layout_ChildAlignment(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_ChildAlignment_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Where the elements are placed within the space the layout has to fill.
 */
static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_TextAnchor_t value);

/**
 * Fills in the call krpc_UI_Layout_set_ChildAlignment() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, krpc_UI_TextAnchor_t value);

/**
 * Fills in the call template of krpc_UI_Layout_set_ChildAlignment(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * What fixes the shape of a grid layout.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_Constraint(krpc_connection_t connection, krpc_UI_GridConstraint_t * returnValue, krpc_UI_Layout_t instance);

/**
 * Fills in the call krpc_UI_Layout_Constraint() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_Constraint_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance);

/**
 * Fills in the call template of krpc_UI_Layout_Constraint(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_Constraint_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * What fixes the shape of a grid layout.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_set_Constraint(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_GridConstraint_t value);

/**
 * Fills in the call krpc_UI_Layout_set_Constraint() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_Constraint_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, krpc_UI_GridConstraint_t value);

/**
 * Fills in the call template of krpc_UI_Layout_set_Constraint(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_Constraint_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number of columns or rows that krpc_UI_Layout_Constraint() fixes, ignored when
 * the constraint is #KRPC_UI_GRIDCONSTRAINT_FLEXIBLE.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_ConstraintCount(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Layout_t instance);

/**
 * Fills in the call krpc_UI_Layout_ConstraintCount() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_ConstraintCount_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance);

/**
 * Fills in the call template of krpc_UI_Layout_ConstraintCount(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_ConstraintCount_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The number of columns or rows that krpc_UI_Layout_Constraint() fixes, ignored when
 * the constraint is #KRPC_UI_GRIDCONSTRAINT_FLEXIBLE.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount(krpc_connection_t connection, krpc_UI_Layout_t instance, int32_t value);

/**
 * Fills in the call krpc_UI_Layout_set_ConstraintCount() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, int32_t value);

/**
 * Fills in the call template of krpc_UI_Layout_set_ConstraintCount(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The gap left inside the edges of the panel.
 */
static inline krpc_error_t krpc_UI_Layout_Padding(krpc_connection_t connection, krpc_UI_Padding_t * returnValue, krpc_UI_Layout_t instance);

/**
 * Fills in the call krpc_UI_Layout_Padding() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_Padding_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance);

/**
 * Fills in the call template of krpc_UI_Layout_Padding(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_Padding_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The gap left inside the edges of the panel.
 */
static inline krpc_error_t krpc_UI_Layout_set_Padding(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_UI_Padding_t * value);

/**
 * Fills in the call krpc_UI_Layout_set_Padding() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_Padding_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, const krpc_UI_Padding_t * value);

/**
 * Fills in the call template of krpc_UI_Layout_set_Padding(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_Padding_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The gap left between the elements, in pixels. A grid layout uses it in both
 * directions.
 */
static inline krpc_error_t krpc_UI_Layout_Spacing(krpc_connection_t connection, float * returnValue, krpc_UI_Layout_t instance);

/**
 * Fills in the call krpc_UI_Layout_Spacing() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_Spacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance);

/**
 * Fills in the call template of krpc_UI_Layout_Spacing(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_Spacing_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The gap left between the elements, in pixels. A grid layout uses it in both
 * directions.
 */
static inline krpc_error_t krpc_UI_Layout_set_Spacing(krpc_connection_t connection, krpc_UI_Layout_t instance, float value);

/**
 * Fills in the call krpc_UI_Layout_set_Spacing() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_Spacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, float value);

/**
 * Fills in the call template of krpc_UI_Layout_set_Spacing(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Layout_set_Spacing_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The share the element takes of the space left over once every element has its
 * preferred size. A negative value in either direction takes no share.
 */
static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call krpc_UI_LayoutElement_FlexibleSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call template of krpc_UI_LayoutElement_FlexibleSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The share the element takes of the space left over once every element has its
 * preferred size. A negative value in either direction takes no share.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_LayoutElement_set_FlexibleSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_LayoutElement_set_FlexibleSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the layout leaves the element out and lets it be positioned by hand.
 */
static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout(krpc_connection_t connection, bool * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call krpc_UI_LayoutElement_IgnoreLayout() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call template of krpc_UI_LayoutElement_IgnoreLayout(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the layout leaves the element out and lets it be positioned by hand.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, bool value);

/**
 * Fills in the call krpc_UI_LayoutElement_set_IgnoreLayout() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_LayoutElement_set_IgnoreLayout(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The smallest size the element can be given, in pixels. A negative value in either
 * direction leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_MinSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call krpc_UI_LayoutElement_MinSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_MinSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call template of krpc_UI_LayoutElement_MinSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_MinSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The smallest size the element can be given, in pixels. A negative value in either
 * direction leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_LayoutElement_set_MinSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_LayoutElement_set_MinSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size the element asks for, in pixels. A negative value in either direction
 * leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call krpc_UI_LayoutElement_PreferredSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance);

/**
 * Fills in the call template of krpc_UI_LayoutElement_PreferredSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The size the element asks for, in pixels. A negative value in either direction
 * leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_LayoutElement_set_PreferredSize() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_LayoutElement_set_PreferredSize(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a button to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param content The label for the button.
 * @param visible Whether the button is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddButton() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddButton(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddButton_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a dropdown to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the dropdown is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddDropdown() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddDropdown_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddDropdown(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddDropdown_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Arrange the elements of the panel in a grid of equally sized cells.
 *
 * The number of columns follows from the size of the panel and the size of a cell.
 * Use krpc_UI_Layout_Constraint() to fix it instead.
 */
static inline krpc_error_t krpc_UI_Panel_AddGridLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_AddGridLayout() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddGridLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_AddGridLayout(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddGridLayout_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Arrange the elements of the panel in a row.
 */
static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_AddHorizontalLayout() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_AddHorizontalLayout(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add an image to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the image is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddImage() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddImage_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddImage(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddImage_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add an input field to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the input field is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddInputField() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddInputField_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddInputField(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddInputField_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Create a panel within this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the new panel is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddPanel() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddPanel_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddPanel(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddPanel_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a scroll view to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param visible Whether the scroll view is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddScrollView() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddScrollView_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddScrollView(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddScrollView_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a slider to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param vertical Whether the slider runs from bottom to top, rather than from left to right.
 * @param visible Whether the slider is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Panel_t instance, bool vertical, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddSlider() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddSlider_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool vertical, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddSlider(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddSlider_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add text to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param content The text.
 * @param visible Whether the text is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddText() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddText_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddText(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddText_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a toggle to this object.
 * @param connection A connection object.
 * @param returnValue The value returned.
 * @param instance The object to call the method on.
 * @param content The label for the toggle.
 * @param visible Whether the toggle is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Fills in the call krpc_UI_Panel_AddToggle() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddToggle_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Fills in the call template of krpc_UI_Panel_AddToggle(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddToggle_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Add a toggle group to this object, to make a set of toggles into radio buttons.
 *
 * The group is not drawn and does not take up any space. The toggles that belong
 * to it can be added anywhere.
 */
static inline krpc_error_t krpc_UI_Panel_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_AddToggleGroup() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddToggleGroup_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_AddToggleGroup(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddToggleGroup_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Arrange the elements of the panel in a column.
 */
static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_AddVerticalLayout() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_AddVerticalLayout(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Draw the panel in front of the other elements beside it. Elements are drawn
 * in the order they were added, so of two overlapping panels the newer hides
 * part of the older until the older is brought to the front.
 *
 * A draggable panel also brings itself to the front when the user starts
 * dragging it, the way a window comes to the front when it is clicked.
 */
static inline krpc_error_t krpc_UI_Panel_BringToFront(krpc_connection_t connection, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_BringToFront() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_BringToFront_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_BringToFront(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_BringToFront_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Panel_Remove(krpc_connection_t connection, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the background of the panel is tinted with.
 *
 * Has no effect while the style of the panel is #KRPC_UI_PANELSTYLE_NONE,
 * as the panel is then not drawn at all.
 */
static inline krpc_error_t krpc_UI_Panel_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the background of the panel is tinted with.
 *
 * Has no effect while the style of the panel is #KRPC_UI_PANELSTYLE_NONE,
 * as the panel is then not drawn at all.
 */
static inline krpc_error_t krpc_UI_Panel_set_Color(krpc_connection_t connection, krpc_UI_Panel_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_Panel_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_Panel_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the user can move the panel by dragging it.
 *
 * Dragging anywhere on the panel moves it, including over the elements it
 * contains, unless one of them takes the pointer for itself. Give a panel a title
 * bar of its own if only part of it should move it.
 * A panel whose style is #KRPC_UI_PANELSTYLE_NONE is not drawn, so it takes
 * no pointer events of its own and can only be dragged by the elements it
 * contains.
 */
static inline krpc_error_t krpc_UI_Panel_Draggable(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_Draggable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Draggable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_Draggable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Draggable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the user can move the panel by dragging it.
 *
 * Dragging anywhere on the panel moves it, including over the elements it
 * contains, unless one of them takes the pointer for itself. Give a panel a title
 * bar of its own if only part of it should move it.
 * A panel whose style is #KRPC_UI_PANELSTYLE_NONE is not drawn, so it takes
 * no pointer events of its own and can only be dragged by the elements it
 * contains.
 */
static inline krpc_error_t krpc_UI_Panel_set_Draggable(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value);

/**
 * Fills in the call krpc_UI_Panel_set_Draggable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Draggable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Panel_set_Draggable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Draggable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The layout that arranges the elements of the panel, or `null` if they are
 * positioned by hand.
 */
static inline krpc_error_t krpc_UI_Panel_Layout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_Layout() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Layout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_Layout(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Layout_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Panel_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Panel_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Sizes the panel to fit what it contains.
 *
 * Both directions start out unconstrained, which leaves the size of the panel
 * alone.
 */
static inline krpc_error_t krpc_UI_Panel_SizeFitter(krpc_connection_t connection, krpc_UI_SizeFitter_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_SizeFitter() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_SizeFitter_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_SizeFitter(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_SizeFitter_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How the background of the panel is drawn. A box is the frame to group related
 * controls in, and is how a group box is made.
 */
static inline krpc_error_t krpc_UI_Panel_Style(krpc_connection_t connection, krpc_UI_PanelStyle_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_Style() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_Style(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Style_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How the background of the panel is drawn. A box is the frame to group related
 * controls in, and is how a group box is made.
 */
static inline krpc_error_t krpc_UI_Panel_set_Style(krpc_connection_t connection, krpc_UI_Panel_t instance, krpc_UI_PanelStyle_t value);

/**
 * Fills in the call krpc_UI_Panel_set_Style() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, krpc_UI_PanelStyle_t value);

/**
 * Fills in the call template of krpc_UI_Panel_set_Style(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Style_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Panel_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance);

/**
 * Fills in the call krpc_UI_Panel_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance);

/**
 * Fills in the call template of krpc_UI_Panel_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Panel_set_Visible(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value);

/**
 * Fills in the call krpc_UI_Panel_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Panel_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Panel_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Set the minimum and maximum anchor points as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Anchor(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_Anchor() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Anchor_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_Anchor(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Anchor_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The anchor point for the lower left corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMax(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_AnchorMax() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMax_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_AnchorMax(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMax_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The anchor point for the lower left corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_AnchorMax() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_AnchorMax(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The anchor point for the upper right corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMin(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_AnchorMin() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMin_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_AnchorMin(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMin_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The anchor point for the upper right corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_AnchorMin() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_AnchorMin(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_LocalPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_LocalPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_LocalPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_LocalPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_LocalPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_LocalPosition() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_LocalPosition(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles lower left corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_LowerLeft(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_LowerLeft() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_LowerLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_LowerLeft(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_LowerLeft_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles lower left corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_LowerLeft() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_LowerLeft(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Location of the pivot point around which the rectangle rotates, defined as a fraction of the size of the rectangle itself.
 */
static inline krpc_error_t krpc_UI_RectTransform_Pivot(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_Pivot() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Pivot_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_Pivot(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Pivot_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Location of the pivot point around which the rectangle rotates, defined as a fraction of the size of the rectangle itself.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Pivot(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_Pivot() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Pivot_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_Pivot(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Pivot_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_Position(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Position(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_Position() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_Position(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Rotation, as a quaternion, of the object around its pivot point.
 */
static inline krpc_error_t krpc_UI_RectTransform_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_Rotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_Rotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Rotation, as a quaternion, of the object around its pivot point.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Rotation(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_Rotation() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_Rotation(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Scale factor applied to the object in the x, y and z dimensions.
 */
static inline krpc_error_t krpc_UI_RectTransform_Scale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_Scale() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Scale_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_Scale(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Scale_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Scale factor applied to the object in the x, y and z dimensions.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Scale(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_Scale() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Scale_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_Scale(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Scale_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Width and height of the rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_Size(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Width and height of the rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Size(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles upper right corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_UpperRight(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call krpc_UI_RectTransform_UpperRight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_UpperRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance);

/**
 * Fills in the call template of krpc_UI_RectTransform_UpperRight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_UpperRight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Position of the rectangles upper right corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call krpc_UI_RectTransform_set_UpperRight() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Fills in the call template of krpc_UI_RectTransform_set_UpperRight(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_ScrollView_Remove(krpc_connection_t connection, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call krpc_UI_ScrollView_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call template of krpc_UI_ScrollView_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The panel that is scrolled, which the elements to show are added to.
 */
static inline krpc_error_t krpc_UI_ScrollView_Content(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call krpc_UI_ScrollView_Content() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call template of krpc_UI_ScrollView_Content(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Content_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the view can be scrolled from side to side.
 */
static inline krpc_error_t krpc_UI_ScrollView_Horizontal(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call krpc_UI_ScrollView_Horizontal() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Horizontal_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call template of krpc_UI_ScrollView_Horizontal(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Horizontal_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the view can be scrolled from side to side.
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value);

/**
 * Fills in the call krpc_UI_ScrollView_set_Horizontal() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_ScrollView_set_Horizontal(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_ScrollView_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call krpc_UI_ScrollView_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call template of krpc_UI_ScrollView_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_ScrollView_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call krpc_UI_ScrollView_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call template of krpc_UI_ScrollView_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the view can be scrolled up and down.
 */
static inline krpc_error_t krpc_UI_ScrollView_Vertical(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call krpc_UI_ScrollView_Vertical() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Vertical_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call template of krpc_UI_ScrollView_Vertical(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Vertical_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the view can be scrolled up and down.
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Vertical(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value);

/**
 * Fills in the call krpc_UI_ScrollView_set_Vertical() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Vertical_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_ScrollView_set_Vertical(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Vertical_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_ScrollView_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call krpc_UI_ScrollView_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance);

/**
 * Fills in the call template of krpc_UI_ScrollView_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Visible(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value);

/**
 * Fills in the call krpc_UI_ScrollView_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_ScrollView_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How the width of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance);

/**
 * Fills in the call krpc_UI_SizeFitter_HorizontalFit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance);

/**
 * Fills in the call template of krpc_UI_SizeFitter_HorizontalFit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How the width of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value);

/**
 * Fills in the call krpc_UI_SizeFitter_set_HorizontalFit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value);

/**
 * Fills in the call template of krpc_UI_SizeFitter_set_HorizontalFit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How the height of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance);

/**
 * Fills in the call krpc_UI_SizeFitter_VerticalFit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance);

/**
 * Fills in the call template of krpc_UI_SizeFitter_VerticalFit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How the height of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value);

/**
 * Fills in the call krpc_UI_SizeFitter_set_VerticalFit() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value);

/**
 * Fills in the call template of krpc_UI_SizeFitter_set_VerticalFit(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Slider_Remove(krpc_connection_t connection, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the slider has been changed.
 *
 * This property is set to true when the user moves the slider, and not when a
 * client sets its value.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Slider_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the slider has been changed.
 *
 * This property is set to true when the user moves the slider, and not when a
 * client sets its value.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Slider_set_Changed(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value);

/**
 * Fills in the call krpc_UI_Slider_set_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Slider_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Slider_set_Color(krpc_connection_t connection, krpc_UI_Slider_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_Slider_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Slider_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Slider_set_Interactable(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value);

/**
 * Fills in the call krpc_UI_Slider_set_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Slider_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value at the high end of the slider, which is its right hand end, or the
 * top of a vertical slider. Must not be less than krpc_UI_Slider_Min().
 */
static inline krpc_error_t krpc_UI_Slider_Max(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Max() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Max_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Max(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Max_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value at the high end of the slider, which is its right hand end, or the
 * top of a vertical slider. Must not be less than krpc_UI_Slider_Min().
 */
static inline krpc_error_t krpc_UI_Slider_set_Max(krpc_connection_t connection, krpc_UI_Slider_t instance, float value);

/**
 * Fills in the call krpc_UI_Slider_set_Max() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Max_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, float value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Max(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Max_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value at the low end of the slider, which is its left hand end, or the
 * bottom of a vertical slider. Must not be greater than krpc_UI_Slider_Max().
 */
static inline krpc_error_t krpc_UI_Slider_Min(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Min() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Min_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Min(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Min_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value at the low end of the slider, which is its left hand end, or the
 * bottom of a vertical slider. Must not be greater than krpc_UI_Slider_Max().
 */
static inline krpc_error_t krpc_UI_Slider_set_Min(krpc_connection_t connection, krpc_UI_Slider_t instance, float value);

/**
 * Fills in the call krpc_UI_Slider_set_Min() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Min_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, float value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Min(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Min_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Slider_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Slider_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Slider_set_Tooltip(krpc_connection_t connection, krpc_UI_Slider_t instance, const char * value);

/**
 * Fills in the call krpc_UI_Slider_set_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of the slider, between krpc_UI_Slider_Min() and krpc_UI_Slider_Max().
 * Setting a value outside the range is refused.
 */
static inline krpc_error_t krpc_UI_Slider_Value(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Value() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Value(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Value_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The value of the slider, between krpc_UI_Slider_Min() and krpc_UI_Slider_Max().
 * Setting a value outside the range is refused.
 */
static inline krpc_error_t krpc_UI_Slider_set_Value(krpc_connection_t connection, krpc_UI_Slider_t instance, float value);

/**
 * Fills in the call krpc_UI_Slider_set_Value() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, float value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Value(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Value_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Slider_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance);

/**
 * Fills in the call krpc_UI_Slider_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance);

/**
 * Fills in the call template of krpc_UI_Slider_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Slider_set_Visible(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value);

/**
 * Fills in the call krpc_UI_Slider_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Slider_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Slider_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Text_Remove(krpc_connection_t connection, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_UI_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Alignment() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Alignment(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_UI_Text_set_Alignment(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value);

/**
 * Fills in the call krpc_UI_Text_set_Alignment() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value);

/**
 * Fills in the call template of krpc_UI_Text_set_Alignment(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A list of all available fonts.
 */
static inline krpc_error_t krpc_UI_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_AvailableFonts() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_AvailableFonts_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_AvailableFonts(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_AvailableFonts_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the text is drawn in.
 */
static inline krpc_error_t krpc_UI_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the text is drawn in.
 */
static inline krpc_error_t krpc_UI_Text_set_Color(krpc_connection_t connection, krpc_UI_Text_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_Text_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_Text_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text string
 */
static inline krpc_error_t krpc_UI_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Content() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Content(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Content_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text string
 */
static inline krpc_error_t krpc_UI_Text_set_Content(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value);

/**
 * Fills in the call krpc_UI_Text_set_Content() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_Text_set_Content(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Content_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Name of the font
 *
 * Empty if the game provided no font to draw the text with, in which case it is
 * not drawn. See krpc_UI_Text_AvailableFonts() for the names that can be set.
 */
static inline krpc_error_t krpc_UI_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Font() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Font(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Font_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Name of the font
 *
 * Empty if the game provided no font to draw the text with, in which case it is
 * not drawn. See krpc_UI_Text_AvailableFonts() for the names that can be set.
 */
static inline krpc_error_t krpc_UI_Text_set_Font(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value);

/**
 * Fills in the call krpc_UI_Text_set_Font() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_Text_set_Font(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Font_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Text_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_UI_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_LineSpacing() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_LineSpacing(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_UI_Text_set_LineSpacing(krpc_connection_t connection, krpc_UI_Text_t instance, float value);

/**
 * Fills in the call krpc_UI_Text_set_LineSpacing() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, float value);

/**
 * Fills in the call template of krpc_UI_Text_set_LineSpacing(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Text_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font size.
 */
static inline krpc_error_t krpc_UI_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font size.
 */
static inline krpc_error_t krpc_UI_Text_set_Size(krpc_connection_t connection, krpc_UI_Text_t instance, int32_t value);

/**
 * Fills in the call krpc_UI_Text_set_Size() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, int32_t value);

/**
 * Fills in the call template of krpc_UI_Text_set_Size(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font style.
 */
static inline krpc_error_t krpc_UI_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Style() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Style(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Style_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Font style.
 */
static inline krpc_error_t krpc_UI_Text_set_Style(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value);

/**
 * Fills in the call krpc_UI_Text_set_Style() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value);

/**
 * Fills in the call template of krpc_UI_Text_set_Style(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Style_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Text_set_Visible(krpc_connection_t connection, krpc_UI_Text_t instance, bool value);

/**
 * Fills in the call krpc_UI_Text_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Text_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the text wraps onto further lines when it is wider than the space it
 * has. Text that does not wrap carries on past the edge, and its preferred size
 * is that of a single line, so a changing value leaves a layout in place.
 */
static inline krpc_error_t krpc_UI_Text_WordWrap(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance);

/**
 * Fills in the call krpc_UI_Text_WordWrap() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_WordWrap_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance);

/**
 * Fills in the call template of krpc_UI_Text_WordWrap(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_WordWrap_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the text wraps onto further lines when it is wider than the space it
 * has. Text that does not wrap carries on past the edge, and its preferred size
 * is that of a single line, so a changing value leaves a layout in place.
 */
static inline krpc_error_t krpc_UI_Text_set_WordWrap(krpc_connection_t connection, krpc_UI_Text_t instance, bool value);

/**
 * Fills in the call krpc_UI_Text_set_WordWrap() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_WordWrap_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Text_set_WordWrap(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Text_set_WordWrap_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Toggle_Remove(krpc_connection_t connection, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the toggle has been changed.
 *
 * This property is set to true when the user changes the toggle, and not when a
 * client checks or unchecks it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Toggle_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the toggle has been changed.
 *
 * This property is set to true when the user changes the toggle, and not when a
 * client checks or unchecks it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Changed(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call krpc_UI_Toggle_set_Changed() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Toggle_set_Changed(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the toggle is checked.
 *
 * Checking a toggle that belongs to a krpc_UI_ToggleGroup_t unchecks the rest
 * of that group, whether or not it is on the screen.
 */
static inline krpc_error_t krpc_UI_Toggle_Checked(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Checked() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Checked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Checked(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Checked_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the toggle is checked.
 *
 * Checking a toggle that belongs to a krpc_UI_ToggleGroup_t unchecks the rest
 * of that group, whether or not it is on the screen.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Checked(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call krpc_UI_Toggle_set_Checked() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Checked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Toggle_set_Checked(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Checked_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Toggle_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The color the control is tinted with. White, the default, leaves the control drawn
 * as the skin has it.
 *
 * The tint multiplies the sprite the control is drawn with, in every state, so
 * a control can show a state of its own, an engaged autopilot for instance, by
 * color. It is applied to the part of the control that responds to the user:
 * the body of a button, dropdown or input field, the box of a toggle, and the
 * handle of a slider. A control's label is tinted through the color of its
 * text.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Color(krpc_connection_t connection, krpc_UI_Toggle_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call krpc_UI_Toggle_set_Color() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Fills in the call template of krpc_UI_Toggle_set_Color(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The group that the toggle belongs to, or `null` if it does not belong to one.
 *
 * Only one toggle in a group can be checked at a time, so a group turns a set of
 * toggles into radio buttons. A group does not have to contain the toggles, so
 * they can be grouped independently of how they are laid out.
 */
static inline krpc_error_t krpc_UI_Toggle_Group(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Group() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Group_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Group(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Group_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The group that the toggle belongs to, or `null` if it does not belong to one.
 *
 * Only one toggle in a group can be checked at a time, so a group turns a set of
 * toggles into radio buttons. A group does not have to contain the toggles, so
 * they can be grouped independently of how they are laid out.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Group(krpc_connection_t connection, krpc_UI_Toggle_t instance, krpc_UI_ToggleGroup_t value);

/**
 * Fills in the call krpc_UI_Toggle_set_Group() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Group_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, krpc_UI_ToggleGroup_t value);

/**
 * Fills in the call template of krpc_UI_Toggle_set_Group(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Group_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Toggle_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Interactable(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call krpc_UI_Toggle_set_Interactable() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Toggle_set_Interactable(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Toggle_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Toggle_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The text for the toggle.
 */
static inline krpc_error_t krpc_UI_Toggle_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Text() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Text(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Text_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Toggle_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Tooltip(krpc_connection_t connection, krpc_UI_Toggle_t instance, const char * value);

/**
 * Fills in the call krpc_UI_Toggle_set_Tooltip() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, const char * value);

/**
 * Fills in the call template of krpc_UI_Toggle_set_Tooltip(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Toggle_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance);

/**
 * Fills in the call krpc_UI_Toggle_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance);

/**
 * Fills in the call template of krpc_UI_Toggle_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Visible(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call krpc_UI_Toggle_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_Toggle_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_Toggle_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Remove(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call krpc_UI_ToggleGroup_Remove() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_Remove(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Remove_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether all of the toggles in the group are allowed to be unchecked at once.
 *
 * When this is false, the user cannot clear the checked toggle, they can only
 * check a different one. It does not stop a client setting
 * krpc_UI_Toggle_Checked(), which is obeyed either way.
 * A group starts out with no toggle checked either way.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff(krpc_connection_t connection, bool * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call krpc_UI_ToggleGroup_AllowSwitchOff() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_AllowSwitchOff(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether all of the toggles in the group are allowed to be unchecked at once.
 *
 * When this is false, the user cannot clear the checked toggle, they can only
 * check a different one. It does not stop a client setting
 * krpc_UI_Toggle_Checked(), which is obeyed either way.
 * A group starts out with no toggle checked either way.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value);

/**
 * Fills in the call krpc_UI_ToggleGroup_set_AllowSwitchOff() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_set_AllowSwitchOff(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call krpc_UI_ToggleGroup_LayoutElement() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_LayoutElement(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call krpc_UI_ToggleGroup_RectTransform() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_RectTransform(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * The toggle in the group that is checked, or `null` if none of them are.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Selected(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call krpc_UI_ToggleGroup_Selected() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Selected_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_Selected(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Selected_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call krpc_UI_ToggleGroup_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

/**
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value);

/**
 * Fills in the call krpc_UI_ToggleGroup_set_Visible() makes, to pass to krpc_KRPC_Expression_Call(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance, bool value);

/**
 * Fills in the call template of krpc_UI_ToggleGroup_set_Visible(), which names the procedure and carries no
 * arguments, to pass to krpc_KRPC_Expression_CallWithArguments(). Free it with
 * krpc_free_procedure_call().
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall);

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

#ifndef KRPC_IMPL_TYPE_UI_PADDING
#define KRPC_IMPL_TYPE_UI_PADDING

static inline bool krpc_encode_callback_items_UI_Padding(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_UI_Padding_t * value = (const krpc_UI_Padding_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_int32(&size, value->left));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_int32(stream, value->left));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_int32(&size, value->right));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_int32(stream, value->right));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_int32(&size, value->top));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_int32(stream, value->top));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_int32(&size, value->bottom));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_int32(stream, value->bottom));
  }
  return true;
}

static inline krpc_error_t krpc_encode_UI_Padding(
  pb_ostream_t * stream, const krpc_UI_Padding_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_UI_Padding;
  message.items.arg = (krpc_UI_Padding_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_UI_Padding(
  size_t * size, const krpc_UI_Padding_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_UI_Padding(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_UI_Padding(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for UI_Padding");
  krpc_UI_Padding_t * value = (krpc_UI_Padding_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_UI_Padding(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for UI_Padding");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_UI_Padding(stream, value));
  return true;
}

static inline bool krpc_decode_callback_item_UI_Padding(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_UI_Padding_t * value;} State;
  State * state = (State*)(*arg);
  krpc_UI_Padding_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_int32(stream, &value->left));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_int32(stream, &value->right));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_int32(stream, &value->top));
    break;
  case 3:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_int32(stream, &value->bottom));
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

static inline krpc_error_t krpc_decode_UI_Padding(
  pb_istream_t * stream, krpc_UI_Padding_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_UI_Padding;
  typedef struct State { size_t pos; krpc_UI_Padding_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 4)
    KRPC_FAIL(ENCODING, "Too few fields for a UI_Padding");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_UI_PADDING

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

#ifndef KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE
#define KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE

static inline bool krpc_encode_callback_items_tuple_double_double(
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

static inline krpc_error_t krpc_encode_tuple_double_double(
  pb_ostream_t * stream, const krpc_tuple_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_double_double;
  message.items.arg = (krpc_tuple_double_double_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

static inline krpc_error_t krpc_encode_size_tuple_double_double(
  size_t * size, const krpc_tuple_double_double_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_double_double(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

static inline bool krpc_encode_callback_tuple_double_double(
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

static inline bool krpc_decode_callback_item_tuple_double_double(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct State {size_t pos; krpc_tuple_double_double_t * value;} State;
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
    // Items past the size of the tuple type are skipped
    if (!pb_read(stream, NULL, stream->bytes_left))
      KRPC_CALLBACK_RETURN_ERROR("skipping an extra tuple item");
    break;
  }
  state->pos++;
  return true;
}

static inline krpc_error_t krpc_decode_tuple_double_double(
  pb_istream_t * stream, krpc_tuple_double_double_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_double_double;
  typedef struct State { size_t pos; krpc_tuple_double_double_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  if (state.pos < 2)
    KRPC_FAIL(ENCODING, "Too few items for a tuple_double_double");
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_DOUBLE_DOUBLE

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

static inline krpc_error_t krpc_UI_AddCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 7, 3805319832, 0, NULL));
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

static inline krpc_error_t krpc_UI_AddCanvas_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3805319832, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_AddCanvas_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3805319832, 0);
}

static inline krpc_error_t krpc_UI_Clear(krpc_connection_t connection, bool clientOnly) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 573354371, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &clientOnly));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Clear_call(krpc_schema_ProcedureCall * procedureCall, bool clientOnly) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 573354371, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_bool, &clientOnly));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Clear_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 573354371, 0);
}

static inline krpc_error_t krpc_UI_Message(krpc_connection_t connection, const char * content, float duration, krpc_UI_MessagePosition_t position, const krpc_StdLib_ColorRGBA_t * color, float size) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 7, 2321970991, 5, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &duration));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_enum, &position));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_StdLib_ColorRGBA, color));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_float, &size));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Message_call(krpc_schema_ProcedureCall * procedureCall, const char * content, float duration, krpc_UI_MessagePosition_t position, const krpc_StdLib_ColorRGBA_t * color, float size) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2321970991, 5));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &duration));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_enum, &position));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_StdLib_ColorRGBA, color));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_float, &size));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Message_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2321970991, 0);
}

static inline krpc_error_t krpc_UI_StockCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 7, 2669010717, 0, NULL));
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

static inline krpc_error_t krpc_UI_StockCanvas_call(krpc_schema_ProcedureCall * procedureCall) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2669010717, 0));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_StockCanvas_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2669010717, 0);
}

static inline krpc_error_t krpc_UI_Button_Remove(krpc_connection_t connection, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 248879931, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 248879931, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 248879931, 0);
}

static inline krpc_error_t krpc_UI_Button_Clicked(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1352017143, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Clicked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1352017143, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Clicked_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1352017143, 0);
}

static inline krpc_error_t krpc_UI_Button_set_Clicked(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2059753928, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Clicked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2059753928, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Clicked_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2059753928, 0);
}

static inline krpc_error_t krpc_UI_Button_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1124363618, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1124363618, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1124363618, 0);
}

static inline krpc_error_t krpc_UI_Button_set_Color(krpc_connection_t connection, krpc_UI_Button_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2559775866, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2559775866, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2559775866, 0);
}

static inline krpc_error_t krpc_UI_Button_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1272759373, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1272759373, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1272759373, 0);
}

static inline krpc_error_t krpc_UI_Button_set_Interactable(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 520689041, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 520689041, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 520689041, 0);
}

static inline krpc_error_t krpc_UI_Button_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1818746070, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1818746070, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1818746070, 0);
}

static inline krpc_error_t krpc_UI_Button_Pressed(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2894811328, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Pressed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2894811328, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Pressed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2894811328, 0);
}

static inline krpc_error_t krpc_UI_Button_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 787907581, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 787907581, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 787907581, 0);
}

static inline krpc_error_t krpc_UI_Button_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4268981900, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4268981900, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Text_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4268981900, 0);
}

static inline krpc_error_t krpc_UI_Button_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3448694559, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3448694559, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3448694559, 0);
}

static inline krpc_error_t krpc_UI_Button_set_Tooltip(krpc_connection_t connection, krpc_UI_Button_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 895318391, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 895318391, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 895318391, 0);
}

static inline krpc_error_t krpc_UI_Button_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3476195061, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3476195061, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3476195061, 0);
}

static inline krpc_error_t krpc_UI_Button_set_Visible(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1449435686, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Button_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1449435686, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1449435686, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 3365482688, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3365482688, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddButton_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3365482688, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 460298821, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddDropdown_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 460298821, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddDropdown_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 460298821, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3792629416, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddImage_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3792629416, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddImage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3792629416, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 172701647, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddInputField_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 172701647, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddInputField_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 172701647, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2590635083, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddPanel_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2590635083, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddPanel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2590635083, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1133981760, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddScrollView_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1133981760, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddScrollView_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1133981760, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Canvas_t instance, bool vertical, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 3207062876, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &vertical));
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

static inline krpc_error_t krpc_UI_Canvas_AddSlider_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool vertical, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3207062876, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &vertical));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddSlider_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3207062876, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 525325914, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddText_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 525325914, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddText_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 525325914, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 3221064343, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddToggle_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3221064343, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddToggle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3221064343, 0);
}

static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1243651247, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1243651247, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1243651247, 0);
}

static inline krpc_error_t krpc_UI_Canvas_Remove(krpc_connection_t connection, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2763045825, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2763045825, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2763045825, 0);
}

static inline krpc_error_t krpc_UI_Canvas_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4028005743, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4028005743, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4028005743, 0);
}

static inline krpc_error_t krpc_UI_Canvas_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3068554040, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3068554040, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3068554040, 0);
}

static inline krpc_error_t krpc_UI_Canvas_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3441942010, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3441942010, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3441942010, 0);
}

static inline krpc_error_t krpc_UI_Canvas_set_Visible(krpc_connection_t connection, krpc_UI_Canvas_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1800522527, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Canvas_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1800522527, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1800522527, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_Remove(krpc_connection_t connection, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 713449830, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 713449830, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 713449830, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2606781947, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2606781947, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2606781947, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_set_Changed(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1054017554, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1054017554, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1054017554, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2764460504, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2764460504, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2764460504, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_set_Color(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1487796637, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1487796637, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1487796637, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4199851727, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4199851727, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4199851727, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_set_Interactable(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1009623507, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1009623507, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1009623507, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1080284966, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1080284966, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1080284966, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_Options(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 729815311, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_Options_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 729815311, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Options_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 729815311, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_set_Options(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const krpc_list_string_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 934400728, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_string, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Options_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, const krpc_list_string_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 934400728, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_list_string, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Options_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 934400728, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1773478681, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1773478681, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1773478681, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2197963873, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2197963873, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2197963873, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex(krpc_connection_t connection, krpc_UI_Dropdown_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 631769081, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, int32_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 631769081, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 631769081, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3550379738, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3550379738, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3550379738, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3137762560, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3137762560, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3137762560, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 664615486, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 664615486, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 664615486, 0);
}

static inline krpc_error_t krpc_UI_Dropdown_set_Visible(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1115064442, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Dropdown_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1115064442, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1115064442, 0);
}

static inline krpc_error_t krpc_UI_Image_Remove(krpc_connection_t connection, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3956900175, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3956900175, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3956900175, 0);
}

static inline krpc_error_t krpc_UI_Image_SetPixels(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t width, int32_t height) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 7, 1164461120, 4, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bytes, &data));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_int32, &height));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_SetPixels_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t width, int32_t height) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1164461120, 4));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bytes, &data));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_int32, &height));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_SetPixels_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1164461120, 0);
}

static inline krpc_error_t krpc_UI_Image_UpdatePixels(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t x, int32_t y, int32_t width, int32_t height) {
  krpc_call_t _call;
  krpc_argument_t _arguments[6];
  KRPC_CHECK(krpc_call(&_call, 7, 1306078913, 6, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bytes, &data));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_int32, &x));
  KRPC_CHECK(krpc_add_argument(&_call, 3, &krpc_encode_callback_int32, &y));
  KRPC_CHECK(krpc_add_argument(&_call, 4, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_add_argument(&_call, 5, &krpc_encode_callback_int32, &height));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_UpdatePixels_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t x, int32_t y, int32_t width, int32_t height) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1306078913, 6));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bytes, &data));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_int32, &x));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 3, &krpc_encode_callback_int32, &y));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 4, &krpc_encode_callback_int32, &width));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 5, &krpc_encode_callback_int32, &height));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_UpdatePixels_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1306078913, 0);
}

static inline krpc_error_t krpc_UI_Image_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 330479366, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 330479366, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 330479366, 0);
}

static inline krpc_error_t krpc_UI_Image_set_Color(krpc_connection_t connection, krpc_UI_Image_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2967099764, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2967099764, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2967099764, 0);
}

static inline krpc_error_t krpc_UI_Image_Content(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1927042927, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
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

static inline krpc_error_t krpc_UI_Image_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1927042927, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_Content_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1927042927, 0);
}

static inline krpc_error_t krpc_UI_Image_set_Content(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3468953714, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bytes, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_set_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, krpc_bytes_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3468953714, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bytes, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_set_Content_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3468953714, 0);
}

static inline krpc_error_t krpc_UI_Image_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1588848070, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1588848070, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1588848070, 0);
}

static inline krpc_error_t krpc_UI_Image_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3703266238, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3703266238, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3703266238, 0);
}

static inline krpc_error_t krpc_UI_Image_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 198321397, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 198321397, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 198321397, 0);
}

static inline krpc_error_t krpc_UI_Image_set_Visible(krpc_connection_t connection, krpc_UI_Image_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2217715236, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Image_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2217715236, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2217715236, 0);
}

static inline krpc_error_t krpc_UI_InputField_Remove(krpc_connection_t connection, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4135687751, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4135687751, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4135687751, 0);
}

static inline krpc_error_t krpc_UI_InputField_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1533051702, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1533051702, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1533051702, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_Changed(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1034375047, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1034375047, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1034375047, 0);
}

static inline krpc_error_t krpc_UI_InputField_CharacterLimit(krpc_connection_t connection, int32_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3136008199, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_CharacterLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3136008199, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_CharacterLimit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3136008199, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit(krpc_connection_t connection, krpc_UI_InputField_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3813988535, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, int32_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3813988535, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3813988535, 0);
}

static inline krpc_error_t krpc_UI_InputField_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2538777111, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2538777111, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2538777111, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_Color(krpc_connection_t connection, krpc_UI_InputField_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1651782939, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1651782939, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1651782939, 0);
}

static inline krpc_error_t krpc_UI_InputField_ContentType(krpc_connection_t connection, krpc_UI_InputContentType_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1692905119, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_ContentType_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1692905119, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_ContentType_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1692905119, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_ContentType(krpc_connection_t connection, krpc_UI_InputField_t instance, krpc_UI_InputContentType_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 282746615, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_ContentType_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, krpc_UI_InputContentType_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 282746615, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_ContentType_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 282746615, 0);
}

static inline krpc_error_t krpc_UI_InputField_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3403283340, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3403283340, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3403283340, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_Interactable(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 430438918, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 430438918, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 430438918, 0);
}

static inline krpc_error_t krpc_UI_InputField_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2762006423, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2762006423, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2762006423, 0);
}

static inline krpc_error_t krpc_UI_InputField_Placeholder(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1582997027, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Placeholder_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1582997027, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Placeholder_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1582997027, 0);
}

static inline krpc_error_t krpc_UI_InputField_ReadOnly(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 12090761, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_ReadOnly_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 12090761, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_ReadOnly_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 12090761, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_ReadOnly(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1588385357, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_ReadOnly_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1588385357, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_ReadOnly_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1588385357, 0);
}

static inline krpc_error_t krpc_UI_InputField_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3879295270, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3879295270, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3879295270, 0);
}

static inline krpc_error_t krpc_UI_InputField_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2348561560, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2348561560, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Text_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2348561560, 0);
}

static inline krpc_error_t krpc_UI_InputField_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2700760899, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2700760899, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2700760899, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_Tooltip(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 909587191, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 909587191, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 909587191, 0);
}

static inline krpc_error_t krpc_UI_InputField_Value(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1403582791, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1403582791, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Value_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1403582791, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_Value(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 870572660, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 870572660, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Value_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 870572660, 0);
}

static inline krpc_error_t krpc_UI_InputField_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2568276881, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2568276881, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2568276881, 0);
}

static inline krpc_error_t krpc_UI_InputField_set_Visible(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2090220141, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_InputField_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2090220141, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2090220141, 0);
}

static inline krpc_error_t krpc_UI_Layout_CellSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2664301886, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_CellSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2664301886, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_CellSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2664301886, 0);
}

static inline krpc_error_t krpc_UI_Layout_set_CellSize(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1455382818, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_CellSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1455382818, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_CellSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1455382818, 0);
}

static inline krpc_error_t krpc_UI_Layout_ChildAlignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1354612427, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_ChildAlignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1354612427, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_ChildAlignment_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1354612427, 0);
}

static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2879751875, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, krpc_UI_TextAnchor_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2879751875, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2879751875, 0);
}

static inline krpc_error_t krpc_UI_Layout_Constraint(krpc_connection_t connection, krpc_UI_GridConstraint_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2227642872, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_Constraint_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2227642872, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_Constraint_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2227642872, 0);
}

static inline krpc_error_t krpc_UI_Layout_set_Constraint(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_GridConstraint_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2848343844, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_Constraint_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, krpc_UI_GridConstraint_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2848343844, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_Constraint_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2848343844, 0);
}

static inline krpc_error_t krpc_UI_Layout_ConstraintCount(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1697199443, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_ConstraintCount_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1697199443, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_ConstraintCount_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1697199443, 0);
}

static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount(krpc_connection_t connection, krpc_UI_Layout_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2942640918, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, int32_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2942640918, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2942640918, 0);
}

static inline krpc_error_t krpc_UI_Layout_Padding(krpc_connection_t connection, krpc_UI_Padding_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3955639048, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_UI_Padding(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_Padding_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3955639048, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_Padding_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3955639048, 0);
}

static inline krpc_error_t krpc_UI_Layout_set_Padding(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_UI_Padding_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1963911183, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_UI_Padding, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_Padding_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, const krpc_UI_Padding_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1963911183, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_UI_Padding, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_Padding_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1963911183, 0);
}

static inline krpc_error_t krpc_UI_Layout_Spacing(krpc_connection_t connection, float * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1315109738, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_Spacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1315109738, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_Spacing_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1315109738, 0);
}

static inline krpc_error_t krpc_UI_Layout_set_Spacing(krpc_connection_t connection, krpc_UI_Layout_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 312205763, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_Spacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Layout_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 312205763, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_set_Spacing_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 312205763, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3709297350, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3709297350, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3709297350, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 4128104799, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4128104799, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4128104799, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout(krpc_connection_t connection, bool * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2375355634, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2375355634, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2375355634, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2718339425, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2718339425, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2718339425, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_MinSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2071921598, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_MinSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2071921598, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_MinSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2071921598, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2928955632, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2928955632, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2928955632, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3754008718, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3754008718, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3754008718, 0);
}

static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2185745232, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2185745232, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2185745232, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 3531822246, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddButton_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const char * content, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3531822246, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddButton_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3531822246, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3587361983, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddDropdown_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3587361983, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddDropdown_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3587361983, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddGridLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 937764674, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddGridLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 937764674, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddGridLayout_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 937764674, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 621249900, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 621249900, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 621249900, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3749649700, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddImage_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3749649700, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddImage_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3749649700, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1806900581, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddInputField_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1806900581, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddInputField_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1806900581, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3805770500, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddPanel_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3805770500, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddPanel_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3805770500, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3709820662, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddScrollView_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3709820662, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddScrollView_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3709820662, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Panel_t instance, bool vertical, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 213229088, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &vertical));
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

static inline krpc_error_t krpc_UI_Panel_AddSlider_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool vertical, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 213229088, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &vertical));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddSlider_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 213229088, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 3147385251, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddText_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const char * content, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3147385251, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddText_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3147385251, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 1850554213, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddToggle_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const char * content, bool visible) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1850554213, 3));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &content));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 2, &krpc_encode_callback_bool, &visible));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddToggle_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1850554213, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 544269102, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddToggleGroup_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 544269102, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddToggleGroup_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 544269102, 0);
}

static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2172931116, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2172931116, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2172931116, 0);
}

static inline krpc_error_t krpc_UI_Panel_BringToFront(krpc_connection_t connection, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1932913985, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_BringToFront_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1932913985, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_BringToFront_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1932913985, 0);
}

static inline krpc_error_t krpc_UI_Panel_Remove(krpc_connection_t connection, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2009805671, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2009805671, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2009805671, 0);
}

static inline krpc_error_t krpc_UI_Panel_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1502338415, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1502338415, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1502338415, 0);
}

static inline krpc_error_t krpc_UI_Panel_set_Color(krpc_connection_t connection, krpc_UI_Panel_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1471320698, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1471320698, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1471320698, 0);
}

static inline krpc_error_t krpc_UI_Panel_Draggable(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1242206634, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_Draggable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1242206634, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Draggable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1242206634, 0);
}

static inline krpc_error_t krpc_UI_Panel_set_Draggable(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 4198326094, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Draggable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4198326094, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Draggable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4198326094, 0);
}

static inline krpc_error_t krpc_UI_Panel_Layout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2664693124, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_Layout_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2664693124, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Layout_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2664693124, 0);
}

static inline krpc_error_t krpc_UI_Panel_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 796632203, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 796632203, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 796632203, 0);
}

static inline krpc_error_t krpc_UI_Panel_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2084942608, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2084942608, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2084942608, 0);
}

static inline krpc_error_t krpc_UI_Panel_SizeFitter(krpc_connection_t connection, krpc_UI_SizeFitter_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4042863361, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_SizeFitter_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4042863361, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_SizeFitter_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4042863361, 0);
}

static inline krpc_error_t krpc_UI_Panel_Style(krpc_connection_t connection, krpc_UI_PanelStyle_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2665624740, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2665624740, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Style_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2665624740, 0);
}

static inline krpc_error_t krpc_UI_Panel_set_Style(krpc_connection_t connection, krpc_UI_Panel_t instance, krpc_UI_PanelStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1936684691, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, krpc_UI_PanelStyle_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1936684691, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Style_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1936684691, 0);
}

static inline krpc_error_t krpc_UI_Panel_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1355589875, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1355589875, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1355589875, 0);
}

static inline krpc_error_t krpc_UI_Panel_set_Visible(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1237226895, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Panel_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1237226895, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1237226895, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_Anchor(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3405528340, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Anchor_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3405528340, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Anchor_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3405528340, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_AnchorMax(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1452192628, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_AnchorMax_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1452192628, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_AnchorMax_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1452192628, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3856806263, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3856806263, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3856806263, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_AnchorMin(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3184399498, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_AnchorMin_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3184399498, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_AnchorMin_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3184399498, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2590875462, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2590875462, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2590875462, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_LocalPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 371292339, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_LocalPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 371292339, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_LocalPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 371292339, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3349521544, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3349521544, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3349521544, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_LowerLeft(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2718754298, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_LowerLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2718754298, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_LowerLeft_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2718754298, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2905386502, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2905386502, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2905386502, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_Pivot(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 186192069, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_Pivot_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 186192069, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Pivot_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 186192069, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_Pivot(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2145625808, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Pivot_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2145625808, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Pivot_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2145625808, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_Position(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 606245626, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 606245626, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 606245626, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_Position(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 30579348, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Position_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 30579348, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Position_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 30579348, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1430889283, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1430889283, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1430889283, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_Rotation(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 948826215, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Rotation_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 948826215, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Rotation_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 948826215, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_Scale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4030299613, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_Scale_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4030299613, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Scale_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4030299613, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_Scale(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 4229949367, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Scale_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4229949367, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Scale_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4229949367, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_Size(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1187448919, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1187448919, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1187448919, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_Size(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 4012904813, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4012904813, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4012904813, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_UpperRight(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 923567421, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_UpperRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 923567421, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_UpperRight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 923567421, 0);
}

static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3084593918, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3084593918, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_tuple_double_double, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3084593918, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_Remove(krpc_connection_t connection, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3225424578, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3225424578, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3225424578, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_Content(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2686174514, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2686174514, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Content_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2686174514, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_Horizontal(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 83020040, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_Horizontal_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 83020040, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Horizontal_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 83020040, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3118913137, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3118913137, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3118913137, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1467239513, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1467239513, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1467239513, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3981589654, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3981589654, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3981589654, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_Vertical(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3879890057, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_Vertical_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3879890057, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Vertical_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3879890057, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_set_Vertical(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2534522112, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_set_Vertical_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2534522112, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_set_Vertical_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2534522112, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 179645311, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 179645311, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 179645311, 0);
}

static inline krpc_error_t krpc_UI_ScrollView_set_Visible(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 4103186548, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ScrollView_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4103186548, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4103186548, 0);
}

static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 89733153, 1, _arguments));
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

static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 89733153, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 89733153, 0);
}

static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 269323913, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 269323913, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 269323913, 0);
}

static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3782314293, 1, _arguments));
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

static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3782314293, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3782314293, 0);
}

static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3974376656, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3974376656, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3974376656, 0);
}

static inline krpc_error_t krpc_UI_Slider_Remove(krpc_connection_t connection, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2449359271, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2449359271, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2449359271, 0);
}

static inline krpc_error_t krpc_UI_Slider_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3309593017, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3309593017, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3309593017, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Changed(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1811686075, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1811686075, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1811686075, 0);
}

static inline krpc_error_t krpc_UI_Slider_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 547598844, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 547598844, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 547598844, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Color(krpc_connection_t connection, krpc_UI_Slider_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 389127509, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 389127509, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 389127509, 0);
}

static inline krpc_error_t krpc_UI_Slider_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2879838294, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2879838294, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2879838294, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Interactable(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2321139998, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2321139998, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2321139998, 0);
}

static inline krpc_error_t krpc_UI_Slider_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3186022686, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3186022686, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3186022686, 0);
}

static inline krpc_error_t krpc_UI_Slider_Max(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 633408228, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Max_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 633408228, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Max_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 633408228, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Max(krpc_connection_t connection, krpc_UI_Slider_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1978469974, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Max_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1978469974, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Max_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1978469974, 0);
}

static inline krpc_error_t krpc_UI_Slider_Min(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2312514954, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Min_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2312514954, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Min_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2312514954, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Min(krpc_connection_t connection, krpc_UI_Slider_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 84179295, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Min_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 84179295, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Min_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 84179295, 0);
}

static inline krpc_error_t krpc_UI_Slider_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 199929723, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 199929723, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 199929723, 0);
}

static inline krpc_error_t krpc_UI_Slider_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 999458763, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 999458763, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 999458763, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Tooltip(krpc_connection_t connection, krpc_UI_Slider_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1561608943, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1561608943, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1561608943, 0);
}

static inline krpc_error_t krpc_UI_Slider_Value(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3764088266, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3764088266, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Value_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3764088266, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Value(krpc_connection_t connection, krpc_UI_Slider_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3674865027, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Value_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3674865027, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Value_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3674865027, 0);
}

static inline krpc_error_t krpc_UI_Slider_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3491561267, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3491561267, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3491561267, 0);
}

static inline krpc_error_t krpc_UI_Slider_set_Visible(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2862915566, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Slider_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2862915566, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2862915566, 0);
}

static inline krpc_error_t krpc_UI_Text_Remove(krpc_connection_t connection, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2692121567, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2692121567, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2692121567, 0);
}

static inline krpc_error_t krpc_UI_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2680949421, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2680949421, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2680949421, 0);
}

static inline krpc_error_t krpc_UI_Text_set_Alignment(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2320562096, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Alignment_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2320562096, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Alignment_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2320562096, 0);
}

static inline krpc_error_t krpc_UI_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1019277499, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_AvailableFonts_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1019277499, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_AvailableFonts_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1019277499, 0);
}

static inline krpc_error_t krpc_UI_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4281926002, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4281926002, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4281926002, 0);
}

static inline krpc_error_t krpc_UI_Text_set_Color(krpc_connection_t connection, krpc_UI_Text_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1933194689, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1933194689, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1933194689, 0);
}

static inline krpc_error_t krpc_UI_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3366855688, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3366855688, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Content_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3366855688, 0);
}

static inline krpc_error_t krpc_UI_Text_set_Content(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 481167652, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Content_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 481167652, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Content_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 481167652, 0);
}

static inline krpc_error_t krpc_UI_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2996949535, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2996949535, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Font_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2996949535, 0);
}

static inline krpc_error_t krpc_UI_Text_set_Font(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3605684839, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Font_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3605684839, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Font_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3605684839, 0);
}

static inline krpc_error_t krpc_UI_Text_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3179200412, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3179200412, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3179200412, 0);
}

static inline krpc_error_t krpc_UI_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1505753613, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1505753613, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1505753613, 0);
}

static inline krpc_error_t krpc_UI_Text_set_LineSpacing(krpc_connection_t connection, krpc_UI_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3497701888, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_LineSpacing_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, float value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3497701888, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_float, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_LineSpacing_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3497701888, 0);
}

static inline krpc_error_t krpc_UI_Text_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1097990134, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1097990134, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1097990134, 0);
}

static inline krpc_error_t krpc_UI_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2656720513, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2656720513, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2656720513, 0);
}

static inline krpc_error_t krpc_UI_Text_set_Size(krpc_connection_t connection, krpc_UI_Text_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2397814667, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Size_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, int32_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2397814667, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_int32, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Size_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2397814667, 0);
}

static inline krpc_error_t krpc_UI_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2525179682, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2525179682, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Style_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2525179682, 0);
}

static inline krpc_error_t krpc_UI_Text_set_Style(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3426595386, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Style_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3426595386, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_enum, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Style_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3426595386, 0);
}

static inline krpc_error_t krpc_UI_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1265886062, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1265886062, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1265886062, 0);
}

static inline krpc_error_t krpc_UI_Text_set_Visible(krpc_connection_t connection, krpc_UI_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 1409852883, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1409852883, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1409852883, 0);
}

static inline krpc_error_t krpc_UI_Text_WordWrap(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1103015149, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_WordWrap_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1103015149, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_WordWrap_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1103015149, 0);
}

static inline krpc_error_t krpc_UI_Text_set_WordWrap(krpc_connection_t connection, krpc_UI_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3491031515, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_WordWrap_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Text_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3491031515, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_set_WordWrap_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3491031515, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Remove(krpc_connection_t connection, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 300506190, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 300506190, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 300506190, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 908824963, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 908824963, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 908824963, 0);
}

static inline krpc_error_t krpc_UI_Toggle_set_Changed(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 166548760, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Changed_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 166548760, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Changed_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 166548760, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Checked(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2804782991, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Checked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2804782991, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Checked_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2804782991, 0);
}

static inline krpc_error_t krpc_UI_Toggle_set_Checked(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 501391593, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Checked_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 501391593, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Checked_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 501391593, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1484494372, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1484494372, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1484494372, 0);
}

static inline krpc_error_t krpc_UI_Toggle_set_Color(krpc_connection_t connection, krpc_UI_Toggle_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2077322662, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Color_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2077322662, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Color_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2077322662, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Group(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 50833192, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Group_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 50833192, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Group_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 50833192, 0);
}

static inline krpc_error_t krpc_UI_Toggle_set_Group(krpc_connection_t connection, krpc_UI_Toggle_t instance, krpc_UI_ToggleGroup_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 4220587152, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Group_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, krpc_UI_ToggleGroup_t value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4220587152, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  if (value == KRPC_NULL) {
    KRPC_CHECK(krpc_procedure_call_null_argument(procedureCall, 1));
  } else {
    KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_object, &value));
  }
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Group_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4220587152, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4093913407, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4093913407, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4093913407, 0);
}

static inline krpc_error_t krpc_UI_Toggle_set_Interactable(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 152058306, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Interactable_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 152058306, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Interactable_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 152058306, 0);
}

static inline krpc_error_t krpc_UI_Toggle_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2138871524, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2138871524, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2138871524, 0);
}

static inline krpc_error_t krpc_UI_Toggle_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4219232338, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4219232338, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4219232338, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1285013514, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Text_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1285013514, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Text_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1285013514, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1518020662, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1518020662, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1518020662, 0);
}

static inline krpc_error_t krpc_UI_Toggle_set_Tooltip(krpc_connection_t connection, krpc_UI_Toggle_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3933924276, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Tooltip_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, const char * value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3933924276, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_string, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Tooltip_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3933924276, 0);
}

static inline krpc_error_t krpc_UI_Toggle_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1268368371, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1268368371, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1268368371, 0);
}

static inline krpc_error_t krpc_UI_Toggle_set_Visible(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2226352647, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_Toggle_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2226352647, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2226352647, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_Remove(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 297820305, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_Remove_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 297820305, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_Remove_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 297820305, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff(krpc_connection_t connection, bool * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 2513035362, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2513035362, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2513035362, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 2524416271, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 2524416271, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 2524416271, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 1234403202, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 1234403202, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 1234403202, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3845353525, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3845353525, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3845353525, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_Selected(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 4161508434, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_Selected_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 4161508434, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_Selected_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 4161508434, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 96558101, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 96558101, 1));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 96558101, 0);
}

static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 3882389477, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible_call(krpc_schema_ProcedureCall * procedureCall, krpc_UI_ToggleGroup_t instance, bool value) {
  KRPC_CHECK(krpc_procedure_call(procedureCall, 7, 3882389477, 2));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_procedure_call_argument(procedureCall, 1, &krpc_encode_callback_bool, &value));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible_call_template(krpc_schema_ProcedureCall * procedureCall) {
  return krpc_procedure_call(procedureCall, 7, 3882389477, 0);
}

KRPC_DEPRECATED_USES_END

#ifdef __cplusplus
}  // extern "C"
#endif
