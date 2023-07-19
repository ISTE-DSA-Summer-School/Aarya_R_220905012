#include<iostream>

using namespace std;

int  main( ){
    int  num, rem, rev=0 ;
    int  *pn, *pr ;
    cout<< "Enter the number: ";
    cin>> num;

    pn = & num ;
    pr = & rev ;

    do
    {
    rem = ( *pn ) % 10 ;
    *pr = ( *pr * 10 ) + rem ;
    *pn = ( *pn ) / 10 ;
    }while(  *pn > 0) ;
    cout<< "Reverse of the number: "<< *pr;
    return 0;
}