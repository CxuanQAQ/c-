#include<stdio.h>

////array pointer is a pointer
//int main()
//{
//	int* p=NULL; //store int type address
//	char* pc=NULL; //store char type address
//	//array pointer - point to array's pointer - store array's address	int arr[10]={0};
//	int arr[10]={0};
//	//arr---first element address 
//	//&arr[0]---first element address
//	//&arr---array address  
//	
//	int array[10]={0};
//	int(*pa)[10]=&array;// pa be used to store the array's addreess
//			
//	return 0; 
//}


//int mian()
//{
//	char* arr[5];//<-- pointer array
//	char* (*pa)[5]=&arr;// when define,at the left of pointer is data type
//	
//	//d/vs/devc++/code/picture//pic-2-15
//	
//	
//	return 0;
//}


//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int(*pa)[10]=&arr;
//	for(int i=0;i<10;i++)
//	{
//		printf("%d ",*(*pa+i));//*pa=arr
//		printf("%d ",(*pa)[i]);	
//	}
//	return 0;
//	
//}


//����ָ������ڶ�ά���飬һά�������鷳��


void print1(int arr[3][5],int x,int y)
{
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
}
//��ָ�������е�Ԫ�ؽ�����һ�εõ���������ĳ��ָ��ָ���Ԫ�ص��׵�ַ
void print2(int (*p)[5],int x,int y)//pÿ+1�ͻ�����һ��Ԫ��
{//pҲ�Ǹ���ַ
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d",*(*(p+i)+j));
			//*(p+i)Ϊ��ά�����е�i+1��һά������׵�ַ
			//(*(p+i)+j))Ϊ��ά������һά�������±�Ϊj��Ԫ�ص�ַ
		}	
		
	    	/*     Ҳ����      */
//		for(int j=0;j<y;j++)
//		{
//			printf("%d",(*(p+i))[j]);
		//  (*(p+i))Ϊ��ά�����е�i+1��һά������׵�ַ
		//	�ο�һά�����ӡԪ��eg:for......printf %d,arr[i]
//		}
//		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{5,6,7,8,9}};
//	int (*pa)[3][5]=&arr;
	
	print1(arr,3,5);
	print2(arr,3,5);//��arr���һά���飬��ά������������һά����Ԫ�� 
	return 0;
}
