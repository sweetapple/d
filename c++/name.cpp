#include <iostream>
#include <cstring>

using namespace std;
namespace my
{
    char name[] ="wangjianli";
    void show_name()
    {
        cout<<name<<endl;
    }
}
namespace your
{
    char name[] = "pycoming";
    void show_name()
    {
        cout<<name<<endl;
    }
}
using namespace my;
int main(void)
{
    
    show_name();
    my::show_name();
    strcpy(name,"zhangsan");
    strcpy(my::name,"zhangsan");
    show_name();
    my::show_name();
    your::show_name();
    return 0;
}
