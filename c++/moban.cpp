#include <iostream>
using namespace std;

template <class T,class P>                //先把类型实例化，隐士实例化
T sum(T x,P y)                        //函数模板
{
    return x+y;
}

int main(void)
{
    cout<<"sum(2,'a') = "<<sum(2,'a')<<endl; //模板函数 隐士实例化
    cout<<"sum(2,3) = "<<sum(2,3)<<endl;

    cout<<"sum('a',2) = "<<sum<char,int>('a',2)<<endl;//显示实例化 带有类型的 实参
    return 0;
}
