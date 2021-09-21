// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from all_datatypes.djinni

#include <iostream> // for debugging
#include <cassert>
#include "djinni/cwrapper/wrapper_marshal.hpp"
#include "../cpp-headers/all_datatypes.hpp"

#include "dh__all_datatypes.hpp"
#include "dh__enum_data.hpp"
#include "dh__list_bool.hpp"
#include "dh__map_int8_t_bool.hpp"
#include "dh__set_bool.hpp"
#include "enum_data.hpp"
#include <chrono>
#include <optional>
#include <vector>

static void(*s_callback_map_int8_t_bool___delete)(DjinniObjectHandle *);
void map_int8_t_bool_add_callback___delete(void(* ptr)(DjinniObjectHandle *)) {
    s_callback_map_int8_t_bool___delete = ptr;
}

void map_int8_t_bool___delete(DjinniObjectHandle * drh) {
    s_callback_map_int8_t_bool___delete(drh);
}
void optional_map_int8_t_bool___delete(DjinniOptionalObjectHandle *  drh) {
    s_callback_map_int8_t_bool___delete((DjinniObjectHandle *) drh);
}
static bool ( * s_callback_map_int8_t_bool__get_value)(DjinniObjectHandle *, int8_t);

void map_int8_t_bool_add_callback__get_value(bool( * ptr)(DjinniObjectHandle *, int8_t)) {
    s_callback_map_int8_t_bool__get_value = ptr;
}

static size_t ( * s_callback_map_int8_t_bool__get_size)(DjinniObjectHandle *);

void map_int8_t_bool_add_callback__get_size(size_t( * ptr)(DjinniObjectHandle *)) {
    s_callback_map_int8_t_bool__get_size = ptr;
}

static DjinniObjectHandle * ( * s_callback_map_int8_t_bool__create)(void);

void map_int8_t_bool_add_callback__create(DjinniObjectHandle *( * ptr)(void)) {
    s_callback_map_int8_t_bool__create = ptr;
}

static void ( * s_callback_map_int8_t_bool__add)(DjinniObjectHandle *, int8_t, bool);

void map_int8_t_bool_add_callback__add(void( * ptr)(DjinniObjectHandle *, int8_t, bool)) {
    s_callback_map_int8_t_bool__add = ptr;
}

static int8_t ( * s_callback_map_int8_t_bool__next)(DjinniObjectHandle *);

void map_int8_t_bool_add_callback__next(int8_t( * ptr)(DjinniObjectHandle *)) {
    s_callback_map_int8_t_bool__next = ptr;
}

djinni::Handle<DjinniObjectHandle> DjinniMapInt8TBool::fromCpp(const std::unordered_map<int8_t, bool> & dc) {
    djinni::Handle<DjinniObjectHandle> _handle(s_callback_map_int8_t_bool__create(), & map_int8_t_bool___delete);
    for (const auto & it : dc) {
        s_callback_map_int8_t_bool__add(_handle.get(), it.first, it.second);
    }

    return _handle;
}

std::unordered_map<int8_t, bool> DjinniMapInt8TBool::toCpp(djinni::Handle<DjinniObjectHandle> dh) {
    std::unordered_map<int8_t, bool>_ret;
    size_t size = s_callback_map_int8_t_bool__get_size(dh.get());

    for (int i = 0; i < size; i++) {
        auto _key_c = s_callback_map_int8_t_bool__next(dh.get()); // key that would potentially be surrounded by unique pointer
        auto _val = s_callback_map_int8_t_bool__get_value(dh.get(), _key_c);

        auto _key = _key_c;
        _ret.emplace(std::move(_key), std::move(_val));
    }

    return _ret;
}

djinni::Handle<DjinniOptionalObjectHandle> DjinniMapInt8TBool::fromCpp(std::optional<std::unordered_map<int8_t, bool>> dc) {
    if (!dc) {
        return nullptr;
    }
    return djinni::optionals::toOptionalHandle(DjinniMapInt8TBool::fromCpp(std::move(* dc)), optional_map_int8_t_bool___delete);
}

std::optional<std::unordered_map<int8_t, bool>>DjinniMapInt8TBool::toCpp(djinni::Handle<DjinniOptionalObjectHandle> dh) {
     if (dh) {
        return std::optional<std::unordered_map<int8_t, bool>>(DjinniMapInt8TBool::toCpp(djinni::optionals::fromOptionalHandle(std::move(dh), map_int8_t_bool___delete)));
    }
    return {};
}

