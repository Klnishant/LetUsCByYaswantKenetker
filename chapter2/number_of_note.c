#include<stdio.h>
int main (){

int amount,nhun,nfty,nten,nfv,ntwo,none,totalnotes;

printf("enter the amount=");
scanf("%d",&amount);

nhun=amount/100;
amount=amount%100;
nfty=amount/50;
amount=amount%50;
nten=amount/10;
amount=amount%10;
nfv=amount/5;
amount=amount%5;
ntwo=amount/2;
amount=amount%2;
none=amount/1;

printf("minimum number of notes=%d",nhun+nfty+nten+nfv+ntwo+none);

return 0;
}