#include<stdio.h>
int main (){
int cost,sell;

printf("cost of product=");
scanf("%d",&cost);

printf("selling price=");
scanf("%d",&sell);

if(cost<sell){
printf("profit=%d\n",(sell-cost));
}

else{
    printf("loss=%d",(cost-sell));
    
}
return 0;
}