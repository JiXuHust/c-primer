#include <iostream>
#include <string>
using namespace std;
int main()
{
    string word1, word2;
    cout << "input two words:" << endl;
    cin >> word1 >> word2;
    if (word1 == word2)
        cout << "word1 equals word2";
    else
    {
        cout << "the bigger word is:" << endl;
        word1 > word2 ? cout << word1 : cout << word2;
    }
}