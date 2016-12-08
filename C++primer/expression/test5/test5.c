#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2, c = 3;
    int sw = 3;
    switch (sw) {
	case a:
	    a *= 2;
	case b:
	    b *= 2;
	case c:
	    c *= 2;
    }
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    return 0;
}
