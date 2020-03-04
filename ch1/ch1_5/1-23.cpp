#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item total, trans;
    int count;
    std::cout<<"please input book to cal:"<<std::endl;
    if (std::cin >> total)
    {
        count = 1;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                count++;
            else
            {
                std::cout << "book: " << total.isbn() << " sell record num is "
                 << count << std::endl;
                count = 1;
                total = trans;
            }
        }
        std::cout << "book: " << total.isbn() << " sell record num is " 
        << count << std::endl;
        return 0;
    }
    else
    {
        std::cout << " wrong input !" << std::endl;
        return -1;
    }
}