#include <iostream>
#include <fstream>
#include <map>
#include <iterator>
#include <string>
using namespace std;

void constructMap(map<string, string> &word, string file)
{
    ifstream ifs(file);
    string skey, sval;
    while (ifs >> skey >> sval)
    {
	word[skey] = sval;
    }
}

void translateText(string originalFile, map<string, string> &word, string newFile)
{
    ifstream ifs(originalFile);
    string w;
    ofstream ofs;
    ofs.open(newFile);
    while (ifs >> w)
    {
	if (word.find(w) != word.end())
	{
	    ofs << word[w] << " ";
	    continue;
	}
	ofs << w << " ";
    }
}

int main()
{
    map<string, string> word;
    constructMap(word, "replace.txt");
    translateText("original.txt", word, "new.txt");
    return 0;
}
