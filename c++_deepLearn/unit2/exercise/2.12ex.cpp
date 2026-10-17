#include <iostream>

using namespace std;

int main (void) {

    int a{0},b{0},c{0};
    int sum{0},product{0},difference{0},quotient{0};
    cout <<"____enter three values ____\n ";
    cout <<"enter one values :";
    cin>>a;
    cout <<"enter second values :";
    cin>>b;
    
    // then we do the calculation 
    sum=       a+b;
    product=   a*b;
    difference=a-b;
    quotient=  a%b;

    cout <<"the value 1 is    :"<<a
         <<"\nthe value 2 is  :"<<b
         <<"\nthe sum is      :"<<sum
         <<"\nthe difference  :"<<difference
         <<"\nthe quotient is :"<<quotient;





}
