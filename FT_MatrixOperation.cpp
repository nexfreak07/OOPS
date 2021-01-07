#include<iostream>
#define max 50
using namespace std;

template<class t>void initmat(t *mat1,int row,int col)
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
mat1[i][j]=0;
}
}
}

template<class t>int getmat(t *mat1,int &row,int &col,int flag)
{
int i,j;
cout<<"\nenter no. of rows of matrix:";
cin>>row;
cout<<"\nenter no. of columns of matrix:";
cin>>col;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cout<<"\nenter the data:";
cin>>mat1[i][j];
}
}

if(flag==1)
return col;
else
return row;
}

template<class t1,class t2,class t3>void addmat(t1 *mat,int r3,int c3,t2 *m1,int r1,int c1,t3 *m2,int r2,int c2)
{
int i,j;
if(r1==r2&&c1==c2)
{
for(i=0;i<r3;i++)
{
for(j=0;j<c3;j++)
{
mat[i][j]=m1[i][j]+m2[i][j];
}
}
}
else
cout<<"\nmatrix cannot be added";
}

template<class t1,class t2,class t3>void submat(t1 *mat,int r3,int c3,t2 *m1,int r1,int c1,t3 *m2,int r2,int c2)
{
int i,j;
if(r1==r2&&c1==c2)
{
for(i=0;i<r3;i++)
{
for(j=0;j<c3;j++)
{
mat[i][j]=m1[i][j]-m2[i][j];
}
}
}
else
cout<<"\nmatrix cannot be subtracted";
}

template<class t1,class t2,class t3>void mulmat(t1 *mat,int r3,int c3,t2 *m1,int r1,int c1,t3 *m2,int r2,int c2)
{
int i,j;
if(c1==r2)
{
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
mat[i][j]=m1[i][j]*m2[i][j];
}
}
}
else
cout<<"\nmatrix cannot be multiplied";
}

template<class t>void display(t *mat1,int row,int col)
{
int i,j;
cout<<"\nthe resultant matrix is:";
for(i=0;i<row;i++)
{
cout<<"\n";
for(j=0;j<col;j++)
{
cout<<"\t"<<mat1[i][j];
}
}
}

int main()
{
int r1,c1,r2,c2,r3,c3,r4,c4,r5,c5,r6,c6;
int m1[max][max],m2[max][max],m3[max][max];
float m4[max][max],m5[max][max],m6[max][max];
int choice,ch;
do
{
cout<<"\n1)addition\n2)substraction\n3)multiplication\n4)exit";
cout<<"\nenter your choice : ";
cin>>choice;
switch(choice)
{
case 1: cout<<"addition";
	cout<<"\n1)integer addition\n2)float addition";
	cout<<"\nenter yr choice : ";
	cin>>choice;
	if(ch==1)
	{
	r3=getmat(m1,r1,c1,1);
	c3=getmat(m2,r2,c2,2);
	initmat(m3,r3,c3);
	addmat(m3,r3,c3,m1,r1,c1,m2,r2,c3);
	display(m3,r3,c3);
	}
	else
	{
	r6=getmat(m4,r4,c4,1);
	c6=getmat(m5,r5,c5,2);
	initmat(m6,r6,c6);
	addmat(m6,r6,c6,m4,r4,c4,m5,r5,c5);
	display(m6,r6,c6);
	}
	break;
case 2: cout<<"substraction";
	cout<<"\n1)integer substraction\n2)float substraction";
	cout<<"\nenter yr choice : ";
	cin>>choice;
	if(ch==1)
	{
	r3=getmat(m1,r1,c1,1);
	c3=getmat(m2,r2,c2,2);
	initmat(m3,r3,c3);
	submat(m3,r3,c3,m1,r1,c1,m2,r2,c3);
	display(m3,r3,c3);
	}
	else
	{
	r6=getmat(m4,r4,c4,1);
	c6=getmat(m5,r5,c5,2);
	initmat(m6,r6,c6);
	submat(m6,r6,c6,m4,r4,c4,m5,r5,c5);
	display(m6,r6,c6);
	}
	break;
case 3: cout<<"multiplication";
	cout<<"\n1)integer multiplication\n2)float multiplication";
	cout<<"\nenter yr choice : ";
	cin>>choice;
	if(ch==1)
	{
	r3=getmat(m1,r1,c1,1);
	c3=getmat(m2,r2,c2,2);
	initmat(m3,r3,c3);
	mulmat(m3,r3,c3,m1,r1,c1,m2,r2,c3);
	display(m3,r3,c3);
	}
	else
	{
	r6=getmat(m4,r4,c4,1);
	c6=getmat(m5,r5,c5,2);
	initmat(m6,r6,c6);
	mulmat(m6,r6,c6,m4,r4,c4,m5,r5,c5);
	display(m6,r6,c6);
	}
	break;
}
}while(choice!=4);
return 0;
}
