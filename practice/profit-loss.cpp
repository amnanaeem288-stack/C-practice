//profit or loss or incurred loss or profit 
#include<iostream>
using namespace std;
int main()
{
int c_p, s_p;
cout<<"enter a cost price ";
cin>>c_p;
cout<<"enter a selling  price ";
cin>>s_p;
if(s_p>c_p)
{
    cout<<"profit is "<<s_p - c_p;

}
else if (s_p<c_p)
{
    cout<<"loss is"<<c_p - s_p ;
}
else
{
    cout<<"no profit no loss ";
}


    return 0;
}