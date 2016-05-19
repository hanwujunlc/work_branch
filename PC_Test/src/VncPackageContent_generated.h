// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_VNCPACKAGECONTENT_H_
#define FLATBUFFERS_GENERATED_VNCPACKAGECONTENT_H_

#include "flatbuffers/flatbuffers.h"



struct VncPackageContent;

struct VncPackageContent FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_TARGET = 4,
    VT_SOURCE = 6,
    VT_TAG = 8,
    VT_COMMAND = 10,
    VT_VERSION = 12,
    VT_PARAMTYPE = 14,
    VT_BUFPARAM = 16,
  };
  uint32_t target() const { return GetField<uint32_t>(VT_TARGET, 0); }
  uint32_t source() const { return GetField<uint32_t>(VT_SOURCE, 0); }
  uint32_t tag() const { return GetField<uint32_t>(VT_TAG, 0); }
  uint32_t command() const { return GetField<uint32_t>(VT_COMMAND, 0); }
  uint32_t version() const { return GetField<uint32_t>(VT_VERSION, 1); }
  uint32_t paramType() const { return GetField<uint32_t>(VT_PARAMTYPE, 0); }
  const flatbuffers::Vector<int8_t> *bufParam() const { return GetPointer<const flatbuffers::Vector<int8_t> *>(VT_BUFPARAM); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_TARGET) &&
           VerifyField<uint32_t>(verifier, VT_SOURCE) &&
           VerifyField<uint32_t>(verifier, VT_TAG) &&
           VerifyField<uint32_t>(verifier, VT_COMMAND) &&
           VerifyField<uint32_t>(verifier, VT_VERSION) &&
           VerifyField<uint32_t>(verifier, VT_PARAMTYPE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_BUFPARAM) &&
           verifier.Verify(bufParam()) &&
           verifier.EndTable();
  }
};

struct VncPackageContentBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_target(uint32_t target) { fbb_.AddElement<uint32_t>(VncPackageContent::VT_TARGET, target, 0); }
  void add_source(uint32_t source) { fbb_.AddElement<uint32_t>(VncPackageContent::VT_SOURCE, source, 0); }
  void add_tag(uint32_t tag) { fbb_.AddElement<uint32_t>(VncPackageContent::VT_TAG, tag, 0); }
  void add_command(uint32_t command) { fbb_.AddElement<uint32_t>(VncPackageContent::VT_COMMAND, command, 0); }
  void add_version(uint32_t version) { fbb_.AddElement<uint32_t>(VncPackageContent::VT_VERSION, version, 1); }
  void add_paramType(uint32_t paramType) { fbb_.AddElement<uint32_t>(VncPackageContent::VT_PARAMTYPE, paramType, 0); }
  void add_bufParam(flatbuffers::Offset<flatbuffers::Vector<int8_t>> bufParam) { fbb_.AddOffset(VncPackageContent::VT_BUFPARAM, bufParam); }
  VncPackageContentBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  VncPackageContentBuilder &operator=(const VncPackageContentBuilder &);
  flatbuffers::Offset<VncPackageContent> Finish() {
    auto o = flatbuffers::Offset<VncPackageContent>(fbb_.EndTable(start_, 7));
    return o;
  }
};

inline flatbuffers::Offset<VncPackageContent> CreateVncPackageContent(flatbuffers::FlatBufferBuilder &_fbb,
   uint32_t target = 0,
   uint32_t source = 0,
   uint32_t tag = 0,
   uint32_t command = 0,
   uint32_t version = 1,
   uint32_t paramType = 0,
   flatbuffers::Offset<flatbuffers::Vector<int8_t>> bufParam = 0) {
  VncPackageContentBuilder builder_(_fbb);
  builder_.add_bufParam(bufParam);
  builder_.add_paramType(paramType);
  builder_.add_version(version);
  builder_.add_command(command);
  builder_.add_tag(tag);
  builder_.add_source(source);
  builder_.add_target(target);
  return builder_.Finish();
}

inline const VncPackageContent *GetVncPackageContent(const void *buf) { return flatbuffers::GetRoot<VncPackageContent>(buf); }

inline bool VerifyVncPackageContentBuffer(flatbuffers::Verifier &verifier) { return verifier.VerifyBuffer<VncPackageContent>(); }

inline void FinishVncPackageContentBuffer(flatbuffers::FlatBufferBuilder &fbb, flatbuffers::Offset<VncPackageContent> root) { fbb.Finish(root); }


#endif  // FLATBUFFERS_GENERATED_VNCPACKAGECONTENT_H_