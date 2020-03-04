#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item total, book;
    std::cout << "input book to sum:" << std::endl;
    if (std::cin >> total)
    {
        while (std::cin >> book)
        {
            if (compareIsbn(total, book))
            {
                total = total + book;
            }
            else
            {
                std::cout << "ISBN is not the same" << std::endl;
                return -1;
            }
        }
        std::cout << "汇总信息：ISBN、销售本数、销售额、平均售价为："
                  << total << std::endl;
        return 0;
    }
    else
    {
        std::cout << "error: don't get any book" << std::endl;
        return -1;
    }
}