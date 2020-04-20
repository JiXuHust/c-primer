#include<iostream>
int main(){
    int v1=10;
    const int v2=20;
    // int &r2=v2;
    int &r1=v1;
    r1=15;
    r1=v2;
    r1=22;
    std::cout<<"r1="<<r1<<"  v1="<<v1<<"  v2="<<v2<<std::endl;
}