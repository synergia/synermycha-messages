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
#ifndef _PIDSETREQ_H_
#define _PIDSETREQ_H_

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


class PidSetReq final: public ::EmbeddedProto::MessageInterface
{
  public:
    PidSetReq() :
        requestId_(0U),
        p_(0.0),
        i_(0.0),
        d_(0.0)
    {

    };
    ~PidSetReq() override = default;

    enum class id
    {
      NOT_SET = 0,
      REQUESTID = 1,
      P = 2,
      I = 3,
      D = 4
    };

    PidSetReq& operator=(const PidSetReq& rhs)
    {
      set_requestId(rhs.get_requestId());
      set_p(rhs.get_p());
      set_i(rhs.get_i());
      set_d(rhs.get_d());
      return *this;
    }

    inline void clear_requestId() { requestId_.clear(); }
    inline void set_requestId(const EmbeddedProto::uint32& value) { requestId_ = value; }
    inline void set_requestId(const EmbeddedProto::uint32&& value) { requestId_ = value; }
    inline EmbeddedProto::uint32& mutable_requestId() { return requestId_; }
    inline const EmbeddedProto::uint32& get_requestId() const { return requestId_; }
    inline EmbeddedProto::uint32::FIELD_TYPE requestId() const { return requestId_.get(); }

    inline void clear_p() { p_.clear(); }
    inline void set_p(const EmbeddedProto::doublefixed& value) { p_ = value; }
    inline void set_p(const EmbeddedProto::doublefixed&& value) { p_ = value; }
    inline EmbeddedProto::doublefixed& mutable_p() { return p_; }
    inline const EmbeddedProto::doublefixed& get_p() const { return p_; }
    inline EmbeddedProto::doublefixed::FIELD_TYPE p() const { return p_.get(); }

    inline void clear_i() { i_.clear(); }
    inline void set_i(const EmbeddedProto::doublefixed& value) { i_ = value; }
    inline void set_i(const EmbeddedProto::doublefixed&& value) { i_ = value; }
    inline EmbeddedProto::doublefixed& mutable_i() { return i_; }
    inline const EmbeddedProto::doublefixed& get_i() const { return i_; }
    inline EmbeddedProto::doublefixed::FIELD_TYPE i() const { return i_.get(); }

    inline void clear_d() { d_.clear(); }
    inline void set_d(const EmbeddedProto::doublefixed& value) { d_ = value; }
    inline void set_d(const EmbeddedProto::doublefixed&& value) { d_ = value; }
    inline EmbeddedProto::doublefixed& mutable_d() { return d_; }
    inline const EmbeddedProto::doublefixed& get_d() const { return d_; }
    inline EmbeddedProto::doublefixed::FIELD_TYPE d() const { return d_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const final
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != requestId_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = requestId_.serialize_with_id(static_cast<uint32_t>(id::REQUESTID), buffer);
      }

      if((0.0 != p_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = p_.serialize_with_id(static_cast<uint32_t>(id::P), buffer);
      }

      if((0.0 != i_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = i_.serialize_with_id(static_cast<uint32_t>(id::I), buffer);
      }

      if((0.0 != d_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = d_.serialize_with_id(static_cast<uint32_t>(id::D), buffer);
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

          case static_cast<uint32_t>(id::P):
          {
            if(::EmbeddedProto::WireFormatter::WireType::FIXED64 == wire_type)
            {
              return_value = p_.deserialize(buffer);
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;
          }

          case static_cast<uint32_t>(id::I):
          {
            if(::EmbeddedProto::WireFormatter::WireType::FIXED64 == wire_type)
            {
              return_value = i_.deserialize(buffer);
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
            break;
          }

          case static_cast<uint32_t>(id::D):
          {
            if(::EmbeddedProto::WireFormatter::WireType::FIXED64 == wire_type)
            {
              return_value = d_.deserialize(buffer);
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
      clear_p();
      clear_i();
      clear_d();

    }

    private:

      EmbeddedProto::uint32 requestId_;
      EmbeddedProto::doublefixed p_;
      EmbeddedProto::doublefixed i_;
      EmbeddedProto::doublefixed d_;

};

#endif // _PIDSETREQ_H_