#include <iostream>
using namespace std;

int main(){
    int age;

    cout<<"Enter your age:";
    cin>>age;
    cout<<"Number of months of life:"<<age*12;
    cout<<"\nNumber of days of life:"<<age*365;
    return 0;
}