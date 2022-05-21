// Generated by gencpp from file robot_voice/Wakebot.msg
// DO NOT EDIT!


#ifndef ROBOT_VOICE_MESSAGE_WAKEBOT_H
#define ROBOT_VOICE_MESSAGE_WAKEBOT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_voice
{
template <class ContainerAllocator>
struct Wakebot_
{
  typedef Wakebot_<ContainerAllocator> Type;

  Wakebot_()
    : name()
    , age(0)
    , sex(0)  {
    }
  Wakebot_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , age(0)
    , sex(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef uint8_t _age_type;
  _age_type age;

   typedef uint8_t _sex_type;
  _sex_type sex;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(unknown)
  #undef unknown
#endif
#if defined(_WIN32) && defined(male)
  #undef male
#endif
#if defined(_WIN32) && defined(female)
  #undef female
#endif

  enum {
    unknown = 0u,
    male = 1u,
    female = 2u,
  };


  typedef boost::shared_ptr< ::robot_voice::Wakebot_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_voice::Wakebot_<ContainerAllocator> const> ConstPtr;

}; // struct Wakebot_

typedef ::robot_voice::Wakebot_<std::allocator<void> > Wakebot;

typedef boost::shared_ptr< ::robot_voice::Wakebot > WakebotPtr;
typedef boost::shared_ptr< ::robot_voice::Wakebot const> WakebotConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_voice::Wakebot_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_voice::Wakebot_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robot_voice::Wakebot_<ContainerAllocator1> & lhs, const ::robot_voice::Wakebot_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.age == rhs.age &&
    lhs.sex == rhs.sex;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robot_voice::Wakebot_<ContainerAllocator1> & lhs, const ::robot_voice::Wakebot_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robot_voice

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robot_voice::Wakebot_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_voice::Wakebot_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_voice::Wakebot_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_voice::Wakebot_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_voice::Wakebot_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_voice::Wakebot_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_voice::Wakebot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3f7ec37d11629ec3010e27635cf22a9";
  }

  static const char* value(const ::robot_voice::Wakebot_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3f7ec37d11629ecULL;
  static const uint64_t static_value2 = 0x3010e27635cf22a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_voice::Wakebot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_voice/Wakebot";
  }

  static const char* value(const ::robot_voice::Wakebot_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_voice::Wakebot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"uint8  age\n"
"uint8  sex\n"
"\n"
"uint8 unknown = 0\n"
"uint8 male    = 1\n"
"uint8 female  = 2\n"
"\n"
;
  }

  static const char* value(const ::robot_voice::Wakebot_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_voice::Wakebot_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.age);
      stream.next(m.sex);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Wakebot_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_voice::Wakebot_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_voice::Wakebot_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "age: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.age);
    s << indent << "sex: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sex);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_VOICE_MESSAGE_WAKEBOT_H
