#include <stdio.h>

int main()
{
    int a[]={8,5,6,3,7,4,6};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
        int temp=0;
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else{
            continue;
        }
    }
    }
    
    for(int i=0;i<7;i++)
        printf("%d",a[i]);
        //Printing an array after sorted
}
