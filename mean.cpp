#include <iostream>
#include <algorithm>

using namespace std;

inline double mean(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

inline int median(int a, int b, int c) {
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    return arr[1];
}

inline int mode(int a, int b, int c) {
    if (a == b || a == c) return a;
    if (b == c) return b;
    return -1; 
}

int main() {
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    
    cout << "Mean: " << mean(x, y, z) << endl;
    cout << "Median: " << median(x, y, z) << endl;
    
    int modeValue = mode(x, y, z);
    if (modeValue == -1)
        cout << "Mode: No mode (all numbers are unique)" << endl;
    else
        cout << "Mode: " << modeValue << endl;
    
    return 0;
}
