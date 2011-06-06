#include <iostream>
using namespace std;
int main(void)
{
    int i,n,sum=0;
    cout<<"请输入数组长度";
    cin>>n;
    int *p=new int[n];
    if(!p) return 1;
    cout<<"请输入"<<n<<"个元素:";
    for (i = 0; i < n; i++) 
    {
        cin>>p[i];
    }
    for (i = 0; i < n; i++) 
    {
        sum+=p[i];
    }
    cout<<endl;
    cout<<"结果为"<<sum<<endl;
    delete []p;
    return 0;
}

