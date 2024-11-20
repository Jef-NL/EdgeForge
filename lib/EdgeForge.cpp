/**
 * @file EdgeForge.cpp
 * @author Jef B (https://github.com/Jef-NL)
 * @brief Main library implementation
 * @version 0.1
 * @date 2024-04-07
 *
 * @copyright Copyright (c) 2024
 *
 **/
#include "EdgeForge.h"
#include "include/Test.h"

EdgeForge::EdgeForge()
{
    // std::cout << "Constructor" << std::endl;
}

void EdgeForge::print()
{
    Test tester;
    tester.run();
}
