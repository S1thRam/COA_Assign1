#include <iostream>
#include <time.h>

using namespace std;
long double fib(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }
   else {
      return(fib(x-1)+fib(x-2));
   }
}
int main() {
   int x , i=0;
   cout << "Enter the number of terms of series : ";
   cin >> x;
    clock_t t;
    t = clock();

   cout << "\nFibonnaci Series : ";
   fib(x);
   cout << " " << fib(x);
   // while(i < x) {
   //    cout << " " << fib(i);
   //    i++;
   // }
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    cout<<"\nFibonacci series took seconds to execute \n"<<time_taken;

   return 0;
}
