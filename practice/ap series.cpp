#include <iostream>
using namespace std;
int main()
{
    int n

, d, n2, i, ln;
    int sum = 0;
    cout<<"Input  the starting number : ";
    cin>>n;
    cout<<"Input the number of items : ";
    cin>>n2;
    cout<<"Input  the common difference  : ";
    cin>>d;
    sum =(n2 * (2 * n + (n2 - 1) * d)) / 2;
    ln = n + (n2 - 1) * d;
    cout<<"the Sum of the  A.P. series are : " << endl;
    i = n;
	do 
    {
        if (i != ln)
        {
        	cout << i << " + ";
		}
        else
        {
        	cout << i << " = " << sum << endl;
		}
		i = i + d;
    }
    while(i <= ln);
}
