***************************************************************************************************************************
                                           ASSIGNMENT 4:STRING OPERATIONS IN C
                                           NAME:SRINITHYEE SK
                                           REGISTER NUMBER:185001166
***************************************************************************************************************************
//First program to implement the operations without using built in functions
#include <stdio.h>
void concatenate(char[],char[]);
int main()
{
char p[100],q[100];
printf("Enter the first string");
scanf(%[^\n],p);
printf("Enter the second string");
scanf(%[^\n],q);
concatenate(p,q);
copy(p);
chr(p);
void concatenate(char p[],charq[])
{
        int c,d;
        c=0;
        while(p[c]!='\0')
        {

        }
        d=0;
        while(q[d]!='\0')
        {
                p[c]=q[d];
                d++;
                c++;
        }
        p[c]='\0';
        printf("The concatenated string is:\"%s\"\n",p);
}
void copy(char p[])
{
char s2[100];
int i;
 for(i = 0; p[i] != '\0'; ++i)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);

    return 0;
}
char(char p[])
{
char ch;
printf("Enter the character you wish to search for);
scanf("%c",ch);
int i, count=0 ;
for(i=0; p[i] != 0 ; ++i )
++count ;
printf("%d",count) ;
}
}
***************************************************************************************************************************
#include<stdio.h>
#include<string.h>

void replaceSubstring(char [],char[],char[]);

main()
{
char string[100],sub[100],new[100];
printf(“\nEnter a string: “);
scanf(%[^\n],string);
printf(“\nEnter the substring: “);
scanf(%[^\n],sub)
printf(“\nEnter the new substring: “);
scanf(%[^\n],new)
replaceSubstring(string,sub,new);
printf(“\nThe string after replacing…….\n\n%s\n\n”,string);
}

void replaceSubstring(char string[],char sub[],char new[])
{
int stringLen,subLen,newLen;
int i=0,j,k;
int flag=0,start,end;
stringLen=strlen(string);
subLen=strlen(sub);
newLen=strlen(new);

for(i=0;i<stringLen;i++)
{
flag=0;
start=i;
for(j=0;string[i]==sub[j];j++,i++) /* Checks for the substring */
if(j==subLen-1)
flag=1; /* flag sets when substring is identified */
end=i;
if(flag==0)
i-=j;
else
{
for(j=start;j<end;j++) /* Delete the substring */
{
for(k=start;k<stringLen;k++)
string[k]=string[k+1];
stringLen–;
i–;
}

for(j=start;j<start+newLen;j++)    /* Inserting new substring */
{
for(k=stringLen;k>=j;k–)
string[k+1]=string[k];
string[j]=new[j-start];
stringLen++;
i++;
}
}
}
}
***************************************************************************************************************************
//third program to find the first occurence of a charater in a string
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
***************************************************************************************************************************
//fourth program to reverse a string
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str[100];
  	int i, len;
 
  	printf("\n Please Enter any String :  ");
  	gets(Str);
  	
  	len = strlen(Str);
  	
 	printf("\n String after Reversing : "); 
  	for (i = len - 1; i >= 0; i--)
  	{
  		printf("%c", Str[i]);
  	}

  	return 0;
}
****************************************************END OF ASSIGNMENT******************************************************