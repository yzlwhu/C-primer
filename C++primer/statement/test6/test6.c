#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    string s;
    cin >> s;
    assert(cin);
    cout << s << endl;
/*
    while (cin >> s)
    {
	assert(cin);
	cout << s << endl;
    }
*/
    return 0;
}
