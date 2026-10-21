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

/**
 * A button that the user can click.
 * Added to a UI::Canvas or a UI::Panel.
 */
typedef krpc_object_t krpc_UI_Button_t;
/**
 * A canvas for user interface elements. See UI::stock_canvas and UI::add_canvas.
 */
typedef krpc_object_t krpc_UI_Canvas_t;
/**
 * A control for choosing one of a list of options, which are shown when it is clicked.
 * Added to a UI::Canvas or a UI::Panel.
 */
typedef krpc_object_t krpc_UI_Dropdown_t;
/**
 * A picture, or a plain colored rectangle.
 * Added to a UI::Canvas or a UI::Panel.
 */
typedef krpc_object_t krpc_UI_Image_t;
/**
 * An input field.
 * Added to a UI::Canvas or a UI::Panel.
 */
typedef krpc_object_t krpc_UI_InputField_t;
/**
 * Arranges the elements of a panel automatically, so that they do not have to be
 * positioned one by one. See UI::Panel::add_horizontal_layout,
 * UI::Panel::add_vertical_layout and UI::Panel::add_grid_layout.
 */
typedef krpc_object_t krpc_UI_Layout_t;
/**
 * How much space a user interface element asks a UI::Layout for.
 *
 * A layout gives every element its minimum size first. Any space left over is shared
 * out to bring elements up to their preferred size, and anything still left over is
 * shared between the elements with a flexible size, in proportion to it.
 */
typedef krpc_object_t krpc_UI_LayoutElement_t;
/**
 * A container for user interface elements.
 * Added to a UI::Canvas or another panel.
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
 * Added to a UI::Canvas or a UI::Panel.
 *
 * Add the elements to UI::ScrollView::content, not to the scroll view itself. Giving
 * the content a layout and setting its size fitter to the preferred size is the
 * simplest way to have it grow to hold what is put in it.
 */
typedef krpc_object_t krpc_UI_ScrollView_t;
/**
 * Sizes a panel to fit what it contains, rather than the other way round.
 * See UI::Panel::size_fitter.
 */
typedef krpc_object_t krpc_UI_SizeFitter_t;
/**
 * A control for choosing a number by dragging a handle along a track.
 * Added to a UI::Canvas or a UI::Panel.
 */
typedef krpc_object_t krpc_UI_Slider_t;
/**
 * A text label.
 * Added to a UI::Canvas or a UI::Panel.
 */
typedef krpc_object_t krpc_UI_Text_t;
/**
 * A control that is either checked or not.
 * Added to a UI::Canvas or a UI::Panel.
 *
 * On its own a toggle is a check box. Put several of them in the same
 * UI::ToggleGroup and they become radio buttons, as only one toggle in a
 * group can be checked at a time.
 */
typedef krpc_object_t krpc_UI_Toggle_t;
/**
 * A set of toggles of which only one can be checked at a time, which is what turns
 * a set of UI::Toggle controls into radio buttons.
 * Added to a UI::Canvas or a UI::Panel.
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

/**
 * Add a new canvas.
 *
 * If you want to add UI elements to KSPs stock UI canvas, use UI::stock_canvas.
 */
static inline krpc_error_t krpc_UI_AddCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue);

/**
 * Remove all user interface elements.
 * @param clientOnly If true, only remove objects created by the calling client.
 */
static inline krpc_error_t krpc_UI_Clear(krpc_connection_t connection, bool clientOnly);

/**
 * Display a message on the screen.
 *
 * The message appears just like a stock message, for example quicksave or quickload messages.
 * @param content Message content.
 * @param duration Duration before the message disappears, in seconds.
 * @param position Position to display the message.
 * @param size Size of the message, differs per position.
 * @param color The color of the message.
 */
static inline krpc_error_t krpc_UI_Message(krpc_connection_t connection, const char * content, float duration, krpc_UI_MessagePosition_t position, const krpc_StdLib_ColorRGBA_t * color, float size);

/**
 * The stock UI canvas.
 */
static inline krpc_error_t krpc_UI_StockCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Button_Remove(krpc_connection_t connection, krpc_UI_Button_t instance);

/**
 * Whether the button has been clicked.
 *
 * This property is set to true when the user clicks the button.
 * A client script should reset the property to false in order to detect subsequent button presses.
 */
static inline krpc_error_t krpc_UI_Button_Clicked(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * Whether the button has been clicked.
 *
 * This property is set to true when the user clicks the button.
 * A client script should reset the property to false in order to detect subsequent button presses.
 */
static inline krpc_error_t krpc_UI_Button_set_Clicked(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

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
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Button_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Button_set_Interactable(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Button_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Button_t instance);

/**
 * Whether the user is holding the button down right now.
 *
 * True from the button being pressed until the pointer is released, however far
 * it has moved by then. Polling this repeats an action for as long as the
 * button is held, for nudging a value; UI::Button::clicked reports each
 * completed click instead.
 */
static inline krpc_error_t krpc_UI_Button_Pressed(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Button_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Button_t instance);

/**
 * The text for the button.
 */
static inline krpc_error_t krpc_UI_Button_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Button_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Button_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Button_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Button_set_Tooltip(krpc_connection_t connection, krpc_UI_Button_t instance, const char * value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Button_set_Visible(krpc_connection_t connection, krpc_UI_Button_t instance, bool value);

/**
 * Add a button to this object.
 * @param content The label for the button.
 * @param visible Whether the button is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Add a dropdown to this object.
 * @param visible Whether the dropdown is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Add an image to this object.
 * @param visible Whether the image is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Add an input field to this object.
 * @param visible Whether the input field is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Create a panel within this object.
 * @param visible Whether the new panel is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Add a scroll view to this object.
 * @param visible Whether the scroll view is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Canvas_t instance, bool visible);

/**
 * Add a slider to this object.
 * @param vertical Whether the slider runs from bottom to top, rather than from left to right.
 * @param visible Whether the slider is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Canvas_t instance, bool vertical, bool visible);

/**
 * Add text to this object.
 * @param content The text.
 * @param visible Whether the text is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Add a toggle to this object.
 * @param content The label for the toggle.
 * @param visible Whether the toggle is visible.
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible);

/**
 * Add a toggle group to this object, to make a set of toggles into radio buttons.
 *
 * The group is not drawn and does not take up any space. The toggles that belong
 * to it can be added anywhere.
 */
static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Canvas_t instance);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Canvas_Remove(krpc_connection_t connection, krpc_UI_Canvas_t instance);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Canvas_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Canvas_t instance);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Canvas_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Canvas_t instance);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Canvas_set_Visible(krpc_connection_t connection, krpc_UI_Canvas_t instance, bool value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Dropdown_Remove(krpc_connection_t connection, krpc_UI_Dropdown_t instance);

/**
 * Whether the chosen option has been changed.
 *
 * This property is set to true when the user chooses an option, and not when a
 * client chooses one.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Dropdown_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Whether the chosen option has been changed.
 *
 * This property is set to true when the user chooses an option, and not when a
 * client chooses one.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Changed(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value);

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
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Dropdown_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Interactable(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Dropdown_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * The options that the dropdown offers.
 *
 * Setting the options resets the selection to the first of them, or to nothing
 * when the list is empty.
 */
static inline krpc_error_t krpc_UI_Dropdown_Options(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * The options that the dropdown offers.
 *
 * Setting the options resets the selection to the first of them, or to nothing
 * when the list is empty.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Options(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const krpc_list_string_t * value);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Dropdown_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * The position in UI::Dropdown::options of the option that is chosen.
 *
 * Zero while the dropdown has no options, as there is nothing to choose.
 */
static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Dropdown_t instance);

/**
 * The position in UI::Dropdown::options of the option that is chosen.
 *
 * Zero while the dropdown has no options, as there is nothing to choose.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex(krpc_connection_t connection, krpc_UI_Dropdown_t instance, int32_t value);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Dropdown_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Dropdown_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const char * value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Dropdown_set_Visible(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Image_Remove(krpc_connection_t connection, krpc_UI_Image_t instance);

/**
 * Draw the picture from raw pixels rather than a file, so that a client can
 * draw whatever it likes, a graph for instance, and redraw it as often as it
 * likes.
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
 * Redraw part of a picture drawn with UI::Image::set_pixels: a block of the
 * given size, with its top left corner x pixels in from the left edge and y
 * pixels down from the top. The rest of the picture is left as it is, so a
 * change to a small part of a large picture, one new column of a scrolling
 * graph for instance, only sends the part that changed.
 * @param data The pixels of the block, laid out as for UI::Image::set_pixels: 4 bytes
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
 * The color the image is tinted with, or the color of the rectangle when no
 * picture is set.
 */
static inline krpc_error_t krpc_UI_Image_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Image_t instance);

/**
 * The color the image is tinted with, or the color of the rectangle when no
 * picture is set.
 */
static inline krpc_error_t krpc_UI_Image_set_Color(krpc_connection_t connection, krpc_UI_Image_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * The picture to show, as the contents of a PNG or JPEG file. Set it to an empty
 * array to show a plain rectangle instead.
 *
 * Reading this returns what was last set, not what is on the screen, and returns
 * an empty array if no picture has been set. A picture drawn with
 * UI::Image::set_pixels is not returned here either.
 */
static inline krpc_error_t krpc_UI_Image_Content(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_UI_Image_t instance);

/**
 * The picture to show, as the contents of a PNG or JPEG file. Set it to an empty
 * array to show a plain rectangle instead.
 *
 * Reading this returns what was last set, not what is on the screen, and returns
 * an empty array if no picture has been set. A picture drawn with
 * UI::Image::set_pixels is not returned here either.
 */
static inline krpc_error_t krpc_UI_Image_set_Content(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Image_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Image_t instance);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Image_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Image_t instance);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Image_set_Visible(krpc_connection_t connection, krpc_UI_Image_t instance, bool value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_InputField_Remove(krpc_connection_t connection, krpc_UI_InputField_t instance);

/**
 * Whether the input field has been changed.
 *
 * This property is set to true when the user modifies the value of the input field,
 * and not when a client sets it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_InputField_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * Whether the input field has been changed.
 *
 * This property is set to true when the user modifies the value of the input field,
 * and not when a client sets it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_InputField_set_Changed(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * The most characters the user can type into the field, or 0 for no limit.
 */
static inline krpc_error_t krpc_UI_InputField_CharacterLimit(krpc_connection_t connection, int32_t * returnValue, krpc_UI_InputField_t instance);

/**
 * The most characters the user can type into the field, or 0 for no limit.
 */
static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit(krpc_connection_t connection, krpc_UI_InputField_t instance, int32_t value);

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
 * The content the field accepts from the user. Keystrokes that do not fit are
 * ignored as they are typed, so a numeric field only ever shows a number.
 *
 * The filter applies to typing alone. A value set by a client is shown as it is
 * given.
 */
static inline krpc_error_t krpc_UI_InputField_ContentType(krpc_connection_t connection, krpc_UI_InputContentType_t * returnValue, krpc_UI_InputField_t instance);

/**
 * The content the field accepts from the user. Keystrokes that do not fit are
 * ignored as they are typed, so a numeric field only ever shows a number.
 *
 * The filter applies to typing alone. A value set by a client is shown as it is
 * given.
 */
static inline krpc_error_t krpc_UI_InputField_set_ContentType(krpc_connection_t connection, krpc_UI_InputField_t instance, krpc_UI_InputContentType_t value);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_InputField_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_InputField_set_Interactable(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_InputField_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_InputField_t instance);

/**
 * The placeholder text component of the input field.
 *
 * Set its UI::Text::content to the hint to show while the field is empty.
 * The hint is hidden as soon as the field has a value.
 */
static inline krpc_error_t krpc_UI_InputField_Placeholder(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance);

/**
 * Whether the user is stopped from editing the field. The value can still be
 * selected and copied, and a client can still set it.
 *
 * A read-only field is drawn as normal. Make the field not interactable instead
 * to gray it out and stop the user selecting it.
 */
static inline krpc_error_t krpc_UI_InputField_ReadOnly(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance);

/**
 * Whether the user is stopped from editing the field. The value can still be
 * selected and copied, and a client can still set it.
 *
 * A read-only field is drawn as normal. Make the field not interactable instead
 * to gray it out and stop the user selecting it.
 */
static inline krpc_error_t krpc_UI_InputField_set_ReadOnly(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_InputField_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_InputField_t instance);

/**
 * The text component of the input field.
 *
 * Use UI::InputField::value to get and set the value in the field.
 * This object can be used to alter the style of the input field's text.
 */
static inline krpc_error_t krpc_UI_InputField_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_InputField_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_InputField_set_Tooltip(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value);

/**
 * The value of the input field.
 */
static inline krpc_error_t krpc_UI_InputField_Value(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance);

/**
 * The value of the input field.
 */
static inline krpc_error_t krpc_UI_InputField_set_Value(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_InputField_set_Visible(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value);

/**
 * The size of each cell of a grid layout, in pixels.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts, whose
 * elements are sized individually using their layout elements.
 */
static inline krpc_error_t krpc_UI_Layout_CellSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_Layout_t instance);

/**
 * The size of each cell of a grid layout, in pixels.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts, whose
 * elements are sized individually using their layout elements.
 */
static inline krpc_error_t krpc_UI_Layout_set_CellSize(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_tuple_double_double_t * value);

/**
 * Where the elements are placed within the space the layout has to fill.
 */
static inline krpc_error_t krpc_UI_Layout_ChildAlignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Layout_t instance);

/**
 * Where the elements are placed within the space the layout has to fill.
 */
static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_TextAnchor_t value);

/**
 * What fixes the shape of a grid layout.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_Constraint(krpc_connection_t connection, krpc_UI_GridConstraint_t * returnValue, krpc_UI_Layout_t instance);

/**
 * What fixes the shape of a grid layout.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_set_Constraint(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_GridConstraint_t value);

/**
 * The number of columns or rows that UI::Layout::constraint fixes, ignored when
 * the constraint is UI::GridConstraint::flexible.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_ConstraintCount(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Layout_t instance);

/**
 * The number of columns or rows that UI::Layout::constraint fixes, ignored when
 * the constraint is UI::GridConstraint::flexible.
 *
 * Only applies to a grid layout. Throws an exception for the other layouts.
 */
static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount(krpc_connection_t connection, krpc_UI_Layout_t instance, int32_t value);

/**
 * The gap left inside the edges of the panel.
 */
static inline krpc_error_t krpc_UI_Layout_Padding(krpc_connection_t connection, krpc_UI_Padding_t * returnValue, krpc_UI_Layout_t instance);

/**
 * The gap left inside the edges of the panel.
 */
static inline krpc_error_t krpc_UI_Layout_set_Padding(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_UI_Padding_t * value);

/**
 * The gap left between the elements, in pixels. A grid layout uses it in both
 * directions.
 */
static inline krpc_error_t krpc_UI_Layout_Spacing(krpc_connection_t connection, float * returnValue, krpc_UI_Layout_t instance);

/**
 * The gap left between the elements, in pixels. A grid layout uses it in both
 * directions.
 */
static inline krpc_error_t krpc_UI_Layout_set_Spacing(krpc_connection_t connection, krpc_UI_Layout_t instance, float value);

/**
 * The share the element takes of the space left over once every element has its
 * preferred size. A negative value in either direction takes no share.
 */
static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * The share the element takes of the space left over once every element has its
 * preferred size. A negative value in either direction takes no share.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Whether the layout leaves the element out and lets it be positioned by hand.
 */
static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout(krpc_connection_t connection, bool * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * Whether the layout leaves the element out and lets it be positioned by hand.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, bool value);

/**
 * The smallest size the element can be given, in pixels. A negative value in either
 * direction leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_MinSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * The smallest size the element can be given, in pixels. A negative value in either
 * direction leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * The size the element asks for, in pixels. A negative value in either direction
 * leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance);

/**
 * The size the element asks for, in pixels. A negative value in either direction
 * leaves that direction unconstrained.
 */
static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value);

/**
 * Add a button to this object.
 * @param content The label for the button.
 * @param visible Whether the button is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Add a dropdown to this object.
 * @param visible Whether the dropdown is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Arrange the elements of the panel in a grid of equally sized cells.
 *
 * The number of columns follows from the size of the panel and the size of a cell.
 * Use UI::Layout::constraint to fix it instead.
 */
static inline krpc_error_t krpc_UI_Panel_AddGridLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Arrange the elements of the panel in a row.
 */
static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Add an image to this object.
 * @param visible Whether the image is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Add an input field to this object.
 * @param visible Whether the input field is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Create a panel within this object.
 * @param visible Whether the new panel is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Add a scroll view to this object.
 * @param visible Whether the scroll view is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Panel_t instance, bool visible);

/**
 * Add a slider to this object.
 * @param vertical Whether the slider runs from bottom to top, rather than from left to right.
 * @param visible Whether the slider is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Panel_t instance, bool vertical, bool visible);

/**
 * Add text to this object.
 * @param content The text.
 * @param visible Whether the text is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Add a toggle to this object.
 * @param content The label for the toggle.
 * @param visible Whether the toggle is visible.
 */
static inline krpc_error_t krpc_UI_Panel_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible);

/**
 * Add a toggle group to this object, to make a set of toggles into radio buttons.
 *
 * The group is not drawn and does not take up any space. The toggles that belong
 * to it can be added anywhere.
 */
static inline krpc_error_t krpc_UI_Panel_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Arrange the elements of the panel in a column.
 */
static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

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
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Panel_Remove(krpc_connection_t connection, krpc_UI_Panel_t instance);

/**
 * The color the background of the panel is tinted with.
 *
 * Has no effect while the style of the panel is UI::PanelStyle::none,
 * as the panel is then not drawn at all.
 */
static inline krpc_error_t krpc_UI_Panel_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Panel_t instance);

/**
 * The color the background of the panel is tinted with.
 *
 * Has no effect while the style of the panel is UI::PanelStyle::none,
 * as the panel is then not drawn at all.
 */
static inline krpc_error_t krpc_UI_Panel_set_Color(krpc_connection_t connection, krpc_UI_Panel_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * Whether the user can move the panel by dragging it.
 *
 * Dragging anywhere on the panel moves it, including over the elements it
 * contains, unless one of them takes the pointer for itself. Give a panel a title
 * bar of its own if only part of it should move it.
 * A panel whose style is UI::PanelStyle::none is not drawn, so it takes
 * no pointer events of its own and can only be dragged by the elements it
 * contains.
 */
static inline krpc_error_t krpc_UI_Panel_Draggable(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance);

/**
 * Whether the user can move the panel by dragging it.
 *
 * Dragging anywhere on the panel moves it, including over the elements it
 * contains, unless one of them takes the pointer for itself. Give a panel a title
 * bar of its own if only part of it should move it.
 * A panel whose style is UI::PanelStyle::none is not drawn, so it takes
 * no pointer events of its own and can only be dragged by the elements it
 * contains.
 */
static inline krpc_error_t krpc_UI_Panel_set_Draggable(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value);

/**
 * The layout that arranges the elements of the panel, or null if they are
 * positioned by hand.
 */
static inline krpc_error_t krpc_UI_Panel_Layout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Panel_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Panel_t instance);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Panel_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Panel_t instance);

/**
 * Sizes the panel to fit what it contains.
 *
 * Both directions start out unconstrained, which leaves the size of the panel
 * alone.
 */
static inline krpc_error_t krpc_UI_Panel_SizeFitter(krpc_connection_t connection, krpc_UI_SizeFitter_t * returnValue, krpc_UI_Panel_t instance);

/**
 * How the background of the panel is drawn. A box is the frame to group related
 * controls in, and is how a group box is made.
 */
static inline krpc_error_t krpc_UI_Panel_Style(krpc_connection_t connection, krpc_UI_PanelStyle_t * returnValue, krpc_UI_Panel_t instance);

/**
 * How the background of the panel is drawn. A box is the frame to group related
 * controls in, and is how a group box is made.
 */
static inline krpc_error_t krpc_UI_Panel_set_Style(krpc_connection_t connection, krpc_UI_Panel_t instance, krpc_UI_PanelStyle_t value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Panel_set_Visible(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value);

/**
 * Set the minimum and maximum anchor points as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Anchor(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * The anchor point for the lower left corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMax(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * The anchor point for the lower left corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * The anchor point for the upper right corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_AnchorMin(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * The anchor point for the upper right corner of the rectangle defined as a fraction of the size of the parent rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_LocalPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Position of the rectangles lower left corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_LowerLeft(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles lower left corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Location of the pivot point around which the rectangle rotates, defined as a fraction of the size of the rectangle itself.
 */
static inline krpc_error_t krpc_UI_RectTransform_Pivot(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Location of the pivot point around which the rectangle rotates, defined as a fraction of the size of the rectangle itself.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Pivot(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_Position(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles pivot point relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Position(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Rotation, as a quaternion, of the object around its pivot point.
 */
static inline krpc_error_t krpc_UI_RectTransform_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Rotation, as a quaternion, of the object around its pivot point.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Rotation(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value);

/**
 * Scale factor applied to the object in the x, y and z dimensions.
 */
static inline krpc_error_t krpc_UI_RectTransform_Scale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Scale factor applied to the object in the x, y and z dimensions.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Scale(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value);

/**
 * Width and height of the rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_Size(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Width and height of the rectangle.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_Size(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Position of the rectangles upper right corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_UpperRight(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance);

/**
 * Position of the rectangles upper right corner relative to the anchors.
 */
static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_ScrollView_Remove(krpc_connection_t connection, krpc_UI_ScrollView_t instance);

/**
 * The panel that is scrolled, which the elements to show are added to.
 */
static inline krpc_error_t krpc_UI_ScrollView_Content(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Whether the view can be scrolled from side to side.
 */
static inline krpc_error_t krpc_UI_ScrollView_Horizontal(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Whether the view can be scrolled from side to side.
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_ScrollView_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ScrollView_t instance);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_ScrollView_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Whether the view can be scrolled up and down.
 */
static inline krpc_error_t krpc_UI_ScrollView_Vertical(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance);

/**
 * Whether the view can be scrolled up and down.
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Vertical(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_ScrollView_set_Visible(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value);

/**
 * How the width of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance);

/**
 * How the width of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value);

/**
 * How the height of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance);

/**
 * How the height of the panel is chosen.
 */
static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Slider_Remove(krpc_connection_t connection, krpc_UI_Slider_t instance);

/**
 * Whether the slider has been changed.
 *
 * This property is set to true when the user moves the slider, and not when a
 * client sets its value.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Slider_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance);

/**
 * Whether the slider has been changed.
 *
 * This property is set to true when the user moves the slider, and not when a
 * client sets its value.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Slider_set_Changed(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value);

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
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Slider_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Slider_set_Interactable(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Slider_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Slider_t instance);

/**
 * The value at the high end of the slider, which is its right hand end, or the
 * top of a vertical slider. Must not be less than UI::Slider::min.
 */
static inline krpc_error_t krpc_UI_Slider_Max(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance);

/**
 * The value at the high end of the slider, which is its right hand end, or the
 * top of a vertical slider. Must not be less than UI::Slider::min.
 */
static inline krpc_error_t krpc_UI_Slider_set_Max(krpc_connection_t connection, krpc_UI_Slider_t instance, float value);

/**
 * The value at the low end of the slider, which is its left hand end, or the
 * bottom of a vertical slider. Must not be greater than UI::Slider::max.
 */
static inline krpc_error_t krpc_UI_Slider_Min(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance);

/**
 * The value at the low end of the slider, which is its left hand end, or the
 * bottom of a vertical slider. Must not be greater than UI::Slider::max.
 */
static inline krpc_error_t krpc_UI_Slider_set_Min(krpc_connection_t connection, krpc_UI_Slider_t instance, float value);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Slider_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Slider_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Slider_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Slider_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Slider_set_Tooltip(krpc_connection_t connection, krpc_UI_Slider_t instance, const char * value);

/**
 * The value of the slider, between UI::Slider::min and UI::Slider::max.
 * Setting a value outside the range is refused.
 */
static inline krpc_error_t krpc_UI_Slider_Value(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance);

/**
 * The value of the slider, between UI::Slider::min and UI::Slider::max.
 * Setting a value outside the range is refused.
 */
static inline krpc_error_t krpc_UI_Slider_set_Value(krpc_connection_t connection, krpc_UI_Slider_t instance, float value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Slider_set_Visible(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Text_Remove(krpc_connection_t connection, krpc_UI_Text_t instance);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_UI_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Text_t instance);

/**
 * Alignment.
 */
static inline krpc_error_t krpc_UI_Text_set_Alignment(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value);

/**
 * A list of all available fonts.
 */
static inline krpc_error_t krpc_UI_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Text_t instance);

/**
 * The color the text is drawn in.
 */
static inline krpc_error_t krpc_UI_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Text_t instance);

/**
 * The color the text is drawn in.
 */
static inline krpc_error_t krpc_UI_Text_set_Color(krpc_connection_t connection, krpc_UI_Text_t instance, const krpc_StdLib_ColorRGBA_t * value);

/**
 * The text string
 */
static inline krpc_error_t krpc_UI_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance);

/**
 * The text string
 */
static inline krpc_error_t krpc_UI_Text_set_Content(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value);

/**
 * Name of the font
 *
 * Empty if the game provided no font to draw the text with, in which case it is
 * not drawn. See UI::Text::available_fonts for the names that can be set.
 */
static inline krpc_error_t krpc_UI_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance);

/**
 * Name of the font
 *
 * Empty if the game provided no font to draw the text with, in which case it is
 * not drawn. See UI::Text::available_fonts for the names that can be set.
 */
static inline krpc_error_t krpc_UI_Text_set_Font(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Text_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Text_t instance);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_UI_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_UI_Text_t instance);

/**
 * Line spacing.
 */
static inline krpc_error_t krpc_UI_Text_set_LineSpacing(krpc_connection_t connection, krpc_UI_Text_t instance, float value);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Text_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Text_t instance);

/**
 * Font size.
 */
static inline krpc_error_t krpc_UI_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Text_t instance);

/**
 * Font size.
 */
static inline krpc_error_t krpc_UI_Text_set_Size(krpc_connection_t connection, krpc_UI_Text_t instance, int32_t value);

/**
 * Font style.
 */
static inline krpc_error_t krpc_UI_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_UI_Text_t instance);

/**
 * Font style.
 */
static inline krpc_error_t krpc_UI_Text_set_Style(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Text_set_Visible(krpc_connection_t connection, krpc_UI_Text_t instance, bool value);

/**
 * Whether the text wraps onto further lines when it is wider than the space it
 * has. Text that does not wrap carries on past the edge, and its preferred size
 * is that of a single line, so a changing value leaves a layout in place.
 */
static inline krpc_error_t krpc_UI_Text_WordWrap(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance);

/**
 * Whether the text wraps onto further lines when it is wider than the space it
 * has. Text that does not wrap carries on past the edge, and its preferred size
 * is that of a single line, so a changing value leaves a layout in place.
 */
static inline krpc_error_t krpc_UI_Text_set_WordWrap(krpc_connection_t connection, krpc_UI_Text_t instance, bool value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_Toggle_Remove(krpc_connection_t connection, krpc_UI_Toggle_t instance);

/**
 * Whether the toggle has been changed.
 *
 * This property is set to true when the user changes the toggle, and not when a
 * client checks or unchecks it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Toggle_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance);

/**
 * Whether the toggle has been changed.
 *
 * This property is set to true when the user changes the toggle, and not when a
 * client checks or unchecks it.
 * A client script should reset the property to false in order to detect subsequent changes.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Changed(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

/**
 * Whether the toggle is checked.
 *
 * Checking a toggle that belongs to a UI::ToggleGroup unchecks the rest
 * of that group, whether or not it is on the screen.
 */
static inline krpc_error_t krpc_UI_Toggle_Checked(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance);

/**
 * Whether the toggle is checked.
 *
 * Checking a toggle that belongs to a UI::ToggleGroup unchecks the rest
 * of that group, whether or not it is on the screen.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Checked(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

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
 * The group that the toggle belongs to, or null if it does not belong to one.
 *
 * Only one toggle in a group can be checked at a time, so a group turns a set of
 * toggles into radio buttons. A group does not have to contain the toggles, so
 * they can be grouped independently of how they are laid out.
 */
static inline krpc_error_t krpc_UI_Toggle_Group(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * The group that the toggle belongs to, or null if it does not belong to one.
 *
 * Only one toggle in a group can be checked at a time, so a group turns a set of
 * toggles into radio buttons. A group does not have to contain the toggles, so
 * they can be grouped independently of how they are laid out.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Group(krpc_connection_t connection, krpc_UI_Toggle_t instance, krpc_UI_ToggleGroup_t value);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Toggle_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance);

/**
 * Whether the control responds to the user.
 *
 * A control that is not interactable is drawn grayed out and ignores the user,
 * but is still visible. Set its visibility to false to hide it instead.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Interactable(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_Toggle_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_Toggle_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * The text for the toggle.
 */
static inline krpc_error_t krpc_UI_Toggle_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Toggle_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Toggle_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Toggle_t instance);

/**
 * A short piece of text shown beside the pointer while it rests on the
 * control. Empty, the default, shows nothing.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Tooltip(krpc_connection_t connection, krpc_UI_Toggle_t instance, const char * value);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_Toggle_set_Visible(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value);

/**
 * Remove the UI object.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Remove(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance);

/**
 * Whether all of the toggles in the group are allowed to be unchecked at once.
 *
 * When this is false, the user cannot clear the checked toggle, they can only
 * check a different one. It does not stop a client setting
 * UI::Toggle::checked, which is obeyed either way.
 * A group starts out with no toggle checked either way.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff(krpc_connection_t connection, bool * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * Whether all of the toggles in the group are allowed to be unchecked at once.
 *
 * When this is false, the user cannot clear the checked toggle, they can only
 * check a different one. It does not stop a client setting
 * UI::Toggle::checked, which is obeyed either way.
 * A group starts out with no toggle checked either way.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value);

/**
 * How much space the UI object asks a layout for.
 *
 * Only has an effect when the object is in a panel that has a layout. A canvas is
 * not inside a layout and does not have one.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * The rect transform for the UI object.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ToggleGroup_t instance);

/**
 * The toggle in the group that is checked, or null if none of them are.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_Selected(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_ToggleGroup_t instance);

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
 * Whether the UI object is visible.
 *
 * This is the object's own setting, which is what it was last set to. An object is
 * only drawn when everything it is inside is visible as well, so an interface can
 * be built with its parts visible, inside a panel that is not, and shown all at
 * once by making that panel visible.
 */
static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value);

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
    KRPC_RETURN_ERROR(DECODING_FAILED, "too few fields for a StdLib_ColorRGBA");
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
    KRPC_RETURN_ERROR(DECODING_FAILED, "too few fields for a UI_Padding");
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
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
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

static inline krpc_error_t krpc_UI_AddCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 7, 1, 0, NULL));
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

static inline krpc_error_t krpc_UI_Clear(krpc_connection_t connection, bool clientOnly) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 3, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &clientOnly));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Message(krpc_connection_t connection, const char * content, float duration, krpc_UI_MessagePosition_t position, const krpc_StdLib_ColorRGBA_t * color, float size) {
  krpc_call_t _call;
  krpc_argument_t _arguments[5];
  KRPC_CHECK(krpc_call(&_call, 7, 2, 5, _arguments));
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

static inline krpc_error_t krpc_UI_StockCanvas(krpc_connection_t connection, krpc_UI_Canvas_t * returnValue) {
  krpc_call_t _call;
  KRPC_CHECK(krpc_call(&_call, 7, 4, 0, NULL));
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

static inline krpc_error_t krpc_UI_Button_Remove(krpc_connection_t connection, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 5, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Clicked(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 7, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_set_Clicked(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 8, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 12, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_set_Color(krpc_connection_t connection, krpc_UI_Button_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 13, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 10, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_set_Interactable(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 11, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 17, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Pressed(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 9, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 16, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 6, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 14, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_set_Tooltip(krpc_connection_t connection, krpc_UI_Button_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 15, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Button_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Button_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 18, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Button_set_Visible(krpc_connection_t connection, krpc_UI_Button_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 19, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 29, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 24, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 25, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 22, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 20, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Canvas_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 26, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Canvas_t instance, bool vertical, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 23, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 21, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Canvas_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 27, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 28, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_Remove(krpc_connection_t connection, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 30, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Canvas_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 32, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 31, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Canvas_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 33, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Canvas_set_Visible(krpc_connection_t connection, krpc_UI_Canvas_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 34, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Remove(krpc_connection_t connection, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 35, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 40, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_set_Changed(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 41, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 44, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_set_Color(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 45, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 42, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_set_Interactable(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 43, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 49, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_Options(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 36, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_set_Options(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const krpc_list_string_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 37, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_string, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 48, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_SelectedIndex(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 38, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_set_SelectedIndex(krpc_connection_t connection, krpc_UI_Dropdown_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 39, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 46, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_set_Tooltip(krpc_connection_t connection, krpc_UI_Dropdown_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 47, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Dropdown_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Dropdown_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 50, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Dropdown_set_Visible(krpc_connection_t connection, krpc_UI_Dropdown_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 51, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_Remove(krpc_connection_t connection, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 54, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_SetPixels(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t width, int32_t height) {
  krpc_call_t _call;
  krpc_argument_t _arguments[4];
  KRPC_CHECK(krpc_call(&_call, 7, 52, 4, _arguments));
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

static inline krpc_error_t krpc_UI_Image_UpdatePixels(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t data, int32_t x, int32_t y, int32_t width, int32_t height) {
  krpc_call_t _call;
  krpc_argument_t _arguments[6];
  KRPC_CHECK(krpc_call(&_call, 7, 53, 6, _arguments));
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

static inline krpc_error_t krpc_UI_Image_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 57, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_set_Color(krpc_connection_t connection, krpc_UI_Image_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 58, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_Content(krpc_connection_t connection, krpc_bytes_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 55, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_set_Content(krpc_connection_t connection, krpc_UI_Image_t instance, krpc_bytes_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 56, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bytes, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Image_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 60, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 59, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Image_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 61, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Image_set_Visible(krpc_connection_t connection, krpc_UI_Image_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 62, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Remove(krpc_connection_t connection, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 63, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 74, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_Changed(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 75, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_CharacterLimit(krpc_connection_t connection, int32_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 70, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_CharacterLimit(krpc_connection_t connection, krpc_UI_InputField_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 71, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 78, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_Color(krpc_connection_t connection, krpc_UI_InputField_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 79, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_ContentType(krpc_connection_t connection, krpc_UI_InputContentType_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 68, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_ContentType(krpc_connection_t connection, krpc_UI_InputField_t instance, krpc_UI_InputContentType_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 69, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 76, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_Interactable(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 77, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 83, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Placeholder(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 67, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_ReadOnly(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 72, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_ReadOnly(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 73, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 82, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 66, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 80, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_Tooltip(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 81, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Value(krpc_connection_t connection, char * * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 64, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_Value(krpc_connection_t connection, krpc_UI_InputField_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 65, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_InputField_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_InputField_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 84, 1, _arguments));
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

static inline krpc_error_t krpc_UI_InputField_set_Visible(krpc_connection_t connection, krpc_UI_InputField_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 85, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_CellSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 92, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_set_CellSize(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 93, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_ChildAlignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 90, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_set_ChildAlignment(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 91, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_Constraint(krpc_connection_t connection, krpc_UI_GridConstraint_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 94, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_set_Constraint(krpc_connection_t connection, krpc_UI_Layout_t instance, krpc_UI_GridConstraint_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 95, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_ConstraintCount(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 96, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_set_ConstraintCount(krpc_connection_t connection, krpc_UI_Layout_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 97, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_Padding(krpc_connection_t connection, krpc_UI_Padding_t * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 88, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_set_Padding(krpc_connection_t connection, krpc_UI_Layout_t instance, const krpc_UI_Padding_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 89, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_UI_Padding, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Layout_Spacing(krpc_connection_t connection, float * returnValue, krpc_UI_Layout_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 86, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Layout_set_Spacing(krpc_connection_t connection, krpc_UI_Layout_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 87, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_FlexibleSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 102, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_set_FlexibleSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 103, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_IgnoreLayout(krpc_connection_t connection, bool * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 104, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_set_IgnoreLayout(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 105, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_MinSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 98, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_set_MinSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 99, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_LayoutElement_PreferredSize(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_LayoutElement_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 100, 1, _arguments));
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

static inline krpc_error_t krpc_UI_LayoutElement_set_PreferredSize(krpc_connection_t connection, krpc_UI_LayoutElement_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 101, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_AddButton(krpc_connection_t connection, krpc_UI_Button_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 119, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddDropdown(krpc_connection_t connection, krpc_UI_Dropdown_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 114, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddGridLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 108, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddHorizontalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 106, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddImage(krpc_connection_t connection, krpc_UI_Image_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 115, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddInputField(krpc_connection_t connection, krpc_UI_InputField_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 112, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddPanel(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 110, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddScrollView(krpc_connection_t connection, krpc_UI_ScrollView_t * returnValue, krpc_UI_Panel_t instance, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 116, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddSlider(krpc_connection_t connection, krpc_UI_Slider_t * returnValue, krpc_UI_Panel_t instance, bool vertical, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 113, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddText(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 111, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddToggle(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_Panel_t instance, const char * content, bool visible) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 7, 117, 3, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddToggleGroup(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 118, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_AddVerticalLayout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 107, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_BringToFront(krpc_connection_t connection, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 109, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Remove(krpc_connection_t connection, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 120, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 123, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_set_Color(krpc_connection_t connection, krpc_UI_Panel_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 124, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Draggable(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 125, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_set_Draggable(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 126, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Layout(krpc_connection_t connection, krpc_UI_Layout_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 127, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 130, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 129, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_SizeFitter(krpc_connection_t connection, krpc_UI_SizeFitter_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 128, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_Style(krpc_connection_t connection, krpc_UI_PanelStyle_t * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 121, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_set_Style(krpc_connection_t connection, krpc_UI_Panel_t instance, krpc_UI_PanelStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 122, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Panel_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Panel_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 131, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Panel_set_Visible(krpc_connection_t connection, krpc_UI_Panel_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 132, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_set_Anchor(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 143, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_AnchorMax(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 144, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMax(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 145, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_AnchorMin(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 146, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_AnchorMin(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 147, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_LocalPosition(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 135, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_LocalPosition(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 136, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_LowerLeft(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 141, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_LowerLeft(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 142, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Pivot(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 148, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_Pivot(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 149, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Position(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 133, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_Position(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 134, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Rotation(krpc_connection_t connection, krpc_tuple_double_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 150, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_Rotation(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 151, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Scale(krpc_connection_t connection, krpc_tuple_double_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 152, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_Scale(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 153, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_Size(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 137, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_Size(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 138, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_RectTransform_UpperRight(krpc_connection_t connection, krpc_tuple_double_double_t * returnValue, krpc_UI_RectTransform_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 139, 1, _arguments));
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

static inline krpc_error_t krpc_UI_RectTransform_set_UpperRight(krpc_connection_t connection, krpc_UI_RectTransform_t instance, const krpc_tuple_double_double_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 140, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_tuple_double_double, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Remove(krpc_connection_t connection, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 154, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Content(krpc_connection_t connection, krpc_UI_Panel_t * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 155, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_Horizontal(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 156, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_set_Horizontal(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 157, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 161, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 160, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_Vertical(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 158, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_set_Vertical(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 159, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ScrollView_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_ScrollView_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 162, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ScrollView_set_Visible(krpc_connection_t connection, krpc_UI_ScrollView_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 163, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_HorizontalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 164, 1, _arguments));
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

static inline krpc_error_t krpc_UI_SizeFitter_set_HorizontalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 165, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_SizeFitter_VerticalFit(krpc_connection_t connection, krpc_UI_ContentSizeFit_t * returnValue, krpc_UI_SizeFitter_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 166, 1, _arguments));
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

static inline krpc_error_t krpc_UI_SizeFitter_set_VerticalFit(krpc_connection_t connection, krpc_UI_SizeFitter_t instance, krpc_UI_ContentSizeFit_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 167, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Remove(krpc_connection_t connection, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 168, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 175, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Changed(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 176, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 179, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Color(krpc_connection_t connection, krpc_UI_Slider_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 180, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 177, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Interactable(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 178, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 184, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Max(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 173, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Max(krpc_connection_t connection, krpc_UI_Slider_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 174, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Min(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 171, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Min(krpc_connection_t connection, krpc_UI_Slider_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 172, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 183, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 181, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Tooltip(krpc_connection_t connection, krpc_UI_Slider_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 182, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Value(krpc_connection_t connection, float * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 169, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Value(krpc_connection_t connection, krpc_UI_Slider_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 170, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Slider_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Slider_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 185, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Slider_set_Visible(krpc_connection_t connection, krpc_UI_Slider_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 186, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Remove(krpc_connection_t connection, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 187, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Alignment(krpc_connection_t connection, krpc_UI_TextAnchor_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 197, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_Alignment(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_TextAnchor_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 198, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_AvailableFonts(krpc_connection_t connection, krpc_list_string_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 188, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 203, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_Color(krpc_connection_t connection, krpc_UI_Text_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 204, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Content(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 189, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_Content(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 190, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Font(krpc_connection_t connection, char * * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 191, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_Font(krpc_connection_t connection, krpc_UI_Text_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 192, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 206, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_LineSpacing(krpc_connection_t connection, float * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 199, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_LineSpacing(krpc_connection_t connection, krpc_UI_Text_t instance, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 200, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 205, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_Size(krpc_connection_t connection, int32_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 193, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_Size(krpc_connection_t connection, krpc_UI_Text_t instance, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 194, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_int32, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Style(krpc_connection_t connection, krpc_UI_FontStyle_t * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 195, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_Style(krpc_connection_t connection, krpc_UI_Text_t instance, krpc_UI_FontStyle_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 196, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_enum, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 207, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_Visible(krpc_connection_t connection, krpc_UI_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 208, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Text_WordWrap(krpc_connection_t connection, bool * returnValue, krpc_UI_Text_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 201, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Text_set_WordWrap(krpc_connection_t connection, krpc_UI_Text_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 202, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Remove(krpc_connection_t connection, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 209, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Changed(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 215, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Changed(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 216, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Checked(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 211, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Checked(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 212, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Color(krpc_connection_t connection, krpc_StdLib_ColorRGBA_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 219, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Color(krpc_connection_t connection, krpc_UI_Toggle_t instance, const krpc_StdLib_ColorRGBA_t * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 220, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_StdLib_ColorRGBA, value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Group(krpc_connection_t connection, krpc_UI_ToggleGroup_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 213, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Group(krpc_connection_t connection, krpc_UI_Toggle_t instance, krpc_UI_ToggleGroup_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 214, 2, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Interactable(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 217, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Interactable(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 218, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 224, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 223, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Text(krpc_connection_t connection, krpc_UI_Text_t * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 210, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_Tooltip(krpc_connection_t connection, char * * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 221, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Tooltip(krpc_connection_t connection, krpc_UI_Toggle_t instance, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 222, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_string, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_Toggle_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_Toggle_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 225, 1, _arguments));
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

static inline krpc_error_t krpc_UI_Toggle_set_Visible(krpc_connection_t connection, krpc_UI_Toggle_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 226, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_Remove(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 227, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_AllowSwitchOff(krpc_connection_t connection, bool * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 229, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_set_AllowSwitchOff(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 230, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

static inline krpc_error_t krpc_UI_ToggleGroup_LayoutElement(krpc_connection_t connection, krpc_UI_LayoutElement_t * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 232, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_RectTransform(krpc_connection_t connection, krpc_UI_RectTransform_t * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 231, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_Selected(krpc_connection_t connection, krpc_UI_Toggle_t * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 228, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_Visible(krpc_connection_t connection, bool * returnValue, krpc_UI_ToggleGroup_t instance) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 7, 233, 1, _arguments));
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

static inline krpc_error_t krpc_UI_ToggleGroup_set_Visible(krpc_connection_t connection, krpc_UI_ToggleGroup_t instance, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 7, 234, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &instance));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

#ifdef __cplusplus
}  // extern "C"
#endif
