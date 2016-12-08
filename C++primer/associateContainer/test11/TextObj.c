#include "TextObj.h"

TextObj::TextObj(string file)
{
   ifstream ifs(file);
   string line;
   string word;
   while (getline(ifs, line)) 
   {
	set<string> st;
	istringstream is(line);
	while (is >> word)
	{
	    st.insert(word);
	}
	text.push_back(st);
	is.clear();
   }
}

void TextObj::display()
{
    int linenum = 1;
    for (vector<set<string> >::iterator it = text.begin(); it != text.end(); ++it)
    {
  	cout << linenum << ": ";
	for (set<string>::iterator iter = it->begin(); iter != it->end(); ++iter)
	{
	    cout << *iter << " ";
	}
	cout << endl;
	linenum++;
    }
}

void TextObj::queryWord(vector<int> &lines, string word)
{
    int linenum = 1;
    for (vector<set<string> >::iterator it = text.begin(); it != text.end(); ++it)
    {
	if (it->find(word) != it->end())
	{
	    lines.push_back(linenum);
	}
	linenum++;
    }
}
