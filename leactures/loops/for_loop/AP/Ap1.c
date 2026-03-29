// Display AP - 4,7,10,13,16..... upto 'n' terms

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the n terms : ");
//     scanf("%d",&n);
//     for(int i=4;i<=3*n+1;i=i+3)
//         printf("%d ",i);
//     return 0;
// }

// we are going to use extra variable

#include<stdio.h>
int main(){
    int n;
    printf("Enter the n terms : ");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<n;i++){
        printf("%d ",a);
        a=a+3;
    }
    return 0;
}