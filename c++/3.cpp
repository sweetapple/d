#include <iostream>
using namespace std;       //命名空间 
//typedef struct point 
class POINT     //这里的 结构体 叫 类
{
public:
private:
protect:
    int x;
    int y;

    void show_point()
    {
        cout<<"pt.x="<<x<<endl<<"pt.y="<<y<<endl;
    }
};
int main(void)
{
    POINT pt;
    pt.x = 9;      //这里的变量 叫 对象
    pt.y = 5;
//    cout<<"pt.x="<<pt.x<<endl<<"pt.y="<<pt.y<<endl;
    pt.show_point();
    return 0;
}
