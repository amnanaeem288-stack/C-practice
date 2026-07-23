#include<iostream>
using namespace std;
int main()
{
int a,b,add,sub,multi,div,mod;
cout<<"enter the value of a =";
cin>>a;
cout<<"enter the value of b =";
cin>>b;

add = a+b;
sub = a-b;
multi = a*b;
div = a/b;
mod = a%b;

cout<<"addition ="<<add<<endl;
cout<<"subtraction ="<<sub<<endl;
cout<<"multiplication ="<<multi<<endl;
cout<<"division ="<<div<<endl;
cout<<"modulus ="<<mod<<endl;

return 0;
}
