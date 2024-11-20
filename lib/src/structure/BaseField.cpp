#include "BaseField.h"
#include "DataField.h"

// Cast validation
#define CASTING_WARN(dataTypeRef)   \
    if (this->_type != dataTypeRef) \
        std::cout << "WARNING Casting type mismatch from " << this->strFieldDataTypes[this->_type] << " to " << this->strFieldDataTypes[dataTypeRef] << ". Possible loss of data\n";

// Type cast operator implementation define
#define TYPE_OPERATOR(dataType, dataTypeRef)         \
    BaseField::operator DataField<dataType> *()      \
    {                                                \
        CASTING_WARN(dataTypeRef);                   \
        return ((DataField<dataType> *)this);        \
    }                                                \
    BaseField::operator dataType()                   \
    {                                                \
        CASTING_WARN(dataTypeRef);                   \
        return ((DataField<dataType> *)this)->get(); \
    }

// Type cast definitions
TYPE_OPERATOR(int8_t, BaseField::Int8Field);
TYPE_OPERATOR(int16_t, BaseField::Int16Field);
TYPE_OPERATOR(int32_t, BaseField::Int32Field);
TYPE_OPERATOR(int64_t, BaseField::Int64Field);
TYPE_OPERATOR(uint8_t, BaseField::UInt8Field);
TYPE_OPERATOR(uint16_t, BaseField::UInt16Field);
TYPE_OPERATOR(uint32_t, BaseField::UInt32Field);
TYPE_OPERATOR(uint64_t, BaseField::UInt64Field);
TYPE_OPERATOR(float, BaseField::FloatField);
TYPE_OPERATOR(double, BaseField::DoubleField);
TYPE_OPERATOR(std::string, BaseField::StringField);

BaseField::BaseField() : _type(BaseField::None)
{
}

BaseField::BaseField(FieldDataTypes type) : _type(type)
{
}
