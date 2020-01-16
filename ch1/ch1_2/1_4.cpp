#include <iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "input two variable:" << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "the multiply of " << v1 << " and " << v2
              << " is " << v1 * v2 << std::endl;
    return 2;
}