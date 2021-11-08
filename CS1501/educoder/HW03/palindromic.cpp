#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
char *myitoa(int num,char *str,int radix) 
{  
	/* 索引表 */ 
	char index[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	unsigned unum; /* 中间变量 */ 
	int i=0,j,k; 
	/* 确定unum的值 */ 
	if(radix==10&&num<0) /* 十进制负数 */ 
	{ 
		unum=(unsigned)-num; 
		str[i++]='-'; 
	} 
	else unum=(unsigned)num; /* 其它情况 */ 
	/* 逆序 */ 
	do  
	{ 
		str[i++]=index[unum%(unsigned)radix]; 
		unum/=radix; 
	}while(unum); 
	str[i]='\0'; 
	/* 转换 */ 
	if(str[0]=='-') k=1; /* 十进制负数 */ 
	else k=0; 
	/* 将原来的“/2”改为“/2.0”，保证当num在16~255之间，radix等于16时，也能得到正确结果 */ 
	char temp; 
	for(j=k;j<=(i-k-1)/2.0;j++) 
	{ 
		temp=str[j]; 
		str[j]=str[i-j-1]; 
		str[i-j-1]=temp; 
	} 
	return str; 
} 
bool isPalindromic(char *str){
    int len=strlen(str)-1;
    for(int i=0;2*i<len;i++){
        if(str[i]!=str[len-i]) return false;
    }
    return true;
}
int main(){
    int base;
    cin>>base;
    for(int i=1;i<=200;i++){
        char str1[100],str2[100];
        myitoa(i, str1, base);
        myitoa(i*i, str2, base);
        if(isPalindromic(str2)) cout<<str1<<" "<<str2<<endl;
    }
    return 0;
}