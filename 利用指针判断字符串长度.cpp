#include<stdio.h>
int m_strlen(char*str)
{
	char*start=str;
	char*end=str;
	while(*end!='\0')
	{
		end++;
	}
	return end-start;

}
int main()
{
	char ch[]="celebra";
	int len=m_strlen(ch);
	printf("%d",len);		
	return 0;
}
