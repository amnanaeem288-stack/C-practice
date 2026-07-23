#include<iostream>
using namespace std;
int main()
{
    int ASCII;

    cout << "Enter an ASCII value: ";
    cin >> ASCII;

    cout << "Next five characters are:\n";

    cout << "ASCII " << ASCII + 1 << " = " << char(ASCII + 1) << endl;
    cout << "ASCII " << ASCII + 2 << " = " << char(ASCII + 2) << endl;
    cout << "ASCII " << ASCII + 3 << " = " << char(ASCII + 3) << endl;
    cout << "ASCII " << ASCII + 4 << " = " << char(ASCII + 4) << endl;
    cout << "ASCII " << ASCII + 5 << " = " << char(ASCII + 5) ;	
	
	return 0;
}
