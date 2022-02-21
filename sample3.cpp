//template specialization
#include <iostream>
using namespace std;

template <class T>
class myIncrement
{
  T value;
  public :
    myIncrement(T arg){value = arg;}
    T toIncement()
    {
      return ++value;
    }
};
//classs template specialization
template<>
class myIncrement<char>
{
  char value;
  public:
    myIncrement(char arg){value = arg;}
    char uppercase()
    {
      if(value >= 'a' && value <= 'z')
        {
          value += 'A' - 'a';
        }
        return value;
    }
};

int main()
{
  myIncrement<int> myInt(7);
  cout << "Incremented int value : " << myInt.toIncement() << endl;

  myIncrement<double> myDouble(11.5);
  cout << "Incremented double value : " << myDouble.toIncement() << endl;

  myIncrement<char> myChar('s');
  cout << "Incremented char : " << myChar.uppercase() << endl;

  return 0;
}
