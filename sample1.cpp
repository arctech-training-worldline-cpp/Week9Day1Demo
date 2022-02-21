#include <iostream>
using namespace std;

template <typename T>
void func_swap(T &arg1, T &arg2)
{
  T temp;
  temp = arg1;
  arg1 = arg2;
  arg2 = temp;
}

int main()
{
  int num1 = 10, num2 = 20;
  cout << "Before swapping" << endl;
   cout << num1 << " " << num2 << endl;
  func_swap(num1, num2);
  cout << "After swapping" << endl;
  cout << num1 << " " << num2 << endl;

  double num1D = 10.56, num2D = 20.67;
  cout << "Before swapping" << endl;
   cout << num1D << " " << num2D << endl;
  func_swap(num1D, num2D);
  cout << "After swapping" << endl;
  cout << num1D << " " << num2D << endl;
  //char 
  return 0;
}
