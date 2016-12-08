#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <iterator>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

class TextObj
{
    private:
	vector<set<string> > text;
    public:
	//Text();
	TextObj(string file);
	void display();
	void queryWord(vector<int> &lines, string word);
};
