
#include <iostream>
using namespace std;

class Dog
{
    public:
    void eat();
    void sleep();
};
class Cat:public Dog
{
    public:
    void catch_mouse();
};
