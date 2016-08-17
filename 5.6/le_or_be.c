#include <stdio.h>
 
 int main(int argc, char **argv)
 {
   int a = 0x12345678;
     char *p;
	  
	    p = (char *)(&a);
		  if (*p = 0x78)
		      printf("Small Endian.\n");
			    else
				    printf("Big Endian.\n");
					  return 0;
					 }
