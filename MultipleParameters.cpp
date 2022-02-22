//two generic data types in a class
#include <iostream>
using namespace std;

template<class T1 = int, class T2 = int>
class test
{
    T1 a;
    T2 b;
    public:
        test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout << a << " " << b << endl;            
        }
};

int main()
{
    test<float, int> test1(1.23, 56);
    test1.show();

    test<int, char> test2(44, 'A');
    test2.show();

    test<> test3(34, 67);
    test3.show();
    
    return 0;
}
