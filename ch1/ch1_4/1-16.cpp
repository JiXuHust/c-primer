#include <iostream>
int main()
{
    int sum = 0, val;
    std::cout << "input numbers to sum: " << std::endl;
    while (std::cin >> val)
    {
        sum += val;
    }
    std::cout << "sum is: " << sum << std::endl;
    return 0;
}
