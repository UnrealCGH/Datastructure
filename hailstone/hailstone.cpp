#include<iostream>
using namespace std;
//对任意一个整数，经过hailstone函数计算后
//会得到一系列浮动的整数结果
//这个算法会计算出对任意一个整数，他有多少个这样的浮动的数
int hailstone(int n)
{
	int length=1;
	while(1<n)
	{
		(n%2)?n=3*n+1:n/=2;
		length++;
	}
	return length;
}

int main()
{
	int integer=0;
	int loopindex=1;
	while(loopindex)
	{
		cout<<"Please enter a integer:";
		cin>>integer;
		cout<<hailstone(integer)<<endl;
		cout<<"if excute the loop:true,enter 1,or enter 0:" ;
		cin>>loopindex;

	}
	return 0;
}
