#include <iostream>
using namespace std;
void calculation(int n, int x){
    if(n*x>=10000 && n*x<=99999){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main() {
	int t,n,x;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>n>>x;
	    calculation(n,x);
	}
	return 0;
}
