#include <iostream>
#include <cstring>
using namespace std;

int compareTwoStrings(string a, string b)
{
    if (a == b)
    {
        return 0;
    } else if (a < b) {
        return -1;
    } else {
        return 1;
    }
}

int compareTwoCstrings(const char *a, const char *b)
{
    while (*a || *b)
    {
        if (*a == *b)
        {
	    a++;
	    b++;
	    continue;
	} else if (*a < *b) {
	    return -1;
  	} else {
	    return 1;
	}
    }
    if (*a && *b)
	return 0;
    if (*a && !(*b))
	return -1;
    if (!(*a) && *b)
	return 1;
}

int main()
{
// test something
/*
    char c;
    char a[4];
    int i = 0;
    while (i < 3)
    {
        cin >> c;
        a[i] = c;
        i++;
    }
    a[i] = '\0';
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
*/

//compare two C++ strings
    string a = "hel";
    string b = "hego";
    cout << " C++ string compare a and b: " << compareTwoStrings(a, b) << endl;
//compare two C strings
    char ca[] = "hel";
    char cb[] = "hego";
    cout << " C string compare ca and cb: " << compareTwoCstrings(ca, cb) << endl;

    return 0;
}
