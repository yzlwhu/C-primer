#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <cctype>
using namespace std;

int main()
{
    string line1 = "We were her pride of 10 she named us:";
    string line2 = "Benjamin, Phoenix, the Prodigal";
    string line3 = "and perspicacious pacific Suzanne";
    string sentence = line1 + " " + line2 + " " + line3;
    vector<string> maxlen, minlen;
    int max = 0, min = sentence.size();
    istringstream is(sentence);
    string word;
    while (is >> word)
    {
      	while (ispunct(word[word.size() - 1]))
	{
	    word = word.substr(0, word.size() - 1);
	}
	if (word.size() >= max)
	{
	    maxlen.push_back(word);
	    max = word.size();
	}
	if (word.size() <= min)
	{
	    minlen.push_back(word);
	    min = word.size();
	}
    } 
    for (vector<string>::reverse_iterator it = maxlen.rbegin(); it != maxlen.rend(); it++)
    {
	if ((*it).size() < max)
	    break;
	cout << *it << " ";
    }
    cout << endl;
    for (vector<string>::reverse_iterator it = minlen.rbegin(); it != minlen.rend(); it++)
    {
	if ((*it).size() > min)
	    break;
	cout << *it << " ";
    }
    cout << endl;
    return 0;
}
