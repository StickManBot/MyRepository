#include "pch.h"
#include "DataStructure.h"
#include "FileReader.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cout << "Enter the file name: ";
	string s; cin >> s;
	vector<string> v = readFile(s);
	string str = "";
	for (int c = 0; c < v.size(); c++)
		str += v[c];
	
	if (str.find("Breed") != string::npos)
	{
		Animal a;

		for (int c = 0; c < v.size(); c++)
		{
			if (v[c].find("Breed") != string::npos)
			{
				a.Breed = v[c].substr(v[c].find("Breed") + 6);
			}

			if (v[c].find("Age") != string::npos)
			{
				a.Age = stoi(v[c].substr(v[c].find("Age") + 4));
			}

			if (v[c].find("Name") != string::npos)
			{
				a.Name = v[c].substr(v[c].find("Name") + 5);
			}
		}

		cout << "struct Animal\nName - " << a.Name << "\nBreed - " << a.Breed << "\nAge - " << a.Age;
	}
	else
		if (str.find("Marks") != string::npos)
		{
			Student a;

			for (int c = 0; c < v.size(); c++)
			{
				if (v[c].find("Marks") != string::npos)
				{
					a.Marks = v[c].substr(v[c].find("Marks") + 6);
				}

				if (v[c].find("Age") != string::npos)
				{
					a.Age = stoi(v[c].substr(v[c].find("Age") + 4));
				}

				if (v[c].find("Name") != string::npos)
				{
					a.Name = v[c].substr(v[c].find("Name") + 5);
				}
			}

			cout << "struct Student\nName - " << a.Name << "\nMarks - " << a.Marks << "\nAge - " << a.Age;
		}
		else 
			if (str.find("Git") != string::npos)
			{
				SoftEngineer a;

				for (int c = 0; c < v.size(); c++)
				{
					if (v[c].find("Git") != string::npos)
					{
						a.Git = v[c].substr(v[c].find("Git") + 4);
					}

					if (v[c].find("Age") != string::npos)
					{
						a.Age = stoi(v[c].substr(v[c].find("Age") + 4));
					}

					if (v[c].find("Name") != string::npos)
					{
						a.Name = v[c].substr(v[c].find("Name") + 5);
					}
				}

				cout << "struct Soft engineer\nName - " << a.Name << "\nGit - " << a.Git << "\nAge - " << a.Age;
			}
}