// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from all_datatypes.djinni

#include "all_datatypes.hpp"  // my header
#include "djinni/jni/Marshal.hpp"
#include "enum_data.hpp"

namespace djinni_generated {

AllDatatypes::AllDatatypes() = default;

AllDatatypes::~AllDatatypes() = default;

auto AllDatatypes::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<AllDatatypes>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::Bool::fromCpp(jniEnv, c.booleanData)),
                                                           ::djinni::get(::djinni::I8::fromCpp(jniEnv, c.integer8Data)),
                                                           ::djinni::get(::djinni::I16::fromCpp(jniEnv, c.integer16Data)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.integer32Data)),
                                                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c.integer64Data)),
                                                           ::djinni::get(::djinni::F32::fromCpp(jniEnv, c.float32Data)),
                                                           ::djinni::get(::djinni::F64::fromCpp(jniEnv, c.float64Data)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.stringData)),
                                                           ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c.binaryData)),
                                                           ::djinni::get(::djinni::Date::fromCpp(jniEnv, c.dateData)),
                                                           ::djinni::get(::djinni::List<::djinni::Bool>::fromCpp(jniEnv, c.listData)),
                                                           ::djinni::get(::djinni::Set<::djinni::Bool>::fromCpp(jniEnv, c.setData)),
                                                           ::djinni::get(::djinni::Map<::djinni::I8, ::djinni::Bool>::fromCpp(jniEnv, c.mapData)),
                                                           ::djinni::get(::djinni::Optional<std::optional, ::djinni::Bool>::fromCpp(jniEnv, c.optionalData)),
                                                           ::djinni::get(::djinni_generated::EnumData::fromCpp(jniEnv, c.enum_data)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto AllDatatypes::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 16);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<AllDatatypes>::get();
    return {::djinni::Bool::toCpp(jniEnv, jniEnv->GetBooleanField(j, data.field_booleanData)),
            ::djinni::I8::toCpp(jniEnv, jniEnv->GetByteField(j, data.field_integer8Data)),
            ::djinni::I16::toCpp(jniEnv, jniEnv->GetShortField(j, data.field_integer16Data)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_integer32Data)),
            ::djinni::I64::toCpp(jniEnv, jniEnv->GetLongField(j, data.field_integer64Data)),
            ::djinni::F32::toCpp(jniEnv, jniEnv->GetFloatField(j, data.field_float32Data)),
            ::djinni::F64::toCpp(jniEnv, jniEnv->GetDoubleField(j, data.field_float64Data)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_stringData)),
            ::djinni::Binary::toCpp(jniEnv, (jbyteArray)jniEnv->GetObjectField(j, data.field_binaryData)),
            ::djinni::Date::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_dateData)),
            ::djinni::List<::djinni::Bool>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_listData)),
            ::djinni::Set<::djinni::Bool>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_setData)),
            ::djinni::Map<::djinni::I8, ::djinni::Bool>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mapData)),
            ::djinni::Optional<std::optional, ::djinni::Bool>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_optionalData)),
            ::djinni_generated::EnumData::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_enumData))};
}

}  // namespace djinni_generated
