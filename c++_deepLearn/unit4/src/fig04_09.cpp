// logic operators like and gate and or gates so that we can show them 
#include <iostream>
#include<format>
#include<string>


int main () {


    std::string name{"sam"};
    int age{11};

    // most we call this depends conditions 
    // if name is not valid we will no longer test if the age is correct 

    if (name=="sam"&& age>10) {

        std::cout<<"the student is allowed to learn \n";

    }
    else if (name=="sam"||age>10) {

        std::cout<<"the identity of the child is good to start the school\n";


    }
    // and now we can use the logic negation operators 
    bool isSignedIn{false};

    if (!isSignedIn) {
        std::cout<<"you are allowed to inter with in the door \n";


    }

    else {


        std::cout<<format ("the student has name is {}\n and age is {:>20}\n",name,age);

    }
    
    


}
