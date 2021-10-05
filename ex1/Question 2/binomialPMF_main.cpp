#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "binomialPMF.h"

/**
 * @brief struct for texting functions does work correctly
 * 
 */
struct testValues
{
    int n;
    double p;
    int k;
    double expected;
};

/**
 * @brief comparing two double values. since im lazy to adjust nums, i simply translated into string then compared.
 * 
 * @param a 
 * @param b 
 * @return true 
 * @return false 
 */
bool compareTwoDoubles(double a, double b)
{
    char expected_buff[50];
    char _returned_value_buff[50];

    snprintf(expected_buff, 50, "%f", a);
    snprintf(_returned_value_buff, 50, "%f", b);

    return strcmp(expected_buff, _returned_value_buff) == 0;
}

/**
 * @brief testing environment
 * 
 * @return int 
 */
int main(void)
{

    const int tests = 5;
    struct testValues test_datas[tests] = {
        {5, 0.25, 1, 0.395508},
        {5, 0.25, 2, 0.263672},
        {25, 0.25, 2, 0.0250848},
        {25, 0.25, 10, 0.0416584},
        {25, 0.25, 15, 0.000171434},
    };

    for (int i = 0; i < tests; i++)
    {

        double _returned_value = binomialPMF(test_datas[i].n, test_datas[i].p, test_datas[i].k);

        std::cout << "n: " << test_datas[i].n << std::endl;
        std::cout << "p: " << test_datas[i].p << std::endl;
        std::cout << "k: " << test_datas[i].k << std::endl;
        std::cout << "expected_value: " << test_datas[i].expected << std::endl;
        std::cout << "return value from binomialPMF: " << _returned_value << std::endl;

        // some error handling

        if (compareTwoDoubles(test_datas[i].expected, _returned_value))
        {
            std::cout << "-! test passed" << std::endl
                      << std::endl;
        }
        else
        {
            std::cout << "-! test failed. (expected_value != binomialPMF)" << std::endl
                      << std::endl;
        }
    }

    return 0;
}