// Generated by gencpp from file airsim_ros_pkgs/TakeoffGroupResponse.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_PKGS_MESSAGE_TAKEOFFGROUPRESPONSE_H
#define AIRSIM_ROS_PKGS_MESSAGE_TAKEOFFGROUPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace airsim_ros_pkgs
{
template <class ContainerAllocator>
struct TakeoffGroupResponse_
{
  typedef TakeoffGroupResponse_<ContainerAllocator> Type;

  TakeoffGroupResponse_()
    : success(false)  {
    }
  TakeoffGroupResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TakeoffGroupResponse_

typedef ::airsim_ros_pkgs::TakeoffGroupResponse_<std::allocator<void> > TakeoffGroupResponse;

typedef boost::shared_ptr< ::airsim_ros_pkgs::TakeoffGroupResponse > TakeoffGroupResponsePtr;
typedef boost::shared_ptr< ::airsim_ros_pkgs::TakeoffGroupResponse const> TakeoffGroupResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace airsim_ros_pkgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "airsim_ros_pkgs/TakeoffGroupResponse";
  }

  static const char* value(const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
;
  }

  static const char* value(const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TakeoffGroupResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::airsim_ros_pkgs::TakeoffGroupResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIRSIM_ROS_PKGS_MESSAGE_TAKEOFFGROUPRESPONSE_H
