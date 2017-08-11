#include<iostream>
#include<stdio.h>
#define length 10

using namespace std;
void BubbleSort(int a[],int n);
void DengJunHunBubleSort(int a[],int);


int main()
{
    int Array[length]={10,9,8,7,6,5,4,3,2,1};
    int i=0,j=0;
    //Prepare the data we need;
    printf("Please pick ten numbehr set to Array:\n");
    printf("Enter # to choose default array.\n");
    for(i=0;i<length;i++) //Loop assignments to arrays;
        {
            scanf("%d",&Array[i]);
            if(Array[0]==(int)'#')break;//can skip input select the default value;
        }
    printf("The original Array: \n");
    for(i=0;i<length;i++)
        printf("%d ",Array[i]);

    //call the function revise the variable;
    printf("\nUpdata Result: \n");
    //call the bubble sort function;
    //BubbleSort(Array,length);
    DengJunHunBubleSort(Array,length);
    printf("\n");
    for(i=0;i<length;i++)
        printf("%d ",Array[i]);

    printf("\n");
    //system("Pause");//Press any key to continue;
    return 0;
}

void BubbleSort(int a[],int n)
{
    int i,j,temp;
    int index=0;
    for(j=0;j<n-1;j++)//external circulation: need to cycle n times;
    {
        for(i=0;i<n-1-j;i++)//internal circulation:
        {
            if(a[i]>a[i+1])//exchange two adjacent numbers;
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
//        if(i%10==0)printf("\n");//test the reality execute times;
//        printf("%d %d   ",j,i);//
        }
    }
}

void DengJunHunBubleSort(int a[],int n)
{
    int temp;
    for(bool sorted=false;sorted=!sorted;n--)
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                temp=a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                sorted=false;
            }
        }
}
