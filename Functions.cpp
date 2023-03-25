#include<iostream>
using namespace std;

add(int a, int b){ //fn definition
    int c;
    c=a+b;

    return c;
}
int main()
{
    int num1=10, num2=15, sum;
    sum = add(num1, num2); //function call

    cout<<"Sum is "<<sum<<endl;

return 0;
}