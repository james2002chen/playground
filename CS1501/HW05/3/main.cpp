#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class bigInt{
    public:
        vector<int> value;
        void read();
        void show();
};
void bigInt::read(){
    /*
    char ch=getchar();
    while(ch<'0'||ch>'9') ch=getchar();
    while(ch>='0'&&ch<='9') value.push_back(ch-'0'),ch=getchar();
    */
    string a;
    cin >> a;
    // 使用vector逆序读入,变成整数需要减去偏移量0
    for (int i = a.size() - 1; i >= 0; i--) value.push_back(a[i] - '0');
}
void bigInt::show(){
    int cnt=value.size();
    for(int i=cnt-1;i>=0;i--) cout<<value[i];
    cout<<endl;
}
vector<int> add(vector<int> &A, vector<int> &B) 
{
    // 定义储存结果的vector以及进位t，第0位没有进位->初始化为0
    vector<int> C;
    int t = 0;
    // 从个位开始遍历直至遍历完A和B的所有位
    for (int i = 0; i < A.size() || i < B.size(); i++)
    {
        // 每一次用t表示Ai，Bi与上一个数的进位这三个数的和
        if(i < A.size()) t += A[i];
        if(i < B.size()) t += B[i];
        // 当前这一位输出t除以10的余数
        C.push_back(t % 10);
        // t是否进位
        t /= 10;
    }
    // 如果最高位有进位则补1
    if(t) C.push_back(1);
    return C;
}
bigInt sum(bigInt a,bigInt b){
    bigInt c;
    c.value=add(a.value,b.value);
    return c;
}
int main(){

    bigInt x1;
    bigInt x2;
    x1.read();
    x2.read();
    sum(x1,x2).show();
    return 0;
}