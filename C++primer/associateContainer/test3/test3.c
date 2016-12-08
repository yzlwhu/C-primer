#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

int main()
{
    map<string, int> word_count;
    string word;
    while (cin >> word)
    {
	word_count[word]++;
    }
    for (map<string, int>::iterator it = word_count.begin(); it != word_count.end(); it++)
    {
	cout << it->first << " " << it->second << endl;
    }
    return 0;
}
