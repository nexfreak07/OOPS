#include <iostream>
#include <string.h>
using namespace std;
class base1
{
	protected :
		char name[10];
		char dob[10];
		char bloodg[10];
		public :
		char id[10];
};
class base2
{
	protected :
		float height;
		float weight;
};
class base3
{
	protected :
		char policy[30];
		char conc[30];
};
class derived : public base1, public base2, public base3
{
	protected :
		char phno[20];
		char lno[10];
		public :
			static int count;
			void read();
			void print();
			void insert();
			int search(char t[10]);
			int delete_(char j[10]); 
};
int derived :: count;
void derived :: read()
{
	cout<<"Enter the Name"<<endl;
	cin>>name;
	cout<<"Enter the dob"<<endl;
	cin>>dob;
	cout<<"Enter the blood group"<<endl;
	cin>>bloodg;
	cout<<"Enter the id"<<endl;
	cin>>id;
	cout<<"Enter the height"<<endl;
	cin>>height;
	cout<<"Enter the weight"<<endl;
	cin>>weight;
	cout<<"Enter the policy"<<endl;
	cin>>policy;
	cout<<"Enter the Conc"<<endl;
	cin>>conc;
	cout<<"Enter the phno"<<endl;
	cin>>phno;
	cout<<"Enter the license"<<endl;
	cin>>lno;
}
void derived :: print()
{
	cout<<"Name is -"<<name<<endl;
	cout<<"Dob is -"<<dob<<endl;
	cout<<"Blood grp is -"<<bloodg<<endl;
	cout<<"id is -"<<id<<endl;
	cout<<"Height is -"<<height<<endl;
	cout<<"Weight is -"<<weight<<endl;
	cout<<"Policy is -"<<policy<<endl;
	cout<<"Conc is -"<<conc<<endl;
	cout<<"Phno is -"<<phno<<endl;
	cout<<"license no is -"<<lno<<endl;
}
void  derived :: insert()
{
	cout<<"Enter the Name"<<endl;
	cin>>name;
	cout<<"Enter the dob"<<endl;
	cin>>dob;
	cout<<"Enter the blood group"<<endl;
	cin>>bloodg;
	cout<<"Enter the id"<<endl;
	cin>>id;
	cout<<"Enter the height"<<endl;
	cin>>height;
	cout<<"Enter the weight"<<endl;
	cin>>weight;
	cout<<"Enter the policy"<<endl;
	cin>>policy;
	cout<<"Enter the Conc"<<endl;
	cin>>conc;
	cout<<"Enter the phno"<<endl;
	cin>>phno;
	cout<<"Enter the license"<<endl;
	cin>>lno;
}
int derived :: search (char t[10])
{
	int flag =1;
	flag = strcmp(id,t);
	if(flag==0)
	{
	cout<<"Name is -"<<name<<endl;
	cout<<"Dob is -"<<dob<<endl;
	cout<<"Blood grp is -"<<bloodg<<endl;
	cout<<"id is -"<<id<<endl;
	cout<<"Height is -"<<height<<endl;
	cout<<"Weight is -"<<weight<<endl;
	cout<<"Policy is -"<<policy<<endl;
	cout<<"Conc is -"<<conc<<endl;
	cout<<"Phno is -"<<phno<<endl;
	cout<<"license no is -"<<lno<<endl;
	return flag;
	}
	flag =1;
	return flag;
}
int derived :: delete_(char j[10])
{
	int flag = 1;
	flag = strcmp(id,j);
	if(flag==0)
	{
		strcpy(name,"NULL");
		strcpy(dob,"NULL");
		strcpy(bloodg,"NULL");
		strcpy(id,"NULL");
		strcpy(policy,"NULL");
		strcpy(conc,"NULL");
		strcpy(phno,"NULL");
		strcpy(lno,"NULL");
		height = weight =0;
		cout<<"Record deleted"<<endl;
		return flag;
	}
	flag =1;
	return flag;
}
int main()
{
	int i,j,n,ch;
	char x[40],id[10];
	derived d1[100];
	do
	{
		cout<<"\n1.Read \n2.Display \n3.Insert \n4.Search \n5.Delete \n6.Quit"<<endl;
		cout<<"Enter the no of entries"<<endl;
		cin>>n;
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:for (i=0;i<n;i++)
			{
				d1[i].read();
			}
			break;
			case 2: for(i=0;i<n;i++)
			{
				d1[i].print();
			}
			break;
			case 3: d1[n].insert();
			n++;
			break;
			case 4 :
				cout<<"Enter the id to search"<<endl;
				cin>>x;
				for (i=0;i<n;i++)
				{
					j=d1[i].search(x);
				}
				if(j==1)
				{
					cout<<"NOT FOUND"<<endl;
				}
				else
				{
					cout<<"Found"<<endl;
				}
				break;
			case 5 : cout<<"Enter the id to delete"<<endl;
			cin>>id;
			for(i=0;i<n;i++)
			{
				d1[i].delete_(id);
			}
			break;
		}
	}while(ch!=6);
	return 0;
}

	

