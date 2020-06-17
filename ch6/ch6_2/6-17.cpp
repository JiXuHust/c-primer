#include <iostream>
#include <string>
using namespace std;

bool judgeUpper(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;
    return false;
}

void myToLower(string &s)
{
    for (auto &c : s)
        if (isupper(c))
            c = tolower(c);
}

int main()
{
    string s = "abcDEf";
    judgeUpper(s) ? cout << "have upper" << endl : cout << "no upper" << endl;
    myToLower(s);
    cout << "s lower:" << s << endl;
}