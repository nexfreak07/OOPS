#include<iostream>
using namespace std;

class personal_data
{
protected:
char name[20];
int id;
char dob[10];
public:
void read()
{
cout<<"\n";
cout<<"\nenter your name : "<<endl;
cin>>name;
cout<<"enter your id : "<<endl;
cin>>id;
cout<<"enter your date of birth : "<<endl;
cin>>dob;
}

void display()
{
cout<<"name is : "<<name<<endl;
cout<<"id is : "<<id<<endl;
cout<<"date of birth is : "<<dob<<endl;
}

};

class professional_data
{
protected:
int salary;
char designation[30];
char department[20]; 

public:
void read1()
{
cout<<"\nenter your salary : "<<endl;
cin>>salary;
cout<<"enter your designation : "<<endl;
cin>>designation;
cout<<"enter your department : "<<endl;
cin>>department;
}

void display1()
{
cout<<"salary is : "<<salary<<endl;
cout<<"designation is : "<<designation<<endl;
cout<<"department is : "<<department<<endl;
}

};

class academaic_data: public personal_data,public professional_data
{
protected:
char qualifications[30];
float ssc_per;
float hsc_per;
public:

void read2()
{

read1();
cout<<"\nenter your qualifications:"<<endl;
cin>>qualifications;
cout<<"enter your percentage in ssc:"<<endl;
cin>>ssc_per;
cout<<"enter your percentage in hsc:"<<endl;
cin>>hsc_per;
}

void display2()
{
display();
display1();
cout<<"\nqualifications is:"<<qualifications<<endl;
cout<<"percentage in ssc is:"<<ssc_per<<endl;
cout<<"percentage in hsc is:"<<hsc_per<<endl;
}
};

int main()
{
int i,n,ch;
academaic_data a1[100];
do
{
cout<<"\n1)read"<<endl<<"2)display"<<endl;
cout<<"\nenter ur choice:";
cin>>ch;
switch(ch)
{
case 1: cout<<"\nenter the no. of entries to be inserted:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
	a1[i].read();
	a1[i].read2();
	}
	break;
case 2: cout<<"\nlist of entries"<<endl;
	for(i=0;i<n;i++)
	{
	cout<<"\n+++++++++++++++++++++++++++++++++++++++++++++++";
	a1[i].display2();
	}
	break;
default : cout<<"\nenter proper choice";
}
}while(ch!=2);
return 0;
}
