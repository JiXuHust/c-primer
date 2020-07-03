#include <iostream>
#include <string>
#include <vector>
using namespace std;

class NoDefault
{
public:
    int val;
    NoDefault(int i) { val = i; }
};
class C
{
public:
    NoDefault noMem;

public:
    C(int i = 0) : noMem(i) {}
};

int main()
{
    C c;
    cout << c.noMem.val << endl;
    // vector<NoDefault> vec(10);
    vector<C> vec(10);
    return 0;
}