#include<iostream>
using namespace std;
void valid(int n){
    while(true){
        cout<<n<<" ";
        if(n==1) break;
        if(n%2==0) n/=2;
        else n=n*3+1;
    }
    cout<<endl;
    return;
}
int main()
{
    int n;
    cin>>n;
    valid(n);
	return 0;
}
