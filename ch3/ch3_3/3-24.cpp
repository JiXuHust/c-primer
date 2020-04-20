#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> ivec;
    int tmp;
    cout << "input numbers end with eof:" << endl;
    while (cin >> tmp)
    {
        ivec.push_back(tmp);
    }
    decltype(ivec.cbegin()) it;
    // cout << *(ivec.begin()) << " " << *(ivec.end()) << endl;
    for (it = ivec.begin(); it < ivec.end()-1; it += 2)
    {
        cout << *it + *(it + 1) << " ";
    }
/*     for (it = ivec.cbegin(); it < ivec.cend() - 1; it++)
    {
        cout << *it + *(++it) << " ";
    }
    if (ivec.size() % 2 != 0)
    {
        cout << *(ivec.end() - 1);
    } */
    if (it == ivec.end() - 1)
        cout << *it;
    cout << endl;
    decltype(ivec.begin()) it2;
    for (it = ivec.begin(), it2 = ivec.end()-1; it < it2; it++, it2--)
    {
        cout << *it + *it2 << " ";
    }
    if (it == it2)
    {
        cout << *it;
    }
    cout << endl;
    return 0;
}