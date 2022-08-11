#include <stdio.h>

int main (){
    int n,x=0;
    int first=0, runner=0;
    scanf("%d",&n);

    int list[n];

    for(x=0;x<n;x++){
        scanf("%d",&list[n]);
        if (list[n]>first){
            runner = first;
            first = list[n];
        }
        else if (list[n]>runner && list[n]!=first){
            runner = list[n];
        }
    }

    printf("%d\n",runner);

    return 0;
}