#include <iostream>
using namespace std;

istream &rtest(istream &is)
{
    int v;
    while (!is.eof())
    {
        is >> v;
        if (is.bad())
        {
            throw runtime_error("IO error");
        }
        if (is.fail())
        {
            cerr << "not number try angain:" << endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    is.clear();
    // is.tie(&cout);
    return is;
}

int main()
{
    cout << "input numbers end with Ctrl+z:" << endl;
    rtest(cin);
    return 0;
}