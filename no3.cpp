#include <stdio.h>

int main (){
    int n,x=0;
    int first=-100, runner=-100, flag=0;
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
            flag=1;
        }
    }

	if(flag==1)
    printf("%d\n",runner);
    else
	printf("%d\n",first);
	
    return 0;
}
