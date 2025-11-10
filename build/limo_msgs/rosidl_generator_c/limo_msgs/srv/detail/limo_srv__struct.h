// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from limo_msgs:srv/LimoSrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "limo_msgs/srv/limo_srv.h"


#ifndef LIMO_MSGS__SRV__DETAIL__LIMO_SRV__STRUCT_H_
#define LIMO_MSGS__SRV__DETAIL__LIMO_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/LimoSrv in the package limo_msgs.
typedef struct limo_msgs__srv__LimoSrv_Request
{
  float x;
  float y;
  float z;
} limo_msgs__srv__LimoSrv_Request;

// Struct for a sequence of limo_msgs__srv__LimoSrv_Request.
typedef struct limo_msgs__srv__LimoSrv_Request__Sequence
{
  limo_msgs__srv__LimoSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__srv__LimoSrv_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/LimoSrv in the package limo_msgs.
typedef struct limo_msgs__srv__LimoSrv_Response
{
  bool success;
} limo_msgs__srv__LimoSrv_Response;

// Struct for a sequence of limo_msgs__srv__LimoSrv_Response.
typedef struct limo_msgs__srv__LimoSrv_Response__Sequence
{
  limo_msgs__srv__LimoSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__srv__LimoSrv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  limo_msgs__srv__LimoSrv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  limo_msgs__srv__LimoSrv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/LimoSrv in the package limo_msgs.
typedef struct limo_msgs__srv__LimoSrv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  limo_msgs__srv__LimoSrv_Request__Sequence request;
  limo_msgs__srv__LimoSrv_Response__Sequence response;
} limo_msgs__srv__LimoSrv_Event;

// Struct for a sequence of limo_msgs__srv__LimoSrv_Event.
typedef struct limo_msgs__srv__LimoSrv_Event__Sequence
{
  limo_msgs__srv__LimoSrv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} limo_msgs__srv__LimoSrv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIMO_MSGS__SRV__DETAIL__LIMO_SRV__STRUCT_H_
