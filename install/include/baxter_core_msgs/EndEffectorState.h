// Generated by gencpp from file baxter_core_msgs/EndEffectorState.msg
// DO NOT EDIT!


#ifndef BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORSTATE_H
#define BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_core_msgs
{
template <class ContainerAllocator>
struct EndEffectorState_
{
  typedef EndEffectorState_<ContainerAllocator> Type;

  EndEffectorState_()
    : timestamp()
    , id(0)
    , enabled(0)
    , calibrated(0)
    , ready(0)
    , moving(0)
    , gripping(0)
    , missed(0)
    , error(0)
    , reverse(0)
    , position(0.0)
    , force(0.0)
    , state()
    , command()
    , command_sender()
    , command_sequence(0)  {
    }
  EndEffectorState_(const ContainerAllocator& _alloc)
    : timestamp()
    , id(0)
    , enabled(0)
    , calibrated(0)
    , ready(0)
    , moving(0)
    , gripping(0)
    , missed(0)
    , error(0)
    , reverse(0)
    , position(0.0)
    , force(0.0)
    , state(_alloc)
    , command(_alloc)
    , command_sender(_alloc)
    , command_sequence(0)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef uint32_t _id_type;
  _id_type id;

   typedef uint8_t _enabled_type;
  _enabled_type enabled;

   typedef uint8_t _calibrated_type;
  _calibrated_type calibrated;

   typedef uint8_t _ready_type;
  _ready_type ready;

   typedef uint8_t _moving_type;
  _moving_type moving;

   typedef uint8_t _gripping_type;
  _gripping_type gripping;

   typedef uint8_t _missed_type;
  _missed_type missed;

   typedef uint8_t _error_type;
  _error_type error;

   typedef uint8_t _reverse_type;
  _reverse_type reverse;

   typedef float _position_type;
  _position_type position;

   typedef float _force_type;
  _force_type force;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_type;
  _state_type state;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_sender_type;
  _command_sender_type command_sender;

   typedef uint32_t _command_sequence_type;
  _command_sequence_type command_sequence;


    enum { STATE_FALSE = 0u };
     enum { STATE_TRUE = 1u };
     enum { STATE_UNKNOWN = 2u };
     static const float POSITION_CLOSED;
     static const float POSITION_OPEN;
     static const float FORCE_MIN;
     static const float FORCE_MAX;
 

  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> const> ConstPtr;

}; // struct EndEffectorState_

typedef ::baxter_core_msgs::EndEffectorState_<std::allocator<void> > EndEffectorState;

typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorState > EndEffectorStatePtr;
typedef boost::shared_ptr< ::baxter_core_msgs::EndEffectorState const> EndEffectorStateConstPtr;

// constants requiring out of line definition

   

   

   

   
   template<typename ContainerAllocator> const float
      EndEffectorState_<ContainerAllocator>::POSITION_CLOSED =
        
          0.0
        
        ;
   

   
   template<typename ContainerAllocator> const float
      EndEffectorState_<ContainerAllocator>::POSITION_OPEN =
        
          100.0
        
        ;
   

   
   template<typename ContainerAllocator> const float
      EndEffectorState_<ContainerAllocator>::FORCE_MIN =
        
          0.0
        
        ;
   

   
   template<typename ContainerAllocator> const float
      EndEffectorState_<ContainerAllocator>::FORCE_MAX =
        
          100.0
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'baxter_core_msgs': ['/home/louis/ros_ws/src/baxter_common/baxter_core_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ade777f069d738595bc19e246b8ec7a0";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xade777f069d73859ULL;
  static const uint64_t static_value2 = 0x5bc19e246b8ec7a0ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_core_msgs/EndEffectorState";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
time timestamp              # time when state was updated\n\
uint32 id                   # EndEffectorId\n\
#\n\
# The following State fields are tristate: 0 = false; 1 = true; 2 = unknown/unsupported\n\
  uint8   STATE_FALSE = 0\n\
  uint8   STATE_TRUE = 1\n\
  uint8   STATE_UNKNOWN = 2\n\
#\n\
uint8   enabled             # true if enabled\n\
uint8   calibrated          # true if calibration has completed\n\
uint8   ready               # true if ready for another command\n\
uint8   moving              # true if moving\n\
uint8   gripping            # true if gripping\n\
uint8   missed              # true if GRIP/GOTO/SET was commanded and the gripper reaches the end of travel\n\
uint8   error               # true if the gripper is in an error state\n\
uint8   reverse             # true if the gripper is in reverse mode\n\
#\n\
float32 position            # position as a percentage of the max position;      0=closed - 100=open\n\
#\n\
  float32 POSITION_CLOSED = 0.0\n\
  float32 POSITION_OPEN   = 100.0\n\
#\n\
float32 force               # force as a percentage of max force;                0=none   - 100=max\n\
#\n\
  float32 FORCE_MIN = 0.0\n\
  float32 FORCE_MAX = 100.0\n\
#\n\
string state                # JSON: other state information\n\
#\n\
string command              # from the last command message\n\
string command_sender\n\
uint32 command_sequence\n\
#\n\
";
  }

  static const char* value(const ::baxter_core_msgs::EndEffectorState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.id);
      stream.next(m.enabled);
      stream.next(m.calibrated);
      stream.next(m.ready);
      stream.next(m.moving);
      stream.next(m.gripping);
      stream.next(m.missed);
      stream.next(m.error);
      stream.next(m.reverse);
      stream.next(m.position);
      stream.next(m.force);
      stream.next(m.state);
      stream.next(m.command);
      stream.next(m.command_sender);
      stream.next(m.command_sequence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EndEffectorState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_core_msgs::EndEffectorState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_core_msgs::EndEffectorState_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "enabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enabled);
    s << indent << "calibrated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.calibrated);
    s << indent << "ready: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.ready);
    s << indent << "moving: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.moving);
    s << indent << "gripping: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gripping);
    s << indent << "missed: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.missed);
    s << indent << "error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error);
    s << indent << "reverse: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reverse);
    s << indent << "position: ";
    Printer<float>::stream(s, indent + "  ", v.position);
    s << indent << "force: ";
    Printer<float>::stream(s, indent + "  ", v.force);
    s << indent << "state: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state);
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "command_sender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command_sender);
    s << indent << "command_sequence: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.command_sequence);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_CORE_MSGS_MESSAGE_ENDEFFECTORSTATE_H
