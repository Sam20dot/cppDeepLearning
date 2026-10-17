#include <iostream>
using namespace std;

int main (void) {

    int x{2};
    int y{3};
    //a
    cout <<x;
    //b;
    cout <<x+x;
    //c
    cout<<"x="; // this one will not print a value becouse it taken as string
    //d
    cout <<"x="<<x;
    //e 
    cout <<x+y<< "="<<y+x;
    //f
    cin>>x>>y; // this does not print it on the screen becouse it takes the number as input 
    //
    cout <<"\n";

    


} 
