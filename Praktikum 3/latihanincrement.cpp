#include <iostream>
using namespace std;

int main()
{
    int m, n;
    m = 20;				//m = 20
    n = ++m;			//m = m+1	m=21
    					//n=m 		n=21
    cout << "m = " << m << endl; //m = 21
    cout << "n = " << n << endl; //m = 21
}