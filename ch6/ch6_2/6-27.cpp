#include <iostream>
using namespace std;

int calcSum(initializer_list<int> ilist)
{
    int res = 0;
    for (auto elem : ilist)
        res += elem;
    return res;
}

int main(){
    cout<<"1,5,9的和是："<<calcSum({1,5,9})<<endl;
    cout<<"2,-5,6,19,20的和是："<<calcSum({2,-5,6,19,20})<<endl;
    return 0;
}