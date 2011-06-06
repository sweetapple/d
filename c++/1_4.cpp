#include <iostream>

using namespace std;

class Point
{
    private:
        int x;
        int y;
        int sum;
    public:
        
        Point()
        {x=1,y=3;}
        ~Point()
        {}
        int sum(int a,int b)
        {
            sum = a+b;
            return sum;
        }
};
int main(void)
{
    Point pt;
    int w;
    w = pt.sum(x,y);
    cout<<"w="<<w<<endl;
    return 0;
}
