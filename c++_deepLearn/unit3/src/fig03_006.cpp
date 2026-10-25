#include<limits>
#include<iostream>

// we are going to demostated how we get the limits values of a given 
// data types 
// int, unsigned int, long and other for now we demostrated the int and long int other can 
// be expremented as an exercise 


int main () {

    std::cout<<"  ____SHOWING THE VALUES OR MAXIMUM OF INTEGERS ____\n";

    std::cout<<"integer maximum:"<<std::numeric_limits<int>::max()<<"\n";
    std::cout<<"integer minimum:"<<std::numeric_limits<int>::min()<<"\n";
    // now short int 
    std::cout<<"______SHOWING THE VALUES OF MAXIMUM AND MIN OF SHORT INTEGER____\n";
    std::cout<<"short integer maximum:"<<std::numeric_limits <short int>::max()<<"\n";
    std::cout<<"short integer minimum:"<<std::numeric_limits<short int>::min()<<"\n";

    // now character 
    std::cout <<"___SHOWING THE VALUES OF MAXIMUM AND MINI OF CHARACTERS____\n";
    std::cout<<"char maximum:"<<static_cast<int>(std::numeric_limits<char>::max())<<"\n";
    std::cout<<"char minimum:"<<static_cast<int>(std::numeric_limits<char>::min())<<"\n";

    // so i think we can end with the long and other anyone can demostrated that 
    // to see how they works 





}
