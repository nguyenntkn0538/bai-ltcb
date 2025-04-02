
#include<stdio.h>
int main(){
    int a[10];
    //nhập mảng
    for (int i=0;i<10;i++)
    {
        printf("nhap phan tu thu %d:",i);
        scanf("%d",&a[i]);
    }
    //in mảng
    for (int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;

}




