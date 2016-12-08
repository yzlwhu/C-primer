#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <string>
using namespace std;

void selectBook(set<string> &hasRead, vector<string> &toRead, string book)
{
    if(hasRead.find(book) == hasRead.end())
    {
	for (vector<string>::iterator it = toRead.begin(); it != toRead.end(); it++)
 	{
	    if (*it == book)
	    {
		hasRead.insert(*it);
		toRead.erase(it);
	    }
	}
    }
}

void spendTime(bool &reading)
{
    reading = false;
}

void reserveNoReading(set<string> &hasRead, vector<string> &toRead, string book)
{
    if (hasRead.find(book) != hasRead.end())
    {
	toRead.push_back(book);
	hasRead.erase(book);
    }
    //output toRead
    cout << "toRead: " << endl;
    for (vector<string>::iterator it = toRead.begin(); it != toRead.end(); it++)
	cout << *it << " ";
    cout << endl;
    //output hasRead
    cout << "hasRead: " << endl;
    for (set<string>::iterator it = hasRead.begin(); it != hasRead.end(); it++)
	cout << *it << " ";
    cout << endl;
}

int main()
{
    set<string> hasRead;
    hasRead.insert("xiyouji");
    hasRead.insert("hongloumeng");
    vector<string> toRead = {"sanguo", "shuihuzhuan"};
    selectBook(hasRead, toRead, "sanguo");
    bool reading = true;
    spendTime(reading);
    if (!reading)
    {
	reserveNoReading(hasRead, toRead, "sanguo");
    }
    return 0;
}
