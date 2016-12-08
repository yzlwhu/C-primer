#include <iostream>
using namespace std;

int gcd(int v1, int v2)
{
    while (v2)
    {
	int temp = v2;
	v2 = v1 % v2;
	v1 = temp;
    }
    return v1;
}

int main()
{
    int v1 = 6, v2 = 9;
    cout << gcd(v1, v2) << endl;
    return 0;
}
