#include<iostream>
#include<string_view>
#include<string>

#define CUSTOMERS 10000
class Customer{
    private :
        int ages{0};
        int balance{0};
        int location{0};
        std::string name{};



    public :
        // first i have to set the names 
        void setName (std::string names) {

            name=names;

        }
        void setAge(int age) {

            ages=age;

        }
        void setBalance (int amount) {

            balance=amount;

        }
        const std::string getName()  {

            return name;


        }
        const int getAges() {

            return ages;

        }
        const int getBalance () {

            return balance;

        }



};
// what if i want to create a product 
class Product {
    private :
        std::string productN{""};
        unsigned int price{0};
        unsigned int ownerId{0};

    public:
        void setProductDetails (std::string name,unsigned int prices,
                unsigned int ownerIds) {

            productN=name;
            price=prices;
            ownerId=ownerIds;



        }


};
int main () {

    Customer customer1;
    Customer customer2;
    Product  products[CUSTOMERS];


    customer1.setName("sam Pray");
    customer1.setAge(123);


    customer2.setAge(12);
    customer2.setName("people");
/*
    std::cout<<"location of objects in memory\n";
    std::cout<<"customer1 location"<<&customer1<<" \ncustomer size"<<sizeof (customer1)<<"\n";
    std::cout<<"customer2 location"<<&customer2<<"\n customer size"<<sizeof (customer2)<<"\n";
*/
    // now let create an array of customers 
    Customer customer[CUSTOMERS];
    customer[0].setName("sam");
    customer[1].setName("pray");
    customer[2].setName("rugwiro");
    long long int total_money{0};



   // std::cout<<"the size of eleven customers is "<<sizeof (customer)<<"\n"<<std::endl;
    for (size_t i=0; i<CUSTOMERS;i++) {

       customer[i].setAge(10);
       customer[i].setBalance(1000000000);
       customer[i].setName("user");

       std::cout<<"the balance is :"<<customer[i].getBalance()<<"\n"<<customer[i].getName()<<i<<"\n";

       // product information 
       products[i].setProductDetails("goodOne",2000,i);




       total_money+=customer[i].getBalance();
        //<<"address"<<&customer[i].getName()<<"\n";

    }
    std::cout<<"the total money we have is :"<<total_money<<"\n";
    static int even_people{0};

    for (size_t i{0};i<CUSTOMERS;i++) {

        
        int even_user=2*i;
        if (even_user<=CUSTOMERS) {
        customer[even_user].setBalance(2000);

    
        even_people+=1;


        }
        else {

            continue;

        }



    }
    std::cout<<"product 20 is owned by :"<<customer[20].getName()<<"\n";


    


}
