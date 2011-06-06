#include <iostream>
using namespace std;
class Point;
class B             //友缘类
{
public:
Point inflate(Point &pt,int nOffset);
};

class Point
{
friend class B;        //友缘类
friend Point B::inflate(Point &pt,int nOffset);                //友缘函数 不属于这个 类
public:
    Point(int x = 0,int y = 0) //参数默认
    {
        this->x = x;
        this->y = y;
    }
    void print()
    {
        cout<<"Point("<<x<<"),"<<y<<endl;
    }
private:
    int x;
    int y;
};
Point B::inflate(Point &pt,int nOffset)
{
    pt.x += nOffset;
    pt.y += nOffset;
    return pt;
}

int main(void)
{
    Point pb( 10, 20);
    B w;
    w.inflate(pb,30);
    pb.print();
    return 0;
}
