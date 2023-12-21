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
     int gethealth(){
        return health;
     }
     char getlevel(){
        return level;
     }
     void sethealth(int h){
        health = h;
     }
     void setLevel(char ch){
        level = ch;
     }

};

int main()
{
    // creating an object
    Hero ramesh; 
    ramesh.sethealth(70); // setter should be void funtion with one argument
    ramesh.level='A';
    cout<<"Ramesh ki level: "<<ramesh.gethealth()<<endl; // getter should return something but it has no arguments
    cout<<"level is: "<<ramesh.level<<endl;


    return 0;
}