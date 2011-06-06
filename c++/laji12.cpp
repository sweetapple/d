#include <iostream>
using namespace std;

template<class T,class P>
p sum(T x,P y)
{
    return x+y;
}
int main(void)
{
    cout<<sum(2,'a')<<endl;
    cout<<sum(2,3)<<endl;
    cout<<sum('a',2)<<endl;
    return 0;
}
