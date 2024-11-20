#include "Test.h"

Test::Test()
{
    Sensor tmp;
}

void Test::run()
{
    // Create entry and append
    DataField<int32_t> intItem(10, BaseField::Int32Field);
    _items.push_back(&intItem);

    // Cast test
    int32_t dummy = intItem;                                                               // Indirect cast to int32 [Allowed]
    DataField<int32_t> *dammy = *_items[0];                                                // Indirect cast to DataFiled<int32> type [Allowed]
    DataField<int8_t> *temp = *_items[0];                                                  // Cast to invalid type. Will give warning on get
    DataField<int8_t> *temper = static_cast<DataField<int8_t> *>(*_items[0]);              // Cast to invalid type. Will give warning on get
    std::cout << "raw: " << intItem.get()                                                  // Direct access via get
              << "\nCasted: " << dummy                                                     // Access to value after cast
              << "\nCasted get: " << dammy->get()                                          // Access to value after cast
              << "\n Incorrect Field Cast: " << temp->get() << "\ntemp: " << temper->get() // Invalid access (Returns 0s)
              << std::endl;

    // Second entry
    DataField<std::string> strItem("Test text", BaseField::StringField);
    std::cout << "Outp str 1 : " << std::string(strItem) << std::endl; // Initial value
    strItem = "Other Text";                                            // Assignment operator
    _items.push_back(&strItem);

    std::cout << "Outp str 2 : " << std::string(*_items[1]) << std::endl; // Cast to root type
    DataField<std::string> *outp = *_items[1];                            // Cast to base type
    std::cout << "Outp str 2 : " << outp->get() << std::endl;
    outp->set("Heyyaa"); // Update
    std::cout << "Outp str 3 : " << outp->get() << std::endl;
}
