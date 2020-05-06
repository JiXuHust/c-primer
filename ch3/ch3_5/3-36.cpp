#include <iostream>
using namespace std;
int main()
{
    const int sz = 5;
    int a[sz] = {5, 7, 2, 1, 8};
    int b[sz];
    cout << "input 5 numbers:" << endl;
    for (int i = 0; i < sz;)
    {
        if (cin >> b[i])
            i++;
    }
    cout << "input b array is:" << endl;
    for (auto val : b)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << "a array is:" << endl;
    for (auto val : a)
        cout << val << " ";
    cout << endl;
    int *ap = begin(a), *bp = begin(b);
    while (ap != end(a) /* && bp != end(b) */)
    {
        if (*ap != *bp)
        {
            // break;
            cout << "b not equals a" << endl;
            return -1;
        }

        ap++;
        bp++;
    }
    /* if (ap == end(a))
        cout << "b equals a" << endl;
    else
        cout << "b not equals a" << endl; */
    cout << "b equals a" << endl;
    return 0;
}