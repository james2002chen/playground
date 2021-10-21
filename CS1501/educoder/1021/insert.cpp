#include<iostream>
#include<limits.h>
using namespace std;
int a[1001];
bool in_order(int x,int y,int z){
    if((x>=y&&y>=z)||(x<=y&&y<=z)) return true;
    else return false;
}
void binary_search(int left_index,int right_index,int x){
    if(left_index+1==right_index){
        cout<<right_index-1<<endl;
        return;
    }
    int mid=(left_index+right_index)/2;
    //to find the smallest index, we need to check left first
    if(in_order(a[left_index], x, a[mid])) binary_search(left_index, mid, x);
    else if(in_order(a[mid], x, a[right_index])) binary_search(mid, right_index, x);
}
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    //expand a to eliminate special cases
    if(a[1]<=a[n]) a[0]=-INT_MAX,a[n+1]=INT_MAX;
    else a[0]=INT_MAX,a[n+1]=-INT_MAX;
    int x; cin>>x;
    binary_search(0, n+1, x);
    return 0;
}