//Menu driven using pointer to structure

#include<stdio.h>
#include<string.h>

typedef struct 
{
char name[100];  
float m[100],avg;       //structure definition
int pass;
int rank;
int reg; 
}student;

void read(student *a,int c,int b);              
void average(student *a,int c,int b); 				//function definiton
float classaverage(student *a,int c);
float pass(student *a,int c,int b);
void rank(student *a,int c,int b);
void search(student *a,int c,int b,int choice1);

void main()
{
int i,c,b,choice;
char ch;
float passed,clsavg;
printf("Enter the number of students: ");
scanf("%d",&c);
printf("Enter the number of subjects : ");
scanf("%d",&b);
student *a;
a=(student *)malloc(c*sizeof(student));           
repeat:
printf("Enter\n1.Read Input\n2.Find Average\n3.Class Average\n4.Pass Percentage\n5.Rank\n6.Search by Name\n7.Search by Register number\n8.Display Student Record\n9.Exit\n");
scanf("%d",&choice);
switch(choice)								//Menu
	{
	case 1:
		{
		read(a,c,b);
		printf("Do you want to continue?(Y/N) :");		//Read Input
		scanf(" %c",&ch);
		if (ch=='Y')	
			goto repeat;
		break;
		}
	case 2:
		{
		average(a,c,b);
		printf("Do you want to continue?(Y/N) :");		//Find Average
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		break;
		}
	case 3:
		{	
		clsavg=classaverage(a,c);
		printf("Class Average = %.2f \n",clsavg);
		printf("Do you want to continue?(Y/N) :");		//Class Average
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		break;
		}
	case 4:
		{
		passed=pass(a,c,b);
		printf("Pass percentage = %.2f \%\n",passed);		//Pass Percentage
		printf("Do you want to continue?(Y/N) :");
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		break;
		}
	case 5:
		{
		rank(a,c,b);
		printf("Do you want to continue?(Y/N) :");		//Rank
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		break;
		}
	case 6:
		{
		search(a,c,b,1);
		printf("Do you want to continue?(Y/N) :");		//Search by Name
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		break;
		}
	case 7:
		{
		search(a,c,b,2);	
		printf("Do you want to continue?(Y/N) :");		//Search by Register number
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		break;
		}
	case 8:
		{
		printf("Rank       Register Number	Name           Average\n");		//Display Student Record
		for(i=0;i<c;i++)
			{
			if((a+i)->rank!=0)
				printf("%d         %9d		%-10s     %5.2f\n",(a+i)->rank,(a+i)->reg,(a+i)->name,(a+i)->avg);
			else
				printf("-          %9d		%-10s     %5.2f\n",(a+i)->reg,(a+i)->name,(a+i)->avg);
			}
		printf("Do you want to continue?(Y/N) :");
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		break;
		}
	case 9:
		{	
		printf("Thank You\n");		//Exit
		break;			
		}
	default:
		{
		printf("Invalid input\n");
		printf("Do you want to continue?(Y/N) :");
		scanf(" %c",&ch);
		if (ch=='Y')
			goto repeat;
		}
	}
}

void read(student *a,int c,int b)
{
int i,j;
float sum=0;
for(i=0;i<c;i++)
	{					
	printf("Enter student%d name: ",i+1);		
	scanf("%s",(a+i)->name);			//Reading student name
	printf("Enter register number: ");
	scanf("%d",&(a+i)->reg);			//Reading register number
	sum=0;
	for(j=0;j<b;j++)
		{
		printf("Enter mark%d of %s: ",j+1,(a+i)->name);
		scanf("%f",&(a+i)->m[j]);				//Reading marks
		}
	}
}


void average(student *a,int c,int b)
{
int i,j;
float sum=0;
for(i=0;i<c;i++)
	{
	sum=0;
	for(j=0;j<b;j++)
		{
		sum=sum+(a+i)->m[j];
		}
	(a+i)->avg=sum/b;			  //Calculating average
	printf("Average of %s : %.2f\n",(a+i)->name,(a+i)->avg);
	}
}

float classaverage(student *a,int c)
{
int i;
float sum=0;
for(i=0;i<c;i++)
	{
	sum+=(a+i)->avg;
	}
return (sum/c);				//Calculating calss average and returning to main
}

float pass(student *a,int c,int b)
{
int i,j,count=0;
float p=0,percent;
for(i=0;i<c;i++)
	{
	count=0;
	for(j=0;j<b;j++)
		{
		if((a+i)->m[j]>=50)
			{
			count++;			
			}
		else
			count=0;
		}
	if(count==b)
		{
		(a+i)->pass=1;
		p++;		//finding number of passed students
		}
	else
		{
		(a+i)->pass=0;
		}
	}
percent=(p/c )*100;		//calculating pass percentage
return percent;
}

void rank(student *a,int c,int b)
{
int i,j,r,count=1;
student temp;
for(i=0;i<c-1;i++)
	{
	for(j=i+1;j<c;j++)
		{
		if ((a+i)->avg < (a+j)->avg)		
			{
			temp=*(a+i);
			*(a+i)=*(a+j);			//sorting in descending order
			*(a+j)=temp;
			}
		}
	}
printf("Rank       Register Number	Name           Average\n");
for(i=0;i<c;i++)
	{
	if((a+i)->pass)
		{
		if((a+i)->avg==(a+i-1)->avg)
			{
			r=(a+i-1)->rank;
			(a+i)->rank=r;	
			printf("%d         %9d		%-10s     %5.2f\n",(a+i)->rank,(a+i)->reg,(a+i)->name,(a+i)->avg);		//printing rank if the average is same
			count++;
			}								
		else
			{
			count=0;	
			(a+i)->rank=i+1;
			printf("%d         %9d		%-10s     %5.2f\n",(a+i)->rank,(a+i)->reg,(a+i)->name,(a+i)->avg);		//printing rank
			}
			
		}
	else
		{
		(a+i)->rank=0;
		printf("-         %9d		%-10s     %5.2f\n",(a+i)->reg,(a+i)->name,(a+i)->avg);			//printing - for falied students
		}
	}
}

void search(student *a,int c,int b,int choice1)
{
int i,j,count=0;
switch(choice1)
	{
	case 1:
		{
		char sname[100],ch;
		again1:
		printf("Enter the name to be searched: ");
		scanf("%s",sname);
		for(i=0;i<c;i++)
			{
			if(strcmp(sname,(a+i)->name)==0)		//By name
				{
				count=1;
				printf("Rank       Register Number	Name           Average\n");
				if((a+i)->rank!=0)
					printf("%d         %9d		%-10s     %5.2f\n",(a+i)->rank,(a+i)->reg,(a+i)->name,(a+i)->avg);
				else
					printf("-         %9d		%-10s     %5.2f\n",(a+i)->reg,(a+i)->name,(a+i)->avg);
				break;
				}
			else
				count=0;
			}
		if(count==0)
			printf("Not found\n");
		printf("Do you want to continue the search? (Y/N):  ");			//repeat
		scanf(" %c",&ch);
		if(ch=='Y')
			goto again1;
		break;
		}
	case 2:
		{
		int sregno;
		char ch;
		again2:
		printf("Enter the register number to be searched: ");
		scanf("%d",&sregno);
		for(i=0;i<c;i++)
			{
			if((a+i)->reg==sregno)			//By reg no
				{
				count=1;
				printf("Rank       Register Number	Name           Average\n");
				if((a+i)->rank!=0)
					printf("%d         %9d		%-10s     %5.2f\n",(a+i)->rank,(a+i)->reg,(a+i)->name,(a+i)->avg);
				else
					printf("-         %9d		%-10s     %5.2f\n",(a+i)->reg,(a+i)->name,(a+i)->avg);
				break;
				}
			else
				count=0;
			}
		if(count==0)
			printf("Not found\n");
		printf("Do you want to continue the search? (Y/N):  ");				//repeat
		scanf(" %c",&ch);
		if(ch=='Y')
			goto again2;
		break;
		}
	}
}

/*
Output:

Enter the number of students: 3
Enter the number of subjects : 1
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
1
Enter student1 name: a
Enter register number: 11
Enter mark1 of a: 98
Enter student2 name: b
Enter register number: 12
Enter mark1 of b: 99
Enter student3 name: c
Enter register number: 13
Enter mark1 of c: 45
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
2
Average of a : 98.00
Average of b : 99.00
Average of c : 45.00
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
3
Class Average = 80.67 
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
4
Pass percentage = 66.67 %
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
5
Rank       Register Number	Name           Average
1                12		b              99.00
2                11		a              98.00
-                13		c              45.00
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
6
Enter the name to be searched: a
Rank       Register Number	Name           Average
2                11		a              98.00
Do you want to continue the search? (Y/N): N
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
7
Enter the register number to be searched: 13
Rank       Register Number	Name           Average
-                 13		c              45.00
Do you want to continue the search? (Y/N): N
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
8
Rank       Register Number	Name           Average
1                12		b              99.00
2                11		a              98.00
-                13		c              45.00
Do you want to continue?(Y/N) :Y
Enter
1.Read Input
2.Find Average
3.Class Average
4.Pass Percentage
5.Rank
6.Search by Name
7.Search by Register number
8.Display Student Record
9.Exit
9
Thank You

*/
