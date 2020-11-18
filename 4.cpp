//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
#include <cmath>

using namespace std;
bool isPalindrome(int n){
    int num = n;
    int revNum =0;
    while (num!=0){
        revNum=revNum*10+num%10;
        num/=10;
    }
    return revNum==n;
}
int main(){
    int n=3;
    int large = (int)pow(10,n)-1;
    int small = (int)pow(10,n-1);
    int largePalindrome =-1;
    for (int i = large; i >=small; i--) {
        for (int j = i; j >=small; j--) {
            int num=i*j;
            if (isPalindrome(num) && num>largePalindrome){
                largePalindrome=num;
                break;
            }
        }
    }
    cout<<largePalindrome;
}
//906609