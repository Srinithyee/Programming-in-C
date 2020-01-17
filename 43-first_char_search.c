#include<stdio.h>
main()
{
char str[30];
char c
printf(“…Finding first occurrence of a character in a string….”)
printf(“\n enter the string \n”);
gets(str);
printf(“\n enter the character \n”);
gets(c);
printf( “\n First occurrence of character is at position no. %d”, find(str,c));
}

// function to find position if character in string
int find( const char list[], char what )
{
int i, count=0 ;
for(i=0; list[i] != 0 ; ++i )
++count ;
return count ;
}