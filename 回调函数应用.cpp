#include<stdio.h>
#include<search.h>
#include<stdlib.h>
#include<string.h>

			/*qsort����*/
//int (*cmp)(const void *,const void *);
//qsort(*s, n, sizeof(s[0]), cmp);
//���е�һ������s��һ����ַ��������������׵�ַ��
//n����Ҫ�����������
//sizeof(s[0])����ÿһ��Ԫ��ռ�õĿռ��С��
//ָ������ָ�룬�Ƚ������������ú����ĵ�ַ���������ʹ�����Լ�ʵ�֣�������ָ������������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ



struct stu
{
	char name[20];
	int age;
	
};


int cmp(const void *a, const void *b)
{
     return (*(int *)a - *(int *)b);//��void*ǿ��ת��
}
void test1()
{
	
	int s[7]={1,8,9,6,0,7,5};	
	int sz=sizeof(s)/sizeof(s[0]);
		     qsort(s, sz, sizeof(s[0]), cmp);
	
	
	     for(int i = 0; i < sz; i++) 
	     {
		 	  printf("%d ", s[i]);
		 }
	       
	
}


int cmp_struct(const void *a,const void *b)
{
	return ((struct stu*)a)->age- ((struct stu*)b)->age;
}
void test2()
{
		struct stu s[3]={{"zhsng",15},{"shad",45},{"sakd",17}};
	     int sz=sizeof(s)/sizeof(s[0]);
	     
		 qsort(s, sz, sizeof(s[0]), cmp_struct);
	for(int i=0;i<sz;i++)
	{
		printf("%d",s[i].age);	//TODO
	}
	
}


int cmp_struct_name(const void *a,const void *b)
{
	return	strcmp(((struct stu*)a)->name,((struct stu*)b)->name);
}


void test3()
{
		struct stu s[3]={{"zhsng",15},{"shad",45},{"sakd",17}};
	     int sz=sizeof(s)/sizeof(s[0]);
	     
		 qsort(s, sz, sizeof(s[0]), cmp_struct_name);
	for(int i=0;i<sz;i++)
	{
		printf("%s ",s[i].name);	//TODO
	}	
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}
