#include <stdio.h>

int main (){
    int n,x=0;
    int first=-100, runner=-100, flag=0;
    scanf("%d",&n);

    int list[n];

    for(x=0;x<n;x++){
        scanf("%d",&list[x]);
        if (list[x]>first){
            runner = first;
            first = list[x];
            flag=1;
        }
        else if (list[x]>runner && list[x]!=first){
            runner = list[x];
            flag=1;
        }
    }

    if(flag==1)
    	printf("%d\n",runner);
    else
	printf("%d\n",first);
	
    return 0;
}
