//Mansi Kulkarni
//23070123082
//ENTC B1

#include <iostream> 
using namespace std;
int fib(int n){ //function for fibonacci
    if(n==0){
        return 0;
    } else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2); //recursion
    }
}
int main(){
    int n;
    cout<<"Enter the fibonacci number you want: ";
    cin>>n;
    int ans = fib(n);
    cout<<n<<" Fibonacci number is: "<<ans; 
}
