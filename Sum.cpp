//Mansi Kulkarni
//23712382
//ENTC B1

#include<iostream>
using namespace std;

int sum(int n) { //unction for finding sum
    if(n<=1){
        return n;
    } else{
        return n+sum(n - 1);
    }
}
int main() { //main function
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of " << n << " naturals numbers is = " << sum(n); //recursion
    return 0;
}
