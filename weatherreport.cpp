#include<iostream>
using namespace std;
class weather //creating a class of name weather
{
int dom; //dom - day of month
float hightemp;
float lowtemp;
float amountrain;
float amountsnow;
public:
weather()
{
hightemp=0;
lowtemp=0;
amountrain=0;
amountsnow=0;
}
weather(int a,int b,int c,int d)
{
hightemp=a;
lowtemp=b;
amountrain=c;
amountsnow=d;
}
void read() //wrting defination of the function read
{
cin>>dom>>hightemp>>lowtemp>>amountrain>>amountsnow;
}
void print() //writing defination of function print
{
cout<<dom<<"		"<<hightemp<<"		"<<lowtemp<<"		"<<amountrain<<"		"<<amountsnow<<endl;
}
void avg(weather w1[100],int n)
{
int j;
float avg_hightemp=0,avg_lowtemp=0,avg_amountrain=0,avg_amountsnow=0;
for(j=0;j<n;j++)
{
avg_hightemp=(avg_hightemp+w1[j].hightemp);
}
avg_hightemp=avg_hightemp/n;
for(j=0;j<n;j++)
{
avg_lowtemp=(avg_lowtemp+w1[j].lowtemp);
}
avg_lowtemp=avg_lowtemp/n;
for(j=0;j<n;j++)
{
avg_amountrain=(avg_amountrain+w1[j].amountrain);
}
avg_amountrain=avg_amountrain/n;
for(j=0;j<n;j++)
{
avg_amountsnow=(avg_amountsnow+w1[j].amountsnow);
}
avg_amountsnow=avg_amountsnow/n;
cout<<avg_hightemp<<"		"<<avg_lowtemp<<"		"<<avg_amountrain<<"		"<<avg_amountsnow<<endl;
}
};
int main()
{
int i,n;
weather w1[100],w2,w3(22,23,234,23); //creating a object w1 of class weather 
cout<<"\nenter the no. of days for weather report : ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\nenter the no of days, hightemp, lowtemp, amount of rain , amount of snow : ";
w1[i].read(); // calling function read
}

cout<<"----------------------Monthly Weather report------------------------------------"<<endl;
cout<<"********************************************************************************"<<endl;
cout<<"day_of_month  "<<"highest_temp  "<<"lowest_temp  "<<"amount_of_rain  "<<"amount_of_snow  "<<endl;
for(i=0;i<n;i++)
{
w1[i].print(); //calling function print
}
cout<<"********************************************************************************"<<endl;
cout<<"Average=        ";
w2.avg(w1,n);
return 0;
}
