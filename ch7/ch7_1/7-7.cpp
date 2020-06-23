#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
    cout << "please input isbn,total num,total price" << endl;
    Sales_data total;
    if (read(cin, total))
    {
        Sales_data trans;
        while (read(cin, trans))
        {
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout, total);
                cout << endl;
                total = trans;
            }
        }
        print(cout, total);
    }
    else
    {
        cerr << "no data?!" << endl;
        return -1;
    }
    return 0;
}