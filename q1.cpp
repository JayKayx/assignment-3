//Q1 - Write a program which takes the values of length and breadth from user and check if it is
//a square or not.

#include <iostream>

using namespace std;

int main(){
    int l,b;
    cout<<"length:";
    cin>>l;
    cout<<"breadth:";
    cin>>b;

    if(l==b){
        cout<<"its a square"<<endl;
    
    }
    else{
        cout<<"its a rectangle"<<endl;
    }
}