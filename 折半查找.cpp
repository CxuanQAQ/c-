#include<stdio.h>
int main()
{
	printf("�붨��һ�����飺");
	int array[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);			
	}
	for(int i=0;i<9;i++)//ð������
	{
		for(int j=0;j<10-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				int temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}	
		}
	}
	
	printf("����� ");
	for(int i=0;i<10;i++)
	{
		printf(" %d",array[i]);			
	}
	
	int a;
	printf("\n����һ������");
	scanf("%d",&a);
	int min=0;
	int max=10-1;
	int mid=0;
	int key;
	
	while(min<=max)		//����
	{
		mid=min+(max-min)/2;
		if(array[mid]==a)
		{
			key=1;
			break;
		}
		else if(a<array[mid])
			max=mid-1;	
		else 
			min=mid+1;	
	}
	if(key==1)
	{
	printf("��Ԫ�����������±�Ϊ %d\n",mid);
	}
	else
	printf("Not found\n");
	return 0;
}
