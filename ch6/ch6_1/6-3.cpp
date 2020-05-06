#include <iostream>
using namespace std;
int fact(int val)
{
    int ret = 1;
    if (val < 0)
        return -1;
    while (val)
        ret *= val--;
    return ret;
}

int main()
{
    int num;
    cout << "input number to cal:" << endl;
    cin >> num;
    cout << "fact of " << num << " is " << fact(num) << endl;
    return 0;
}

