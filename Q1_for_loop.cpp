#include<iostream>
#include <time.h>

using namespace std;
void fib(int n)
{
    double x1,x2,y;
    x1=0;
    x2=1;
    cout<<x1<<" "<<x2<<" ";
    for(int i=2;i<n;i++)
    {
        y=x1+x2;
        x1=x2;
        x2=y;
        cout<<y<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter number of terms in fibonacci series:";
    cin>>n;
    clock_t t;
    t = clock();
    fib(n);
     t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    cout<<"\nFibonacci series took seconds to execute \n"<<time_taken;

    return 0;
}
