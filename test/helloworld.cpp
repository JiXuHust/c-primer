#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
   vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
   for (const string &word : msg)
   {
      cout << word << "abc"
      "def "<<endl;
   }
   cout << endl;
   /*    for (unsigned u = 5; u >0; --u)
   {
      cout << u << endl;
   } */
   unsigned char u = -1;
   cout << u << endl;
   int i(3.14);
   cout << i << endl;
}
