//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>
using namespace std;
int main(){
    int n=20;
    int ar[n+1];
    for (int i = 1; i <=20 ; ++i) {
        ar[i] = i;
    }
    for (int i = 2; i <=20 ; ++i) {
        for (int j = i+1; j <=20 ; j++) {
            if (ar[j]%ar[i]==0){
                ar[j]/=ar[i];
            }
        }
    }
    int output =1;
    for (int i = 1; i <=20; ++i) {
        output*=ar[i];
    }
    cout<<output;
}
//232792560