// nested if statements 
#include<iostream>

using namespace std;


int main () {

    int grade{90};
    if(grade>=90) {

        cout<<"pass with excellence "<<"A"<<"\n";

    }
    else {

        if (grade>=80) {

            cout<<"pass with average student has a plus\n ";

        }
        else {

            if (grade>=70) {

                cout<<"pass withe second class or b places"<<endl;

            }
        }
    }

    return 0;
    // as seen above this is just the nested loop concept 
}
