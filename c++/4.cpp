#include <iostream>
using namespace std;       //命名空间 
//typedef struct point 
class Point     //这里的 结构体 叫 类
{
private: 
    int x;
    int y;
public:
/*    void init(int a,int b)
    {
        x = a ;
        y = b ;
    }*/
    Point(int x,int y)
    {this->x = x,this->y = y;}
    Point()
    {x = 0,y = 0;}

    ~Point()   //析构函数  构造函数取反
    {}

    void show_point()
    {
        cout<<"pt.x="<<x<<endl<<"pt.y="<<y<<endl;
    }
};
int main(void)
{
    Point pt(5,9);
/*    pt.x = 9;      //这里的变量 叫 对象
    pt.y = 5;*/
//    pt.init(5,9);
//    cout<<"pt.x="<<pt.x<<endl<<"pt.y="<<pt.y<<endl;
    pt.show_point();
    return 0;
}
