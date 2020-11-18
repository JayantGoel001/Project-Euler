//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//
//a2 + b2 = c2
//For example, 32 + 42 = 9 + 16 = 25 = 52.
//
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    long output = 0;
    for (int a = 1; a < 500; a++) {
        for (int b = a+1; b <500 ; b++) {
            if (sqrt(a*a+b*b)==(1000-a-b)){
                output = a*b*(1000-a-b);
                break;
            }
        }
        if (output!=0){
            break;
        }
    }
    cout<<output;
}
//31875000