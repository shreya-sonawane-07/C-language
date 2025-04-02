#include<iostream>
using namespace std;

int mult(int a, int b=2, int =3, int =4);

int main()
{
    cout<<mult(1,5)<<"\n";
    cout<<mult(3,1,4)<<"\n";
    cout<<mult(0)<<"\n";
}

int mult(int a, int b, int c, int d)
{
    int product;
    product=a*b*c*d;
    return product;
}