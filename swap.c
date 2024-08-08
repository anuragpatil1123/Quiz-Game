#include<stdio.h>
int main(){
double anurag,vaibhav,pratap;
anurag = 100;
vaibhav = 200;
pratap = anurag;
vaibhav = pratap;
anurag = vaibhav;
printf("Value of anurag:%.3d",anurag);
printf("\nValue of vaibhav:%.3d",vaibhav);
return 0;
}