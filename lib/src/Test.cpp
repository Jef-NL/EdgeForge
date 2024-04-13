#include "Test.h"

Test::Test()
{
    Sensor tmp;

    Int32Field intItem(20, BaseField::Int32Field);
    StringField strItem("Test text", BaseField::StringField);

    std::cout << std::string(strItem) << std::endl;
    // strItem = " Other Text";

    _items.push_back(&intItem);
    _items.push_back(&strItem);
    

    // auto val = int(_items[0]);
    // intItem = 80;
    auto val = uint64_t(*_items[0]);
    std::cout << val << std::endl;

    // intItem = 82;
    int temp = intItem;

    std::cout << temp << std::string(*_items[1]) << std::endl;

}



