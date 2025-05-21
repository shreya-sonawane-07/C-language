#include <bits/stdc++.h>
using namespace std;

// Function to convert hours
// into minutes and seconds
void ConvertHours(int n)
{
    long long int minutes, seconds;

    minutes = n * 60;
    seconds = n * 3600;

    cout << "Minutes = " << minutes
         << ", Seconds = " << seconds << endl;
}

// Driver code
int main()
{
    int n = 5;
    ConvertHours(n);
    return 0;
}