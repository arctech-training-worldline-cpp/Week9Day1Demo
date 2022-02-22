#include <iostream>
using namespace std;

template<class T1 = int, class T2 = int>
class Test
{
    T1 a;
    T2 b;
    public:
        Test(T1 x, T2 y)
        {
            a = x;
            b = y;
        }
        void show()
        {
            cout << a << " and " << b << endl;
        }
};

int main()
{
    cout << "Instantiating the class template with float and int data types" << endl;;
    Test<float, int>test1(1.23, 123);
    test1.show();

    cout << "Instantiating the class template with int and char data types" << endl;;
    Test<int, char>test2(100, 'W');
    test2.show();

    Test<> test3('a', 456);
    test3.show();
    return 0;
}
