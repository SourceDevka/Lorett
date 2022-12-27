// Generated by gencpp from file lorett_c4s/GetTelemetry.msg
// DO NOT EDIT!


#ifndef LORETT_C4S_MESSAGE_GETTELEMETRY_H
#define LORETT_C4S_MESSAGE_GETTELEMETRY_H

#include <ros/service_traits.h>


#include <lorett_c4s/GetTelemetryRequest.h>
#include <lorett_c4s/GetTelemetryResponse.h>


namespace lorett_c4s
{

struct GetTelemetry
{

typedef GetTelemetryRequest Request;
typedef GetTelemetryResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTelemetry
} // namespace lorett_c4s


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::lorett_c4s::GetTelemetry > {
  static const char* value()
  {
    return "3f1c3a9f95e1194fe8ebc671ce98ef91";
  }

  static const char* value(const ::lorett_c4s::GetTelemetry&) { return value(); }
};

template<>
struct DataType< ::lorett_c4s::GetTelemetry > {
  static const char* value()
  {
    return "lorett_c4s/GetTelemetry";
  }

  static const char* value(const ::lorett_c4s::GetTelemetry&) { return value(); }
};


// service_traits::MD5Sum< ::lorett_c4s::GetTelemetryRequest> should match
// service_traits::MD5Sum< ::lorett_c4s::GetTelemetry >
template<>
struct MD5Sum< ::lorett_c4s::GetTelemetryRequest>
{
  static const char* value()
  {
    return MD5Sum< ::lorett_c4s::GetTelemetry >::value();
  }
  static const char* value(const ::lorett_c4s::GetTelemetryRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::lorett_c4s::GetTelemetryRequest> should match
// service_traits::DataType< ::lorett_c4s::GetTelemetry >
template<>
struct DataType< ::lorett_c4s::GetTelemetryRequest>
{
  static const char* value()
  {
    return DataType< ::lorett_c4s::GetTelemetry >::value();
  }
  static const char* value(const ::lorett_c4s::GetTelemetryRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::lorett_c4s::GetTelemetryResponse> should match
// service_traits::MD5Sum< ::lorett_c4s::GetTelemetry >
template<>
struct MD5Sum< ::lorett_c4s::GetTelemetryResponse>
{
  static const char* value()
  {
    return MD5Sum< ::lorett_c4s::GetTelemetry >::value();
  }
  static const char* value(const ::lorett_c4s::GetTelemetryResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::lorett_c4s::GetTelemetryResponse> should match
// service_traits::DataType< ::lorett_c4s::GetTelemetry >
template<>
struct DataType< ::lorett_c4s::GetTelemetryResponse>
{
  static const char* value()
  {
    return DataType< ::lorett_c4s::GetTelemetry >::value();
  }
  static const char* value(const ::lorett_c4s::GetTelemetryResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LORETT_C4S_MESSAGE_GETTELEMETRY_H
