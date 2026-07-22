#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<" enter first side : ";
cin>>a;
cout<<"enter second side  :";
cin>>b;
cout<<"enter third side  :";
cin>>c;
//apply condition
if(a>b )// b can never be grater
{
    if(a>c){
    cout<<a<<" is greatest number ";
}else
 { // c>a
cout<<c<<"  is greatest number ";
} 
} 
else{ // b>a 
    if( b>c ){

cout<<b <<" is greatest ";

}
else 
{
    // c>b , c>b>a 

    cout<<c <<" is gratest ";

}

}
return 0;
}