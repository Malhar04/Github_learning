#include<stdio.h>
#include<conio.h>

int main()
{

 long int tp=80000 ,tm ,tw ,im ,iw ,lp ,ip ,lm ,lw ;
 printf(" Total population of town is 80000 \n ");
 lp=48*tp/100;
 printf("No of literate people %ld\n",lp);
 tm=52*tp/100;
 printf(" No of men %ld\n",tm);
 lm=35*tp/100;
 printf(" No of literate men %ld\n",lm);
 im=tm-lm;
 printf(" No of illiterate men %ld\n",im);
 tw=tp-tm;
 printf(" No of women %ld. \n",tw);
 lw=lp-lm;
 printf(" No of literate women %ld. \n",lw);
 iw=tw-lw;
 printf(" No of illiterate women %ld. \n",iw);
 printf("This code was made by 22CE062 Malhar Acharya");
 getch();

}
