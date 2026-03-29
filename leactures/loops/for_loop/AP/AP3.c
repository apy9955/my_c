// Display AP- 100,97,94,91....... upto n terms

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter n term : ");
//     scanf("%d",&n);
//     int a=100;
//     for(int i=1;i<=n;i++){
//         printf("%d ",a);
//         a=a-3;
//     }
//     return 0;
// }
// using multiple conditions

#include<stdio.h>
int main(){
    int a=100;
    for(int i=1;a>0;i++){
       printf("%d ",a);
        a=a-3; 
    }
    return 0;
}
