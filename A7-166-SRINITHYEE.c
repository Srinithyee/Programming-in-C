***********************************************************************************************************************************************************************
								ASSIGNMENT NO:7
								NAME:SRINITHYEE SK
								REGISTER NO:185001166
***********************************************************************************************************************************************************************
//program 1 to display contents of a file
#include <stdio.h>
#include <stdlib.h>
     
    void main()
    {
       char ch, file_name[25];
       FILE *fp;
     
       fp = fopen("input.txt", "r"); // read mode
     
       if (fp == NULL)
       {
          printf("Error while opening the file.\n");
          
       }
     
       printf("The contents of this file are:\n");
     
       while((ch = fgetc(fp)) != EOF)
          printf("%c", ch);
     
       fclose(fp);
       
    }
/*
The contents of this file are:
Hello world.I am Srinithyee.This is a text file called input.I am studying in SSN College.This is a sample file for File Handling in C.
*/
***********************************************************************************************************************************************************************
//program 2 to count the digits,spaces,alphabets from a text file
#include <stdio.h>
#include <stdlib.h>
     
    void main()
    {
        char ch, file_name[25];
        int countDigits=0;
	int countAlphabet=0;
	int countSpaces=0;
	int countSpecialChar=0;
       FILE *fp;
     
       fp = fopen("input.txt", "r"); // write mode
     
       if (fp == NULL)
       {
          printf("Error while opening the file.\n");
          
       }
  
       while((ch = fgetc(fp)) != EOF)
	{
         if(ch>='0' && ch<='9')
            countDigits++;
        else if((ch='A' && ch<='Z')||(ch>='a' && ch<='z'))
            countAlphabet++;
        else if(ch==' ')
            countSpaces++;
        else
            countSpecialChar++;
        }
 
    printf("\nDigits: %d \nAlphabets: %d \nSpaces: %d \nSpecial Characters: %d",countDigits,countAlphabet,countSpaces,countSpecialChar);
 
    
     
       fclose(fp);
       
    }
/*Digits: 1 
Alphabets: 106
Spaces: 23 
Special Characters: 5*/
***********************************************************************************************************************************************************************
//program 3 to count number of lines and words in a text file
#include<ctype.h>
#include<stdio.h>
void main()
{
FILE *f;
char ch;
int line=0,word=0;
f=fopen("input.txt","w");
do
{
ch=getchar();
putc(ch,f);
}
while(ch!=EOF);
fclose(f);
f=fopen("student","r");
while((ch=getc(f))!=EOF)
{
if(ch=='\n')
line++;
if(isspace(ch)||ch=='\t'||ch=='\n')
word++;
putchar(ch);
}
fclose(f);
printf("\n no of line=%d\n",line);
printf("no of word=%d\n",word);
getch();
}
/*OUTPUT:
no of line=5
no of word=28*/
***********************************************************************************************************************************************************************
//program 4 to copy contents of one file to another
#include <stdio.h> 
#include <stdlib.h> // For exit() 
  
int main() 
{ 
    FILE *fptr1, *fptr2; 
    char filename[100], c; 
  
    printf("Enter the filename to open for reading \n"); 
    scanf("%s", filename); 
  
    // Open one file for reading 
    fptr1 = fopen(filename, "r"); 
    if (fptr1 == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    } 
  
    printf("Enter the filename to open for writing \n"); 
    scanf("%s", filename); 
  
    // Open another file for writing 
    fptr2 = fopen(filename, "w"); 
    if (fptr2 == NULL) 
    { 
        printf("Cannot open file %s \n", filename); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fptr1); 
    while (c != EOF) 
    { 
        fputc(c, fptr2); 
        c = fgetc(fptr1); 
    } 
  
    printf("\nContents copied to %s", filename); 
  
    fclose(fptr1); 
    fclose(fptr2); 
    return 0; 
}
/*OUTPUT:
root@sel-30 Desktop]# gcc 74.c -o q
[root@sel-30 Desktop]# ./q
Enter the filename to open for reading 
input.txt
Enter the filename to open for writing 
sample.txt

Contents copied to sample.txt[root@sel-30 Desktop]# 
*/
***********************************************************************************************************************************************************************
//program 5 to replace vowels in a text file by "z"
#include <stdio.h>
#include <string.h>
int main(){
    FILE *fp1;
    FILE *fp = fopen("input.txt", "r+");;
    char c,ch;
        int l = 0;
    while ((c = getc(fp)) != EOF){
                if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            fseek(fp, l, SEEK_SET);
            putc('z', fp);
        }
                l++;
    }
}
/*OUTPUT:
Hzllz wzrld.z zm Srznzthyzz.Thzs zs z tzxt fzlz czllzd znpzt.z zm stzdyzng zn SSN Czllzgz.Thzs zs 1 szmplz fzlz fzr Fzlz Hzndlzng zn C.
*/
***********************************************************************************************************************************************************************
//program 6 to copy selected content of a file
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    FILE *fp,*fp1;
    char ch;
    int mid,n,i;
    fp=fopen("input.txt","r+");
    fp1=fopen("copy.txt","w+");
    fseek(fp,0,2);
    mid=ftell(fp)/2;
    do{
        printf("Enter the value of n");
        scanf("%d",&n);
    }while(mid*n<0);
    
    fseek(fp,mid-n-1,0);
    ch=getc(fp);
    for(i=mid-n;i<=mid+n;i++)
    {
        fprintf(fp1,"%c",ch);
        ch=getc(fp);
    }
    fprintf(fp1,"%c%c",'\n','\0');
    fcloseall();
    return 0;
}
    
        
    }
}
***********************************************************************************************************************************************************************
//program 7 to write contents using fwrite
#include<stdio.h>

       struct Student
       {
              int roll;
              char name[25];
              float marks[100];
	      float avg;
       };

       void main()
       {
              FILE *fp;
              char ch;
              struct Student Stu;
	      int i,n;
	      float x;

              fp = fopen("Student.dat","w");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     exit(0);
              }

              do
              {
                      printf("\nEnter Roll : ");
                      scanf("%d",&Stu.roll);

                      printf("Enter Name : ");
                      scanf("%s",Stu.name);

                      printf("Enter the number of subjects : ");
		      scanf("%d",n);
		      printf("Enter the marks:");
		      for(i=0;i<n;i++){
                      scanf("%f",&Stu.marks[i]);
			}
                      printf("Average=",Stu.avg);

                      fwrite(&Stu,sizeof(Stu),1,fp);

                      printf("\nDo you want to add another data (y/n) : ");
                      ch = getche();

              }while(ch=='y' || ch=='Y');

              printf("\nData written successfully...");

              fclose(fp);
       }
float avg()
    {
    for (i=0; i<n; ++i)
        {
        sum = std[i].score+sum;
	stu.avg=sum/n;
	return stu.avg;
        }
 
    }

/*OUTPUT:
	      Enter Roll : 1
              Enter Name : Ashish
              Enter the number of subjects : 3 
	      Enter the marks:45
	      56
              78
              Average=59.6

              Do you want to add another data (y/n) : y

              Enter Roll : 2
              Enter Name : Kaushal
              Enter the number of subjects : 3 
	      Enter the marks:56
	      90
              92
              Average=79.3

              Do you want to add another data (y/n) : y

              Enter Roll : 3
              Enter Name : Vishwas
              Enter the number of subjects : 3 
	      Enter the marks:77
	      99
              88
              Average=88

              Do you want to add another data (y/n) : n

              Data written successfully...
*/
***********************************************************************************************************************************************************************
//program 7 to read the above file using fread
 #include<stdio.h>

       struct Student
       {
              int roll;
              char name[25];
              float marks;
	      float avg;
       };

       void main()
       {
              FILE *fp;
              char ch;
              struct Student Stu;

              fp = fopen("Student.dat","r");            //Statement   1

              if(fp == NULL)
              {
                     printf("\nCan't open file or file doesn't exist.");
                     exit(0);
              }

              printf("\n\tRoll\tName\tMarks\t Average\n");

              while(fread(&Stu,sizeof(Stu),1,fp)>0)
                  printf("\n\t%d\t%s\t%f",Stu.roll,Stu.name,Stu.marks,Stu.avg);

              fclose(fp);
       }
/*OUTPUT:


              Roll     Name       Marks      Average
              1         Ashish     45          59.6
				   56
				   78
              2         Kaushal    56          79.3
				   90
				   92
              3         Vishwas    77          88
				   99
				   88
*/
***********************************************************************************************************************************************************************
//program 8 to replace a word in a text file with another
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Function declaration */
void replaceAll(char *str, const char *oldWord, const char *newWord);


int main()
{
    /* File pointer to hold reference of input file */
    FILE * fPtr;
    FILE * fTemp;
    char path[100];
    
    char buffer[100];
    char oldWord[100], newWord[100];


    printf("Enter path of source file: ");
    scanf("%s", path);

    printf("Enter word to replace: ");
    scanf("%s", oldWord);

    printf("Replace '%s' with: ");
    scanf("%s", newWord);


    /*  Open all required files */
    fPtr  = fopen(path, "r");
    fTemp = fopen("replace.tmp", "w"); 

    /* fopen() return NULL if unable to open file in given mode. */
    if (fPtr == NULL || fTemp == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check whether file exists and you have read/write privilege.\n");
        exit(EXIT_SUCCESS);
    }


    /*
     * Read line from source file and write to destination 
     * file after replacing given word.
     */
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        // Replace all occurrence of word from current line
        replaceAll(buffer, oldWord, newWord);

        // After replacing write it to temp file.
        fputs(buffer, fTemp);
    }


    /* Close all files to release resource */
    fclose(fPtr);
    fclose(fTemp);


    /* Delete original source file */
    remove(path);

    /* Rename temp file as original file */
    rename("replace.tmp", path);

    printf("\nSuccessfully replaced all occurrences of '%s' with '%s'.", oldWord, newWord);

    return 0;
}



/**
 * Replace all occurrences of a given a word in string.
 */
void replaceAll(char *str, const char *oldWord, const char *newWord)
{
    char *pos, temp[100];
    int index = 0;
    int owlen;

    owlen = strlen(oldWord);


    /*
     * Repeat till all occurrences are replaced. 
     */
    while ((pos = strstr(str, oldWord)) != NULL)
    {
        // Bakup current line
        strcpy(temp, str);

        // Index of current found word
        index = pos - str;

        // Terminate str after word found index
        str[index] = '\0';

        // Concatenate str with new word 
        strcat(str, newWord);
        
        // Concatenate str with remaining words after 
        // oldword found index.
        strcat(str, temp + index + owlen);
    }
}
/*OUTPUT:
This is ssn college of engineering at Tamilnadu. Tamilnadu is otherwise called as singara
 Tamilnadu*/
***********************************************************************************************************************************************************************
//program 9 to maintain bank account details
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MINBAL 500
struct Bank_Account
{
 char no[10];
 char name[20];
 char balance[15];
};
struct Bank_Account acc;
void main()
{
 long int pos1,pos2,pos;
50
 FILE *fp;
 char *ano,*amt;
 char choice;
 int type,flag=0;
 float bal;
 do
 {
 clrscr();
 fflush(stdin);
 printf("1. Add a New Account Holder\n");
 printf("2. Display\n");
 printf("3. Deposit or Withdraw\n");
 printf("4. Number of Account Holder Whose Balance is less than the Minimum
Balance\n");
 printf("5. Stop\n");
 printf("Enter your choice : ");
 choice=getchar();
 switch(choice)
 {
 case '1' :
 fflush(stdin);
 fp=fopen("acc.dat","a");
 printf("\nEnter the Account Number : ");
 gets(acc.no);
 printf("\nEnter the Account Holder Name : ");
 gets(acc.name);
 printf("\nEnter the Initial Amount to deposit : ");
 gets(acc.balance);
 fseek(fp,0,2);
 fwrite(&acc,sizeof(acc),1,fp);
 fclose(fp);
 break;
 case '2' :
 fp=fopen("acc.dat","r");
 if(fp==NULL)
 printf("\nFile is Empty");
 else
 {
 printf("\nA/c Number\tA/c Holder Name Balance\n");
 while(fread(&acc,sizeof(acc),1,fp)==1)
 printf("%-10s\t\t%-20s\t%s\n",acc.no,acc.name,acc.balance);
 fclose(fp);
 }
 break;
 case '3' :
 fflush(stdin);
 flag=0;
 fp=fopen("acc.dat","r+");
 printf("\nEnter the Account Number : ");
 gets(ano);
51
 for(pos1=ftell(fp);fread(&acc,sizeof(acc),1,fp)==1;pos1=ftell(fp))
 {
 if(strcmp(acc.no,ano)==0)
 {
 printf("\nEnter the Type 1 for deposit & 2 for withdraw : ");
 scanf("%d",&type);
 printf("\nYour Current Balance is : %s",acc.balance);
 printf("\nEnter the Amount to transact : ");
 fflush(stdin);
 gets(amt);
 if(type==1)
 bal = atof(acc.balance) + atof(amt);
 else
 {
 bal = atof(acc.balance) - atof(amt);
 if(bal<0)
 {
 printf("\nRs.%s Not available in your A/c\n",amt);
 flag=2;
 break;
 }
 }
 flag++;
 break;
 }
 }
 if(flag==1)
 {
 pos2=ftell(fp);
 pos = pos2-pos1;
 fseek(fp,-pos,1);
 sprintf(amt,"%.2f",bal);
 strcpy(acc.balance,amt);
 fwrite(&acc,sizeof(acc),1,fp);
 }
 else if(flag==0)
 printf("\nA/c Number Not exits... Check it again");
 fclose(fp);
 break;
 case '4' :
 fp=fopen("acc.dat","r");
 flag=0;
 while(fread(&acc,sizeof(acc),1,fp)==1)
 {
 bal = atof(acc.balance);
 if(bal<MINBAL)
 flag++;
52
 }
 printf("\nThe Number of Account Holder whose Balance less than the Minimum Balance :
%d",flag);
 fclose(fp);
 break;
case '5' :
 fclose(fp);
 exit(0);
 }
 printf("\nPress any key to continue....");
 getch();
} while (choice!='5');
}
/*OUTPUT:
1. Add a New Account Holder
2. Display
3. Deposit or Withdraw
4. Number of Account Holder Whose Balance is less than the Minimum Balance
5. Stop
Enter your choice : 1
 Enter the Account Number : 547898760
 Enter the Account Holder Name : Rajan
 Enter the Initial Amount to deposit : 2000
Press any key to continue....
1. Add a New Account Holder
2. Display
3. Deposit or Withdraw
4. Number of Account Holder Whose Balance is less than the Minimum Balance
5. Stop
 Enter your choice : 4
The Number of Account Holder whose Balance less than the Minimum Balance : 0*/
***********************************************************************************************************************************************************************
//program 10 to maintain a telephone directory
#include<stdio.h>

#include<conio.h>

#include<string.h>

#include<process.h>

#include<stdlib.h>

#include<dos.h>

struct contact

{

    long ph;

    char name[20],add[20],email[30];

} list;

char query[20],name[20];

FILE *fp, *ft;

int i,n,ch,l,found;

int main()

{

main:

    system("cls");    /* ************Main menu ***********************  */

    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Contact\n\t\t[2] List all Contacts\n\t\t[3] Search for contact\n\t\t[4] Edit a Contact\n\t\t[5] Delete a Contact\n\t\t[0] Exit\n\t\t=================\n\t\t");

    printf("Enter the choice:");

    scanf("%d",&ch);

    switch(ch)

    {

    case 0:

        printf("\n\n\t\tAre you sure you want to exit?");

        break;

        /* *********************Add new contacts************  */

    case 1:

        system("cls");

        fp=fopen("contact.dll","a");

        for (;;)

        {
            fflush(stdin);

            printf("To exit enter blank space in the name input\nName (Use identical):");

            scanf("%[^\n]",&list.name);

            if(stricmp(list.name,"")==0 || stricmp(list.name," ")==0)

                break;

            fflush(stdin);

            printf("Phone:");

            scanf("%ld",&list.ph);

            fflush(stdin);

            printf("address:");

            scanf("%[^\n]",&list.add);

            fflush(stdin);

            printf("email address:");

            gets(list.email);

            printf("\n");

            fwrite(&list,sizeof(list),1,fp);

        }

        fclose(fp);

        break;

        /* *********************list of contacts*************************  */

    case 2:

        system("cls");

        printf("\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t\t================================\n\nName\t\tPhone No\t    Address\t\tE-mail ad.\n=================================================================\n\n");

        for(i=97; i<=122; i=i+1)

        {

            fp=fopen("contact.dll","r");

            fflush(stdin);

            found=0;

            while(fread(&list,sizeof(list),1,fp)==1)

            {

                if(list.name[0]==i || list.name[0]==i-32)

                {

                    printf("\nName\t: %s\nPhone\t: %ld\nAddress\t: %s\nEmail\t: %s\n",list.name,

                           list.ph,list.add,list.email);

                    found++;

                }

            }

            if(found!=0)

            {
                printf("=========================================================== [%c]-(%d)\n\n",i-32,found);

                getch();
            }

            fclose(fp);

        }

        break;

        /* *******************search contacts**********************  */

    case 3:

        system("cls");

        do

        {

            found=0;

            printf("\n\n\t..::CONTACT SEARCH\n\t===========================\n\t..::Name of contact to search: ");

            fflush(stdin);

            scanf("%[^\n]",&query);

            l=strlen(query);

            fp=fopen("contact.dll","r");

            system("cls");

            printf("\n\n..::Search result for '%s' \n===================================================\n",query);

            while(fread(&list,sizeof(list),1,fp)==1)

            {

                for(i=0; i<=l; i++)

                    name[i]=list.name[i];

                name[l]='\0';

                if(stricmp(name,query)==0)

                {

                    printf("\n..::Name\t: %s\n..::Phone\t: %ld\n..::Address\t: %s\n..::Email\t: %s\n",list.name,list.ph,list.add,list.email);

                    found++;

                    if (found%4==0)

                    {

                        printf("..::Press any key to continue...");

                        getch();

                    }

                }

            }

            if(found==0)

                printf("\n..::No match found!");

            else

                printf("\n..::%d match(s) found!",found);

            fclose(fp);

            printf("\n ..::Try again?\n\n\t[1] Yes\t\t[0] No\n\t");

            scanf("%d",&ch);

        }
        while(ch==1);

        break;

        /* *********************edit contacts************************/

    case 4:

        system("cls");

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");

        fflush(stdin);

        printf("..::Edit contact\n===============================\n\n\t..::Enter the name of contact to edit:");

        scanf("%[^\n]",name);

        while(fread(&list,sizeof(list),1,fp)==1)

        {

            if(stricmp(name,list.name)!=0)

                fwrite(&list,sizeof(list),1,ft);

        }

        fflush(stdin);

        printf("\n\n..::Editing '%s'\n\n",name);

        printf("..::Name(Use identical):");

        scanf("%[^\n]",&list.name);

        fflush(stdin);

        printf("..::Phone:");

        scanf("%ld",&list.ph);

        fflush(stdin);

        printf("..::address:");

        scanf("%[^\n]",&list.add);

        fflush(stdin);

        printf("..::email address:");

        gets(list.email);

        printf("\n");

        fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat","contact.dll");

        break;

        /* ********************delete contacts**********************/

    case 5:

        system("cls");

        fflush(stdin);

        printf("\n\n\t..::DELETE A CONTACT\n\t==========================\n\t..::Enter the name of contact to delete:");

        scanf("%[^\n]",&name);

        fp=fopen("contact.dll","r");

        ft=fopen("temp.dat","w");

        while(fread(&list,sizeof(list),1,fp)!=0)

            if (stricmp(name,list.name)!=0)

                fwrite(&list,sizeof(list),1,ft);

        fclose(fp);

        fclose(ft);

        remove("contact.dll");

        rename("temp.dat","contact.dll");

        break;

    default:

        printf("Invalid choice");

        break;

    }

    printf("\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n");

    scanf("%d",&ch);

    switch (ch)

    {

    case 1:

        goto main;

    case 0:

        break;

    default:

        printf("Invalid choice");

        break;

    }

    return 0;

}
/*OUTPUT:
					      MAIN MENU
                                        =====================
					[1] Add a new Contact
					[2] List all Contacts
					[3] Search for contact
					[4] Edit a Contact
					[5] Delete a Contact
					[0] Exit

Enter the choice:1
To exit enter blank space in the name input
Name (Use identical):sam
Phone:9500014766
address:plot 167,east coast road,chennai
email address:sam@gmail.com
Enter the choice:1
To exit enter blank space in the name input
Name (Use identical):dia
Phone:9584563291
address:plot 187,beach road,chennai
email address:dia@gmail.com

Enter the choice:2
================================LIST OF CONTACTS================================
Name:sam
Phone:9500014766
Address:plot 167,east coast road,chennai
Email:sam@gmail.com
Name:dia
Phone:9584563291
Address:plot 187,beach road,chennai
Email:dia@gmail.com

Enter the choice:3
				..::CONTACT SEARCH
			    ===========================
..::Name of contact to search: watson
..::Search result for watson
===================================================
..::No match found!
..::Try again?

	[1] Yes		[0] No
0


Enter the choice:4
..::Edit contact
===============================

	..::Enter the name of contact to edit:sam

..::Editing sam

..::Name(Use identical):dev
..::Phone:9856743562
..::address:plotb 67,elcot road,banglore
..::email address:dev

Enter the choice:4

	..::DELETE A CONTACT
	==========================
	..::Enter the name of contact to delete:dia

***********************************************************************************************************************************************************************
									END OF ASSIGNMENT
***********************************************************************************************************************************************************************









