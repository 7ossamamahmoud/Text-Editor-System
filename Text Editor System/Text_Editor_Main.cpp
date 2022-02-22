# include"Text_Editor.h"
# include<iostream>
using namespace std;
int main()
{
	int choice;
	Text_Editor txt;
	cout << "\n\t\t"
		<< "\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
		<< "\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
		<< "\t\t@@@@ -------> WELCOME To: <------- @@@@\n\t\t"
		<< "\t\t   @@@@-> Text Editor System<-@@@@\n\t\t"
		<< "\t\t @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\t\t"
		<< "\t\t   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

	while (true)
	{
		cout << "*******************************************************************************************" << endl;
		cout <<
			    "\t° Enter >-[1]-> to:-> To Add Clause\t"
				"\t° Enter >-[2]-> to:-> To Insert a Clause/Line in a specific Line.\n\n"
				"\t° Enter >-[3]-> to:-> To Find a Clause/Line\t\t"
			    "\t° Enter >-[4]-> to:-> To Update Clause/Line \n\n"
			    "\t° Enter >-[5]-> to:-> To Replace Clause/Line\t\t"
				"\t° Enter >-[6]-> to:-> To Delete Line\t\t"
				"\t° Enter >-[7]-> to:-> To Get/Retrieve Lines \n\n"
				"\t° Enter >-[8]-> to:-> To Display all Text\n\n"
				"\t° Enter >-[0]-> to:-> Exit\n"
				"\n\n**********************************************************************************\n\n"
				"\t° -> Your Choice is :";
		cin >> choice;

		if (choice == 1)
		{
			txt.AddClause();
		}
		if (choice == 2)
		{
			txt.Insert();
		}
		if (choice == 3)
		{
			txt.FindWords();
		}
		if (choice == 4)
		{
			txt.UpdateLines();
		}
		if (choice == 5)
		{
			txt.ReplaceWords();
		}
		if (choice == 6)
		{
			txt.DeleteLines();
		}
		if (choice == 7)
		{
			txt.GetLines();
		}
		if (choice == 8)
		{
			txt.Display();
		}

		if (choice == 0)
		{
			break;
		}
	}

	return 0;
}
