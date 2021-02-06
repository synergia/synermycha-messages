/*
 *  Copyright (C) 2020 Embedded AMS B.V. - All Rights Reserved
 *
 *  This file is part of Embedded Proto.
 *
 *  Embedded Proto is open source software: you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation, version 3 of the license.
 *
 *  Embedded Proto  is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Embedded Proto. If not, see <https://www.gnu.org/licenses/>.
 *
 *  For commercial and closed source application please visit:
 *  <https://EmbeddedProto.com/license/>.
 *
 *  Embedded AMS B.V.
 *  Info:
 *    info at EmbeddedProto dot com
 *
 *  Postal address:
 *    Johan Huizingalaan 763a
 *    1066 VH, Amsterdam
 *    the Netherlands
 */

// This file is generated. Please do not edit!
#ifndef _PIDSETRESP_H_
#define _PIDSETRESP_H_

#include <cstdint>
#include <MessageInterface.h>
#include <WireFormatter.h>
#include <Fields.h>
#include <MessageSizeCalculator.h>
#include <ReadBufferSection.h>
#include <RepeatedFieldFixedSize.h>
#include <FieldStringBytes.h>
#include <Errors.h>

// Include external proto definitions


class PidSetResp final: public ::EmbeddedProto::MessageInterface
{
  public:
    PidSetResp() :
        requestId_(0U),
        rogerThat_(false)
    {

    };
    ~PidSetResp() override = default;

    enum class id
    {
      NOT_SET = 0,
      REQUESTID = 1,
      ROGERTHAT = 2
    };

    PidSetResp& operator=(const PidSetResp& rhs)
    {
      set_requestId(rhs.get_requestId());
      set_rogerThat(rhs.get_rogerThat());
      return *this;
    }

    inline void clear_requestId() { requestId_.clear(); }
    inline void set_requestId(const EmbeddedProto::uint32& value) { requestId_ = value; }
    inline void set_requestId(const EmbeddedProto::uint32&& value) { requestId_ = value; }
    inline EmbeddedProto::uint32& mutable_requestId() { return requestId_; }
    inline const EmbeddedProto::uint32& get_requestId() const { return requestId_; }
    inline EmbeddedProto::uint32::FIELD_TYPE requestId() const { return requestId_.get(); }

    inline void clear_rogerThat() { rogerThat_.clear(); }
    inline void set_rogerThat(const EmbeddedProto::boolean& value) { rogerThat_ = value; }
    inline void set_rogerThat(const EmbeddedProto::boolean&& value) { rogerThat_ = value; }
    inline EmbeddedProto::boolean& mutable_rogerThat() { return rogerThat_; }
    inline const EmbeddedProto::boolean& get_rogerThat() const { return rogerThat_; }
    inline EmbeddedProto::boolean::FIELD_TYPE rogerThat() const { return rogerThat_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const final
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != requestId_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = requestId_.serialize_with_id(static_cast<uint32_t>(id::REQUESTID), buffer);
      }

      if((false != rogerThat_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = rogerThat_.serialize_with_id(static_cast<uint32_t>(id::ROGERTHAT), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) final
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type;
      uint32_t id_number = 0;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        switch(id_number)
        {
          case static_cast<uint32_t>(id::REQUESTID):
          {
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              return_value = requestId_.deserialize(buffer);
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;
          }

          case static_cast<uint32_t>(id::ROGERTHAT):
          {
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              return_value = rogerThat_.deserialize(buffer);
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;
          }

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
            // Read the next tag.
            tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() final
    {
      clear_requestId();
      clear_rogerThat();

    }

    private:

      EmbeddedProto::uint32 requestId_;
      EmbeddedProto::boolean rogerThat_;

};

#endif // _PIDSETRESP_H_