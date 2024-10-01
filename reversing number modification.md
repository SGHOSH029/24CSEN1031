#include <stdio.h>

int main() {
    int num,q,r;
    printf("enter a number;");
    scanf("%d",&num);
    q= num;
    int sum=0;
    while(q>0) {
        r=q%10;
        printf("%d\n",r);
        sum=10*sum+r;
        q=q/10;
    }
    printf("the reverse number= %d",sum);
    
   return 0;
}
