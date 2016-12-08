#include <iostream>
#include <string>
using namespace std;

int main()
{
    do {
        string s1, s2;
	cin >> s1 >> s2;
        if ( s1 != "" && s2 != "")
	    cout << "who is smaller? " << ((s1 > s2)?s2:s1) << endl;
        else if (s1 != "" || s2 != "")
	    continue;
    } while (cin);
    return 0;
}
