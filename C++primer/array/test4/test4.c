#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

void testVoidPointer(int *p, int n)
{
    for (int *p1 = p; p1 != p + n; p1++)
    {
        *p1 = 0;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4};
    testVoidPointer(a, 4);
    for (int *p = a; p != a + 4; p++)
    {
        cout << *p << endl;
    }
    return 0;
}
