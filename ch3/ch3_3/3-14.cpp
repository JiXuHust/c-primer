#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> ivec;
    cout << "input numbers:" << endl;
    int num;
    while (cin >> num)
    {
        ivec.push_back(num);
    }
    for (int tmp : ivec)
    {
        cout << tmp << " ";
    }
    cout << endl;
    return 0;
}