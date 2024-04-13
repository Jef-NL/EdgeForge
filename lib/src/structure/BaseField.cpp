#include "BaseField.h"
#include "DataField.h"

//! This check is never called. Casting does not run via these operators?!??
#define CASTING_WARN(dataType) if (this->_type != dataType) std::cout << "WARNING Casting type mismatch. Possible loss of data\n";

BaseField::operator DataField<int8_t>*()
{
    CASTING_WARN(BaseField::Int8Field);
    return dynamic_cast<DataField<int8_t>*>(this);
}

BaseField::operator int8_t()
{
    return ((DataField<int8_t>*)this)->get();
}

BaseField::operator DataField<int16_t>*()
{
    CASTING_WARN(BaseField::Int16Field);
    return dynamic_cast<DataField<int16_t>*>(this);
}

BaseField::operator int16_t()
{
    return ((DataField<int16_t>*)this)->get();
}

BaseField::operator DataField<int32_t>*()
{
    CASTING_WARN(BaseField::Int32Field);
    return dynamic_cast<DataField<int32_t>*>(this);
}

BaseField::operator int32_t()
{
    return ((DataField<int32_t>*)this)->get();
}

BaseField::operator DataField<int64_t>*()
{
    CASTING_WARN(BaseField::Int64Field);
    return dynamic_cast<DataField<int64_t>*>(this);
}

BaseField::operator int64_t()
{
    return ((DataField<int64_t>*)this)->get();
}

BaseField::operator DataField<uint8_t>*()
{
    CASTING_WARN(BaseField::UInt8Field);
    return dynamic_cast<DataField<uint8_t>*>(this);
}

BaseField::operator uint8_t()
{
    return ((DataField<int8_t>*)this)->get();
}

BaseField::operator DataField<uint16_t>*()
{
    CASTING_WARN(BaseField::UInt16Field);
    return dynamic_cast<DataField<uint16_t>*>(this);
}

BaseField::operator uint16_t()
{
    return ((DataField<uint16_t>*)this)->get();
}

BaseField::operator DataField<uint32_t>*()
{
    CASTING_WARN(BaseField::UInt32Field);
    return dynamic_cast<DataField<uint32_t>*>(this);
}

BaseField::operator uint32_t()
{
    return ((DataField<uint32_t>*)this)->get();
}

BaseField::operator DataField<uint64_t>*()
{
    CASTING_WARN(BaseField::UInt64Field);
    return dynamic_cast<DataField<uint64_t>*>(this);
}

BaseField::operator uint64_t()
{
    return ((DataField<uint64_t>*)this)->get();
}

BaseField::operator DataField<float>*()
{
    CASTING_WARN(BaseField::FloatField);
    return dynamic_cast<DataField<float>*>(this);
}

BaseField::operator float()
{
    return ((DataField<float>*)this)->get();
}

BaseField::operator DataField<double>*()
{
    CASTING_WARN(BaseField::DoubleField);
    return dynamic_cast<DataField<double>*>(this);
}

BaseField::operator double()
{
    return ((DataField<double>*)this)->get();
}
BaseField::operator DataField<std::string>*()
{
    CASTING_WARN(BaseField::StringField);
    return dynamic_cast<DataField<std::string>*>(this);
}

BaseField::operator std::string()
{
    return ((DataField<std::string>*)this)->get();
}

BaseField::BaseField() : _type(BaseField::None)
{
}

BaseField::BaseField(FieldDataTypes type) : _type(type)
{
}
