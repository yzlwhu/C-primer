#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << "sizeof char: " << sizeof(ch) << endl;
    bool bo = true;
    cout << "sizeof bool: " << sizeof(bo) << endl;
    short sho = 1;
    cout << "sizeof short: " << sizeof(sho) << endl;
    int int1 = 2;
    cout << "sizeof int: " << sizeof(int1) << endl;
    long lo = 3L;
    cout << "sizeof long: " << sizeof(lo) << endl;
    float fl = 1.0f;
    cout << "sizeof float: " << sizeof(fl) << endl;
    double do1 = 2.0d;
    cout << "sizeof double: " << sizeof(do1) << endl;
    int a[2];
    int *p = a;
    cout << "a: " << (sizeof(a)/sizeof(*a)) << endl;
    cout << "p: " << (sizeof(p)/sizeof(*p)) << endl;
    return 0;
}
