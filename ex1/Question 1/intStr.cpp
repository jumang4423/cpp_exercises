#include <stdlib.h>

/**
 * @brief Get the Digit len
 * 
 * @param num 
 * @return int 
 */
int getDigit(int num)
{
    int digit = 0;

    while (num != 0)
    {
        num /= 10;
        digit++;
    }

    return digit;
}

/**
 * @brief Get the string Len
 * 
 * @param str 
 * @return int 
 */
int getLen(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len++;
    }

    return len;
}

/**
 * @brief put string minus 
 * 
 * @param str 
 * @param len 
 * @return char* 
 */
char *putMinus(char *str, int len)
{
    char _buf = str[0];
    str[0] = '-';

    for (int i = 1; i < len + 1; i++)
    {
        char swap = str[i];
        str[i] = _buf;
        _buf = swap;
    }

    return str;
}

/**
 * @brief convert int to string
 * 
 * @param num 
 * @return char* 
 */
char *intToStr(int num)
{
    char *str;
    int _num = num < 0 ? -num : num;
    // make char space
    str = (char *)malloc(sizeof(char) * (getDigit(num) + 2));

    // actual translation
    for (int i = 0; i < getDigit(num); i++)
    {
        str[getDigit(num) - i - 1] = (_num % 10) + '0';
        _num /= 10;
    }

    // put null
    str[getDigit(num)] = '\0';

    if (num < 0)
    {
        putMinus(str, getDigit(num));
    }

    return str;
}

/**
 * @brief convert string to int
 * 
 * @param str 
 * @return int 
 */
int strToInt(char *str)
{
    int num = 0;
    int ten_times = 1;
    int len = getLen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[len - i - 1] == '-')
        {
            num *= -1;
            continue;
        }

        num += (str[len - i - 1] - '0') * ten_times;
        ten_times *= 10;
    }

    return num;
}