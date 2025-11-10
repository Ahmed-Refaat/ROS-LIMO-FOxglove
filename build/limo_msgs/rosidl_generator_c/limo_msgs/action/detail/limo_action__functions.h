// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from limo_msgs:action/LimoAction.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limo_msgs/action/limo_action.h"


#ifndef LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__FUNCTIONS_H_
#define LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "limo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "limo_msgs/action/detail/limo_action__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction__get_type_hash(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction__get_type_description(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction__get_individual_type_description_source(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction__get_type_description_sources(
  const rosidl_action_type_support_t * type_support);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_Goal
 * )) before or use
 * limo_msgs__action__LimoAction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__init(limo_msgs__action__LimoAction_Goal * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__fini(limo_msgs__action__LimoAction_Goal * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Goal *
limo_msgs__action__LimoAction_Goal__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__destroy(limo_msgs__action__LimoAction_Goal * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__are_equal(const limo_msgs__action__LimoAction_Goal * lhs, const limo_msgs__action__LimoAction_Goal * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__copy(
  const limo_msgs__action__LimoAction_Goal * input,
  limo_msgs__action__LimoAction_Goal * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_Goal__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_Goal__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_Goal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_Goal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__Sequence__init(limo_msgs__action__LimoAction_Goal__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__Sequence__fini(limo_msgs__action__LimoAction_Goal__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Goal__Sequence *
limo_msgs__action__LimoAction_Goal__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__Sequence__destroy(limo_msgs__action__LimoAction_Goal__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__Sequence__are_equal(const limo_msgs__action__LimoAction_Goal__Sequence * lhs, const limo_msgs__action__LimoAction_Goal__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__Sequence__copy(
  const limo_msgs__action__LimoAction_Goal__Sequence * input,
  limo_msgs__action__LimoAction_Goal__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_Result
 * )) before or use
 * limo_msgs__action__LimoAction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__init(limo_msgs__action__LimoAction_Result * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__fini(limo_msgs__action__LimoAction_Result * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Result *
limo_msgs__action__LimoAction_Result__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__destroy(limo_msgs__action__LimoAction_Result * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__are_equal(const limo_msgs__action__LimoAction_Result * lhs, const limo_msgs__action__LimoAction_Result * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__copy(
  const limo_msgs__action__LimoAction_Result * input,
  limo_msgs__action__LimoAction_Result * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_Result__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_Result__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_Result__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_Result__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__Sequence__init(limo_msgs__action__LimoAction_Result__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__Sequence__fini(limo_msgs__action__LimoAction_Result__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Result__Sequence *
limo_msgs__action__LimoAction_Result__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__Sequence__destroy(limo_msgs__action__LimoAction_Result__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__Sequence__are_equal(const limo_msgs__action__LimoAction_Result__Sequence * lhs, const limo_msgs__action__LimoAction_Result__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__Sequence__copy(
  const limo_msgs__action__LimoAction_Result__Sequence * input,
  limo_msgs__action__LimoAction_Result__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_Feedback
 * )) before or use
 * limo_msgs__action__LimoAction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__init(limo_msgs__action__LimoAction_Feedback * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__fini(limo_msgs__action__LimoAction_Feedback * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Feedback *
limo_msgs__action__LimoAction_Feedback__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__destroy(limo_msgs__action__LimoAction_Feedback * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__are_equal(const limo_msgs__action__LimoAction_Feedback * lhs, const limo_msgs__action__LimoAction_Feedback * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__copy(
  const limo_msgs__action__LimoAction_Feedback * input,
  limo_msgs__action__LimoAction_Feedback * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_Feedback__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_Feedback__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_Feedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_Feedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__Sequence__init(limo_msgs__action__LimoAction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__Sequence__fini(limo_msgs__action__LimoAction_Feedback__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Feedback__Sequence *
limo_msgs__action__LimoAction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__Sequence__destroy(limo_msgs__action__LimoAction_Feedback__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__Sequence__are_equal(const limo_msgs__action__LimoAction_Feedback__Sequence * lhs, const limo_msgs__action__LimoAction_Feedback__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__Sequence__copy(
  const limo_msgs__action__LimoAction_Feedback__Sequence * input,
  limo_msgs__action__LimoAction_Feedback__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_SendGoal__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_SendGoal__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_SendGoal__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_SendGoal__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_SendGoal_Request
 * )) before or use
 * limo_msgs__action__LimoAction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__init(limo_msgs__action__LimoAction_SendGoal_Request * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__fini(limo_msgs__action__LimoAction_SendGoal_Request * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Request *
limo_msgs__action__LimoAction_SendGoal_Request__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__destroy(limo_msgs__action__LimoAction_SendGoal_Request * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__are_equal(const limo_msgs__action__LimoAction_SendGoal_Request * lhs, const limo_msgs__action__LimoAction_SendGoal_Request * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__copy(
  const limo_msgs__action__LimoAction_SendGoal_Request * input,
  limo_msgs__action__LimoAction_SendGoal_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_SendGoal_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_SendGoal_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_SendGoal_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_SendGoal_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__init(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__fini(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Request__Sequence *
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__destroy(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__are_equal(const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * lhs, const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__copy(
  const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * input,
  limo_msgs__action__LimoAction_SendGoal_Request__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_SendGoal_Response
 * )) before or use
 * limo_msgs__action__LimoAction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__init(limo_msgs__action__LimoAction_SendGoal_Response * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__fini(limo_msgs__action__LimoAction_SendGoal_Response * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Response *
limo_msgs__action__LimoAction_SendGoal_Response__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__destroy(limo_msgs__action__LimoAction_SendGoal_Response * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__are_equal(const limo_msgs__action__LimoAction_SendGoal_Response * lhs, const limo_msgs__action__LimoAction_SendGoal_Response * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__copy(
  const limo_msgs__action__LimoAction_SendGoal_Response * input,
  limo_msgs__action__LimoAction_SendGoal_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_SendGoal_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_SendGoal_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_SendGoal_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_SendGoal_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__init(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__fini(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Response__Sequence *
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__destroy(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__are_equal(const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * lhs, const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__copy(
  const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * input,
  limo_msgs__action__LimoAction_SendGoal_Response__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_SendGoal_Event
 * )) before or use
 * limo_msgs__action__LimoAction_SendGoal_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Event__init(limo_msgs__action__LimoAction_SendGoal_Event * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Event__fini(limo_msgs__action__LimoAction_SendGoal_Event * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_SendGoal_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Event *
limo_msgs__action__LimoAction_SendGoal_Event__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Event__destroy(limo_msgs__action__LimoAction_SendGoal_Event * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Event__are_equal(const limo_msgs__action__LimoAction_SendGoal_Event * lhs, const limo_msgs__action__LimoAction_SendGoal_Event * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Event__copy(
  const limo_msgs__action__LimoAction_SendGoal_Event * input,
  limo_msgs__action__LimoAction_SendGoal_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_SendGoal_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_SendGoal_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_SendGoal_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_SendGoal_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_SendGoal_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Event__Sequence__init(limo_msgs__action__LimoAction_SendGoal_Event__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Event__Sequence__fini(limo_msgs__action__LimoAction_SendGoal_Event__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_SendGoal_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Event__Sequence *
limo_msgs__action__LimoAction_SendGoal_Event__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Event__Sequence__destroy(limo_msgs__action__LimoAction_SendGoal_Event__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Event__Sequence__are_equal(const limo_msgs__action__LimoAction_SendGoal_Event__Sequence * lhs, const limo_msgs__action__LimoAction_SendGoal_Event__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Event__Sequence__copy(
  const limo_msgs__action__LimoAction_SendGoal_Event__Sequence * input,
  limo_msgs__action__LimoAction_SendGoal_Event__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_GetResult__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_GetResult__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_GetResult__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_GetResult__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_GetResult_Request
 * )) before or use
 * limo_msgs__action__LimoAction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__init(limo_msgs__action__LimoAction_GetResult_Request * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__fini(limo_msgs__action__LimoAction_GetResult_Request * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Request *
limo_msgs__action__LimoAction_GetResult_Request__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__destroy(limo_msgs__action__LimoAction_GetResult_Request * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__are_equal(const limo_msgs__action__LimoAction_GetResult_Request * lhs, const limo_msgs__action__LimoAction_GetResult_Request * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__copy(
  const limo_msgs__action__LimoAction_GetResult_Request * input,
  limo_msgs__action__LimoAction_GetResult_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_GetResult_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_GetResult_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_GetResult_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_GetResult_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__init(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__Sequence__fini(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Request__Sequence *
limo_msgs__action__LimoAction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__Sequence__destroy(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__are_equal(const limo_msgs__action__LimoAction_GetResult_Request__Sequence * lhs, const limo_msgs__action__LimoAction_GetResult_Request__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__copy(
  const limo_msgs__action__LimoAction_GetResult_Request__Sequence * input,
  limo_msgs__action__LimoAction_GetResult_Request__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_GetResult_Response
 * )) before or use
 * limo_msgs__action__LimoAction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__init(limo_msgs__action__LimoAction_GetResult_Response * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__fini(limo_msgs__action__LimoAction_GetResult_Response * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Response *
limo_msgs__action__LimoAction_GetResult_Response__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__destroy(limo_msgs__action__LimoAction_GetResult_Response * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__are_equal(const limo_msgs__action__LimoAction_GetResult_Response * lhs, const limo_msgs__action__LimoAction_GetResult_Response * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__copy(
  const limo_msgs__action__LimoAction_GetResult_Response * input,
  limo_msgs__action__LimoAction_GetResult_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_GetResult_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_GetResult_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_GetResult_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_GetResult_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__init(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__Sequence__fini(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Response__Sequence *
limo_msgs__action__LimoAction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__Sequence__destroy(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__are_equal(const limo_msgs__action__LimoAction_GetResult_Response__Sequence * lhs, const limo_msgs__action__LimoAction_GetResult_Response__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__copy(
  const limo_msgs__action__LimoAction_GetResult_Response__Sequence * input,
  limo_msgs__action__LimoAction_GetResult_Response__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_GetResult_Event
 * )) before or use
 * limo_msgs__action__LimoAction_GetResult_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Event__init(limo_msgs__action__LimoAction_GetResult_Event * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Event__fini(limo_msgs__action__LimoAction_GetResult_Event * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_GetResult_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Event *
limo_msgs__action__LimoAction_GetResult_Event__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Event__destroy(limo_msgs__action__LimoAction_GetResult_Event * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Event__are_equal(const limo_msgs__action__LimoAction_GetResult_Event * lhs, const limo_msgs__action__LimoAction_GetResult_Event * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Event__copy(
  const limo_msgs__action__LimoAction_GetResult_Event * input,
  limo_msgs__action__LimoAction_GetResult_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_GetResult_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_GetResult_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_GetResult_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_GetResult_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_GetResult_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Event__Sequence__init(limo_msgs__action__LimoAction_GetResult_Event__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Event__Sequence__fini(limo_msgs__action__LimoAction_GetResult_Event__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_GetResult_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Event__Sequence *
limo_msgs__action__LimoAction_GetResult_Event__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Event__Sequence__destroy(limo_msgs__action__LimoAction_GetResult_Event__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Event__Sequence__are_equal(const limo_msgs__action__LimoAction_GetResult_Event__Sequence * lhs, const limo_msgs__action__LimoAction_GetResult_Event__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Event__Sequence__copy(
  const limo_msgs__action__LimoAction_GetResult_Event__Sequence * input,
  limo_msgs__action__LimoAction_GetResult_Event__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_FeedbackMessage
 * )) before or use
 * limo_msgs__action__LimoAction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__init(limo_msgs__action__LimoAction_FeedbackMessage * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__fini(limo_msgs__action__LimoAction_FeedbackMessage * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_FeedbackMessage *
limo_msgs__action__LimoAction_FeedbackMessage__create(void);

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__destroy(limo_msgs__action__LimoAction_FeedbackMessage * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__are_equal(const limo_msgs__action__LimoAction_FeedbackMessage * lhs, const limo_msgs__action__LimoAction_FeedbackMessage * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__copy(
  const limo_msgs__action__LimoAction_FeedbackMessage * input,
  limo_msgs__action__LimoAction_FeedbackMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_type_hash_t *
limo_msgs__action__LimoAction_FeedbackMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeDescription *
limo_msgs__action__LimoAction_FeedbackMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource *
limo_msgs__action__LimoAction_FeedbackMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
limo_msgs__action__LimoAction_FeedbackMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__init(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__fini(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_FeedbackMessage__Sequence *
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__destroy(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__are_equal(const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * lhs, const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__copy(
  const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * input,
  limo_msgs__action__LimoAction_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__FUNCTIONS_H_
