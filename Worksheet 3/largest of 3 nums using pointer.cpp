#include<iostream>

using namespace std;

int main(){
    int a,b,c,*pa, *pb, *pc;

    cout<<"Enter three numbers: ";
    cin>> a >> b >> c;
    pa= &a;
    pb= &b;
    pc= &c;
    if(*pa > *pb && *pa > *pc)
    {
    cout<< "Largest is: "<< *pa;
    }
    else if(*pb > *pc && *pb > *pc)
    {
    cout<< "Largest is: "<< *pb;
    }
    else
    {
    cout<< "Largest is: "<< *pc;
    }
    return 0;
}