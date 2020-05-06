#include<iostream>
#include"Chapter6.h"
using namespace std;
int main()
{
    int num;
    cout << "input number to cal:" << endl;
    cin >> num;
    cout << "fact of " << num << " is " << fact(num) << endl;
    return 0;
}