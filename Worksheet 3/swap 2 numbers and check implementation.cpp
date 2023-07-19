#include <iostream>

using namespace std;

void swap1(int *x, int *y)  
{  
    int temp;  
  
    temp = *x;  
    *x   = *y;  
    *y   = temp;  
} 

void swap2(int &x, int &y){
    int temp;
    
    temp = x;
    x = y;
    y = temp;
}

int main()  
{  
    int a, b;  
  
    cout<<"Enter values for a and b"<< endl;  
    cin>> a >> b;  
  
    cout<< "Before swapping: a = "<<a<<" and b = "<< b<< endl;  
  
    swap1(&a, &b);  
  
    cout<<"After swapping 1: a = "<<a<<" and b = "<< b<< endl;  
    
    swap2(a, b);  
  
    cout<<"After swapping 2: a = "<<a<<" and b = "<< b<< endl;
  
    return 0;  
}  