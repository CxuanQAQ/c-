#include<stdio.h>
#include<windows.h>
//���5 35.16

int add(int x,int y)
{
	return x+y;
}
int main()
{
	
	int arr[10]={0};
	int (*p)(int,int)=add;//����ָ��
	int (*pa)[10]=&arr;//ȡ�������ַ
	int (*parr[5])(int,int);//parr��һ������-����ָ�������
	
	int (*(*pparr)[5])(int,int);//ָ����ָ�� �����ָ�� 
	
	//pparr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
	//ָ�������ÿ��Ԫ�ص�������һ������ָ��,�� int(*)(iint,int)����
	
	return 0;
	
}
