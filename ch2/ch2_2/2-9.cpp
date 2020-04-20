#include <iostream>
using namespace std;
string global_str;
int global_int;
int main()
{
    string local_str;
    int local_int, i(3.14);
    // int b ={3.14};
    cout << " global_str=" << global_str << " local_str=" << local_str << endl;
    cout << " global_int=" << global_int << " local_int=" << local_int << " i=" << i << endl;
    return 0;
}