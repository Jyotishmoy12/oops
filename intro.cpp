#include <iostream>
#include "hero.cpp"
using namespace std;

class Hero
{
    private:
    //property
     int health;
     public:
     char level;
     void print(){
        cout<<level<<endl;
     }

};

int main()
{
    // creating an object
    Hero ramesh;
    cout<<"health is: "<<ramesh.health<<endl;
    cout<<"level is: "<<ramesh.level<<endl;


    return 0;
}