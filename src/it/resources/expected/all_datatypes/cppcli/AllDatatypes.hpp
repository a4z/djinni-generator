// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from all_datatypes.djinni

#pragma once

#include "../cpp-headers/all_datatypes.hpp"
#include "EnumData.hpp"

[System::Serializable]
public ref class AllDatatypes {
public:

    property bool BooleanData
    {
        bool get();
    }

    property char Integer8Data
    {
        char get();
    }

    property short Integer16Data
    {
        short get();
    }

    property int Integer32Data
    {
        int get();
    }

    property __int64 Integer64Data
    {
        __int64 get();
    }

    property float Float32Data
    {
        float get();
    }

    property double Float64Data
    {
        double get();
    }

    property System::String^ StringData
    {
        System::String^ get();
    }

    property array<System::Byte>^ BinaryData
    {
        array<System::Byte>^ get();
    }

    property System::DateTime DateData
    {
        System::DateTime get();
    }

    property System::Collections::Generic::List<bool>^ ListData
    {
        System::Collections::Generic::List<bool>^ get();
    }

    property System::Collections::Generic::HashSet<bool>^ SetData
    {
        System::Collections::Generic::HashSet<bool>^ get();
    }

    property System::Collections::Generic::Dictionary<char, bool>^ MapData
    {
        System::Collections::Generic::Dictionary<char, bool>^ get();
    }

    property System::Nullable<bool> OptionalData
    {
        System::Nullable<bool> get();
    }

    property ::EnumData EnumData
    {
        ::EnumData get();
    }

    AllDatatypes(bool booleanData,
                 char integer8Data,
                 short integer16Data,
                 int integer32Data,
                 __int64 integer64Data,
                 float float32Data,
                 double float64Data,
                 System::String^ stringData,
                 array<System::Byte>^ binaryData,
                 System::DateTime dateData,
                 System::Collections::Generic::List<bool>^ listData,
                 System::Collections::Generic::HashSet<bool>^ setData,
                 System::Collections::Generic::Dictionary<char, bool>^ mapData,
                 System::Nullable<bool> optionalData,
                 ::EnumData enumData);

    System::String^ ToString() override;

internal:
    using CppType = ::AllDatatypes;
    using CsType = AllDatatypes^;

    static CppType ToCpp(CsType cs);
    static CsType FromCpp(const CppType& cpp);

private:
    bool _booleanData;
    char _integer8Data;
    short _integer16Data;
    int _integer32Data;
    __int64 _integer64Data;
    float _float32Data;
    double _float64Data;
    System::String^ _stringData;
    array<System::Byte>^ _binaryData;
    System::DateTime _dateData;
    System::Collections::Generic::List<bool>^ _listData;
    System::Collections::Generic::HashSet<bool>^ _setData;
    System::Collections::Generic::Dictionary<char, bool>^ _mapData;
    System::Nullable<bool> _optionalData;
    ::EnumData _enumData;
};
