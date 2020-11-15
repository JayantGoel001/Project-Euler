//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?
#include <iostream>
#include <cmath>

using namespace std;
bool isPrime(int n){
    for (int i = 2; i <=sqrt(n) ; ++i) {
        if (n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int count = 2;
    int maxCount = 10001;
    int n=0;
    while (count<maxCount){
        n+=6;
        if (isPrime(n+1)){
            count++;
        }
        if (isPrime(n-1)){
            count++;
        }
    }
    cout<<n+1;
}
//104743