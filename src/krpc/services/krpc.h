#pragma once

#include <krpc/decoder.h>
#include <krpc/encoder.h>
#include <krpc/error.h>
#include <krpc/memory.h>
#include <krpc/pb_decode.h>
#include <krpc/pb_encode.h>
#include <krpc/types.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * A server side expression.
 */
typedef krpc_object_t krpc_KRPC_Expression_t;
/**
 * A server side expression.
 */
typedef krpc_object_t krpc_KRPC_Type_t;

#ifndef KRPC_TYPE_DICTIONARY_STRING_OBJECT
#define KRPC_TYPE_DICTIONARY_STRING_OBJECT

typedef struct krpc_dictionary_entry_string_object_s krpc_dictionary_entry_string_object_t;
struct krpc_dictionary_entry_string_object_s {
  char * key;
  krpc_object_t value;
};

typedef struct krpc_dictionary_string_object_s krpc_dictionary_string_object_t;
struct krpc_dictionary_string_object_s {
  size_t size;
  krpc_dictionary_entry_string_object_t * entries;
};

krpc_error_t krpc_encode_dictionary_string_object(
  pb_ostream_t * stream, const krpc_dictionary_string_object_t * value);
krpc_error_t krpc_encode_size_dictionary_string_object(
  size_t * size, const krpc_dictionary_string_object_t * value);
bool krpc_encode_callback_dictionary_string_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_dictionary_string_object(
  pb_istream_t * stream, krpc_dictionary_string_object_t * value);

#endif  // KRPC_TYPE_DICTIONARY_STRING_OBJECT

#ifndef KRPC_TYPE_LIST_OBJECT
#define KRPC_TYPE_LIST_OBJECT

typedef struct krpc_list_object_s krpc_list_object_t;
struct krpc_list_object_s {
  size_t size;
  krpc_object_t * items;
};

krpc_error_t krpc_encode_list_object(
  pb_ostream_t * stream, const krpc_list_object_t * value);
krpc_error_t krpc_encode_size_list_object(
  size_t * size, const krpc_list_object_t * value);
bool krpc_encode_callback_list_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_list_object(
  pb_istream_t * stream, krpc_list_object_t * value);

#endif  // KRPC_TYPE_LIST_OBJECT

#ifndef KRPC_TYPE_TUPLE_BYTES_STRING_STRING
#define KRPC_TYPE_TUPLE_BYTES_STRING_STRING

typedef struct krpc_tuple_bytes_string_string_s krpc_tuple_bytes_string_string_t;
struct krpc_tuple_bytes_string_string_s {
  krpc_bytes_t e0;
  char * e1;
  char * e2;
};

krpc_error_t krpc_encode_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_tuple_bytes_string_string_t * value);
krpc_error_t krpc_encode_size_tuple_bytes_string_string(
  size_t * size, const krpc_tuple_bytes_string_string_t * value);
bool krpc_encode_callback_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_tuple_bytes_string_string_t * value);

#endif  // KRPC_TYPE_TUPLE_BYTES_STRING_STRING

#ifndef KRPC_TYPE_LIST_TUPLE_BYTES_STRING_STRING
#define KRPC_TYPE_LIST_TUPLE_BYTES_STRING_STRING

typedef struct krpc_list_tuple_bytes_string_string_s krpc_list_tuple_bytes_string_string_t;
struct krpc_list_tuple_bytes_string_string_s {
  size_t size;
  krpc_tuple_bytes_string_string_t * items;
};

krpc_error_t krpc_encode_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_list_tuple_bytes_string_string_t * value);
krpc_error_t krpc_encode_size_list_tuple_bytes_string_string(
  size_t * size, const krpc_list_tuple_bytes_string_string_t * value);
bool krpc_encode_callback_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_list_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_list_tuple_bytes_string_string_t * value);

#endif  // KRPC_TYPE_LIST_TUPLE_BYTES_STRING_STRING

#ifndef KRPC_TYPE_SET_OBJECT
#define KRPC_TYPE_SET_OBJECT

typedef struct krpc_set_object_s krpc_set_object_t;
struct krpc_set_object_s {
  size_t size;
  krpc_object_t * items;
};

krpc_error_t krpc_encode_set_object(
  pb_ostream_t * stream, const krpc_set_object_t * value);
krpc_error_t krpc_encode_size_set_object(
  size_t * size, const krpc_set_object_t * value);
bool krpc_encode_callback_set_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg);
krpc_error_t krpc_decode_set_object(
  pb_istream_t * stream, krpc_set_object_t * value);

#endif  // KRPC_TYPE_SET_OBJECT

/**
 * The game scene. See KRPC::current_game_scene.
 */
typedef enum {
  /**
   * The game scene showing the Kerbal Space Center buildings.
   */
  KRPC_KRPC_GAMESCENE_SPACECENTER = 0,
  /**
   * The game scene showing a vessel in flight (or on the launchpad/runway).
   */
  KRPC_KRPC_GAMESCENE_FLIGHT = 1,
  /**
   * The tracking station.
   */
  KRPC_KRPC_GAMESCENE_TRACKINGSTATION = 2,
  /**
   * The Vehicle Assembly Building.
   */
  KRPC_KRPC_GAMESCENE_EDITORVAB = 3,
  /**
   * The Space Plane Hangar.
   */
  KRPC_KRPC_GAMESCENE_EDITORSPH = 4
} krpc_KRPC_GameScene_t;

/**
 * Create an event from a server side expression.
 */
krpc_error_t krpc_KRPC_AddEvent(krpc_connection_t connection, krpc_schema_Event * returnValue, krpc_KRPC_Expression_t expression);

/**
 * Add a streaming request and return its identifier.
 */
krpc_error_t krpc_KRPC_AddStream(krpc_connection_t connection, krpc_schema_Stream * returnValue, const krpc_schema_ProcedureCall * call, bool start);

/**
 * Returns the identifier for the current client.
 */
krpc_error_t krpc_KRPC_GetClientID(krpc_connection_t connection, krpc_bytes_t * returnValue);

/**
 * Returns the name of the current client.
 * This is an empty string if the client has no name.
 */
krpc_error_t krpc_KRPC_GetClientName(krpc_connection_t connection, char * * returnValue);

/**
 * Returns information on all services, procedures, classes, properties etc. provided by the server.
 * Can be used by client libraries to automatically create functionality such as stubs.
 */
krpc_error_t krpc_KRPC_GetServices(krpc_connection_t connection, krpc_schema_Services * returnValue);

/**
 * Returns some information about the server, such as the version.
 */
krpc_error_t krpc_KRPC_GetStatus(krpc_connection_t connection, krpc_schema_Status * returnValue);

/**
 * Remove a streaming request.
 */
krpc_error_t krpc_KRPC_RemoveStream(krpc_connection_t connection, uint64_t id);

/**
 * Set the update rate for a stream in Hz.
 */
krpc_error_t krpc_KRPC_SetStreamRate(krpc_connection_t connection, uint64_t id, float rate);

/**
 * Start a previously added streaming request.
 */
krpc_error_t krpc_KRPC_StartStream(krpc_connection_t connection, uint64_t id);

/**
 * A list of RPC clients that are currently connected to the server.
 * Each entry in the list is a clients identifier, name and address.
 */
krpc_error_t krpc_KRPC_Clients(krpc_connection_t connection, krpc_list_tuple_bytes_string_string_t * returnValue);

/**
 * Get the current game scene.
 */
krpc_error_t krpc_KRPC_CurrentGameScene(krpc_connection_t connection, krpc_KRPC_GameScene_t * returnValue);

/**
 * Whether the game is paused.
 */
krpc_error_t krpc_KRPC_Paused(krpc_connection_t connection, bool * returnValue);

/**
 * Whether the game is paused.
 */
krpc_error_t krpc_KRPC_set_Paused(krpc_connection_t connection, bool value);

/**
 * Numerical addition.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Add(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Applies an accumulator function over a sequence.
 * @return The accumulated value.
 * @param arg The collection.
 * @param func The accumulator function.
 */
krpc_error_t krpc_KRPC_Expression_Aggregate(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t func);

/**
 * Applies an accumulator function over a sequence, with a given seed.
 * @return The accumulated value.
 * @param arg The collection.
 * @param seed The seed value.
 * @param func The accumulator function.
 */
krpc_error_t krpc_KRPC_Expression_AggregateWithSeed(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t seed, krpc_KRPC_Expression_t func);

/**
 * Determine whether all items in a collection satisfy a boolean predicate.
 * @return Whether all items satisfy the predicate.
 * @param arg The collection.
 * @param predicate The predicate function.
 */
krpc_error_t krpc_KRPC_Expression_All(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t predicate);

/**
 * Boolean and operator.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_And(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Determine whether any item in a collection satisfies a boolean predicate.
 * @return Whether any item satisfies the predicate.
 * @param arg The collection.
 * @param predicate The predicate function.
 */
krpc_error_t krpc_KRPC_Expression_Any(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t predicate);

/**
 * Minimum of all elements in a collection.
 * @return The minimum elements in the collection.
 * @param arg The list or set.
 */
krpc_error_t krpc_KRPC_Expression_Average(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * An RPC call.
 * @param call
 */
krpc_error_t krpc_KRPC_Expression_Call(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_schema_ProcedureCall * call);

/**
 * Perform a cast to the given type.
 * @param arg
 * @param type Type to cast the argument to.
 */
krpc_error_t krpc_KRPC_Expression_Cast(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Type_t type);

/**
 * Concatenate two sequences.
 * @return The first sequence followed by the second sequence.
 * @param arg1 The first sequence.
 * @param arg2 The second sequence.
 */
krpc_error_t krpc_KRPC_Expression_Concat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg1, krpc_KRPC_Expression_t arg2);

/**
 * A constant value of boolean type.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantBool(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, bool value);

/**
 * A constant value of double precision floating point type.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantDouble(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, double value);

/**
 * A constant value of single precision floating point type.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantFloat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, float value);

/**
 * A constant value of integer type.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantInt(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, int32_t value);

/**
 * A constant value of string type.
 * @param value
 */
krpc_error_t krpc_KRPC_Expression_ConstantString(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const char * value);

/**
 * Determine if a collection contains a value.
 * @return Whether the collection contains a value.
 * @param arg The collection.
 * @param value The value to look for.
 */
krpc_error_t krpc_KRPC_Expression_Contains(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t value);

/**
 * Number of elements in a collection.
 * @return The number of elements in the collection.
 * @param arg The list, set or dictionary.
 */
krpc_error_t krpc_KRPC_Expression_Count(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Construct a dictionary, from a list of corresponding keys and values.
 * @return The dictionary.
 * @param keys The keys. Should all be of the same type.
 * @param values The values. Should all be of the same type.
 */
krpc_error_t krpc_KRPC_Expression_CreateDictionary(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * keys, const krpc_list_object_t * values);

/**
 * Construct a list.
 * @return The list.
 * @param values The value. Should all be of the same type.
 */
krpc_error_t krpc_KRPC_Expression_CreateList(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * values);

/**
 * Construct a set.
 * @return The set.
 * @param values The values. Should all be of the same type.
 */
krpc_error_t krpc_KRPC_Expression_CreateSet(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_set_object_t * values);

/**
 * Construct a tuple.
 * @return The tuple.
 * @param elements The elements.
 */
krpc_error_t krpc_KRPC_Expression_CreateTuple(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * elements);

/**
 * Numerical division.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Divide(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Equality comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Equal(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Boolean exclusive-or operator.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_ExclusiveOr(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * A function.
 * @return A function.
 * @param parameters The parameters of the function.
 * @param body The body of the function.
 */
krpc_error_t krpc_KRPC_Expression_Function(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * parameters, krpc_KRPC_Expression_t body);

/**
 * Access an element in a tuple, list or dictionary.
 * @return The element.
 * @param arg The tuple, list or dictionary.
 * @param index The index of the element to access.
 * A zero indexed integer for a tuple or list, or a key for a dictionary.
 */
krpc_error_t krpc_KRPC_Expression_Get(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t index);

/**
 * Greater than numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_GreaterThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Greater than or equal numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_GreaterThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * A function call.
 * @return A function call.
 * @param function The function to call.
 * @param args The arguments to call the function with.
 */
krpc_error_t krpc_KRPC_Expression_Invoke(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t function, const krpc_dictionary_string_object_t * args);

/**
 * Bitwise left shift.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_LeftShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Less than numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_LessThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Less than or equal numerical comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_LessThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Maximum of all elements in a collection.
 * @return The maximum elements in the collection.
 * @param arg The list or set.
 */
krpc_error_t krpc_KRPC_Expression_Max(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Minimum of all elements in a collection.
 * @return The minimum elements in the collection.
 * @param arg The list or set.
 */
krpc_error_t krpc_KRPC_Expression_Min(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Numerical modulo operator.
 * @param arg0
 * @param arg1
 * @return The remainder of arg0 divided by arg1
 */
krpc_error_t krpc_KRPC_Expression_Modulo(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Numerical multiplication.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Multiply(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Boolean negation operator.
 * @param arg
 */
krpc_error_t krpc_KRPC_Expression_Not(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Inequality comparison.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_NotEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Boolean or operator.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Or(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Order a collection using a key function.
 * @return The ordered collection.
 * @param arg The collection to order.
 * @param key A function that takes a value from the collection and generates a key to sort on.
 */
krpc_error_t krpc_KRPC_Expression_OrderBy(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t key);

/**
 * A named parameter of type double.
 * @return A named parameter.
 * @param name The name of the parameter.
 * @param type The type of the parameter.
 */
krpc_error_t krpc_KRPC_Expression_Parameter(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const char * name, krpc_KRPC_Type_t type);

/**
 * Numerical power operator.
 * @param arg0
 * @param arg1
 * @return arg0 raised to the power of arg1, with type of arg0
 */
krpc_error_t krpc_KRPC_Expression_Power(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Bitwise right shift.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_RightShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Run a function on every element in the collection.
 * @return The modified collection.
 * @param arg The list or set.
 * @param func The function.
 */
krpc_error_t krpc_KRPC_Expression_Select(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t func);

/**
 * Numerical subtraction.
 * @param arg0
 * @param arg1
 */
krpc_error_t krpc_KRPC_Expression_Subtract(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1);

/**
 * Sum all elements of a collection.
 * @return The sum of the elements in the collection.
 * @param arg The list or set.
 */
krpc_error_t krpc_KRPC_Expression_Sum(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Convert a collection to a list.
 * @return The collection as a list.
 * @param arg The collection.
 */
krpc_error_t krpc_KRPC_Expression_ToList(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Convert a collection to a set.
 * @return The collection as a set.
 * @param arg The collection.
 */
krpc_error_t krpc_KRPC_Expression_ToSet(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg);

/**
 * Run a function on every element in the collection.
 * @return The modified collection.
 * @param arg The list or set.
 * @param func The function.
 */
krpc_error_t krpc_KRPC_Expression_Where(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t func);

/**
 * Bool type.
 */
krpc_error_t krpc_KRPC_Type_Bool(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue);

/**
 * Double type.
 */
krpc_error_t krpc_KRPC_Type_Double(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue);

/**
 * Float type.
 */
krpc_error_t krpc_KRPC_Type_Float(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue);

/**
 * Int type.
 */
krpc_error_t krpc_KRPC_Type_Int(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue);

/**
 * String type.
 */
krpc_error_t krpc_KRPC_Type_String(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue);

// Implementation

#ifndef KRPC_IMPL_TYPE_DICTIONARY_STRING_OBJECT
#define KRPC_IMPL_TYPE_DICTIONARY_STRING_OBJECT

static bool krpc_encode_callback_key_dictionary_string_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for dictionary entry key");
  const char * * key = (const char **)(*arg);
  size_t size = 0;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_string(&size, *key));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for dictionary entry key");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_string(stream, *key));
  return true;
}

static bool krpc_encode_callback_value_dictionary_string_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for dictionary entry value");
  const krpc_object_t * value = (const krpc_object_t*)(*arg);
  size_t size = 0;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_object(&size, *value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for dictionary entry value");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_object(stream, *value));
  return true;
}

static bool krpc_encode_callback_entry_dictionary_string_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_dictionary_string_object_t * value = (const krpc_dictionary_string_object_t*)(*arg);
  krpc_schema_DictionaryEntry entry = krpc_schema_DictionaryEntry_init_default;
  entry.key.funcs.encode = &krpc_encode_callback_key_dictionary_string_object;
  entry.value.funcs.encode = &krpc_encode_callback_value_dictionary_string_object;
  size_t i = 0;
  for (; i < value->size; i++) {
    entry.key.arg = &value->entries[i].key;
    entry.value.arg = &value->entries[i].value;
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for dictionary entry");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_message_DictionaryEntry(&size, &entry));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for dictionary item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_message_DictionaryEntry(stream, &entry));
  }
  return true;
}

inline krpc_error_t krpc_encode_dictionary_string_object(
  pb_ostream_t * stream, const krpc_dictionary_string_object_t * value) {
  krpc_schema_Dictionary message = krpc_schema_Dictionary_init_default;
  message.entries.funcs.encode = &krpc_encode_callback_entry_dictionary_string_object;
  message.entries.arg = (krpc_dictionary_string_object_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Dictionary(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_dictionary_string_object(
  size_t * size, const krpc_dictionary_string_object_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_dictionary_string_object(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_dictionary_string_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for dictionary_string_object");
  krpc_dictionary_string_object_t * value = (krpc_dictionary_string_object_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_dictionary_string_object(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for dictionary_string_object");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_dictionary_string_object(stream, value));
  return true;
}

static bool krpc_decode_callback_key_dictionary_string_object(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  char * * key = (char **)(*arg);
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_string(stream, key));
  return true;
}

static bool krpc_decode_callback_value_dictionary_string_object(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  krpc_object_t * value = (krpc_object_t*)(*arg);
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_object(stream, value));
  return true;
}

static bool krpc_decode_callback_entry_dictionary_string_object(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_dictionary_string_object_t * value; } State;
  State * state = (State*)(*arg);
  krpc_dictionary_string_object_t * value = state->value;
  size_t i = value->size;
  value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->entries = (krpc_dictionary_entry_string_object_t*)krpc_recalloc(state->value->entries, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_dictionary_entry_string_object_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_DictionaryEntry message = krpc_schema_DictionaryEntry_init_default;
  message.key.funcs.decode = &krpc_decode_callback_key_dictionary_string_object;
  message.key.arg = &value->entries[i].key;
  message.value.funcs.decode = &krpc_decode_callback_value_dictionary_string_object;
  message.value.arg = &value->entries[i].value;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_message_DictionaryEntry(stream, &message));
  return true;
}

inline krpc_error_t krpc_decode_dictionary_string_object(
  pb_istream_t * stream, krpc_dictionary_string_object_t * value) {
  typedef struct { size_t capacity; krpc_dictionary_string_object_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->entries == NULL) {
    value->entries = (krpc_dictionary_entry_string_object_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_dictionary_entry_string_object_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_Dictionary message = krpc_schema_Dictionary_init_default;
  message.entries.funcs.decode = &krpc_decode_callback_entry_dictionary_string_object;
  message.entries.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Dictionary(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_DICTIONARY_STRING_OBJECT

#ifndef KRPC_IMPL_TYPE_LIST_OBJECT
#define KRPC_IMPL_TYPE_LIST_OBJECT

static bool krpc_encode_callback_items_list_object(
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

inline krpc_error_t krpc_encode_list_object(
  pb_ostream_t * stream, const krpc_list_object_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_object;
  message.items.arg = (krpc_list_object_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_list_object(
  size_t * size, const krpc_list_object_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_object(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_list_object(
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

static bool krpc_decode_callback_item_list_object(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_list_object_t * value; } State;
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

inline krpc_error_t krpc_decode_list_object(
  pb_istream_t * stream, krpc_list_object_t * value) {
  typedef struct { size_t capacity; krpc_list_object_t * value; } State;
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

#ifndef KRPC_IMPL_TYPE_TUPLE_BYTES_STRING_STRING
#define KRPC_IMPL_TYPE_TUPLE_BYTES_STRING_STRING

static bool krpc_encode_callback_items_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_tuple_bytes_string_string_t * value = (const krpc_tuple_bytes_string_string_t*)(*arg);
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_bytes(&size, value->e0));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_bytes(stream, value->e0));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_string(&size, value->e1));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_string(stream, value->e1));
  }
  {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_string(&size, value->e2));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_string(stream, value->e2));
  }
  return true;
}

inline krpc_error_t krpc_encode_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_tuple_bytes_string_string_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_tuple_bytes_string_string;
  message.items.arg = (krpc_tuple_bytes_string_string_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Tuple(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_tuple_bytes_string_string(
  size_t * size, const krpc_tuple_bytes_string_string_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_tuple_bytes_string_string(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for tuple_bytes_string_string");
  krpc_tuple_bytes_string_string_t * value = (krpc_tuple_bytes_string_string_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_bytes_string_string(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for tuple_bytes_string_string");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_bytes_string_string(stream, value));
  return true;
}

static bool krpc_decode_callback_item_tuple_bytes_string_string(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct {size_t pos; krpc_tuple_bytes_string_string_t * value;} State;
  State * state = (State*)(*arg);
  krpc_tuple_bytes_string_string_t * value = state->value;
  switch (state->pos) {
  case 0:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_bytes(stream, &value->e0));
    break;
  case 1:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_string(stream, &value->e1));
    break;
  case 2:
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_string(stream, &value->e2));
    break;
  default:
    KRPC_CALLBACK_RETURN_ERROR("unexpected tuple item");
  }
  state->pos++;
  return true;
}

inline krpc_error_t krpc_decode_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_tuple_bytes_string_string_t * value) {
  krpc_schema_Tuple message = krpc_schema_Tuple_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_tuple_bytes_string_string;
  typedef struct { size_t pos; krpc_tuple_bytes_string_string_t * value; } State;
  State state = { 0, value };
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Tuple(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_TUPLE_BYTES_STRING_STRING

#ifndef KRPC_IMPL_TYPE_LIST_TUPLE_BYTES_STRING_STRING
#define KRPC_IMPL_TYPE_LIST_TUPLE_BYTES_STRING_STRING

static bool krpc_encode_callback_items_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_list_tuple_bytes_string_string_t * value = (const krpc_list_tuple_bytes_string_string_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for list item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_tuple_bytes_string_string(&size, &value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for list item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_tuple_bytes_string_string(stream, &value->items[i]));
  }
  return true;
}

inline krpc_error_t krpc_encode_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const krpc_list_tuple_bytes_string_string_t * value) {
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_list_tuple_bytes_string_string;
  message.items.arg = (krpc_list_tuple_bytes_string_string_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_List(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_list_tuple_bytes_string_string(
  size_t * size, const krpc_list_tuple_bytes_string_string_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_list_tuple_bytes_string_string(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_list_tuple_bytes_string_string(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for list_tuple_bytes_string_string");
  krpc_list_tuple_bytes_string_string_t * value = (krpc_list_tuple_bytes_string_string_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_list_tuple_bytes_string_string(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for list_tuple_bytes_string_string");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_list_tuple_bytes_string_string(stream, value));
  return true;
}

static bool krpc_decode_callback_item_list_tuple_bytes_string_string(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_list_tuple_bytes_string_string_t * value; } State;
  State * state = (State*)(*arg);
  size_t i = state->value->size;
  state->value->size++;
  if (state->capacity > 0 && state->value->size > state->capacity) {
    state->value->items = (krpc_tuple_bytes_string_string_t*)krpc_recalloc(state->value->items, state->capacity, KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_bytes_string_string_t));
    state->capacity += KRPC_ALLOC_BLOCK_SIZE;
  }
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_decode_tuple_bytes_string_string(stream, &state->value->items[i]));
  return true;
}

inline krpc_error_t krpc_decode_list_tuple_bytes_string_string(
  pb_istream_t * stream, krpc_list_tuple_bytes_string_string_t * value) {
  typedef struct { size_t capacity; krpc_list_tuple_bytes_string_string_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_tuple_bytes_string_string_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_tuple_bytes_string_string_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_List message = krpc_schema_List_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_list_tuple_bytes_string_string;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_List(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_LIST_TUPLE_BYTES_STRING_STRING

#ifndef KRPC_IMPL_TYPE_SET_OBJECT
#define KRPC_IMPL_TYPE_SET_OBJECT

static bool krpc_encode_callback_items_set_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  const krpc_set_object_t * value = (const krpc_set_object_t*)(*arg);
  size_t i = 0;
  for (; i < value->size; i++) {
    if (!pb_encode_tag_for_field(stream, field))
      KRPC_CALLBACK_RETURN_ERROR("encoding tag for set item");
    size_t size;
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_object(&size, value->items[i]));
    if (!pb_encode_varint(stream, size))
      KRPC_CALLBACK_RETURN_ERROR("encoding size for set item");
    KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_object(stream, value->items[i]));
  }
  return true;
}

inline krpc_error_t krpc_encode_set_object(
  pb_ostream_t * stream, const krpc_set_object_t * value) {
  krpc_schema_Set message = krpc_schema_Set_init_default;
  message.items.funcs.encode = &krpc_encode_callback_items_set_object;
  message.items.arg = (krpc_set_object_t*)value;
  KRPC_RETURN_ON_ERROR(krpc_encode_message_Set(stream, &message));
  return KRPC_OK;
}

inline krpc_error_t krpc_encode_size_set_object(
  size_t * size, const krpc_set_object_t * value) {
  pb_ostream_t stream = PB_OSTREAM_SIZING;
  KRPC_RETURN_ON_ERROR(krpc_encode_set_object(&stream, value));
  *size = stream.bytes_written;
  return KRPC_OK;
}

inline bool krpc_encode_callback_set_object(
  pb_ostream_t * stream, const pb_field_t * field, void * const * arg) {
  if (!pb_encode_tag_for_field(stream, field))
    KRPC_CALLBACK_RETURN_ERROR("encoding tag for set_object");
  krpc_set_object_t * value = (krpc_set_object_t*)(*arg);
  size_t size;
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_size_set_object(&size, value));
  if (!pb_encode_varint(stream, size))
    KRPC_CALLBACK_RETURN_ERROR("encoding size for set_object");
  KRPC_CALLBACK_RETURN_ON_ERROR(krpc_encode_set_object(stream, value));
  return true;
}

static bool krpc_decode_callback_item_set_object(
  pb_istream_t * stream, const pb_field_t * field, void ** arg) {
  typedef struct { size_t capacity; krpc_set_object_t * value; } State;
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

inline krpc_error_t krpc_decode_set_object(
  pb_istream_t * stream, krpc_set_object_t * value) {
  typedef struct { size_t capacity; krpc_set_object_t * value; } State;
  State state = { 0, value };
  value->size = 0;
  if (value->items == NULL) {
    value->items = (krpc_object_t*)krpc_calloc(KRPC_ALLOC_BLOCK_SIZE, sizeof(krpc_object_t));
    state.capacity = KRPC_ALLOC_BLOCK_SIZE;
  }
  krpc_schema_Set message = krpc_schema_Set_init_default;
  message.items.funcs.decode = &krpc_decode_callback_item_set_object;
  message.items.arg = &state;
  KRPC_RETURN_ON_ERROR(krpc_decode_message_Set(stream, &message));
  return KRPC_OK;
}

#endif  // KRPC_IMPL_TYPE_SET_OBJECT

inline krpc_error_t krpc_KRPC_AddEvent(krpc_connection_t connection, krpc_schema_Event * returnValue, krpc_KRPC_Expression_t expression) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 9, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &expression));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Event(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_AddStream(krpc_connection_t connection, krpc_schema_Stream * returnValue, const krpc_schema_ProcedureCall * call, bool start) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 5, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_message_ProcedureCall, call));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_bool, &start));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Stream(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_GetClientID(krpc_connection_t connection, krpc_bytes_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 1, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_GetClientName(krpc_connection_t connection, char * * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 2, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_GetServices(krpc_connection_t connection, krpc_schema_Services * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 4, 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Services(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_GetStatus(krpc_connection_t connection, krpc_schema_Status * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 3, 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_message_Status(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_RemoveStream(krpc_connection_t connection, uint64_t id) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 8, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &id));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_SetStreamRate(krpc_connection_t connection, uint64_t id, float rate) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 7, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &id));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_float, &rate));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_StartStream(krpc_connection_t connection, uint64_t id) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 6, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_uint64, &id));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Clients(krpc_connection_t connection, krpc_list_tuple_bytes_string_string_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 10, 0, _arguments));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  if (returnValue) {
    pb_istream_t _stream;
    KRPC_CHECK(krpc_get_return_value(&_result, &_stream));
    KRPC_CHECK(krpc_decode_list_tuple_bytes_string_string(&_stream, returnValue));
  }
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_CurrentGameScene(krpc_connection_t connection, krpc_KRPC_GameScene_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 11, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_Paused(krpc_connection_t connection, bool * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 12, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_set_Paused(krpc_connection_t connection, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 13, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
  krpc_result_t _result = KRPC_RESULT_INIT_DEFAULT;
  KRPC_CHECK(krpc_init_result(&_result));
  KRPC_CHECK(krpc_invoke(connection, &_result.message, &_call.message));
  KRPC_CHECK(krpc_free_result(&_result));
  return KRPC_OK;
}

inline krpc_error_t krpc_KRPC_Expression_Add(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 30, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Aggregate(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t func) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 57, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &func));
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

inline krpc_error_t krpc_KRPC_Expression_AggregateWithSeed(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t seed, krpc_KRPC_Expression_t func) {
  krpc_call_t _call;
  krpc_argument_t _arguments[3];
  KRPC_CHECK(krpc_call(&_call, 1, 58, 3, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &seed));
  KRPC_CHECK(krpc_add_argument(&_call, 2, &krpc_encode_callback_object, &func));
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

inline krpc_error_t krpc_KRPC_Expression_All(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t predicate) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 61, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &predicate));
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

inline krpc_error_t krpc_KRPC_Expression_And(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 26, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Any(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t predicate) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 62, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &predicate));
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

inline krpc_error_t krpc_KRPC_Expression_Average(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 53, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_Call(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_schema_ProcedureCall * call) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 19, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_message_ProcedureCall, call));
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

inline krpc_error_t krpc_KRPC_Expression_Cast(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Type_t type) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 38, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &type));
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

inline krpc_error_t krpc_KRPC_Expression_Concat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg1, krpc_KRPC_Expression_t arg2) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 59, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg1));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg2));
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

inline krpc_error_t krpc_KRPC_Expression_ConstantBool(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, bool value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 17, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_bool, &value));
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

inline krpc_error_t krpc_KRPC_Expression_ConstantDouble(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, double value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 14, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_double, &value));
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

inline krpc_error_t krpc_KRPC_Expression_ConstantFloat(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, float value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 15, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_float, &value));
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

inline krpc_error_t krpc_KRPC_Expression_ConstantInt(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, int32_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 16, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_int32, &value));
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

inline krpc_error_t krpc_KRPC_Expression_ConstantString(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const char * value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 18, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &value));
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

inline krpc_error_t krpc_KRPC_Expression_Contains(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t value) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 56, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &value));
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

inline krpc_error_t krpc_KRPC_Expression_Count(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 49, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_CreateDictionary(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * keys, const krpc_list_object_t * values) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 45, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_list_object, keys));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_list_object, values));
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

inline krpc_error_t krpc_KRPC_Expression_CreateList(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * values) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 43, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_list_object, values));
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

inline krpc_error_t krpc_KRPC_Expression_CreateSet(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_set_object_t * values) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 44, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_set_object, values));
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

inline krpc_error_t krpc_KRPC_Expression_CreateTuple(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * elements) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 42, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_list_object, elements));
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

inline krpc_error_t krpc_KRPC_Expression_Divide(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 33, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Equal(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 20, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_ExclusiveOr(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 28, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Function(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const krpc_list_object_t * parameters, krpc_KRPC_Expression_t body) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 40, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_list_object, parameters));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &body));
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

inline krpc_error_t krpc_KRPC_Expression_Get(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t index) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 48, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &index));
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

inline krpc_error_t krpc_KRPC_Expression_GreaterThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 22, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_GreaterThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 23, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Invoke(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t function, const krpc_dictionary_string_object_t * args) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 41, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &function));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_dictionary_string_object, args));
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

inline krpc_error_t krpc_KRPC_Expression_LeftShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 36, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_LessThan(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 24, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_LessThanOrEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 25, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Max(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 51, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_Min(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 52, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_Modulo(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 34, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Multiply(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 32, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Not(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 29, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_NotEqual(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 21, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Or(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 27, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_OrderBy(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t key) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 60, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &key));
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

inline krpc_error_t krpc_KRPC_Expression_Parameter(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, const char * name, krpc_KRPC_Type_t type) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 39, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_string, &name));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &type));
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

inline krpc_error_t krpc_KRPC_Expression_Power(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 35, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_RightShift(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 37, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Select(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t func) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 54, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &func));
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

inline krpc_error_t krpc_KRPC_Expression_Subtract(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg0, krpc_KRPC_Expression_t arg1) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 31, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg0));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &arg1));
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

inline krpc_error_t krpc_KRPC_Expression_Sum(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 50, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_ToList(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 46, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_ToSet(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg) {
  krpc_call_t _call;
  krpc_argument_t _arguments[1];
  KRPC_CHECK(krpc_call(&_call, 1, 47, 1, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
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

inline krpc_error_t krpc_KRPC_Expression_Where(krpc_connection_t connection, krpc_KRPC_Expression_t * returnValue, krpc_KRPC_Expression_t arg, krpc_KRPC_Expression_t func) {
  krpc_call_t _call;
  krpc_argument_t _arguments[2];
  KRPC_CHECK(krpc_call(&_call, 1, 55, 2, _arguments));
  KRPC_CHECK(krpc_add_argument(&_call, 0, &krpc_encode_callback_object, &arg));
  KRPC_CHECK(krpc_add_argument(&_call, 1, &krpc_encode_callback_object, &func));
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

inline krpc_error_t krpc_KRPC_Type_Bool(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 66, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_Type_Double(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 63, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_Type_Float(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 64, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_Type_Int(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 65, 0, _arguments));
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

inline krpc_error_t krpc_KRPC_Type_String(krpc_connection_t connection, krpc_KRPC_Type_t * returnValue) {
  krpc_call_t _call;
  krpc_argument_t _arguments[0];
  KRPC_CHECK(krpc_call(&_call, 1, 67, 0, _arguments));
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
