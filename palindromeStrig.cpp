#include <iostream>

bool isPalindrome(char *str)
{
    int countValue = 0;

    while (*str++)
    {
        ++countValue;
    }

    for (int i = 0, j = countValue - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::boolalpha;
    std::cout << isPalindrome("AABBBAA") << std::endl;
    std::cout << isPalindrome("3&&3") << std::endl;
    std::cout << isPalindrome("yyyyymmmmmmmmyyyyy") << std::endl;
    std::cout << isPalindrome("hhhhhhhhmhhhhhhhh") << std::endl;

    return 0;
}