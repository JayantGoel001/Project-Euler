//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>
using namespace std;
int main(){
    int n=20;
    int ar[n+1];
    for (int i = 1; i <=n ; ++i) {
        ar[i] = i;
    }
    for (int i = 2; i <=n ; ++i) {
        for (int j = i; j <=n ; j+=i) {
            if (i!=j && ar[j]%ar[i]==0){
                ar[j]/=ar[i];
            }
        }
    }
    int output =1;
    for (int i = 1; i <=n; ++i) {
        output*=ar[i];
    }
    cout<<output;
}
//232792560