#include <iostream>
using namespace std;
long calcFactorial(int);
int main()
{
    int n=7;
    long fact;
    fact=calcFactorial(n);
    cout<<n<<"Factorial="<<fact<<endl;
    cout<<n<<"Factorial="<<calcFactorial(n)<<endl;
}
long calcFactorial(int x)
{
    long fact=1;
    for(int i=1;i<=x;i++)
        {
            fact*=i;
        }
        return(fact);
}
