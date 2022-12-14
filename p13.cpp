#include<iostream>
#include <stdio.h>
using namespace std;
int GCD(int a, int b);
int main() 
{
    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 13 WITH RECURSION~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
    int a, b;
    cout<<"\nEnter the first integer: ";
    cin>>a;
    cout<<"\nEnter the second integer: ";
    cin>>b;
    cout<<"\nG.C.D of "<<a<<" and "<<b<<" is:\n"<<GCD(a, b);
    return 0;
}
int GCD(int a, int b) 
{
    if (b != 0)
        return GCD(b, a%b);
    else
        return a;
}
Input (without recursion)
#include<iostream>
#include <stdio.h>
using namespace std;
 
int GCD(int a, int b);
 
int main()
{
    cout << "\n\t ~~~~~~~~~~~~~~~~~~~~~~~Practical 13 WITHOUT RECURSION~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t  \n";
    int a, b, G;
 
    cout<<"\nEnter the first number:";
    cin>>a;
    cout<<"\nEnter the second number:";
    cin>>b;
    
    G =GCD(a, b);
    cout<<"The GCD of "<<a<<" and "<<b<<"is :"<<G;
 
    return 0;
}
 
int GCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}
