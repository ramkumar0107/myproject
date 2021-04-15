#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
void findnext(char number[],int n)
{
    int i,j;

    for(i=n-1;i>0;i--) 
        if(number[i]>number[i-1])
        break;
        
        if(i==0)
        {
            printf("next number is not possible");
            return;
        }

    int x=number[i-1],smallest=i;
    for(j=i+1;j<n;j++)
        if(number[j]>x && number[j] < number[smallest])
            smallest=j;

            swap(&number[smallest], &number[i-1]);

            sort(number+i,number+n);

            printf("next number with same set of digit is",number);
            return;

}
int main()
{
char digits[]="534976";
int n= strlen(digits);
findnext(digits,n);
return 0;
}