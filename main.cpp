
#include <iostream>

using namespace std;

int sum(int n)
{

  int t = 0; 
  for(int i = 0; i <= n; i++)
    {
      t += i; 
    }
  return t; 
}

int main() {
  cout << "Hello World!" << endl; 

  int n;
  cout << "Give a number: ";
  cin >> n;
  
  cout << "The value of the number added together from 1 to " << n << " is " << sum(n);
  
  
  return 0;
}
