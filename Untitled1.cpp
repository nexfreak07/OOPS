#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int rno;
	char name[100];
	float marks;
	cout<<"\n File operations";
	ofstream fout("student.txt");
	cout<<"\nEnter roll no";
	cin>>rno;
	fout<<rno;
	cout<<"\nEnter marks";
	cin>>marks;
	fout<<marks;
	cout<<"\nEnter name";
	cin>>name;
	fout<<name;
	fout.close();
	ifstream fin("example.txt");
	fin>>rno;
	fin>>name;
	cout<<name;
	cout<<rno;
	cout<<marks;
	return 0;
	
}
