#include<iostream>
using namespace std;
inline long long factorial(int num)
{
    long long fact=1;
    for (int i = 1; i <= num; i++)
    {
        fact *i;
    }
    return fact;  
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if (number < 0)
    {
        cout<<"Factorial of negative number is not defined."<<endl;
    }
    else
    {
        cout<<"Factorial of "<<number<<" is: "<<factorial(number)<<endl;
    }
    return 0;    
}