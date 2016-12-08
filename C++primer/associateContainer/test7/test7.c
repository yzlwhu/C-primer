#include <iostream>
#include <string>
#include <set>
#include <map>
#include <iterator>
#include <fstream>
using namespace std;

void constructMap(map<string, int> &wordCount, string remainFile, string file)
{
    set<string> remain;
    ifstream ifs1(remainFile);
    string s;
    while (ifs1 >> s)
    {
	remain.insert(s);
    }
    ifstream ifs2(file);
    while (ifs2 >> s)
    {
	if (remain.find(s) == remain.end())
 	{
	    wordCount[s]++;
	}
    }
}

int main()
{
    map<string, int> words;
    constructMap(words, "remain.txt", "test.txt");
    for (map<string, int>::iterator it = words.begin(); it != words.end(); it++)
    {
	cout << it->first << " " << it->second << endl;
    }
    return 0;
}
