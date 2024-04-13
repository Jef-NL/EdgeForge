#pragma once
/**
 * @file BaseField.h
 * @author Jef B (https://github.com/Jef-NL)
 * @brief Base data field type
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
**/
#include <iostream>

template <typename T>
class DataField;

/**
 * @brief Base handling field object type
 * 
**/
class BaseField
{
public:
    /**
     * @brief Data type definition
     * 
    **/
    enum FieldDataTypes
    {
        None = 0x0,
        Int8Field,
        Int16Field,
        Int32Field,
        Int64Field,
        UInt8Field,
        UInt16Field,
        UInt32Field,
        UInt64Field,
        FloatField,
        DoubleField,
        StringField,
    };

    /**
     * @brief Type cast
     * 
     * @return int8_t 
    **/
    operator DataField<int8_t>*();
    operator int8_t();


    /**
     * @brief Type cast
     * 
     * @return int16_t 
    **/
    operator DataField<int16_t>*();
    operator int16_t();

    /**
     * @brief Type cast
     * 
     * @return int32_t 
    **/
    operator DataField<int32_t>*();
    operator int32_t();

    /**
     * @brief Type cast
     * 
     * @return int64_t 
    **/
    operator DataField<int64_t>*();
    operator int64_t();

    /**
     * @brief Type cast
     * 
     * @return uint8_t 
    **/
    operator DataField<uint8_t>*();
    operator uint8_t();

    /**
     * @brief Type cast
     * 
     * @return uint16_t 
    **/
    operator DataField<uint16_t>*();
    operator uint16_t();

    /**
     * @brief Type cast
     * 
     * @return uint32_t 
    **/
    operator DataField<uint32_t>*();
    operator uint32_t();

    /**
     * @brief Type cast
     * 
     * @return uint64_t 
    **/
    operator DataField<uint64_t>*();
    operator uint64_t();

    /**
     * @brief Type cast
     * 
     * @return float 
    **/
    operator DataField<float>*();
    operator float();

    /**
     * @brief Type cast
     * 
     * @return double 
    **/
    operator DataField<double>*();
    operator double();

    /**
     * @brief Type cast
     * 
     * @return std::string 
    **/
    operator DataField<std::string>*();
    operator std::string();

    /**
     * @brief Destroy the Base Field object
     * 
    **/
    virtual ~BaseField() = default;
protected:
    /**
     * @brief Construct a new Base Field object
     * 
    **/
    BaseField();

    /**
     * @brief Construct a new Base Field object with type checking
     * 
     * @param type Type definition
    **/
    BaseField(FieldDataTypes type);


    FieldDataTypes _type; /**< Data type of derived class */
};