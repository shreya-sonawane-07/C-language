#include <iostream>
using namespace std;

inline int square(int num) {
    return num * num;
}

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number;

    cout << "Square of " << number << " is: " << square(number) << endl;
    cout << "Cube of " << number << " is: " << cube(number) << endl;

    return 0;
}
