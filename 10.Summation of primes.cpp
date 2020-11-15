//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.
#include <iostream>
using namespace std;
int main(){
    int TOTAL = 2000000;
    bool isPrime[TOTAL+1];
    for (int i = 1; i <= TOTAL; ++i) {
        isPrime[i]= true;
    }
    for (int i = 2; i*i <= TOTAL; ++i) {
        for (int j = i*i; j <=TOTAL ; j+=i) {
            isPrime[j]= false;
        }
    }
    long long int sum=0;
    for (int i = 2; i <=TOTAL ; ++i) {
        if(isPrime[i]){
            sum+=i;
        }
    }
    cout<<sum;
}
//142913828922