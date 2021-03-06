// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from my_client_interface.djinni

#include "my_client_interface.hpp"  // my header
#include "djinni/jni/Marshal.hpp"

namespace djinni_generated {

MyClientInterface::MyClientInterface() : ::djinni::JniInterface<::MyClientInterface, MyClientInterface>() {}

MyClientInterface::~MyClientInterface() = default;

MyClientInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

MyClientInterface::JavaProxy::~JavaProxy() = default;

bool MyClientInterface::JavaProxy::log_string(const std::string & c_str) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::MyClientInterface>::get();
    auto jret = jniEnv->CallBooleanMethod(Handle::get().get(), data.method_logString,
                                          ::djinni::get(::djinni::String::fromCpp(jniEnv, c_str)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::Bool::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
