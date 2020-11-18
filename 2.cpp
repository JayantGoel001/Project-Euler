//Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int TOTAL_NUM = 4000000;
    double gr = (1+sqrt(5))/2;
    int n = floor(log(TOTAL_NUM*sqrt(5))/log(gr));
    double output = (((pow(gr,n+3)-1)/(pow(gr,3)-1)) - (pow(-gr,-(n+3))-1)/(pow(-gr,-3)-1))/sqrt(5);
    cout<<int(output);
}
//4613732