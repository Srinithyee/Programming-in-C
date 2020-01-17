**************************************************************
ASSIGNMENT 1
SRINITHYEE SK
185001166
CSE C
**************************************************************

//first program to check if a number is even or odd

#include <stdio.h>
void main()
{
int a;
printf("Enter the number ");
scanf("%d",&a);
if(a%2==0)
{
	printf("/n %d is even",a);
}
else
{
	printf("/n %d is odd",a);
}
}
/* OUTPUT:
Enter the number 4
4 is even
Enter the number 5
5 is odd */
 **************************************************************
//Second program to convert celsius to farenheit and Kelvin

#include <stdio.h>
void main()
{
float c,f,k;
printf("Enter the temperature in celsius \n");
scanf("%f",&c);
f=((c*9)/5)+32;
k=273.15+c;
printf(" %f F",f);
printf(" %f K",k);
}
/*OUTPUT:
Enter the temperature in celsius
40 104F 313.15K
*/
**************************************************************//third program to use conditional operator to modify program 1
#include <stdio.h>
void main()
{
int a,flag;
printf("Enter the number to be checked ");
scanf("%d",&a);
flag=(a%2==0)?0:1;
printf("\nThe value of flag is\n %d",flag);
}
/*OUTPUT:
Enter the number to be checked 2
The value of flag is 0
Enter the number to be checked 7
The value of flag is 1
*/
**************************************************************//fourth program to find  the net salary of an employee by getting the basic pay (BP) as input

#include <stdio.h>
void main()
{
float bp,da,hra,agp,pf,gp,np,insurance;
int d,h,p,cca;
printf("Enter the basic pay of the employee\n");
scanf("%f",&bp);
da=(88*bp)/100;
hra=(8*bp)/100;
cca=1000;
insurance=2000;
pf=(10*bp)/100;
scanf("%d",&p);
gp=bp+da+hra+cca;
np=gp-pf-insurance;
printf("%f is the GROSS PAY",gp);
printf("%f is the NET PAY",np);
}
/*OUTPUT:
Enter the basic pay of the employee 
8000                                                                                                                           
16680.000000 is the GROSS PAY13880.000000 is the NET PAY  
*/
**************************************************************//fifth program  to Modify (4) to set HRA based on type city  and to set CCA based on designation

#include <stdio.h>
void main()
{
float bp,da,hra,agp,pf,gp,np,insurance,cca;
int d,h,p,c;
printf("Enter the basic pay of the employee\n");
scanf("%f",&bp);
da=(88*bp)/100;
insurance=2000;
pf=(10*bp)/100;
printf("Enter 1 if you live in a metro,2 if corporation,3 if taluk\n");
scanf("%d",&h);
printf("Enter 1 if you are a worker,2 if an engineer,3 if a manager");
scanf("%d",&c);
insurance=2000.0;
if(h==1)
{
	hra=(10*bp)/100;
}
else if(h==2)
{
	hra=(8*bp)/100;
}
else
{
	hra=(5*bp)/100;
}
if(c==1)
{
	cca=1000.0;
}
else if(c==2)
{
	cca=2000.0;
}
else
{
	cca=5000.0;
}
gp=bp+da+hra+agp+cca;
np=gp-pf-insurance;
printf("%f is the GROSS PAY",gp);
printf("%f is the NET PAY",np);
}
/*OUTPUT:
Enter the basic pay of the employee                                                                                            
8000                                                                                                                           
Enter 1 if you live in a metro,2 if corporation,3 if taluk                                                                     
2                                                                                                                              
Enter 1 if you are a worker,2 if an engineer,3 if a manager3                                                                   
20680.000000 is the GROSS PAY17880.000000 is the NET PAY  
*/
**************************************************************
//sixth program to print an egg timer of size N

#include <stdio.h>
int main()
{
    int n, i, j, space,k;

    printf("Enter the value of n ,such that it is greater 3 and less than 10");
    scanf("%d",&n);
    if((n>=3) &&(n<=10))
	{
		for(i=n; i>=1; --i)
		{
			for(space=0; space < n-i; ++space)
			printf("  ");

			for(j=i; j <= 2*i-1; ++j)
			printf("* ");

			for(j=0; j < i-1; ++j)
			printf("* ");

			printf("\n");
		}
		for(i=1; i<=n; ++i, k=0)
		{
			for(space=1; space<=n-i; ++space)
			{
			printf("  ");
			}
			while(k != 2*i-1)
			{
			printf("* ");
			++k;
			}

		printf("\n");
		}
		
	}
  

}
/*OUTPUT:
Enter the value of n ,such that it is greater than or equal to 3 5
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/
**************************************************************//VERSION 1 of seventh program

#include <stdio.h>
void main()
{
int N,n,sum;
int i=0;
printf("Enter THE NUMBER of numbers you wish to find the sum of ");
scanf("%d ",&N);
do
{
printf("Enter a number");
scanf("%d ",&n);
sum=sum+n;
i++;
}while(i<N);
printf("THE SUM IS %d ",sum);
}
/*OUTPUT:
Enter THE NUMBER of numbers you wish to find the sum of                                                                       
5                                                                                                                              
Enter a number34                                                                                                               
Enter a number56                                                                                                               
Enter a number78                                                                                                               
Enter a number12 
Enter a number56                                                                                                               
THE SUM IS 185
*/
**************************************************************
//VERSION 2 of seventh program to find sum of N numbers

#include <stdio.h>
void main()
{
	int a;
	int sum=0;
		do
		{
		printf("Enter the number whose sum is to found,enter -999 to end");
		scanf("%d ",&a);
		sum=sum+a;
print("%d is the sum",sum);
		}
	while(a!=-999);
}
/*OUTPUT:
Enter the number whose sum is to found,enter -999 to end34
34 is the sum
Enter the number whose sum is to found,enter -999 to end43
77 is the sum
Enter the number whose sum is to found,enter -999 to end-999
*/
**************************************************************//VERSION 3 of seventh program to find sum of N numbers

#include <stdio.h>
void main()
{
	int a;
char f[5];
	int sum=0;
		do
		{
		printf("Enter the number whose sum is to found");
		scanf("%d ",&a);
		sum=sum+a;
printf("\n %d is the sum",sum);
printf("\n Enter STOP to terminate");
scanf("%s ",&f);

		}
	while(strcmp(f,"STOP")==0);
}
/*OUTPUT:
Enter the number whose sum is to found44
44 is the sum
Enter STOP to terminate
No
Enter the number whose sum is to found22
66 is the sum
Enter STOP to terminate
No
Enter the number whose sum is to found11
77 is the sum
Enter STOP to terminate
STOP
*/
**************************************************************
//VERSION 4 of seventh program

#include <stdio.h>
void main()
{
	int a;
	int sum=0;
		do
		{
		printf("Enter the number whose sum is to found,and -999 to exit");
		scanf("%d ",&a);
if((a>0)&&(a<100))
{
		sum=sum+a;
printf("\n %d is the sum",sum);
}
else
{
printf("Enter a valid number");

		}
	while(a!=-999);
}
/*OUTPUT:
Enter the number whose sum is to found,and -999 to exit45
45 is the sum
Enter the number whose sum is to found,and -999 to exit45
90 is the sum
Enter the number whose sum is to found,and -999 to exit-9
Enter a valid number
Enter the number whose sum is to found,and -999 to exit-999
*/
**************************************************************//VERSION 5 of seventh program

#include <stdio.h>
void main()
{
	int a;
	int sum=0;
		do
		{
		printf("Enter the number whose sum is to found,and -999 to exit");
		scanf("%d ",&a);
if((a>0)&&(a<100))
{
		sum=sum+a;
printf("%d is the sum",sum);
}
else
{
printf("Enter a valid number");
break;

		}
	while(a!=-999);
}
/*OUTPUT:
Enter the number whose sum is to found,and -999 to exit45
45 is the sum
Enter the number whose sum is to found,and -999 to exit45
90 is the sum
Enter the number whose sum is to found,and -999 to exit-9
Enter a valid number
*/
**************************************************************//VERSION 6 of seventh program
include <stdio.h>
void main()
{
	int a,b;
	int sum=0;
		do
		{
		printf("Enter the number whose sum is to found,and -999 to exit");
		scanf("%d ",&a);
if((a>0)&&(a<100))
{
		sum=sum+a;
printf("%d is the sum",sum);
}
else
{
printf("Enter a valid number/n");
scanf("%d",&b);
sum=sum+b;
		}
	while(a!=-999);
}
/*OUTPUT:
Enter the number whose sum is to found,and -999 to exit45
45 is the sum
Enter the number whose sum is to found,and -999 to exit-45
Enter a valid number
45
Enter the number whose sum is to found,and -999 to exit45
135 is the sum
Enter the number whose sum is to found,and -999 to exit-999
*/
**************************************************************
//eighth program-simple calculator

#include <stdio.h>
void main()
{
float a,b,s;
char ch;
printf("Enter the two numbers \n");
scanf("%f %f",&a,&b);
printf("\n Enter + to add,-to subtract,* to multiply,/to divide");
scanf("%c ",&ch);
switch(ch)
{
case '+':
{
printf("The sum is %f ",(a+b));
break;
}
case '-':
{
printf("The difference is %f ",(a-b));
break;
}
case '*':
{
printf("The product is %f ",(a*b));
break;
}
case '/':
{
printf("The quotient is %f ",(a/b));
break;
}
default:
{
	printf("Enter a valid operator");
}
}
}
/*OUTPUT:
CASE +
Enter the two numbers 
34.5 67.8
Enter + to add,-to subtract,* to multiply,/to divide+
The sum is 102.3

CASE-
Enter the two numbers 
34.5 67.8
Enter + to add,-to subtract,* to multiply,/to divide-
The sum is 33.3

CASE *
Enter the two numbers 
34.5 6
Enter + to add,-to subtract,* to multiply,/to divide*
The sum is 207.00000

CASE /
Enter the two numbers 
34.5 12
Enter + to add,-to subtract,* to multiply,/to divide+
The sum is 2.875
*/
**************************************************************//nineth program to check if a number has consecutive 5s

#include <stdio.h>
void main()
{
long n;
printf("Enter the number to be checked \n");
scanf("%d ",&n);
while(n>=0)
{
	if((n%10==5)&&(n%100==55)&&(n%1000==555))
	{
		printf("\n Yes");
	}
else
	{
		printf("\n No");
	}
n=n/10;
}
}
/*OUTPUT:
Enter the number to be checked 
135554
Yes
Enter the number to be checked 
153545 
No
*/
**************************************************************//tenth program to check if odd or even without conditional operator

#include <stdio.h>
int main()
{
    int no;
    printf("Enter a no: ");
    scanf("%d", &no);
    (no & 1 && printf("odd"))|| printf("even");
    return 0;
}
/*OUTPUT:
Enter a no: 45                                                                                                                 
odd   
Enter a no: 12                                                                                                                 
even */




**************************************************************
END OF ASSIGNMENT 1
**************************************************************












