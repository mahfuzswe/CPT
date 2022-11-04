#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int left,right,middle;
    left=0;
    right=4;

    int item=3;
    while(left<=right){
            middle=(left+right)/2;
        if(arr[middle]==item){
            printf("Item is found at %dth position.\n",middle+1);
            return 0;
        }else if(arr[middle]<item){
            left=middle+1;
        }else{
            right=middle-1;
        }
    }
    printf("Item is not found in array.\n");
    return 0;
}
