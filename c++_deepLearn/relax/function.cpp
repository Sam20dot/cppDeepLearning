#include<iostream>

// function prototypes 
template <typename T>


T add (T a,T b) {



    return a+b;


}


int main () {

    double a{add(784.09,434.67)};
    int c{add(784,897)};



    std::cout<<"we are adding numbers"<<a<<"\n";

    std::cout<<"the values which are added which is double is "<<c<<"\n";


    
    return 0;



}


