#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

void constructMap1(map<string, vector<string> > &map1)
{
    map1["zhao"].push_back("yun");
    map1["zhao"].push_back("dengpan");
    map1["qian"].push_back("xing");
    map1["qian"].push_back("tieyun");
    map1["sun"].push_back("wukong");
    map1["sun"].push_back("zi");
    map1["li"].push_back("yuezhi");
    map1["li"].push_back("qian");
    map1["zhou"].push_back("tianpeng");
    map1["zhou"].push_back("shuren");
    map1["wu"].push_back("hao");
    map1["wu"].push_back("mengchang");
}

void constructMap2(map<string, vector<pair<string, int> > > &map2)
{
    map<string, vector<string> > map1;
    constructMap1(map1);
    int d = 20161206;
    for (map<string, vector<string> >::iterator it = map1.begin(); it != map1.end(); it++)
    {
 	for (vector<string>::iterator iter = it->second.begin(); iter != it->second.end(); iter++)
	{
	     map2[it->first].push_back(make_pair(*iter,d++));	    
	}
    }
} 

int main()
{
// test constructMap1
/*
    map<string, vector<string> > map1;
    constructMap1(map1);
    for (map<string, vector<string> >::iterator it = map1.begin(); it != map1.end(); it++)
    {
	cout << it->first << endl;
	for (vector<string>::iterator iter = it->second.begin(); iter != it->second.end(); iter++)
	{
	    cout << *iter << " ";
	}
	cout << endl;
    }
*/
    map<string, vector<pair<string, int> > > map2;
    constructMap2(map2);
    for (map<string, vector<pair<string, int> > >::iterator it = map2.begin(); it != map2.end(); it++)
    {
	cout << it->first << endl;
	for (vector<pair<string, int> >::iterator iter = it->second.begin(); iter != it->second.end(); iter++)
	{
	    cout << iter->first << " " << iter->second << " ";
	}
	cout << endl;
    }

    return 0;
}
