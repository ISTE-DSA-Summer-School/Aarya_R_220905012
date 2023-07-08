#include<iostream>
#include<string>

using namespace std;

void mostfreq(string a);

int main(){
    string a;
    cout<<"Enter string: ";
    getline(cin,a);
    void mostfreq(a);
    return 0;
}

void mostfreq(string a){
    //do comparison with counter with 2 for loops , use k++ with j++ in the inner loop then sort n put biggest value
    int n,i,j,k,tempi,tempc,finalcounter=0;
    int counter[100]={0};
    n=a.size();
    for(i=0;i<n;i++){
        for(k=0,j=0;j<n;k++,j++){
            if(a[i]==a[j]) counter[k]++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(counter[j]>counter[j+1]){
                tempi=counter[j]; tempc=a[j];
                counter[j]=counter[j+1]; a[j]=a[j+1];
                counter[j+1]=tempi; a[j+1]=tempc;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(counter[j]==counter[j+1]) 
                finalcounter++;
        }
    }
    for(i=n-1;i>=n-finalcounter-1;i--){
        cout<<"The most frequently repeated characters: "<<counter[i];" ";
    }
}