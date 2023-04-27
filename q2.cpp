//Q2 - Write a program to print absolute value of a number entered by the user.
#include <iostream>

using namespace std;

int main(){
    int x;
    cout<<"enter an integer:";
    cin>>x;
    if (x<0){
        cout<<-x;
    }
    else{
        cout<<x;
    }

}