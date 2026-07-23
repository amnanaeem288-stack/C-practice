#include<iostream>
using namespace std;
int main()
{
	double balance, withdrawamount;
	cout<<"enter the account balance:";
	cin>>balance;
	cout<<"enter the withdrawamount: ";
	cin>>withdrawamount;
		if(withdrawamount<=0 ){
			cout<<"invalid withdrawamount"<<endl;
			
		}else if (withdrawamount<=balance){
			cout<<"withdraw successfully";
		}else {
		
		cout<<"insufficient balance";}
		return 0;
}
