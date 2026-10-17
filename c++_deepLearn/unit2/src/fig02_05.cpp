//fig02_05.cpp
//comparing integer using if statementes

#include <iostream>

using std::cout;// program using cout 
using std::cin; // program using cin 

int main () {

    int number1{0};
    int number2{0};
    int sum{0};

    cout << "Enter two integer to compare\n";
    cin >> number1>>number2;

    if (number1==number2){

        cout <<number1<<" == "<<number2<<"\n";

    }
    if(number1!=number2) {

        cout<<number1<<" != "<<number2<<"\n";

    }
    if (number1<number2) {

        cout<<number1<<" < "<<number2<<"\n";

    }



}

