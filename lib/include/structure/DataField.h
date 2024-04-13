#pragma once
/**
 * @file DataField.h
 * @author Jef B (https://github.com/Jef-NL)
 * @brief Generic type independent data field
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
**/

#include <iostream>
#include <variant>
#include <vector>
#include "BaseField.h"

/**
 * @brief Data field definition
 * 
 * @tparam T Data field storage type
**/
template <typename T>
class DataField : public BaseField
{
public:
    /**
     * @brief Default constructor
     * 
    **/
    explicit constexpr DataField() = default;

    /**
     * @brief Initialising constructor
     * 
    **/
    constexpr DataField(T const t) noexcept;
    constexpr DataField(T const t, BaseField::FieldDataTypes const dataType) noexcept;

    /**
     * @brief Get field value
     * 
     * @return T Templated type
    **/
    constexpr auto get() const noexcept -> T;

    /**
     * @brief Set field value
     * 
     * @param val Templated type
    **/
    constexpr void set(T val) noexcept;

    /**
     * @brief Templated type assignment operator
     * 
     * @param val New field value
     * @return DataField<T>* Data field instance
    **/
    // DataField<T>* operator=(T val)
    // {
    //     this->set(val);
    //     return this;
    // }

    // /**
    //  * @brief Indirect get method
    //  * 
    //  * @note This call (int value = classInstance) will not return the class instance
    //  * @param inst This instance
    //  * @return T Templated type
    // **/
    // T operator=(DataField<T>* inst)
    // {
    //     return inst->get();
    // }

private:
    /**
     * @brief Variant type validation method
     * 
     * @return true Valid data
     * @return false Non valid data
    **/
    constexpr bool valid() const noexcept;

    std::variant<std::monostate, T> _data; /**< Templated data entry */
};


/**
 * @brief Alias definitions
 * 
**/
using Int8Field = DataField<int8_t>;
using Int16Field = DataField<int16_t>;
using Int32Field = DataField<int32_t>;
using Int64Field = DataField<int64_t>;
using UInt8Field = DataField<uint8_t>;
using UInt16Field = DataField<uint16_t>;
using UInt32Field = DataField<uint32_t>;
using UInt64Field = DataField<uint64_t>;
using FloatField = DataField<float>;
using DoubleField = DataField<double>;
using StringField = DataField<std::string>;

#include "DataField.hpp"

