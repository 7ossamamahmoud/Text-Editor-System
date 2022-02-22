#include<vector>
#include<string>
using namespace std;
class Text_Editor
{
	string Clau;
	vector<string> vector = {};
	string str;
	
	
public:
	Text_Editor();
	void AddClause();
	void Insert();
	void FindWords();
	void UpdateLines();
	void ReplaceWords();
	void DeleteLines();
	void GetLines();
	void Display();
	
};

