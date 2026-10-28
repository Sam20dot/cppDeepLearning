// adding the number using for loop and introducing 
// c++20 text format 
#include<iostream>
#include<format>


using namespace std;

int main () {

    int sum{0};
    for (int counter{0}; counter<=10;counter++) {

        sum+=counter;


    }
    std::cout<<format("sum is {}\n",sum);

}
