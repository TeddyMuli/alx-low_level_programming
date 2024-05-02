#include <iostream>
#include <string>
#include <vector> 
using namespace std;
int main() 
{
string s = "spaces in text";
s.erase(remove(s.begin(), s.end(), ' ' ), s.end() ) ;
cout << s << endl;
}