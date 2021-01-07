/*Design a class ‘Complex ‘with data members for real and imaginary part. Provide default and
parameterized constructors. Write a program to perform arithmetic operations of two
complex numbers using operator overloading
i. Addition and subtraction using friend functions
ii. Multiplication and division using member functions*/


#include<iostream>
#include<string.h>
using namespace std;

class complex
{
private:
float real;
float imag;    

public:
complex()
{
real=0;
imag=0;
}

void read()
{
cin>>real>>imag;
}


void display()
{
cout<<"The Complex No. is:  "<<real<<"+"<<imag<<"i"<<endl;
}

friend complex operator+(complex a,complex b)
{
complex c;
c.real=a.real+b.real;
c.imag=a.imag+b.imag;
return c;
}


friend complex operator-(complex a,complex b)
{
complex c;
c.real=a.real-b.real;
c.imag=a.imag-b.imag;
return c;
}


complex operator*(complex a)
{
complex b;
b.real=(real*a.real)-(imag*a.imag);  
b.imag=(real*a.imag)+(imag*a.real); 
return b;
}

complex operator/(complex a)
{
complex b;
b.real=((real*a.real)+(imag*a.imag))/((a.real*a.real)+(a.imag*a.imag));  
b.imag=((imag*a.real)-(real*a.imag))/((a.real*a.real)+(a.imag*a.imag));  
return b;  
}
};


int main()
{
int ch;
complex c1,c2,c3;
do
{
cout<<"1)read"<<endl<<"2)display"<<endl<<"3)add"<<endl<<"4)substract"<<endl<<"5)multiply"<<endl;
cout<<"6)divide"<<endl<<"7)quit"<<endl;
cout<<"enter ur choice:";
cin>>ch;
switch(ch)
{
case 1: cout<<"enter the  first real no. and imaginary no.:"<<endl;
	c1.read();
	cout<<"enter the  first real no. and imaginary no.:"<<endl;
	c2.read();
	break;
case 2: c1.display();
	c2.display();
	break;
case 3: c3 = c1+c2;
	c3.display();
	break;
case 4: c3 = c1-c2;
	c3.display();
	break;
case 5: c3 = c1*c2;
	c3.display();
	break;
case 6: c3 = c1/c2;
	c3.display();
	break;
case 7:
	break;
}
}while(ch!=7);
return 0;
}
