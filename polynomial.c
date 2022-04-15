#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int substr(char m[r][],char p[],int start,int len)
{
    char* s=p+start;
	int n=strlen(s);
	int k=0;
	if(n<len)
	{
	    len=n;
	}
	while(len!=0)
	{
	    m[r][k]=p[k+start];
		len--;
		k++;
	}
	m[r][k]='\0';
	return 0;
}
void tododerivation(char m)
{
    
}
int main()
{
    int i,j,r=0;start=0;
	char p[],m[][],derivation[],result[]="";
    printf("please input the polynomial:");
    p[] = getchar();
	for(i=0;i<sizeof(p);i+start)
	{
	    int len=0;
		for(j=i;j<sizeof(p);j++)
		{
		    if (p[j]!='+'&&p[j]!='-')
		        len++;
			else 
			    substr(m[r++][],p,start,len);//extract monomial from polynomial
				start=j;
			    break;
		}
     }
     for(r=0;r<sizeof(p);r++)
	 {
	     derivation[r]=tododerivation(m[r][]);//take the derivative of every monomial
		 result[]=strcat(result[],derivation[r]);
	 }
	 return 0;
}
