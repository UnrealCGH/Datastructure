#include<iostream>
#define Length 10
using namespace std;
int main()
{
    int Array[Length]={10,9,8,7,6,5,4,3,2,1};
    for(int i=0;i<Length;i++)
        cin>>Array[i];
    for(int i=0;i<Length;i++)
        cout<<Array[i]<<" ";
    cout<<endl;

    int n=Length;

    //for(bool sorted=false;sorted= !sorted ;n--)
    //    cout<<Array[n-1]<<" "<<sorted;
    //the initial value of the sorted is false;
    //the sorted value change to true when execute the judgment statement;
    //if we don't set the sorted value ,the for loop just can execute once;

    for(bool sorted=false;sorted= !sorted ;n--)
        for(int i=0;i<n-1;i++)
            if(Array[i]>Array[i+1])
            {
                int temp=Array[i];
                Array[i]=Array[i+1];
                Array[i+1]=temp;
                sorted=false;
                /*if internal circulation execute and not end,
                external circulation  will execute all the time;*/
            }

    for(int i=0;i<Length;i++)
        cout<<Array[i]<<" ";
    cout<<endl;
    return 0;
}
