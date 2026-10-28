// break and the continue statements 


#include<iostream>
using namespace std;

int main () {

    int count{0};

    for (count=1;count<=10;++count) {// once we declare it we can use blacket intialization 

        if (count==5) {

            break;

        }
    
        cout<<count<<" ";



    }
    cout<<"\n Broke out of loop at count="<<count<<"\n";

    // and also we can add the one for continue to finish this 
    for (count=1; count<=10;++count) {

        if (count==5) {

            continue;

        }
        cout<<count<<" ";


    }
    // the value which has been jumped is 6 
    cout<<"\ncontinue the loop after jumping five number \n";



}
