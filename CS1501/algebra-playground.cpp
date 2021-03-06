#include <iomanip>
#include <iostream>
#include <ostream>
using namespace std;
int main(){
    int i=0;
    cout<<i++<<endl;
    //0
    i=0;
    cout<<++i<<endl;
    //1
    i=0;
    int s=0;
    s+=i++;cout<<s<<endl;
    //0
    s=0,i=0;
    s+=++i;cout<<s<<endl;
    //1
    cout<<endl;

    double a,b,c,d;
    cout<<2/3<<endl;
    //0
    cout<<2.0/3<<endl;
    //0.666667
    cout<<2/3.0<<endl;
    //0.666667
    i=2,s=3;
    cout<<i/s<<endl;
    //0
    cout<<(double)i/s<<endl;
    //0.666667
    cout<<i/(double)s<<endl;
    //0.666667
    cout<<(double)(i/s)<<endl;
    //0
    cout<<endl;

    a=2.0,b=1.0;
    cout<<a-b<<endl;
    //1
    cout<<a+b<<endl;
    //3
    a=2.0/3;
    b=2.0/3;
    cout<<a-b<<endl;
    //0
    cout<<a+b<<endl;
    //1.33333
    cout<<endl;
    /*
    float型数据125.5转换为标准浮点格式

125二进制表示形式为1111101，小数部分表示为二进制为 1，则125.5二进制表示为1111101.1，
由于规定尾数的整数部分恒为1，则表示为1.1111011*2^6，阶码为6，加上127为133，则表示为10000101，
而对于尾数将整数部分1去掉，为1111011，在其后面补0使其位数达到23位，则为11110110000000000000000

则其二进制表示形式为

0 10000101 11110110000000000000000，则在内存中存放方式为：

00000000   低地址

00000000

11111011

01000010   高地址

而反过来若要根据二进制形式求算浮点数如0 10000101 11110110000000000000000

由于符号为为0，则为正数。阶码为133-127=6，尾数为11110110000000000000000，则其真实尾数为1.1111011。所以其大小为

1.1111011*2^6，将小数点右移6位，得到1111101.1，而1111101的十进制为125，0.1的十进制为1*2^(-1)=0.5，所以其大小为125.5。

同理若将float型数据0.5转换为二进制形式

0.5的二进制形式为0.1，由于规定正数部分必须为1，将小数点右移1位，则为1.0*2^(-1)，其阶码为-1+127=126，表示为01111110，而尾数1.0去掉整数部分为0，补齐0到23位00000000000000000000000，则其二进制表示形式为

0 01111110 00000000000000000000000

由上分析可知float型数据最大表示范围为1.11111111111111111111111*2^127=3.4*10^38

对于double型数据情况类似，只不过其阶码为11位，偏置量为1023，尾数为52位。
    */
    cout<<endl;
    cout << setprecision(3)<<1.234 <<endl;
    cout << setprecision(6)<<1.234 <<endl;
    cout<<endl;
    cout << setprecision(20)<< 0.6 <<endl;
    //0.6 -> 0.110 -> 1.10 * 2^-1 -> (去整数1) -> 10
    //0 01111111110 0011001100110011001100110011001100110011001100110011
    cout << setprecision(20)<< 0.7 <<endl;
    //negative error
    cout << setprecision(20)<< 0.8 <<endl;
    //positive error!
    cout << setprecision(20)<< 3*0.6 <<endl;
    cout << setprecision(20)<< 1.8 <<endl;
    cout<<endl;

    cout<<(char)(('A'-65+32)%64+65);
    return 0;
}