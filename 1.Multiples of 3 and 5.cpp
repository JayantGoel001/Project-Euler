//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;
int main(){
    int no3 = 999/3;
    int no5 = 999/5;
    int no15 = 999/15;
    int sumOf3 = 3*no3*(no3+1)/2;
    int sumOf5 = 5*no5*(no5+1)/2;
    int sumOf15=15*no15*(no15+1)/2;
    cout<<sumOf3+sumOf5-sumOf15;
}
//Output : 233168