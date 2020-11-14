//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    long long int n = 600851475143;
    long long int maxPrime =-1;
    while (n%2==0){
        maxPrime=2;
        n/=2;
    }
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n%i==0){
            maxPrime=i;
            n/=i;
        }
    }
    if (n>2){
        maxPrime=n;
    }
    cout<<maxPrime;
}
//6857