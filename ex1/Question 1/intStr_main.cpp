#include <iostream>
#include "intStr.h"

int main(void) {

    int test_int = 1270174;
    char* casted_string = intToStr(test_int);
    int casted_int = strToInt(casted_string);

    std::cout << "testing value: " << test_int << std::endl;
    std::cout << "casted string value using intToStr: " << casted_string << std::endl;
    std::cout << "casted int value using strToInt: " << casted_int << std::endl;

    // some error handling
    if (test_int == casted_int) {
        std::cout << "-! test passed" << std::endl;
    } else {
        std::cout << "-! test failed. (test_int != casted_int)" << std::endl;
    }

}