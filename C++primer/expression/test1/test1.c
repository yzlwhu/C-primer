#include <iostream>
using namespace std;

int main()
{
// way 1:
/*
    int i;
    while (cin >> i && i != 42)
    	cout << i << endl;
*/

//way 2:
    int i;
    while(true)
    {
	cin >> i;
	if (i == 42)
	    break;
	cout << i << endl;
    }
    return 0;
}
