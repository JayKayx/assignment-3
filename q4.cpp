//Q4- Write a program to print positive number entered by the user, if user enters a negative
//number, it is skipped.

#include <iostream>

using namespace std;

int main(){
    int x;
    cout<<"ENTER A NUMBER:";
    cin>>x;

    if (x>0){
        cout<<x;
    }else{
        cout<<"THE NUMBER IS NEGATIVE AND SKIPPED";
    }
    

}
