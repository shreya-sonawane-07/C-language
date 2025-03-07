#include<iostream>
using namespace std;
class student{
    int roll;
    char name[20];
    public:
    void getdata();
    void putdata();
};
void student::getdata(void){
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
}
void student::putdata(void){
    cout << "Roll number: " << roll << endl;
    cout << "Name: " << name << endl;
}
int main(){
    int i;
    student s[3];
    for(i=0; i<3; i++){
        cout << "Enter details of student " << i+1 << endl;
        s[i].getdata();
    }
    for(i=0; i<3; i++){
        cout << "Details of student " << i+1 << endl;
        s[i].putdata();
    }
}