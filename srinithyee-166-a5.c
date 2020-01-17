*************************************************************************************************************************** 
                                                   ASIGNMENT 5:POINTERS IN C 
                        			   NAME:SRNITHYEE SK 
                        			   REGISTER NO:185001166 
*************************************************************************************************************************** 
//first program to find the frequency of words in a string 
#include<stdio.h> 
#include<string.h> 
 
void main(){ 
    char a[100]={},sub[100]={}; 
    char word[85]; 
    printf("Enter string: "); 
    scanf(" %[^\n]",a); 
    printf("Enter word: "); 
    scanf(" %[^\n]",sub); 
    char *p=a; 
    int i=0,f=0,z=0,co=0; 
    for(i=0;*(p);p++){ 
 
        if((*p)!=' '&&(*p)!='\0'){      //checking if we have reached a ' ' or '\0' 
            word[z]=*p;               //storing word got into word 
            z++; 
        } 
        else{ 
                word[z]='\0'; 
            if (strcmp(word,sub)==0){ 
                co++; 
            } 
            int k=0; 
            for (k=0;k<50;k++){         //Done with this word. So wordId is reassigned to 0s and z=0 too 
                word[k]=0; 
                } 
                z=0; 
        } 
    } 
    word[z]='\0'; 
    if (strcmp(word,sub)==0){ 
        co++; 
    } 
     
 
    printf("The number of times \"%s\" occurs as a word in the given sentence is: %d",sub,co); 
     
     
 
} 
/*OUTPUT: 
Enter string: hello world says hello 
Enter word: hello 
The number of times "hello" occurs as a word in the given sentence is: 2*/ 
*************************************************************************************************************************** 
//second program to parse the lines of text
#include <stddef.h>
#include <ctype.h>
#include <stdio.h>
char getwords(char *line, char *words[], int maxwords)
{
char *p = line;
int nwords = 0;

while(1) //to parse a line of text into tokens
    {
    while(isspace(*p))
        p++;

    if(*p == '\0')
        return nwords;

    words[nwords++] = p;

    while(!isspace(*p) && *p != '\0')
        p++;

    if(*p == '\0')
        return nwords;

    *p++ = '\0';

    if(nwords >= maxwords)
        return nwords;
    }
}
void main()
{
char line[100] ={};
char nwords[1000]={};
char words[1000]={};
    int i;
    int c=0;
    do{
        printf("Enter the sentence and enter END to stop:");
        scanf("%s[^/n]",line);
        c++;
        nwords = getwords(&line, &words, c);
        for(i = 0; i < nwords; i++)
        printf("%s\n", words[i]);
    }while(line!="END");
} 
/*OUTPUT: 
Enter the sentence and enter END to stop:Welcome to Earth
Enter the sentence and enter END to stop:I am learing C
Enter the sentence and enter END to stop:I am hungry
Enter the sentence and enter END to stop:END
Welcome
to 
Earth
I
am
learning
C
I 
am
hungry*/ 
*************************************************************************************************************************** 
/* calculate the max of the elements in two tables of integers */ 
/* each 2-dimensional array is represented as an array of pointers 
each pointer indicates a row in the original 2-dimensional array */ 
#include <stdio.h> 
#include <stdlib.h> 
#define MAXROWS 20 
#define MAXCOLS 30 
/* function prototypes */ 
void readinput(int *a[MAXROWS], int nrows, int ncols); 
void computesums(int *a[MAXROWS], int *b[MAXROWS], 
int *c[MAXROWS], int nrows, int ncols); 
void writeoutput(int *c[MAXROWS], int nrows, int ncols); 
main( ) 
{ 
    int row, nrows, ncols; 
    /* array definitions */ 
    int *a[MAXROWS], *b[MAXROWS], *c[MAXROWS]; 
    printf ( "How many rows?") ; 
    scanf ( "%d", &nrows) ; 
    printf("How many columns?"); 
    scanf ( "%d", &ncols) ;  
    /* allocate initial memory */ 
    for (row = 0; row <= nrows; row++) 
    { 
        a[row] = (int *) malloc(nco1s * sizeof(int)); 
        b[row] = (int *) malloc(nco1s * sizeof(int)); 
        c[row] = (int *) malloc(nco1s * sizeof(int)); 
    } 
    printf("\n\nFirst table:\n"); 
    readinput(a, nrows, ncols); 
    printf("\n\nSecond table:\n"); 
    readinput(b, nrows, ncols); 
    computesums(a, b, c, nrows, ncols); 
    printf("\n\nMaximun of the elements:\n\n"); 
    writeoutput(c, nrows, ncols); 
    } 
    void readinput(int *a[MAXROWS], int m, int n) 
    /* read in a table of integers */ 
    { 
    int row, col; 
    for (row = 0; row < m; ++row)  
    { 
        printf("\nEnter data for row no. %2d\n", row + 1); 
        for (col = 0; col < n; ++col) 
        scanf("%d", (a[row] + col)); 
    } 
    return ; 
    } 
    void computesums(int *a[MAXROWS], int *b[MAXROWS], 
    int *c[MAXROWS], int m, int n) 
    /* max of the elements of two integer tables */ 
    { 
    int row, col; 
    for (row = 0; row < m; ++row) 
    for (col = 0; col < n; ++col) 
    *(c[rOw] + col) =max(*(a[row] + col), *(b[row] + col)); 
    return ; 
    } 
    void writeoutput(int *a[MAXROWS], int m, int n) 
    /* write out a table of integers */ 
    { 
    int row, col; 
    for (row = 0; row < m; ++row) 
    { 
    for (col = 0; col < n; ++col) 
    printf ("%4d", *(a[ row] + col)) ; 
    printf ("\n"); 
    } 
    return; 
} 
/*OUTPUT: 
How many rows? 2 
How many columns? 2 
 
First table: 
Enter data for row no.1 
1 
3 
Enter data for row no.2 
49 
5 
 
 
 S e c o n d t a b l e :  
Enter data for row no.1 
14 
10 
Enter data for row no.2 
44 
78 
 
 
maximum of the elements : 
14  10 
49  78 
*/ 
*************************************************************************************************************************** 
//third program to find the difference between two dates 
#include<stdio.h> 
#include<conio.h> 
 
void days(int,int,int,int,int,int); 
int month(int,int); 
int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31}; 
 
 main() 
  { 
  int a1,b1,c1,a2,b2,c2; 
  clrscr(); 
  printf("Enter first date(dd mm yyyy) : "); 
  scanf("%d%d%d",&a1,&b1,&c1); 
  printf("\nEnter second date(dd mm yyyy) : "); 
  scanf("%d%d%d",&a2,&b2,&c2); 
  if(c2>=c1) 
  days(c1,c2,b1,b2,a1,a2); 
  else 
  days(c2,c1,b2,b1,a2,a1); 
  getch(); 
  } 
 
 void days(int *p,int *q,int *r,int *s,int *t,int *u) //to convert to days and find difference 
  { 
  int count=0,i; 
int **w,**x,**z; 
  for(i=p;i<q;i++) 
    { 
    if(i%4==0) 
    count+=366; 
    else 
    count+=365; 
    } 
**w=&q; 
**x=&p; 
**z=&s; 
  count-=month(**w,**x); 
  count-=d1; 
  count+=month(**z,**w); 
  count+=d2; 
  if(count<0) 
  count=count*-1; 
  printf("The no. of days b/w the 2 dates = %d days",count); 
  } 
 
 int month(int **a,int **yy) 
  { 
  int x=0,c; 
  for(c=0;c<**a-1;c++) 
    { 
   if(c==1) 
      { 
      if(**yy%4==0) 
      x+=29; 
      else 
      x+=28; 
      } 
    else 
    x+=mon[c]; 
    } 
  return(x); 
  } 
/*OUTPUT: 
Enter first date(dd mm yyyy) :01 01 2012 
Enter second date(dd mm yyyy) :01 01 2013 
The no. of days b/w the 2 dates =  366 days*/ 
***************************************************************************************************************************
//program 5 to find the compound interest on different ways of calculations
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
double mod1(double,int,double);
double mod2(double,int,double);
double mod3(double,int,double);
void ftable(double (*p)(double,int,double),double,int,double,int);
double *val[6];

void main()
{
int m[6]={1,2,4,12,360,0},t,k;
double n,a;
char choice;

for(t=0;t<6;t++)
    val[t]= (double *) malloc (11*sizeof(double));
printf("\nFUTURE VALUE OF A SERIES OF MONTHLY DEPOSITS\nMonthly Payment Amount : ");
scanf("%lf",&a);
printf("No. of Years : ");
scanf("%lf",&n);
printf("\t\t\t\tA = %lf\n\t\t\t\tn = %lf",a,n);
printf("\nInterest rate =");
for(t=5;t<=15;t++)
{
printf(" %d%\t",t);
}
printf("\nFrequency of \nCompounding\n");
for(t=0;t<6;t++)
    {
    switch(t)
        {
        case 0:    {printf("Annual           "); goto format;}
        case 1: {printf("Semiannualy      "); goto format;}
        case 2: {printf("Quaterly         "); goto format;}
        case 3: {printf("Monthly          ");
            format:
            ftable(mod1,a,m[t],n,t);
            break;    
            }
        case 4:{printf("Daily            ");
            ftable(mod2,a,m[t],n,t);
            break; 
               }
        case 5:{printf("Continuously     ");
            ftable(mod3,a,m[t],n,t);
            break; 
               }
        }
    for(k=0;k<11;k++)
        printf("%.1lf\t",*(val[t]+k));
    printf("\n");
    }        
    
    
}

void ftable(double (*p)(double i,int m,double n), double a,int m,double n,int t)
{
int j;
double i,f;
for(j=5;j<=15;j++)
    {
    i=0.01*j;
    f=a*(*p)(i,m,n);
    *(val[t]+j-5)=f;
    
    }

}

double mod1(double i,int m,double n)
{
return (12* (pow((1+i/m),m*n)-1)/i);
}

double mod2(double i,int m,double n)
{
return ((pow((1+i/m),m*n)-1)/(pow((1+i/m),m/12)-1));
}

double mod3(double i,int m,double n)
{
return (exp(i*n)-1)/(exp(i/12)-1);
}


/*
FUTURE VALUE OF A SERIES OF MONTHLY DEPOSITS
Monthly Payment Amount : 100
No. of Years : 3
                A = 100.000000
                n = 3.000000
Interest rate = 5%     6%     7%     8%     9%     10%     11%     12%     13%     14%     15%    
Frequency of 
Compounding
Annual           3783.0    3820.3    3857.9    3895.7    3933.7    3972.0    4010.5    4049.3    4088.3    4127.5    4167.0    
Semiannualy      3832.6    3881.0    3930.1    3979.8    4030.1    4081.1    4132.8    4185.2    4238.2    4292.0    4346.4    
Quaterly         3858.1    3912.4    3967.5    4023.6    4080.7    4138.7    4197.6    4257.6    4318.6    4380.6    4443.6    
Monthly          3875.3    3933.6    3993.0    4053.6    4115.3    4178.2    4242.3    4307.7    4374.3    4442.3    4511.6    
Daily            3875.9    3934.5    3994.2    4055.1    4117.3    4180.7    4245.5    4311.5    4378.9    4447.7    4517.9    
Continuously     3875.9    3934.5    3994.2    4055.2    4117.4    4180.8    4245.6    4311.7    4379.1    4447.9    4518.1    
*/
***************************************************************************************************************************
//version a of program 5
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
double mod1(double,int,double);
double mod2(double,int,double);
double mod3(double,int,double);
void ftable(double (*p)(double,int,double),double,int,double,int);
double *val[6];

void main()
{
int m[6]={1,2,4,12,360,0},t,k;
double i,a;
char choice;
printf("\nFUTURE VALUE OF A SERIES OF MONTHLY DEPOSITS\nMonthly Payment Amount : ");
scanf("%lf",&a);
printf("Interest rate( % ) : ");
scanf("%lf",&i);
i*=0.01;
printf("\t\t\t\tA = %lf\n\t\t\t\ti = %lf",a,i);
printf("\nFrequency of compounding :\n");
for(t=0;t<6;t++)
    val[t]=(double *) malloc (50 * sizeof(double));
for(t=0;t<6;t++)
    {
    if(t<4) ftable(mod1,a,m[t],i,t);
    else if(t==4) ftable(mod2,a,m[t],i,t);
    else ftable(mod3,a,m[t],i,t);
    
    }
printf("Terms        Annualy          Semiannualy       Quaterly      Monthly       Daily       Continuous\n");
printf("(No. of years)\n");
for(t=0;t<50;t++)
    {
    printf("%d     \t",t+1);
    for(k=0;k<6;k++)
        printf("%.1lf\t\t",*(val[k]+t));
    printf("\n");
    }

}

void ftable(double (*p)(double i,int m,double n), double a,int m,double i,int t)
{
int j;
double f;
for(j=1;j<=50;j++)
    {
    f=a*(*p)(i,m,j);
    *(val[t]+j-1)=f;
    }

}

double mod1(double i,int m,double n)
{
return (12* (pow((1+i/m),m*n)-1)/i);
}

double mod2(double i,int m,double n)
{
return ((pow((1+i/m),m*n)-1)/(pow((1+i/m),m/12)-1));
}

double mod3(double i,int m,double n)
{
return (exp(i*n)-1)/(exp(i/12)-1);
}

/*
FUTURE VALUE OF A SERIES OF MONTHLY DEPOSITS
Monthly Payment Amount : 10
Interest rate( % ) : 1
                A = 10.000000
                i = 0.010000
Frequency of compounding :
Terms        Annualy          Semiannualy       Quaterly      Monthly       Daily       Continuous
(No. of years)
1         120.0        120.3        120.5        120.6        120.6        120.6        
2         241.2        241.8        242.1        242.3        242.3        242.3        
3         363.6        364.5        365.0        365.3        365.3        365.3        
4         487.2        488.5        489.1        489.5        489.5        489.5        
5         612.1        613.7        614.5        615.0        615.0        615.0        
6         738.2        740.1        741.1        741.7        741.7        741.7        
7         865.6        867.9        869.0        869.7        869.7        869.7        
8         994.3        996.9        998.1        999.0        999.0        999.0        
9         1124.2        1127.1        1128.6        1129.6        1129.6        1129.6        
10         1255.5        1258.7        1260.4        1261.5        1261.5        1261.5        
11         1388.0        1391.7        1393.5        1394.7        1394.8        1394.8        
12         1521.9        1525.9        1527.9        1529.3        1529.3        1529.3        
13         1657.1        1661.5        1663.7        1665.2        1665.2        1665.2        
14         1793.7        1798.5        1800.9        1802.5        1802.5        1802.5        
15         1931.6        1936.8        1939.4        1941.1        1941.2        1941.2        
16         2070.9        2076.5        2079.3        2081.2        2081.3        2081.3        
17         2211.7        2217.6        2220.6        2222.7        2222.7        2222.7        
18         2353.8        2360.2        2363.4        2365.5        2365.6        2365.6        
19         2497.3        2504.1        2507.6        2509.8        2509.9        2509.9        
20         2642.3        2649.5        2653.2        2655.6        2655.7        2655.7        
21         2788.7        2796.4        2800.3        2802.8        2803.0        2803.0        
22         2936.6        2944.7        2948.8        2951.6        2951.7        2951.7        
23         3086.0        3094.5        3098.9        3101.8        3101.9        3101.9        
24         3236.8        3245.9        3250.4        3253.5        3253.6        3253.6        
25         3389.2        3398.7        3403.5        3406.7        3406.9        3406.9        
26         3543.1        3553.1        3558.1        3561.5        3561.7        3561.7        
27         3698.5        3709.0        3714.3        3717.8        3718.0        3718.0        
28         3855.5        3866.5        3872.0        3875.7        3875.9        3875.9        
29         4014.0        4025.5        4031.3        4035.2        4035.4        4035.4        
30         4174.2        4186.2        4192.2        4196.3        4196.5        4196.6        
31         4335.9        4348.5        4354.8        4359.0        4359.3        4359.3        
32         4499.3        4512.4        4518.9        4523.3        4523.6        4523.6        
33         4664.3        4677.9        4684.7        4689.3        4689.7        4689.7        
34         4830.9        4845.1        4852.2        4857.0        4857.3        4857.3        
35         4999.2        5014.0        5021.4        5026.3        5026.7        5026.7        
36         5169.2        5184.5        5192.2        5197.4        5197.8        5197.8        
37         5340.9        5356.8        5364.8        5370.1        5370.6        5370.6        
38         5514.3        5530.8        5539.1        5544.6        5545.1        5545.1        
39         5689.5        5706.6        5715.1        5720.9        5721.4        5721.4        
40         5866.4        5884.1        5893.0        5898.9        5899.4        5899.4        
41         6045.0        6063.4        6072.6        6078.7        6079.3        6079.3        
42         6225.5        6244.4        6254.0        6260.3        6260.9        6260.9        
43         6407.7        6427.3        6437.2        6443.8        6444.4        6444.4        
44         6591.8        6612.1        6622.3        6629.1        6629.7        6629.7        
45         6777.7        6798.7        6809.2        6816.2        6816.9        6816.9        
46         6965.5        6987.1        6998.0        7005.2        7005.9        7006.0        
47         7155.2        7177.5        7188.7        7196.2        7196.9        7196.9        
48         7346.7        7369.7        7381.3        7389.0        7389.8        7389.8        
49         7540.2        7563.9        7575.8        7583.8        7584.6        7584.6        
50         7735.6        7760.0        7772.3        7780.5        7781.4        7781.4    
*/ 