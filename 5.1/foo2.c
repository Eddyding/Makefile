#include<stdio.h>

int 
delete_string(char str[],char ch)
{
   int i,j;
   for(i = j = 0;str[i] != '\0';i++)
   {
       if(str[i] != ch)// 只要不是ch，就保存下来
        {
	   str[j++] = str[i];// in-place
	}
   }
   str[j] = '\0';
   return 0;
}
