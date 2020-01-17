*************************************************************************************************************************************************
                                        		 ASSIGNMENT 2-MODULAR PROGRAMMING WITH C
                                          			NAME:SK SRINITHYEE
                                         		       REGISTER NO-185001166
***************************************************************************************************************************
//first program to find the sum of odd and even numbers
#include <stdio.h>
int CheckOddEve(int);
void main()
{
        int N,n,i,y,k;
        int sum_eve=0;
        int sum_odd=0;
        printf("Enter the value of N: \n");
        scanf("%d ",&N);
        printf("Enter the numbers");
        for(i=0;i<=N;i++)
        {
                scanf("%d "&n);
                y=CheckOddEve(n);
                if(y==1)
                {
                        sum_eve=sum_eve+n;
                }
                else
                {
                        sum_odd=sum_odd+n;
                }
        }
        printf("The sum of even numbers is %d",sum_eve);
        printf("The sum of odd numbers is %d",sum_odd);
}
int CheckOddEve(int k)
{
        int flag=0;
        if(k%2==0)
        {
                flag=1;
        }
        else
        {
                flag=0;
        }
        return(flag);
}
/*OUTPUT:
Enter the value of N:4
Enter the numbers4
3
5
8
The sum of even numbers is:12
The sum of odd numbers is:8
*/
************************************************************************************************************************************************
//second program to reverse a number
#include <stdio.h>
void ReverseNum(int n)
void main()
{
        int n;
        printf("Enter the number:\n");
        scanf("%d ",&n);
        s=ReverseNum(n);
        printf("%d",s);
}
int ReverseNum(int l)
{
        int d,r;
        while(l!=0)
        {
                d=l%10;
                r=r*10+d;
                n=n/10;
        }
        return(r);
}
/*OUTPUT:
Enter the number:234
432*/
************************************************************************************************************************************************
//program to find the power of numbers
#include <stdio.h>
float power(float,int);
void main();
{
        float X,v;
        int n;
        printf("Enter the value of X followed by n:");
        scanf("%f %n",&X,&n);
        v=power(X,n);
        printf("\n %f",v);
}
power(float tr,int q)
{
        float p=1.0;
        for(i=0;i<=q;i++)
        {
                p=p*tr;
        }
        return(p);
}
/*OUTPUT:
Enter the value of X followed by n:8.3 2
68.89
*/
************************************************************************************************************************************************
//fourth program to find the product of n floating point numbers
#include <stdio.h>
 
long calculate_sum(int [], int);
 
int main()
{
  int c, array[100];
  double result;
  float n;
  printf("enter the value of n:");
  scanf("%d", &n);
 
  for (c = 0; c < n; c++)
{
    printf("\n Enter the number:");
    scanf("%d", &array[c]);
 
  result = calculate_prod(array, n);
 
  printf("product = %ld\n", result);
 
  return 0;
}
 
double calculate_(int a[], int n) {
  static long prod = 0;
 
  if (n == 0)
    return prod;
 
  prod = prod* a[n-1];
 
  return calculate_prod(a, --n);
}
/*OUTPUT:
enter the value of n:3
Enter the number:2.4
Enter the number:3.4
Enter the number:1.2
product = 9.79200
*/
************************************************************************************************************************************************
//fifth program to print n numbers from n to 0
#include <stdio.h>
int printNatural(int c,stv);
void Main()
    {
	int n,x;
	printf(" How many numbers to print : ");
	scanf("%d",n);
	// Call recursive method with two parameters.	
	x=printNatural(n,1);
	printf("\n\n");
    }
int printNatural(int ctr,int stval)
    {
	if (ctr < 1)
	{
	    return stval;
	}

	printf(" %d ",ctr);
		ctr--;
	return printNatural(ctr,stval);
    }
/*OUTPUT:
How many numbers to print :10
10987654321*/
***********************************************************************************************************************************************
//sixth program to find rightmost non zero digit of n!
#include<stdio.h>
 
int lastNonZero(int n);
 
int main()
{
    int number,lastNonZeroDigit;
    int i;
     
    printf("Enter an integer:");
    scanf("%d",&number);
     
    lastNonZeroDigit = lastNonZero(number);
     
    for(i=number-1 ; i>1 ; i--)
        lastNonZeroDigit = lastNonZero(lastNonZeroDigit * i);
         
    printf("The last Non Zero Digit in %d! = %d.\n",number,lastNonZeroDigit);
}
 
int lastNonZero(int n) //functn to calculate last non zero digit of 'n'
{
    if(n%10 != 0)
        return n%10;
     
    else
        return lastNonZero(n/10);
}
/*OUTPUT:
Enter an integer:10
The last Non Zero Digit in 10 =8
*/ 


************************************************END OF ASSIGNMENT 2*****************************************************