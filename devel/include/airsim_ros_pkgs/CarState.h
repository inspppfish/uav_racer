// Generated by gencpp from file airsim_ros_pkgs/CarState.msg
// DO NOT EDIT!


#ifndef AIRSIM_ROS_PKGS_MESSAGE_CARSTATE_H
#define AIRSIM_ROS_PKGS_MESSAGE_CARSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/PoseWithCovariance.h>
#include <geometry_msgs/TwistWithCovariance.h>

namespace airsim_ros_pkgs
{
template <class ContainerAllocator>
struct CarState_
{
  typedef CarState_<ContainerAllocator> Type;

  CarState_()
    : header()
    , pose()
    , twist()
    , speed(0.0)
    , gear(0)
    , rpm(0.0)
    , maxrpm(0.0)
    , handbrake(false)  {
    }
  CarState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pose(_alloc)
    , twist(_alloc)
    , speed(0.0)
    , gear(0)
    , rpm(0.0)
    , maxrpm(0.0)
    , handbrake(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef  ::geometry_msgs::TwistWithCovariance_<ContainerAllocator>  _twist_type;
  _twist_type twist;

   typedef float _speed_type;
  _speed_type speed;

   typedef int8_t _gear_type;
  _gear_type gear;

   typedef float _rpm_type;
  _rpm_type rpm;

   typedef float _maxrpm_type;
  _maxrpm_type maxrpm;

   typedef uint8_t _handbrake_type;
  _handbrake_type handbrake;





  typedef boost::shared_ptr< ::airsim_ros_pkgs::CarState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::airsim_ros_pkgs::CarState_<ContainerAllocator> const> ConstPtr;

}; // struct CarState_

typedef ::airsim_ros_pkgs::CarState_<std::allocator<void> > CarState;

typedef boost::shared_ptr< ::airsim_ros_pkgs::CarState > CarStatePtr;
typedef boost::shared_ptr< ::airsim_ros_pkgs::CarState const> CarStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::airsim_ros_pkgs::CarState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::airsim_ros_pkgs::CarState_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::CarState_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.pose == rhs.pose &&
    lhs.twist == rhs.twist &&
    lhs.speed == rhs.speed &&
    lhs.gear == rhs.gear &&
    lhs.rpm == rhs.rpm &&
    lhs.maxrpm == rhs.maxrpm &&
    lhs.handbrake == rhs.handbrake;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::airsim_ros_pkgs::CarState_<ContainerAllocator1> & lhs, const ::airsim_ros_pkgs::CarState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace airsim_ros_pkgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::airsim_ros_pkgs::CarState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::airsim_ros_pkgs::CarState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::airsim_ros_pkgs::CarState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "df8351642cffc332932a7deda26a94b4";
  }

  static const char* value(const ::airsim_ros_pkgs::CarState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdf8351642cffc332ULL;
  static const uint64_t static_value2 = 0x932a7deda26a94b4ULL;
};

template<class ContainerAllocator>
struct DataType< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "airsim_ros_pkgs/CarState";
  }

  static const char* value(const ::airsim_ros_pkgs::CarState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"geometry_msgs/PoseWithCovariance pose\n"
"geometry_msgs/TwistWithCovariance twist\n"
"float32 speed\n"
"int8 gear\n"
"float32 rpm\n"
"float32 maxrpm\n"
"bool handbrake\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseWithCovariance\n"
"# This represents a pose in free space with uncertainty.\n"
"\n"
"Pose pose\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/TwistWithCovariance\n"
"# This expresses velocity in free space with uncertainty.\n"
"\n"
"Twist twist\n"
"\n"
"# Row-major representation of the 6x6 covariance matrix\n"
"# The orientation parameters use a fixed-axis representation.\n"
"# In order, the parameters are:\n"
"# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n"
"float64[36] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::airsim_ros_pkgs::CarState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pose);
      stream.next(m.twist);
      stream.next(m.speed);
      stream.next(m.gear);
      stream.next(m.rpm);
      stream.next(m.maxrpm);
      stream.next(m.handbrake);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::airsim_ros_pkgs::CarState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::airsim_ros_pkgs::CarState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "twist: ";
    s << std::endl;
    Printer< ::geometry_msgs::TwistWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.twist);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "gear: ";
    Printer<int8_t>::stream(s, indent + "  ", v.gear);
    s << indent << "rpm: ";
    Printer<float>::stream(s, indent + "  ", v.rpm);
    s << indent << "maxrpm: ";
    Printer<float>::stream(s, indent + "  ", v.maxrpm);
    s << indent << "handbrake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.handbrake);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIRSIM_ROS_PKGS_MESSAGE_CARSTATE_H