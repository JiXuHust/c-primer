#include <iostream>
int main()
{
    std::cout << "input two numbers:" << std::endl;
    int m, n;
    std::cin >> m >> n;
    if (m < n)
        for (; m <= n; m++)
            std::cout << m << " ";
    else
        for (; n <= m; n++)
            std::cout << n << " ";

    std::cout << std::endl;
    return 0;
}