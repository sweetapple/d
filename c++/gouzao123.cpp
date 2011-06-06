#include <iostream>
#include <cstring>
using namespace std;

class Person
{
public:
    Person()
    {
        age = 0;
    }
    Person(int a)
    {
        age = a;
    }
//    Person(Person &x);         //2
//    {
//      this->name = new char[strlen(x.name)];
//      strcpy(this->name,x.name);
//    }
    ~Person()
    {
/*        if(name)
        {
        delete []name;               //delete 之后要  置空
        name = NULL;
        }*/
    }
    int get_age()
    {
        return age;
    }
private:
    int age;
};

int main(void)
{
    Person two;
    Person one(12);
//    Person three(one);
    two = one;
//    delete []p;
//    cout<<"three age is "<<three.get_age()<<endl;
    cout<<"two age is "<<two.get_age()<<endl;
    return 0;
}
/*int main(void)
{
    char *p = new char[12];
    strcpy(p,"pycoming");
    Person two;
    Person one(p);
//    Person two(one);      //把 one 拷贝 给 two 即用one 覆盖two
    Person tree(one);      //默认拷贝构造函数 即 前拷贝
//    two = one;  //同类型可 赋值
//    cout<<"name is "<<one.get_name()<<endl;
    delete []p;
    cout<<"name is "<<one.get_name()<<endl;
    cout<<two.get_name()<<endl;
    return 0;
}*/                                                                //2
