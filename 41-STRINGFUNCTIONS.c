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