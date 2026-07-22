#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"the number of x : ";
cin>>x;
cout<<"the number of y :";
cin>>y;
//apply condition
if(x%5==0 || y%3==0){
    if(x%5==0){

    cout<<"the number x is divible by 5 "<<endl;
}
if (y%3==0)
{
    cout<<"the number y is divisible by 3 ";

}


}
else{
cout<<"the number is not divisible by 5 or 3 ";
}
return 0;
}