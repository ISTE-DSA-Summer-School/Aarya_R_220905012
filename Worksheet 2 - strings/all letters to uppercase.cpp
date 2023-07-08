#include<iostream>
#include<string>

using namespace std;

string convert(string a);

int main(){
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    cout<<"Converted string: "<<convert(a);
    return 0;
}

string convert(string a){
    int i,n;
    n=a.size();
    for(i=0;i<n;i++){
        a[i]=a[i]-32;
    }
    return a;
}