#include <iostream>
#include <string.h>
using namespace std;
bool chk[128];
string st;
int main()
{
    cin>>st;
    int length=1,left_index=0,right_index=0;
    for(left_index=0;left_index<st.size();left_index++){
        if(left_index-1>=0) chk[st[left_index-1]]=false;
        while(!chk[st[right_index]]&&right_index<=st.size()-1) chk[st[right_index]]=true,right_index++;
        length=max(length,right_index-left_index);
    }
    cout<<length<<endl;
    return 0;
}