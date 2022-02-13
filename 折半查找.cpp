#include<stdio.h>
int main()
{
	printf("请定义一个数组：");
	int array[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&array[i]);			
	}
	for(int i=0;i<9;i++)//冒泡排序
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
	
	printf("排序后 ");
	for(int i=0;i<10;i++)
	{
		printf(" %d",array[i]);			
	}
	
	int a;
	printf("\n输入一个数：");
	scanf("%d",&a);
	int min=0;
	int max=10-1;
	int mid=0;
	int key;
	
	while(min<=max)		//折中
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
	printf("该元素在数组内下标为 %d\n",mid);
	}
	else
	printf("Not found\n");
	return 0;
}
