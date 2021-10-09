#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a=0,b=1;
    int n; cin>>n;
    if(n==1) cout<<"0"<<endl;
    else if(n==2) cout<<"1"<<endl;
    else{
        int c;
        for(int i=1;i<=n-2;i++){
            c=a+b;
            swap(a,b);
            swap(b,c);
        }
        cout<<b<<endl;
    }
    return 0;
}
