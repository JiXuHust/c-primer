#include <iostream>
int main()
{
    std::cout << "输入两个整数:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    int tmp;
    if (v1 > v2)
    {
        tmp = v1;
        v1 = v2;
        v2 = tmp;
    }
    while (v1 <= v2)
    {
        std::cout << v1 << " ";
        v1++;
    }
    std::cout << std::endl;
    return 0;
}