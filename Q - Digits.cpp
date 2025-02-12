#include<stdio.h>
#include<stdlib.h>
int main()
{
  
    int n,m,i,test_case;
    char N[100];
    scanf("%d",&test_case);
    for(i=0;i<test_case;i++){
        scanf("%s",&N);
        n = atoi(N);
    if(n/1==0){
        printf("%s",N);
        printf("\n");
    }else{
        while(n!=0){
        m=n%10;
        n=n/10;
        printf("%d ",m);
    }

    printf("\n");
    }
    }
    return 0;
}
