// AP- 2,6,10,12....... upto n terms

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n term : ");
//     scanf("%d",&n);
//     int a=2;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a+4;
//     }
//     return 0;
// }

// in normal way

#include<stdio.h>
int main(){
    int n;
    printf("Enter n term : ");
    scanf("%d",&n);
    for(int i=2;i<=4*n+6;i=i+4)
        printf("%d ",i);
    return 0; 
}