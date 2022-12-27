// Generated by gencpp from file lorett_c4s/takeoffRequest.msg
// DO NOT EDIT!


#ifndef LORETT_C4S_MESSAGE_TAKEOFFREQUEST_H
#define LORETT_C4S_MESSAGE_TAKEOFFREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace lorett_c4s
{
template <class ContainerAllocator>
struct takeoffRequest_
{
  typedef takeoffRequest_<ContainerAllocator> Type;

  takeoffRequest_()
    : z(0.0)  {
    }
  takeoffRequest_(const ContainerAllocator& _alloc)
    : z(0.0)  {
  (void)_alloc;
    }



   typedef float _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::lorett_c4s::takeoffRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lorett_c4s::takeoffRequest_<ContainerAllocator> const> ConstPtr;

}; // struct takeoffRequest_

typedef ::lorett_c4s::takeoffRequest_<std::allocator<void> > takeoffRequest;

typedef boost::shared_ptr< ::lorett_c4s::takeoffRequest > takeoffRequestPtr;
typedef boost::shared_ptr< ::lorett_c4s::takeoffRequest const> takeoffRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lorett_c4s::takeoffRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lorett_c4s::takeoffRequest_<ContainerAllocator1> & lhs, const ::lorett_c4s::takeoffRequest_<ContainerAllocator2> & rhs)
{
  return lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lorett_c4s::takeoffRequest_<ContainerAllocator1> & lhs, const ::lorett_c4s::takeoffRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lorett_c4s

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lorett_c4s::takeoffRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lorett_c4s::takeoffRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lorett_c4s::takeoffRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "faea4c3fd27ceea1dc78c0be7e77a849";
  }

  static const char* value(const ::lorett_c4s::takeoffRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfaea4c3fd27ceea1ULL;
  static const uint64_t static_value2 = 0xdc78c0be7e77a849ULL;
};

template<class ContainerAllocator>
struct DataType< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lorett_c4s/takeoffRequest";
  }

  static const char* value(const ::lorett_c4s::takeoffRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 z\n"
;
  }

  static const char* value(const ::lorett_c4s::takeoffRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct takeoffRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lorett_c4s::takeoffRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lorett_c4s::takeoffRequest_<ContainerAllocator>& v)
  {
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LORETT_C4S_MESSAGE_TAKEOFFREQUEST_H
