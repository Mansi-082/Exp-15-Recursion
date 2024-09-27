//Mansi Kulkarni
//2370123082
//ENTC B1

#include<iostream>
using namespace std;

int factorial(int n); //calling function
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << factorial(n);  //recursion
    return 0;
}

int factorial(int n) { //declaring function
    if(n==0){
        return 1;
    } else{
        return n*factorial(n - 1);
    }
}
