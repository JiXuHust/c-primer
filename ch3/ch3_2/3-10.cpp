#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line, result;
    cout << "input a line with punctuation :" << endl;
    getline(cin, line);
    for (auto c : line)
    {
        if (!ispunct(c))
            result += c;
    }
    cout << "result is: " << result << endl;
    return 0;
}