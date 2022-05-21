// Generated by gencpp from file learning_topic/Wakebot.msg
// DO NOT EDIT!


#ifndef LEARNING_TOPIC_MESSAGE_WAKEBOT_H
#define LEARNING_TOPIC_MESSAGE_WAKEBOT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace learning_topic
{
template <class ContainerAllocator>
struct Wakebot_
{
  typedef Wakebot_<ContainerAllocator> Type;

  Wakebot_()
    : wakewords()
    , dist(0)
    , dire(0)  {
    }
  Wakebot_(const ContainerAllocator& _alloc)
    : wakewords(_alloc)
    , dist(0)
    , dire(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _wakewords_type;
  _wakewords_type wakewords;

   typedef uint8_t _dist_type;
  _dist_type dist;

   typedef uint8_t _dire_type;
  _dire_type dire;





  typedef boost::shared_ptr< ::learning_topic::Wakebot_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::learning_topic::Wakebot_<ContainerAllocator> const> ConstPtr;

}; // struct Wakebot_

typedef ::learning_topic::Wakebot_<std::allocator<void> > Wakebot;

typedef boost::shared_ptr< ::learning_topic::Wakebot > WakebotPtr;
typedef boost::shared_ptr< ::learning_topic::Wakebot const> WakebotConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::learning_topic::Wakebot_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::learning_topic::Wakebot_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::learning_topic::Wakebot_<ContainerAllocator1> & lhs, const ::learning_topic::Wakebot_<ContainerAllocator2> & rhs)
{
  return lhs.wakewords == rhs.wakewords &&
    lhs.dist == rhs.dist &&
    lhs.dire == rhs.dire;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::learning_topic::Wakebot_<ContainerAllocator1> & lhs, const ::learning_topic::Wakebot_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace learning_topic

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::learning_topic::Wakebot_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::learning_topic::Wakebot_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_topic::Wakebot_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learning_topic::Wakebot_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_topic::Wakebot_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learning_topic::Wakebot_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::learning_topic::Wakebot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e878c0c5a099028e507e37a548426dec";
  }

  static const char* value(const ::learning_topic::Wakebot_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe878c0c5a099028eULL;
  static const uint64_t static_value2 = 0x507e37a548426decULL;
};

template<class ContainerAllocator>
struct DataType< ::learning_topic::Wakebot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "learning_topic/Wakebot";
  }

  static const char* value(const ::learning_topic::Wakebot_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::learning_topic::Wakebot_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string wakewords\n"
"uint8  dist\n"
"uint8  dire\n"
"\n"
;
  }

  static const char* value(const ::learning_topic::Wakebot_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::learning_topic::Wakebot_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.wakewords);
      stream.next(m.dist);
      stream.next(m.dire);
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
struct Printer< ::learning_topic::Wakebot_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::learning_topic::Wakebot_<ContainerAllocator>& v)
  {
    s << indent << "wakewords: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.wakewords);
    s << indent << "dist: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dist);
    s << indent << "dire: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dire);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEARNING_TOPIC_MESSAGE_WAKEBOT_H
