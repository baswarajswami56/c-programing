#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter first number"<<endl;
cin>>a;
cout<<"enter second number"<<endl;
cin>>b;
cout<<"enter third number"<<endl;
cin>>c;
if(a>b&&b>a)
{
cout<<"a is greater"<<endl;
}
else if(b>c&&b>a)
{
cout<<"b is greater"<<endl;
}
else
{
cout<<"c is greater"<< endl;
}
return 0;
}
