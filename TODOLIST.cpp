#include <iostream>
using namespace std;

int main() {
			int n,i,arr[5000],x,j,count=0;
	cin>>n;
	for(i=1;i<=n;i++){
// 		cout<<"ENTER "<<i<<"NUMBER"<<endl;
	    cin>>x;
	    count=0;
	    for(j=1;j<=x;j++){
	        cin>>arr[j];
	        if(arr[j]>=1000){
	        	count++;
			}
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
