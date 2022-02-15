#include <stdio.h>


// point array is array, be used to store pointer 
//int main()
//{
//	int arr[10]={0};//int array 
//	char ch[5]={0};//character array
//	int* parr[4];	//store int pointer array
//	char* pch[5];	//store character pointer array
//	
//	int a=1;
//	int b=2;
//	int c=3;
//	int d=4;
//	int* array[4]={&a,&b,&c,&d};
//	for(int i=0;i<4;i++){
//		printf("%d",*(array[i]));
//		//TODO
//	}
//	return 0;
//}

int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,5,6};
	int arr3[]={3,4,5,6,7};
	int* parr[]={arr1,arr2,arr3};
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			printf("%d",*(parr[i]+j));//parr[0] is the address of arr1
				//eg:in arr1 if j=0 point to 1,if j=1 point to 2
		}	
		printf("\n");	
	}
	 
	return 0;
}
