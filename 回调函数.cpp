#include<stdio.h>
#include<windows.h>
//ָ�����5==30��05
//�Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ����˵���ǻص�����
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

void calc(int(*p)(int,int))//ָ��p�������պ�����ַ
{
		int x,y;

		printf("������������������");
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

	
