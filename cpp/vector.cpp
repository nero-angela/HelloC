#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  cout << "hello vector" << endl;
  vector<int> a = {1, 2};
  cout << a.back() << endl;
  cout << *(--a.end()) << endl;
  return 0;
}