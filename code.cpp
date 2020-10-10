#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void print(ifstream& obj)
{
	string str;
	for (int i = 0; i < 19; i++)
	{
		getline(obj, str);
		cout << str << endl;
	}
	system("cls");
}

int main()
{
	ifstream obj;
	string str;
	while(1)
	{
	obj.open("dance_moves.txt");
	for (int i = 0; i < 2; i++)
	{
		print(obj);
	}
	obj.close();
	}
	return 0;
}