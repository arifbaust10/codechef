#include <iostream>
using namespace std;

int main() {

    int t,a;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a;
        if(a%2==0 && a%7==0){
            cout<<"Alice"<<endl;
        }else if(a%2!=0 && a%9==0){
            cout<<"Bob"<<endl;
        }else{
            cout<<"Charlie"<<endl;
        }
    }
	return 0;
}
