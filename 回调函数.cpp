#include<stdio.h>
#include<windows.h>
//指针详解5==30：05
//把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，就说这是回调函数
//void print(char*str)
//{
//	printf("heihei%s",str);
//}
//void test(void(*pp)(char*))
//{
//	printf("test\n");
//	pp("cxuan");
//}
//
//int main()
//{
//	test(print);
//}




int add(int x,int y)
{
	return x+y;		
}

int  sub(int x,int y)
{
	return x-y;	
}

int  mul(int x,int y)
{
	return x*y;
}
int  div_(int x,int y)
{
	return x/y;
}
 
void exit()
{
	
	
}

void calc(int(*p)(int,int))//指针p用来接收函数地址
{
		int x,y;

		printf("请输入两个操作数：");
			scanf("%d%d",&x,&y);
			printf("%d\n",p(x,y));
			
}


void menu()
{
	printf("********************\n");
	printf("***(1)add  (2)sub***\n");
	printf("***(3)mul  (4)div***\n");
	printf("       0:exit\n");
	printf("********************\n");
	
		
}

int main()
{
//	int(*parr[5])(int,int)={0,add,sub,mul,div_};
	while(1)
	{
		menu();
		int i;
		printf("please input num:");
		scanf("%d",&i);

		switch (i) {
			case 1:
		calc(add);
				break;
			case 2:
		calc(sub);
			
				break;
			case 3:
		calc(mul);
				break;
			case 4:
			calc(div_);
				break;
			case 0:
				exit();
				break;

		}
			system("pause");
			system("cls");
		
	}	
	
}

	
