#include <iostream>
using namespace std;

int main() {
	string str[5000];
    int n,i,j,x,count2=0,count1=0;
    cin>>n;
    for(i=0;i<n;i++){
    // 	cout<<"ENTER "<<i<<"ELEMENT :";
    	cin>>x;
    	count1=0;count2=0;
    	for(j=0;j<x;j++){
    		cin>>str[j];
    		if(str[j]=="LTIME108"){
    			count2++;
			}
			else if(str[j]=="START38"){
				count1++;
			}
		}
		cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}
