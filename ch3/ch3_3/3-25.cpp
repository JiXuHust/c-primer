#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<unsigned> gnum(11, 0);
    unsigned grade;
    auto it = gnum.begin();
    cout << "input grades:" << endl;
    while (cin >> grade)
    {
        if (grade < 101)
        {
            ++*(it + grade / 10);
        }
    }
    // cout << "total: " << gnum.size() << endl;
    cout << "numbers spread:" << endl;
    for (it = gnum.begin(); it != gnum.end(); it++)
        cout << (it - gnum.begin()) * 10 << " above: " << *it << endl;
    return 0;
}