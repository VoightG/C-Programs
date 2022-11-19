/*The purpose of this program is to practice using scan and switch statements. The program converts 
a user input assigned to the variable "earthWeight" and converts that input weight to the corresponding
weight you would have on another planet*/
#include <stdio.h>

int main() {
double earthWeight;
int x;

printf("What is your weight? ");
scanf("%lf", &earthWeight);

printf("Choose a planet: ");
printf("\n1.Mercury \n2.Venus \n3.Mars \n4.Jupiter \n5.Saturn \n6.Uranus \n7.Neptune\n");
scanf("%d", &x);

switch(x){
  case 1:
  earthWeight *= 0.38;
  break;
  case 2:
  earthWeight *= 0.91;
  break;
  case 3:
  earthWeight *= 0.38;
  break;
  case 4:
  earthWeight *= 2.34;
  break;
  case 5:
  earthWeight *= 1.06;
  break;
  case 6:
  earthWeight *= 0.92;
  break;
  case 7:
  earthWeight *= 1.19;
  break;
}
printf("Your space weight: %lf\n", earthWeight);

}
