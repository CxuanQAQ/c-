#include<stdio.h>
#include<windows.h>
//详解5 35.16

int add(int x,int y)
{
	return x+y;
}
int main()
{
	
	int arr[10]={0};
	int (*p)(int,int)=add;//函数指针
	int (*pa)[10]=&arr;//取出数组地址
	int (*parr[5])(int,int);//parr是一个数组-函数指针的数组
	
	int (*(*pparr)[5])(int,int);//指向函数指针 数组的指针 
	
	//pparr是一个数组指针，指针指向的数组有四个元素
	//指向数组的每个元素的类型是一个函数指针,即 int(*)(iint,int)类型
	
	return 0;
	
}
