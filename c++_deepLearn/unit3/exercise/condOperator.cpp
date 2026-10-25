#include<iostream>


int main () {

    int a{0};
    while (true){
    std::cout<<"enter the number:";
    std::cin>>a;

    int longer{(a>10?1:0)};

    std::cout<<"the longer number is :"<<longer<<"\n";

    } 

}
