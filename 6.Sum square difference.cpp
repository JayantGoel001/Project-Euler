//The sum of the squares of the first ten natural numbers is,
//
// The square of the sum of the first ten natural numbers is,
//
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n =100;
    long long int sum = n*(n+1)/2;
    long long int squareOfSum = pow(sum,2);
    long long int sumOfSquare = n*(n+1)*(2*n+1)/6;
    cout<<squareOfSum-sumOfSquare;
}
//25164150