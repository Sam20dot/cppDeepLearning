#include <iostream>
#include <string>
#include <cmath>
#define MAGICN  12

int main () {
    // we gonna design a game 
    std::string name{};
    std::cout<<"enter your name :";
    std::cin>>name;

    // game numbers 
    unsigned int number{0};
    unsigned int magicNumber{MAGICN};
    static int counter{0};
    unsigned int attemps{0};



    std::cout<<"welcome "<<name<<std::endl;


    // and then we gonna do the game 
      std::cout << "how many time you want to try:";
      std::cin>>attemps;
 
while (counter<=attemps) {
    std::cout <<"enter a number :"<<std::endl;
    std::cin  >>number;

    // ask user to write the times he or she want to truy 
  

    if (number<magicNumber ) {

        std::cout <<"the number"<<name<< "small the choosen one\n ";

    }
    else if (number>magicNumber) {

        std::cout << "the number "<<name<<" choose is above the magic number\n ";





    }
    else {

        std::cout<<"the magic number is now seen "<<magicNumber;
        std::cout<<"\nWOWOWOOWOWO !!!!!!!!!! \n THANK YOU "<<name<<std::endl;
        break;


    }

    // then we have to increment the counter 
    counter+=1;

}
    return 0;


}
