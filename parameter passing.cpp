//pass by value 
#include<iostream>
using namespace std;

int add(int a, int b){
    // int c;
    // c=a+b;
    a++;
    cout<<a;
    return 0;
}
int main()
{
    int num1=10, num2=15, sum;

    sum = add(num1, num2);
    cout<<num1<<endl;

    // cout<<"Sum is " << sum;

return 0;
}