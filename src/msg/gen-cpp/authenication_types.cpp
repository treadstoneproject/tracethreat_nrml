/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "authenication_types.h"

#include <algorithm>

namespace authentication {

const char* User::ascii_fingerprint = "07A9615F837F7D0A952B595DD3020972";
const uint8_t User::binary_fingerprint[16] = {0x07,0xA9,0x61,0x5F,0x83,0x7F,0x7D,0x0A,0x95,0x2B,0x59,0x5D,0xD3,0x02,0x09,0x72};

uint32_t User::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userName);
          this->__isset.userName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->password);
          this->__isset.password = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t User::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("User");

  xfer += oprot->writeFieldBegin("userName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->userName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("password", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->password);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(User &a, User &b) {
  using ::std::swap;
  swap(a.userName, b.userName);
  swap(a.password, b.password);
  swap(a.__isset, b.__isset);
}

const char* MessageTTMAT::ascii_fingerprint = "C93D890311F28844166CF6E571EB3AC2";
const uint8_t MessageTTMAT::binary_fingerprint[16] = {0xC9,0x3D,0x89,0x03,0x11,0xF2,0x88,0x44,0x16,0x6C,0xF6,0xE5,0x71,0xEB,0x3A,0xC2};

uint32_t MessageTTMAT::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->subject);
          this->__isset.subject = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->detail);
          this->__isset.detail = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->status);
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->date);
          this->__isset.date = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MessageTTMAT::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MessageTTMAT");

  xfer += oprot->writeFieldBegin("subject", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->subject);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("detail", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->detail);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("date", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->date);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageTTMAT &a, MessageTTMAT &b) {
  using ::std::swap;
  swap(a.subject, b.subject);
  swap(a.detail, b.detail);
  swap(a.status, b.status);
  swap(a.date, b.date);
  swap(a.__isset, b.__isset);
}

const char* MailboxTTMAT::ascii_fingerprint = "8A4855A664E893C7EC67EDE22A049242";
const uint8_t MailboxTTMAT::binary_fingerprint[16] = {0x8A,0x48,0x55,0xA6,0x64,0xE8,0x93,0xC7,0xEC,0x67,0xED,0xE2,0x2A,0x04,0x92,0x42};

uint32_t MailboxTTMAT::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->user.read(iprot);
          this->__isset.user = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->messageTTMAT.clear();
            uint32_t _size0;
            ::apache::thrift::protocol::TType _etype3;
            xfer += iprot->readListBegin(_etype3, _size0);
            this->messageTTMAT.resize(_size0);
            uint32_t _i4;
            for (_i4 = 0; _i4 < _size0; ++_i4)
            {
              xfer += this->messageTTMAT[_i4].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.messageTTMAT = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MailboxTTMAT::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("MailboxTTMAT");

  xfer += oprot->writeFieldBegin("user", ::apache::thrift::protocol::T_STRUCT, 1);
  xfer += this->user.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("messageTTMAT", ::apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->messageTTMAT.size()));
    std::vector<MessageTTMAT> ::const_iterator _iter5;
    for (_iter5 = this->messageTTMAT.begin(); _iter5 != this->messageTTMAT.end(); ++_iter5)
    {
      xfer += (*_iter5).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MailboxTTMAT &a, MailboxTTMAT &b) {
  using ::std::swap;
  swap(a.user, b.user);
  swap(a.messageTTMAT, b.messageTTMAT);
  swap(a.__isset, b.__isset);
}

const char* InvalidOperation::ascii_fingerprint = "3F5FC93B338687BC7235B1AB103F47B3";
const uint8_t InvalidOperation::binary_fingerprint[16] = {0x3F,0x5F,0xC9,0x3B,0x33,0x86,0x87,0xBC,0x72,0x35,0xB1,0xAB,0x10,0x3F,0x47,0xB3};

uint32_t InvalidOperation::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->what);
          this->__isset.what = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->why);
          this->__isset.why = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidOperation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("InvalidOperation");

  xfer += oprot->writeFieldBegin("what", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->what);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("why", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->why);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidOperation &a, InvalidOperation &b) {
  using ::std::swap;
  swap(a.what, b.what);
  swap(a.why, b.why);
  swap(a.__isset, b.__isset);
}

} // namespace
