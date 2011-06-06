#include <stdio.h>

typedef struct point
{
    int x ;
    int y ;
    struct point *p;
}pt;
int main(void)
{
   pt w; 
   w.x = 2;
   w.y = 3;
   return 0;
}
