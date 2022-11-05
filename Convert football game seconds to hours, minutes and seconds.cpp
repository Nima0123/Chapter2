#include <iostream>
using namespace std;

int main(){
    int secound,time;

    cout<<"Enter the number of seconds of the game:";
    cin>>secound;
    time=secound/3600;
    secound=secound%3600;
    cout<<"Hour:"<<time;
    time=secound/60;
    secound=secound%60;
    cout<<"\nMinutes:"<<time;
    cout<<"\nSecounds:"<<secound;
    return 0;
}