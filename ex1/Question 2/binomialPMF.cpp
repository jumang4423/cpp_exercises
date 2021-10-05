#include <stdio.h>


/**
 * @brief calculate factorial
 * 
 * @param n 
 * @return int 
 */
double factorial(double n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

/**
 * @brief return powed value
 * 
 * @param n 
 * @param exp 
 * @return int 
 */
double pow(double n, int exp)
{
    double a;

    if (exp < 0)
        return 0;

    a = 1;
    for (; exp >= 1; --exp)
    {
        a *= n;
    }

    return a;
}

/**
 * @brief literally calculate the binomial coefficient
 * 
 * @param n 
 * @param k 
 * @return double 
 */
double calc_binomial_coefficient(double n, double k)
{
    return (double)factorial(n) / ((double)factorial(k) * (double)factorial(n - k));
}

/**
 * @brief calculate binomialPMF
 * 
 * @param n 
 * @param p 
 * @param k 
 * @return double 
 */
double binomialPMF(int n, double p, int k)
{
    double q = 1.0 - p;

    return (double)(1 - p) * calc_binomial_coefficient(n - 1, k) * pow(p, k) * pow(q, n - 1 - k) + p * calc_binomial_coefficient(n - 1, k - 1) * pow(p, k - 1) * pow(q, n - k);
}