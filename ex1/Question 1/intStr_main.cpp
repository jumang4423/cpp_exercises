#include <iostream>
#include "intStr.h"


/**
 * @brief testing environment
 * 
 * @return int 
 */
int main(void)
{

    const int tests = 5;
    int test_datas[tests] = {1270174, 12345678, 32323232, -1234, 4423};

    for (int i = 0; i < tests; i++)
    {
        char *casted_string = intToStr(test_datas[i]);
        int casted_int = strToInt(casted_string);

        std::cout << "testing value: " << test_datas[i] << std::endl;
        std::cout << "casted string value using intToStr: " << casted_string << std::endl;
        std::cout << "casted int value using strToInt: " << casted_int << std::endl;

        // some error handling
        if (test_datas[i] == casted_int)
        {
            std::cout << "-! test passed" << std::endl
                      << std::endl;
        }
        else
        {
            std::cout << "-! test failed. (test_int != casted_int)" << std::endl
                      << std::endl;
        }
    }
}