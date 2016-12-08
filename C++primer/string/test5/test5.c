#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (ispunct(s[i]))
            flag = true;
    }
    string str;
    if (flag)
    {
        for ( int i = 0; i < s.size(); i++)
        {
            if (ispunct(s[i]))
              continue;
            str += s[i];
        }
    }
    cout << str << endl;
    return 0;
}
