#include <iostream>
#include<string>

using namespace std;

char nonrepeat(string a);

int main(){
    string a;
    cout<<"Enter a string: ";
    getline(cin,a);
    cout<<"The non repeated character: "<<nonrepeat(a);
    return 0;
}

char nonrepeat(string a){
    int i,j,counter;
    int n=a.size();
    for(i=0;i<n;i++){
        counter=0;
        for(j=0;j<n;j++){
            if(a[i]==a[j]){
                counter++;
            }
            if(counter==2) break;
        }
        if(counter==1) break;
    }
    return a[i];
}