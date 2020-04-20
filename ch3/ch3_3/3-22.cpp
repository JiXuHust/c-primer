#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> text;
    string s;
    cout << "input a text seperate with null:" << endl;
    while (getline(cin, s))
    {
        text.push_back(s);
    }
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (auto &c : (*it))
        {
            c = toupper(c);
        }
        cout << (*it) << endl;
    }
    return 0;
}