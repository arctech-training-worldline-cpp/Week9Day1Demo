#include <iostream>
using namespace std;

template <class T>
class myClass
{
  T a, b;
  public:
    myClass(T first, T second )
    {
      a = first;
      b=second;
    }
    T Max();
    void show();
};

template <class T>
T myClass<T>::Max()
{
  return (a > b ? a: b);
}

template <class T>
void myClass<T>::show()
{
  cout << "a : " << a << " b : " << b << endl;
}

int main()
{
  // myClass<int> objInt(100, 45);
  // cout << "Max is : " << objInt.Max() << endl;
  // objInt.show();

  // myClass<char> objChar('A', 'a');
  // cout << "Max is : " << objChar.Max() << endl;
  // objChar.show();

  myClass<char> objChar1('A', 'a');  
  objChar1.show();


  return 0 ;
}