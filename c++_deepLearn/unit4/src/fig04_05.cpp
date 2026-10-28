// switch case this helps to when we have to choose in many options 

#include<iostream>
#include<format>
#include<cmath>
using namespace std;


int main () {

    double total{0.0};
    int gradeCount{0};
    int aCount{0};
    int bCount{0};
    int cCount{0};
    int dCount{0};
    int fCount{0};

    cout <<"enter the grade which are in the range between 0-100\n"
        "type the end of file to terminal the input :\n"
        "on unix/linux/mac os <ctrl>d then press enter\n"
        "on window type <ctrl>z then press enter \n";
    
    int grade{0};

    while (cin>>grade) {

        total+=grade;
        ++gradeCount;
        switch(grade/10) {
            case 9:
            case 10:
                ++aCount;
                break;

            case 8:
                ++bCount;
                break;
            case 7:
                ++cCount;
                break;
            case 6:
                ++dCount;
                break;
            default:
                ++fCount;
                break;




        }

    }
    cout<<"grade report\n";

    if (gradeCount!=0) {

        double average{total/gradeCount};

        // the total result or summary 
        cout<<format("the number of grades {}\n and the total marks is {}\n ",gradeCount,total)
            <<format("the student average {:.02}\n",average)
            <<"summary of student grades \n"
            <<format("A:{}\nB:{}\nC:{}\n D:{}\n F:{}\n",
                    aCount,bCount,cCount,dCount,fCount);
        




    }



}
