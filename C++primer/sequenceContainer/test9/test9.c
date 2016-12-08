#include <iostream>
#include <string>
#include <iterator>
#include <cctype>
using namespace std;

void findNumAlpha1(string str, string &num, string &alpha)
{
    for (string::size_type i = 0; i < str.size(); i++)
    {
	if(isdigit(str[i]))
	    num += str[i];
	if(isalpha(str[i]))
	    alpha += str[i];
    }
}

void findNumAlpha2(string str, string &num, string &alpha)
{
    int pos = 0;
    string s = "0123456789";
    string s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    pos = str.find_first_of(s);
    while(pos != string::npos) {
	num += str[pos];
 	pos = str.find_first_of(s, pos + 1);
    }
    pos = str.find_first_of(s1);
    while (pos != string::npos)
    {
	alpha += str[pos];
	pos = str.find_first_of(s1, pos + 1);
    }
}

void findNumAlpha3(string str, string &num, string &alpha)
{
    int pos = 0;
    string s = "0123456789";
    string s1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    pos = str.find_first_not_of(s1);
    while (pos != string::npos)
    {
	num += str[pos];
	pos = str.find_first_not_of(s1, pos + 1);
    }
    pos = str.find_first_not_of(s);
    while (pos != string::npos)
    {
	alpha += str[pos];
	pos = str.find_first_not_of(s, pos + 1);
    }
}

int main()
{
    string s = "hello";
    for (string::iterator it = s.begin(); it != s.end(); ++it)
    {
	*it = toupper(*it);
	cout << *it;
    }
    cout << endl;
    string str = "ab2c3d7R4E6", num, alpha;
    findNumAlpha3(str, num, alpha);
    cout << num << endl;
    cout << alpha << endl;
    return 0;
}
