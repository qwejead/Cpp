#include<stdio.h>

int Addition(int No1,int No2)
{
    int Ans=0;
    Ans=No1+No2;
    printf("%d",Ans);
    //return Ans;
}

int Substration(int No1,int No2)
{
    int Ans=0;
    Ans=No1-No2;
    //return Ans;
    printf("%d",Ans);
}

int main()
{
    int A=11,B=10;
    int Result=0;

    Result=Addition(A,B);
    printf("Addition is:%d\n",Result);

    Result=Substration(A,B);
    printf("Substration is:%d\n",Result);




    return 0;
}