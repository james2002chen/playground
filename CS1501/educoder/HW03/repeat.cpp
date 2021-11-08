#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int a[1000];
    bool check[100000];
    memset(a, 0, sizeof(a));
    memset(check, 0, sizeof(check));
    int num,index=0;
    while(cin>>num){
        if(!check[num]){
            a[index]=num;
            index++;
            check[num]=true;
        }
        char c=cin.get();
        if(c=='\n') break;
    }
    cout<<index<<" ";
    for(int i=0;i<index;i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}