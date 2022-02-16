#include<stdio.h>


//void test(int** p)
//{
//
//}
//int mian()
//{
//	int *ptr;
//	int **ptrr=	&ptr;
//	test(&ptr);
//	test(ptrr);
//	
//	int *arr[10];
//	test(arr);
//	//3 all can transfer function test
//	return 0;
//}



//int add(int x,int y)
//{
//	int z=0;
//	z=x+y;
//	return z;
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int arr[10]={0};
//	int (*p)[10]=&arr;
//	
//	printf("%d\n",add(a,b));
//	
//	//&函数名 和 函数名都是函数的地址
//	printf("%p\n",&add);
//	printf("%p\n",add);
//	
//	int (*pa)(int ,int)=add;
//	printf("%d\n",(*pa)(10,20));//=30
//	
//	return 0;
//}


void print_a(char *p)
{
	printf("%s",p);
}
int main()
{
	void(*p)(char*)=print_a;
	(*p)("hello"); 
	
	
}


