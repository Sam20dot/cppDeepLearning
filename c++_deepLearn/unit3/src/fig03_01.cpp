// imprementing the counter controlled iterations 
// and calculating the average of the student who are in the schools 
#include<iostream>


int main () {


    int grade{0};
    int gradeCounter{0};

    int average{0};
    int total{0};

    while (gradeCounter<=10){

        std::cout<<"enter the grade:";
        std::cin>>grade;

        total=total+grade;
        gradeCounter+=1;


    }

    // then we need to calculate the average 
    average=total/gradeCounter;

    std::cout<<"the total grades are :"<<total<<"\n"
             <<"the average is :"<<average<<"\n";
return 0;

}
