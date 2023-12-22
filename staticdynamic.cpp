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
    // dynamic object
   Hero*b=new Hero;
   b->setLevel('A');
   (*b).sethealth(100);
   cout<<(*b).level<<endl;
   cout<<(*b).gethealth()<<endl;
//    cout<<sizeof(b)<<endl; 

    return 0;
}