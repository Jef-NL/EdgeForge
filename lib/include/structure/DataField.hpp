/**
 * @file DataField.hpp
 * @author Jef B (https://github.com/Jef-NL)
 * @brief Generic type independent data field
 * @version 0.1
 * @date 2024-04-13
 * 
 * @copyright Copyright (c) 2024
 * 
**/
#include "DataField.h"

template <typename T>
inline constexpr DataField<T>::DataField(T const t) noexcept
    : DataField(t, BaseField::None)
{
}

template <typename T>
inline constexpr DataField<T>::DataField(T const t, BaseField::FieldDataTypes const dataType) noexcept
    : BaseField(dataType)
{
    this->set(t);
}

template <typename T>
inline constexpr bool DataField<T>::valid() const noexcept
{
    return std::holds_alternative<T>(_data);
}

template <typename T>
inline constexpr auto DataField<T>::get() const noexcept -> T
{
    if (this->valid())
    {
        return std::get<T>(_data);
    }

    std::cout << "Invalid data in Data field. Returning empty object." << std::endl;
    return T();
}

template <typename T>
inline constexpr void DataField<T>::set(T val) noexcept
{
    this->_data.template emplace<T>(val);
}