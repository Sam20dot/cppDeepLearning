// fig02_06.cpp
// standard library string class test program 

#include <iostream>
#include <string>

using namespace std;

int main () {

    string s1{"happy"};
    string s2{"birthday"};
    string s3;

cout <<"s1: \""<<s1<<"\"; length: "<<s1.length()<<"\n";
cout <<"s2: \""<<s2<<"\"; length: "<<s2.length()<<"\n";
cout <<"s3: \""<<s3<<"\"; length: "<<s3.length()<<"\n";

cout <<"\n\nThe results of comparing s2 and s1:"<<boolalpha
    <<"\ns2==s1: "<<(s2==s1)
    <<"\ns2 !=s1:"<<(s2!=s1);
cout <<"\n\nTesting s3.empty():\n";
if (s3.empty()) {

    cout <<"s3 is empty :assigning to s3;\n";
    s3=s1+s2;
    cout <<"s3:\""<<s3<<"\"";

}
// testing new C++20 string members functions 
cout <<"\n\ns1 start with\"ha\""<<s1.starts_with("ha")<<"\n";
cout <<"\n\ns2 start with \"ha\""<<s2.starts_with("ha")<<"\n";
cout <<"s1 end with \"ay\":"<<s1.ends_with("ay")<<"\n";
cout <<"s2 end with \"ay\":"<<s2.ends_with ("ay")<<"\n";



}
