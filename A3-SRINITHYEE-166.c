***********************************************************************************************************************
                                                ASSIGNMENT 3:ARRAY HANDLING IN C
                                                NAME:SRINITHYEE SK
                                                REGISTER NO:185001166
***********************************************************************************************************************
//first program to find if a number is well ordered
#include <stdio.h>
void main()
{
        static c=0;
        int i;
        int n[3]={};
        for(i=123;i<=789;i++)
        {
                n[0]=i/100;
                n[1]=(i/10)-(10*n[0]);
                n[2]=i%10;
                c++;
                if(n[0]<n[1]&&n[1]<n[2])
                {
                        printf("%d%d%d",n[0],n[1],n[2]);
                        printf("\n");
                }
        }
        printf("The count is %d",c);
}
/*output:
123
124
125
126
127
128
129
134
135
136
137
138
139
145
146
147
148
149
156
157
158
159
167
168
169
178
179
189
234
235
236
237
238
239
245
246
247
248
249
256
257
258
259
267
268
269
278
279
289
345
346
347
348
349
356
357
358
359
367
368
369
378
379
389
456
457
458
459
467
468
469
478
479
489
567
568
569
578
579
589
678
679
689
789
The count is 667 */
**************************************************************************************************************************
//second program to print vertical histogram
#include <stdio.h>
void main()
{
        int n,N;
        int i,j;
        int b;
        int max=0;
        printf("Enter the value of N:\n");
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
                printf("Enter any number from 0 to 9:\n");
                scanf("%d",&b);
                a[b]+=1;
                if(max<a[b])
                {
                        max=a[b];
                }
        }
        for(i=0;i<max;i++)
        {
                for(j=0;j<10;j++)
                {
                        if(max-a[j]<=i)
                        {
                                printf("*");
                        }
                        else
                        {
                                printf(" ");
                        }
                        printf("\n");
                }
        }
        for(i=0;i<10;i++)
        {
                printf("%d",i);
        }
}
/*OUTPUT:
Enter the value of N:5
Enter any number from 0 to 9:3
Enter any number from 0 to 9:3
Enter any number from 0 to 9:4
Enter any number from 0 to 9:1
Enter any number from 0 to 9:1
* *
* **
123456789*/
***************************************************************************************************************************
//third program to push 0s of an array to the end
#include <stdio.h>
void push(int a[],int x);
void main()
{
int a[1000]={};
int n,i;
printf("Enter the value of N");
scanf("%d",&n);
printf("Enter the elements of the array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
int x=push(a[],n);
printf("The modified array is:");
for(i=0;i<n;i++)
{
scanf("%d ",&a[i]);
}
}
void push(int a[],int n)
{
int temp[1000]={};
int k=0;
for(i=0;i<n;i++)
{
        if(a[i])
        {
        temp[k]=a[i];
        k+=1;
        }
}
for(a=0;a<n;a++)
{
a[a]=temp[a];
}
/*OUTPUT:
Enter the value of N:6
Enter the elements of the array
1
20
0
3
0
6
The modified array is:
1 20 3 6 0 0*/
***************************************************************************************************************************
//fourth program to perform piglatin operation
#include <stdio.h>
void main()
{
        char a[85]={};
        char temp[85]={};
        char word[85]={};
        int i=0,k=0,z=0,j=0;
        printf("Enter the SENTENCE:");
        scanf("%c",a[]);
        for(i=0;a[i-1];i++)
        {
                if(a[i]!=' '&&a[i]!='\0')
                {
                word[z]=a[i];
                z++;
                }
                else
                {
                word[z]="\0";
                for(z=1;word[z];z++)
                {
                temp[j]=word[z];
                ++j;
                }
                temp[j++]=word[0];
                temp[j++]='a';
                temp[j++]=' ';
                for(k=0;k<85;k++)
                {
                        word[k]=0;
                }
                z=0;
        }
        temp[j]='\0';
	printf("the new sentence is ");
        printf("%c",temp);
}
/*OUTPUT:
Enter the SENTENCE:Hello World
the new sentence is elloHay orldWay*/
**************************************************************************************************************************
//fifth program to implement rock paper scissors
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int R=1;
    int P=2;
    int S=3;
    int i;
    int Pscore =0;
    int Cscore =0;
    int choice;
    srand(time(NULL));
    printf("Rock=1 , Paper= 2, and Scissors= 3\n");

    for(i=0;i<5;i++){
        printf("Enter your choice:");
        scanf("%d",&choice);
            int computer=rand()%3+1;
            if(choice==1){
                if(computer==1){
                    printf("Draw\n");
                }
                if(computer==2){
                    printf("Computer Wins!\n");
                    Cscore= Cscore + 1;
                }
                if(computer==3){
                    printf("Player Wins\n");
                    Pscore = Pscore + 1;
                }
            }
              else  if(choice==2){
                    if(computer==2){
                        printf("Draw\n");
                    }
                    if(computer==3){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;
                    }
                    if(computer==1){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                }
                else if(choice==3){
                    if(computer==3){
                        printf("Draw\n");
                    }
                    if(computer==2){
                        printf("Computer Wins!\n");
                        Cscore= Cscore + 1;
                    }
                    if(computer==1){
                        printf("Player Wins!\n");
                        Pscore = Pscore + 1;

                    }
                }
        else{
            printf("Wrong Answer\n");
        }

            }
            if(Cscore > Pscore ){
                printf("Computer wins %d to %d\n",Cscore,Pscore);
            }
            else if(Cscore < Pscore ){
                printf("Player wins %d to %d\n",Pscore,Cscore);
            }
           else if(Cscore = Pscore ){
                printf("No winner it is a draw!\n");
            }



    return 0;
}
/*OUTPUT:
Rock=1 , Paper= 2, and Scissors= 3                                                                                             
Enter your choice:2                                                                                                            
Computer Wins!                                                                                                                 
Enter your choice:4                                                                                                            
Wrong Answer                                                                                                                   
Enter your choice:1
Draw                                                                                                                             
Enter your choice:3                                                                                                              
Player Wins!                                                                                                                     
Enter your choice:2                                                                                                              
Computer Wins!                                                                                                                   
Computer wins 2 to 1 */
***************************************END OF ASSIGNMENT 3*******************************************************************