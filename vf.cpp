#include<iostream>
#include<math.h>
using namespace std;
class shape
{
	protected : 
	      double l;
	      double w;
	      double a;
	      public :
	      	void read()
	      	{
	      		cin>>l>>w;
	      		
			}
			virtual void compute()
			{
				;
			}
};
class rect : public shape
{
	public:
		void compute()
		{
			a=l*w;
			cout<<"Rect area is "<<a;
		}
		
};
class tri : public shape
{
	protected:
		double p;
		double h;
	public :
		void compute()
		{
			cout<<"\n Enter the height"<<endl;
			cin>>h;
			p=(l+w+h)/2;
			a=p*(p-l)*(p-w)*(p-h);
			a=sqrt(a);
			cout<<"Area is ->"<<a<<endl;
		}
};
int main()
{
	rect r;
	tri t;
	shape *s[2];
	s[0]=&r;
	s[1]=&t;
	int ch;
	do
	{
		cout<<"\n 1 READ \n 2 Rec \n 3 Tri"<<endl;
		cout<<"Choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter length n width"<<endl; 
			s[0]->read();
			break;
			case 2 : s[0]->compute();
			break;
			case 3: s[1]->compute();
			break;
		}
		
	}while(ch!=4);
	return 0;
}
