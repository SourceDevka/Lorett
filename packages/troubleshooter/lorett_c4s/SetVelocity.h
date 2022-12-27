// Generated by gencpp from file lorett_c4s/SetVelocity.msg
// DO NOT EDIT!


#ifndef LORETT_C4S_MESSAGE_SETVELOCITY_H
#define LORETT_C4S_MESSAGE_SETVELOCITY_H

#include <ros/service_traits.h>


#include <lorett_c4s/SetVelocityRequest.h>
#include <lorett_c4s/SetVelocityResponse.h>


namespace lorett_c4s
{

struct SetVelocity
{

typedef SetVelocityRequest Request;
typedef SetVelocityResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetVelocity
} // namespace lorett_c4s


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::lorett_c4s::SetVelocity > {
  static const char* value()
  {
    return "0c536fc3fdea57936646d4924e14c3d1";
  }

  static const char* value(const ::lorett_c4s::SetVelocity&) { return value(); }
};

template<>
struct DataType< ::lorett_c4s::SetVelocity > {
  static const char* value()
  {
    return "lorett_c4s/SetVelocity";
  }

  static const char* value(const ::lorett_c4s::SetVelocity&) { return value(); }
};


// service_traits::MD5Sum< ::lorett_c4s::SetVelocityRequest> should match
// service_traits::MD5Sum< ::lorett_c4s::SetVelocity >
template<>
struct MD5Sum< ::lorett_c4s::SetVelocityRequest>
{
  static const char* value()
  {
    return MD5Sum< ::lorett_c4s::SetVelocity >::value();
  }
  static const char* value(const ::lorett_c4s::SetVelocityRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::lorett_c4s::SetVelocityRequest> should match
// service_traits::DataType< ::lorett_c4s::SetVelocity >
template<>
struct DataType< ::lorett_c4s::SetVelocityRequest>
{
  static const char* value()
  {
    return DataType< ::lorett_c4s::SetVelocity >::value();
  }
  static const char* value(const ::lorett_c4s::SetVelocityRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::lorett_c4s::SetVelocityResponse> should match
// service_traits::MD5Sum< ::lorett_c4s::SetVelocity >
template<>
struct MD5Sum< ::lorett_c4s::SetVelocityResponse>
{
  static const char* value()
  {
    return MD5Sum< ::lorett_c4s::SetVelocity >::value();
  }
  static const char* value(const ::lorett_c4s::SetVelocityResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::lorett_c4s::SetVelocityResponse> should match
// service_traits::DataType< ::lorett_c4s::SetVelocity >
template<>
struct DataType< ::lorett_c4s::SetVelocityResponse>
{
  static const char* value()
  {
    return DataType< ::lorett_c4s::SetVelocity >::value();
  }
  static const char* value(const ::lorett_c4s::SetVelocityResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LORETT_C4S_MESSAGE_SETVELOCITY_H
