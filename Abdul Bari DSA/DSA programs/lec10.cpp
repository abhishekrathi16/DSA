#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=10;
    int &r=a; //r is refernce to a

    //once a refernce to a vriable is declared we cant change it to some other variable
    a=25;
    cout<<a<<endl<<r<<endl;

    //now if we change r,
    int b=30;
    r=b; //assigning value of b to r
    cout<<a<<endl<<r<<endl;
    //we can see that the the value of a is also changed

    return 0;
}
