// to remove the repeation of the if blocks we use the else if 
// just to prevent many duplication we use else if condition to continue 
#include<iostream> 


int main (){


    int grade {89};
    if (grade>=90) {
        std::cout<<"pass A\n";


    }
    else if(grade>=80) {

        std::cout<<"pass B\n";

    }
    else if(grade>=70) {
        std::cout<<"Pass C\n";

    }
    else if (grade>=60) {


        std::cout<<"pass D \n";

    } 

    else {

        std::cout<<"deal student please go and repeat your codes\n and learn better \n";

    }

}
