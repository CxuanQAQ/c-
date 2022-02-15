#include<stdio.h>
//int main()
//{
//	char arr[]="wasdsf";
//	char *pa=arr;
//	printf("%s\n",arr);
//	printf("%s",pa);//%s only can incoming address
//	
//	return 0;
//}


//int main()
//{
//	char *p="abcede"; //"abcede" is a constant character string
//	//assign a addrsee to p
//	printf("%c\n",*p);
//	printf("%s",p); 
//	return 0;
//}


//int main()
//{
//	char arr1[]="abcdef";
//	char arr2[]="acbdef";
//	char* p1=arr1;
//	char* p2=arr2;
//	if(arr1==arr2)
//	{
//		printf("hehe\n");	//TODO
//	}
//	else
//	printf("haha");
//		
//	return 0;
//	//  answer---haha
//}

int main()
{
	char arr1[]="abcdef";
	char arr2[]="acbdef";
	char* p1="abcdef";	//character string constant
	char* p2="abcdef";
	if(p1==p2)
	{
		printf("hehe\n");	//TODO
	}
	else
	printf("haha");
		
	return 0;
	//  answer---hehe
	//p1 and p2 all store character string abcdef a's address
}
