#include <iostream>
#include <string>
using namespace std;

int main()
{
    bool flag = false;
    string str, s;
    cin >> s;
    str = s;
    while (cin >> s)
    {
     	if (s == str)
	{
	    if (s[0] < 'A' || s[0] > 'Z')
		continue;
	    cout << "\"" << s[0] << "\"" << endl;
	    flag = true;
	    break;
	}
	str = s;
    }
    if (flag)
	cout << str << endl;
    else 
	cout << "no repeat word" << endl;
    return 0;
}
