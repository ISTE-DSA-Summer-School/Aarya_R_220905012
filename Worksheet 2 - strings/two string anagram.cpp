#include<iostream>
#include<string>

using namespace std;

int anagram(string a, string b);

int main(){
    string a,b;
    cout<<" Enter first string: ";
    getline(cin,a);
    cout<<" Enter second string: ";
    getline(cin,b);
    if(anagram(a,b))
        cout<<" True";
    else 
        cout<<" False";
    return 0;
}

int anagram(string a, string b){
    int i,j,m,n,flag;
    char temp;
    m=a.size();
    n=b.size();
    if(m!=n){
        return 0;
    }
    for(i=0;i<m;i++){
        for(j=0;j<m-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<m-1;j++){
            if(b[j]>b[j+1]){
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    if(a.compare(b)==0)
        return 1;
    else
        return 0;
}