#include <iostream>

int main()
{
    char digit;
    int checksum = 0;
    int position = 1;

    std::cout << "Enter number with an even number of digits (0-9)";

    digit = std::cin.get();

    while (digit != 10)
    {
        if (position % 2 == 0)
        {
            checksum += digit - '0';
            std::cout << checksum << "\t";
        }
        else
        {
            checksum += 2 * (digit - '0');
            std::cout << checksum << "\t";
        }
        digit = std::cin.get();
        position++;
    }

    std::cout << "Checksum is " << checksum << " \n";
    return 0;
}