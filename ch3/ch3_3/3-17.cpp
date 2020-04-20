#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    cout << "input words:" << endl;
    vector<string> words;
    string word;
    while (cin >> word)
    {
        for (auto &c : word)
        {
            c = toupper(c);
        }
        words.push_back(word);
    }
    for (auto str : words)
    {
        cout << str << endl;
    }
    return 0;
}