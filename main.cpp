
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

int product(int n)
{
  int t = 1;
  for(int i = 1; i <= n; i++)
    {
      t = t * i;
    }
  return t; 
}

int main() {
  cout << "Hello World!" << endl; 

  int n;
  cout << "Give a number: ";
  cin >> n;
  
  cout << "The value of the number added together from 1 to " << n << " is " << sum(n);
  cout << "The product of the number 1 to " << n << " is " << product(n);
  
  return 0;
}
