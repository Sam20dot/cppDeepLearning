// compound interest valuables 

#include<iostream>
#include<cmath>
#include<format>

using namespace std;

int main (){

    double principal{1000.0};
    double rate{0.05};

    cout<<format ("principle:{:>7.2}\n",principal)
        <<format ("interest rate :{:>7.2}\n",rate);

    // and then we displa
    // y header and amount of depostig 
    cout<<format ("{}{:>20}","year","Amount on diposite\n");
    for (int year{0};year<=10; year++) {

        double amount{principal *pow (1.0+rate,year)};

        cout <<format ("{:>4}{:>20.2f}\n",year,amount );


    }





} 
