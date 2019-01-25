// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file MultiArrayDimension.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _STD_MSGS_MULTI_ARRAY_DIMENSION_HPP_
#define _STD_MSGS_MULTI_ARRAY_DIMENSION_HPP_


#include <ros2/topic.hpp>


namespace std_msgs {

class MultiArrayDimension : public ros2::Topic<MultiArrayDimension>
{
public:
  char label[255];
  uint32_t size;
  uint32_t stride;

  MultiArrayDimension():
    Topic("std_msgs::msg::dds_::MultiArrayDimension_", "MultiArrayDimension"),
    size(0), stride(0)
  { 
    memset(label, 0, sizeof(label));
  }


  bool serialize(void* msg_buf, const MultiArrayDimension* topic)
  {
    ucdrBuffer* writer = (ucdrBuffer*)msg_buf;
    (void) ucdr_serialize_string(writer, topic->label);
    (void) ucdr_serialize_uint32_t(writer, topic->size);
    (void) ucdr_serialize_uint32_t(writer, topic->stride);

    return !writer->error;
  }

  bool deserialize(void* msg_buf, MultiArrayDimension* topic)
  {
    ucdrBuffer* reader = (ucdrBuffer*)msg_buf;
    (void) ucdr_deserialize_string(reader, topic->label, sizeof(topic->label));
    (void) ucdr_deserialize_uint32_t(reader, &topic->size);
    (void) ucdr_deserialize_uint32_t(reader, &topic->stride);

    return !reader->error;
  }

  uint32_t size_of_topic(const MultiArrayDimension* topic, uint32_t size)
  {
    (void)(topic);

    uint32_t previousSize = size;
    size += ucdr_alignment(size, 4) + 4 + (uint32_t)(strlen(topic->label) + 1);
    size += ucdr_alignment(size, 4) + 4;
    size += ucdr_alignment(size, 4) + 4;

    return size - previousSize;
  }



};

} // namespace std_msgs


#endif // _STD_MSGS_MULTI_ARRAY_DIMENSION_HPP_
