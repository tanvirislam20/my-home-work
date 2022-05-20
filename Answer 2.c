#include<stdio.h>
int main (){
float kilometer,meter,centimeter,feet,inches;
printf("Enter the distance(kilometer) between Mirpur and Ashulia-\n");
scanf("%f",&kilometer);
meter=kilometer*1000;
centimeter=kilometer*100000;
feet=kilometer*3280.8399;
inches=kilometer*39370.0787;
printf("The distance between Mirpur to Ashulia is:%.2fmeter \n",meter);
printf("The distance between Mirpur to Ashulia is:%.2ffeet \n",feet);
printf("The distance between Mirpur to Ashulia is:%.2finches \n",inches);
printf("The distance between Mirpur to Ashulia is:%.2fcentimeter \n", centimeter);
}
