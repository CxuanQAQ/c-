#include<stdio.h>
#include<windows.h>


//int add(int x,int y)
//{
//	return x+y;
//}
//
//int sub(int x,int y)
//{
//	return x-y;
//}
//int mul(int x,int y)
//{
//	return x*y;
//}
//
//int div(int x,int y)
//{
//	return x/y;
//}
//
//
//int main()
//{
//	int* arr[5];
//	//需要一个数组，这个数组可以存放四个函数的地址-函数指针的数组
//	int(*p)(int, int)=add;//sub,mul.div	
//	int (*parr[4])(int,int)={add,sub,mul,div};
//	for(int i=0;i<4;i++){
//		printf("%d\n",parr[i](2,4));//TODO
//	}
//	
//	return 0;
//}
//
//
//
//char* my_strcpy(char*dest,const char* src);
////写一个函数指针p，能够指向my_strcpy；
//
//char*(*p)(char*,const char*);
//
////写一个函数指针数组parr，能够存放4个my_strcpy函数地址；
//char*(*parr[4])(char*,const char*);

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
	int(*parr[5])(int,int)={0,add,sub,mul,div_};
	while(1)
	{
		menu();
		int i,x,y;
		printf("please input num:");
		scanf("%d",&i);
		printf("请输入两个操作数：");
			scanf("%d%d",&x,&y);
		int ret=parr[i](x,y);
		printf("%d",ret);
//		switch (i) {
//			case 1:
//						printf("请输入两个操作数：");
//						scanf("%d%d",&x,&y);
//				printf("%d\n",add(x,y));	//TODO
//				break;
//			case 2:
//						printf("请输入两个操作数：");
//						scanf("%d%d",&x,&y);
//				printf("%d\n",sub(x,y));//TODO
//				break;
//			case 3:
//						printf("请输入两个操作数：");
//						scanf("%d%d",&x,&y);
//				printf("%d\n",mul(x,y));
//				
//				break;
//			case 4:
//						printf("请输入两个操作数：");
//						scanf("%d%d",&x,&y);
//				printf("%d",div_(x,y));
//				break;
//			case 0:
//				exit();
//				break;
	system("pause");
		system("cls");
		}
	
		
	}	
	
	
	
	
	
	
