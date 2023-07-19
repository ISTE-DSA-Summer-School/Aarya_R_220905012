#include<iostream>
#define ROW 3
#define COL 3
using namespace std;

int main(){ 
    int A[ROW][COL], B[ROW][COL], C[ROW][COL], i,j,k,sum;
    cout<< "Enter values for 1st matrix: "<<endl;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            cout<<"Enter for "<< i+1 << j+1<< " : ";
            cin>> *(*(A+i)+j);
        }
    }
    cout<< "Enter values for 1st matrix: "<<endl;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            cout<<"Enter for "<< i+1 << j+1<< " : ";
            cin>> *(*(A+i)+j);
        }
    }
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            C[i][j]=0;
            for(k=0;k<COL;k++){
                C[i][j]+= A[i][k] * B[k][j];
            }
        }
    }
    cout<<"Product Matrix: "<<endl;
    for(i=0;i<ROW;i++){
        for(j=0;j<COL;j++){
            cout<<C[i][j]<< " ";
        }
        cout<< endl;
    }
    return 0;
}