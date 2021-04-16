#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

vector<string> readFile(string s)
{
	vector<string> v;

	ifstream ifs(s);
	while (ifs)
	{
		string tmp;
		getline(ifs, tmp);
		v.push_back(tmp);
	}
	return v;
}