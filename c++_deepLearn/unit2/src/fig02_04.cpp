//fig02_04.cpp
//addition program that display the sum of two integers 
//
#include <iostream>

//function main begin program execution 


int main () {
    int number1{0};
    int number2{0};

    int sum {0};
    std::cout <<"Enter first integer :";
    std::cin >>number1;

    std::cout<<"Enter Second integer :";
    std::cin>>number2;

    // and then sum 
    sum=number1+number2;
    std::cout<<"Sum is "<<sum<<"\n"<<std::endl;


}
