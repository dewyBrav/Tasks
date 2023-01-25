#include <iostream>
#include <string.h>

bool isPalindrome(int value)
{
    if (value < 0)
    {
        return false;
    }

    char buffer[11];
    memset(buffer, 0, 11);

    int countValue = 0;

    while (value > 0)
    {
        buffer[countValue++] = value % 10 + '0';
        value /= 10;
    }

    for (int i = 0, j = countValue - 1; i < j; i++, j--)
    {
        if (buffer[i] != buffer[j])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::cout << isPalindrome(121) << std::endl;
    std::cout << isPalindrome(45651) << std::endl;
    std::cout << isPalindrome(445544) << std::endl;
    std::cout << isPalindrome(001100) << std::endl;

    return 0;
}