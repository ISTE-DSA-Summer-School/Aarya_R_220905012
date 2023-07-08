#include<iostream>
#include<string>

using namespace std;

int main(){
	string a;
	int i,n;
	cout<< "Enter a line: ";
	getline(cin,a);
	n=a.size();
	for(i=0;i<n;i++){
		if(a[i]=' ')
			curr_len++;
		else{
			res=max(res,curr_len);
			curr_len=0;
		}
	}
	cout<<"The length of the longest word: "<<max(res.curr_len);
	return 0;
}