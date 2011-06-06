#include <iostream>
using namespace std;

class Animal                        //父类  又称 基类
{
    public:
/*        Animal(int wg)
        {
            weight = wg;
            cout<<"animal construct"<<endl;
        }
        ~Animal()                   //析构函数
        {
            cout<<"animal deconstruct"<<endl;  
        }*/
        void show_info()
        {
            cout<<"weight = "<<weight<<endl;
        }
    virtual void eat() = 0;                //是虚函数 延迟绑定 又叫 动态绑定
      /*  {
            breath();
            cout<<"animal eat"<<endl;
        }*/
//        virtual void eat() = 0;                //是纯虚函数 不能被 实例化
/*        {
            breath();
            cout<<"animal eat"<<endl;
        }*/
    protected:
        void sleep()
        {
            cout<<"animal sleep"<<endl;
        }
    private:
        int weight;
        void breath()
        {
            cout<<"animal breath"<<endl;
        }
};

class People:public Animal            //  ：代表 继承  People 类为子类
{
    public:
/*        People(int weg):Animal(weg)            //给 父类 构造传递参数
        {
            weight = weg;
            cout<<"people construct"<<endl;
        }
        ~People()
        {
            cout<<"people deconstruct"<<endl;
        }*/
        void walk()
        {
            cout<<"people walk"<<endl;
        }
    private:
        int weight;
    public:
        void eat()
        {
          //  Animal::eat();
            cout<<"people eat"<<endl;
        }
#if 0
/*    public:
        void eat()
        {
            cout<<"people eat"<<endl;
        }
        void sleep()
        {
            cout<<"people sleep"<<endl;
        }
        void breath()
        {
            cout<<"people breath"<<endl;
        }*/
#endif
};

int main(void)
{
    Animal *an;
    People p;
    an = &p;
    an->eat();        //隐式转换 静态的转换 将 people转换为 animal 
//    p.eat();
//    an.sleep();
/*    People p(35);
    p.eat();*/
//    p.show_info();
    return 0;
}
