#include <iostream>

using namespace std;

int add(int x,int y,int z)
{
    return x+y+z;
}
double add(double x,double y)
{
    return (double (x+ y));
}
int main(void)
{
    cout<<"add(3,4,5)="<<add(3,4,5)<<endl<<"add(3.0,4.0)="<<add(3.0f,4.0f)<<endl;
    return 0;
}
