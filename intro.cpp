#include <iostream>
#include "hero.cpp"
using namespace std;

class Hero
{
    public:
    //property
     int health;
     private:
     char level;
};

int main()
{
    // creating an object
    Hero ramesh;
    cout<<"health is: "<<ramesh.health<<endl;
    cout<<"level is: "<<ramesh.level<<endl;


    return 0;
}