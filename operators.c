#include<stdio.h>
int main(){


int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400)
printf("%d",sum1);
printf("%d",sum2);

int x = 5;
int y = 3;
printf("%d", x > y); // returns 1 (true) because 5 is greater than 3

int myInt;
float myFloat;
double myDouble;
char myChar;

printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myFloat));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myChar));
return 0;
}