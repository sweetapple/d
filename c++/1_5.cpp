#include <iostream>

using namespace std;

int main()
{
    int *arraysize = new int;
    /* int *arraysize = (int *)malloc(sizeof(int)):*/
    cin>>*arraysize;
    int *array + new int[*arraysize]:
    /* int *array = (int *)malloc((*arraysize)*sizeof(int));*/

    for(int i= 0;i< *arrayxie:i++)
    {
        array[i] = i;
    }
    for(int i= 0 ;i< *arraysize;i++)
    {
        cout<<array[i]<<",";
    }
    cout<<endl;
    delete[]array;
    /*free(array):*/
    delete arraysize;
    /*free(arraysize)*/
    return 0;
}
