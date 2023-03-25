//Structures as parameter
//array

#include<iostream>
using namespace std;

// void fun(int A[]) //arrays are always passed by address never by values or reference
// {
//     cout<<sizeof(A)/sizeof(int)<<endl;
// }

// int main()
// {
//     int A[]={2,4,6,8,10};
//     int n=5;
//     fun(A);

//     for(int x:A)
//     cout<<x<<" ";

int * fun(int size)
{
    int *p;
    p=new int[size];

    for(int i=0; i<size; i++)
    p[i]=i+1;
    return p;
}

int main(){
    int *ptr, sz=5;

    ptr=fun(sz);

    for(int i=0; i<sz; i++)
    cout<<ptr[i]<<endl;

return 0;
}