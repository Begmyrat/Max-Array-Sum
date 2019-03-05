#include <iostream>

using namespace std;

int n,m;
int a[1000000], b[1000000];

int main(){
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
		if(i>1){			
			if(a[i-2]+a[i]>b[i])
				b[i]=a[i-2]+a[i];
			if(b[i-1]-a[i-1]+a[i]>b[i])
				b[i]=b[i-1]-a[i-1]+a[i];
			if(b[i-2]+a[i]>b[i])
				b[i]=a[i]+b[i-2];			
		}
		if(b[i]>m)		
			m=b[i];
	}
	cout<<m<<endl;
	
	
	return 0;
}
