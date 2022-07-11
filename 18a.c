#include <stdio.h>
#include <string.h>
void main()
{
	/*     strlen		*/
     char str1[20] = "BeginnersBook";
     printf("Length of string str1: %d\n\n", strlen(str1));
     
     
    /*		strcmp		*/
     char s1[20] = "BeginnersBook";
     char s2[20] = "BeginnersBook.COM";
     if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different\n\n");
      }


	/*		strcpy		*/
	  char S1[30] = "string 1";
     char S2[30] = "string 2 : it is copied to S1";
     /* this function has copied s2 into s1*/
     
     printf("String S1 is: %s\n\n", strcpy(S1,S2));

	
	/*		strcat		*/
	 char Str1[10] = "Hello";
     char Str2[10] = "World";
     strcat(Str1,Str2);
     printf("Output string after concatenation: %s\n\n", Str1);
	

	/*		strchr		*/
	 char mystr[100] = "I' am example of function strchr";
     printf ("%s\n\n", strchr(mystr, 'm'));


	/*		strstr		*/
	 char string[55] ="This is a test string for testing";
 	 char *p;
  	p = strstr (string,"test");
  	if(p)
 	 {
    printf("string found\n" );
    printf ("First occurrence of string \"test\" in \"%s\" is"\
           " \"%s\"\n\n",string, p);
 	 }
 	 else printf("string not found\n\n" );
	
	
	/*		strrev		*/
	
   char name[30] = "Hello";
 
   printf("String before strrev( ) : %s\n",name);
 
   printf("String after strrev( )  : %s\n\n",strrev(name));
	
	
	/*		strlwr		*/
	char str[ ] = "I AM  THE BEST";
  
    // converting the given string into lowercase.
    printf("%s\n\n",strlwr (str));


	/*		strupr		*/
		char stri[ ] = "i am the best";
  
    // converting the given string into uppercase.
    printf("%s\n\n",strupr (stri));
    
    /*		strncpy		*/
   
}
