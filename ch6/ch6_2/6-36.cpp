#include<string>
using namespace std;
string (&func1())[10];
auto func2()->string(&)[10];
typedef string arrayS[10];
arrayS &func3();
string str[10];
decltype(str) &func4();


