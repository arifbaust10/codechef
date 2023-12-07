#include<iostream>
using namespace std;

int main() {
	int t,x,y;
    cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
        if(y>x)
	        cout<<(y-x)*2+x<<endl;
        else
            cout<<y<<endl;
    }
	return 0;
}
