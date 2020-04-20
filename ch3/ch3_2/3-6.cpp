#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "input a string:" << endl;
    string str;
    cin >> str;
    for (auto &c : str)
        c = 'X';
    cout << "result is: " << str << endl;
    return 0;
}