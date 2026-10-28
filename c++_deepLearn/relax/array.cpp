#include<array>
#include<iostream>
#include<format>

int main () {


    std::array<double,10>money{};
   
    int counter{78};
    // initialize the values inside 
    for (size_t i=0;i<=money.size();i++) {

        money[i]=0.0+counter*i;

        std::cout<<std::format("values of i  {}  and money is {}",i,money[i])<<"\n";


    }
    std::cout<<"\n";


}
