// Generated by gencpp from file airsim_ros_pkgs/ResetRequest.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_PKGS_MESSAGE_RESETREQUEST_H
#define AIRSIM_ROS_PKGS_MESSAGE_RESETREQUEST_H


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
struct ResetRequest_
{
  typedef ResetRequest_<ContainerAllocator> Type;

  ResetRequest_()
    : waitOnLastTask(false)  {
    }
  ResetRequest_(const ContainerAllocator& _alloc)
    : waitOnLastTask(false)  {
  (void)_alloc;
    }



   typedef uint8_t _waitOnLastTask_type;
  _waitOnLastTask_type waitOnLastTask;





  typedef boost::shared_ptr< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ResetRequest_

typedef ::airsim_ros_pkgs::ResetRequest_<std::allocator<void> > ResetRequest;

typedef boost::shared_ptr< ::airsim_ros_pkgs::ResetRequest > ResetRequestPtr;
typedef boost::shared_ptr< ::airsim_ros_pkgs::ResetRequest const> ResetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.waitOnLastTask == rhs.waitOnLastTask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace airsim_ros_pkgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "79b3eea4e90fd67af16afc9085f08e12";
  }

  static const char* value(const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x79b3eea4e90fd67aULL;
  static const uint64_t static_value2 = 0xf16afc9085f08e12ULL;
};

template<class ContainerAllocator>
struct DataType< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "airsim_ros_pkgs/ResetRequest";
  }

  static const char* value(const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# string vehicle_name\n"
"bool waitOnLastTask \n"
;
  }

  static const char* value(const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.waitOnLastTask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::airsim_ros_pkgs::ResetRequest_<ContainerAllocator>& v)
  {
    s << indent << "waitOnLastTask: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.waitOnLastTask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIRSIM_ROS_PKGS_MESSAGE_RESETREQUEST_H
