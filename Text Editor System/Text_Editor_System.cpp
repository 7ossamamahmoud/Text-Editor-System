# include "Text_Editor.h"
# include<iostream>
# include<assert.h>
using namespace std;
Text_Editor::Text_Editor()
{
	cout << "There is no Operations have been done lately!";
}

void Text_Editor::AddClause()
{
	cout << "Enter your Clause U wanna add it: " << endl;
	cin.ignore();
	std::GetLines(cin, Clau);
	vector.push_back(Clau);
	cout << "Your Clause has been added Successfully " << endl;
	cout << "************************************" << endl;
}

void Text_Editor::Insert()
{
	int position;
	cout << "Enter your Clause/Line Position: " << endl;
	cin >> position;
	if (vector.empty() == true)
	{
		cout << "There is no lines Found! " << endl;
	}
	else
	{
		if (position > vector.size())
		{
			cout << "Sorry, You can't insert more Clauses because of Storage Oversizing!" << endl;
		}
		else
		{
			cout << "Enter Clause U wanna insert it: " << endl;
			cin.ignore();
			std::getline(cin, Clau);
			vector.insert(vector.begin() + (position - 1), Clau);
			cout << "Your Clause has been inserted Successfully " << endl;
		}
	}
}

void Text_Editor::FindWords()
{
	cout << "Enter the Word U wanna search for: " << endl;
	cin.ignore();
	GetLines(cin, str);
	for (int j = 0; j < vector.size(); j++)
	{ 
		if (vector[j].find(str) != std::string::npos)
		{
		      cout << "Line No. " << (j + 1) << "contains this Word " << endl;
		}
    }
}
void Text_Editor::DeleteLines()
{
	int position;
	cout << "Enter Position of Clause/Line U Wanna delete it: " << endl;
	cin >> position;
	if (vector.empty() == true)
	{
		cout << "There is no Lines Found to delete them!" << endl;
	}
	else
	{
		if (position > vector.size())
		{
			cout << "Sorry, You can't delete Clauses because of Indexing Oversize!" << endl;
		}
		else
		{
			vector.erase(vector.begin() + (position - 1));
			cout << "Your Clause/Line has been deleted Successfully " << endl;
		}
	}
}
void Text_Editor::ReplaceWords()
{
	string F_Value, L_Value;
	cout << "Enter Clause/Word U Wanna Change: " << endl;
	cin >> F_Value;
	cout << "Enter the NEW Clause/Word U Wanna add instead:" << endl;
	cin >> L_Value;
	for (int i = 0; i < vector.size(); i++)
	{
		size_t position = vector[i].find(F_Value);
		vector[i].replace(position, F_Value.length(), L_Value);
	}
	cout << "Your Operation has been done Successfully" << endl; ;
}


void Text_Editor::GetLines()
{
	int number;
	cout << "Enter No. of Clause/Line U Wanna get/retrieve it: " << endl;
	cin >> number;
	if (vector.empty() == true)
	{
		cout << "There is no Lines Found to retrieve them!" << endl;
	}
	else
	{
		if (number > vector.size())
		{
			cout << "Sorry, You can't retrieve Clauses because of Indexing Oversize!" << endl;
		}
		else
		{
			cout << "The Clause U wanna retrieve it is:" << endl;
			cout << vector.at(number - 1) << endl;
		}
	}
}
void Text_Editor::UpdateLines()
{
	int position;
	cout << "Enter Position of Clause/Line U Wanna update it: " << endl;
	cin >> position;
	if (vector.empty() == true)
	{
		cout << "There is no Lines Found to update them!" << endl;
	}
	else
	{
		if (position > vector.size())
		{
			cout << "Sorry, You can't delete Clauses because of Indexing Oversize!" << endl;
		}
		else
		{
			cout << "Enter the Clause/Line U Wanna update it: " << endl;
			cin.ignore();
			std::getline(cin, Clau);
			vector.at(position - 1) = Clau;
			for (int i = 0; i < vector.size(); i++)
			{
				cout << vector.at(i) << endl;
			}
			cout << "Your Clause/Line has been updated Successfully " << endl;
		}
	}
}
void Text_Editor::Display()
{
	for (int i = 0; i < vector.size(); i++)
	{
		cout << "The Clause/Line NO. "<<(i+1)<<" is as following: " << endl;
		cout << v.at(i) << endl;
	}
}

