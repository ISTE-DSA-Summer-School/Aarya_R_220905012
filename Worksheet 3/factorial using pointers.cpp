#include<iostream>

using namespace std;

void factorial(int num, int *fact){
    int i;
    *fact = 1;
    for(i=1;i<=num;i++)
        *fact = *fact * i;
}

int main(){
    int num, fact;
    cout<< "Enter number: ";
    cin>> num;
    factorial(num, &fact);
    cout<< "Factorial is: "<< fact;
    return 0;
}