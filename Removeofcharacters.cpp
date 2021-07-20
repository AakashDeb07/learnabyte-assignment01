#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	int i=0,j=0;
	 printf("Input:");
     scanf("%[^\n]%*c",s);
     printf("Output:");
     while(s[i]!='\0')
	 { 
     if(s[i+1]==' '||s[i-1]==' ')
     {
      if(s[i]>=97&&s[i]<122)
      {
      	s[i]=s[i]-32;
	  }
	  printf("%c",s[i]);
	  if(s[i+1]==' ')
	  printf(" ");
	 }
	 else if(i==0||s[i+1]=='\0')
	 {
	  if(s[i]>=97&&s[i]<122)
      {
      	s[i]=s[i]-32;
	  }
	  printf("%c",s[i]);	
	 }
	 else if((s[i]>=97&&s[i]<122)||(s[i]>=65&&s[i]<=90))
	 {
	  if(s[i]>=65&&s[i]<90)
      {
      	s[i]=s[i]+32;
	  }
	  printf("%c",s[i]);	
	 }
      i++; 
    } 
}
