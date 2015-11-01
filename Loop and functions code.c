/*
 ============================================================================
 Name        : Loop.c
 Author      : Bruno Calogero
 Version     :
 Copyright   : Your copyright notice
 Description : A main() function where the user is asked what function he/she
               wants to use until she chooses “Exit”
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



float average(float a, float b, float c)
{
	float Xbar;
	Xbar=(a+b+c)/3;
	return Xbar;

}

int factorial(int d)
{
	int i,f=1;
	for (i=d; i>0; i--){
		f=f*i;
	}
	return f;

}

int squareroot(int s)
{
     int t=0;
	 int u=0;
	 int sqrt=-1;
while (s>u)
{
	u=t*t;
	if (s == u)
		sqrt = t;
	else t++;
}
return sqrt;
}

int main(void)
{
    float fa, fb, fc;
    printf("please enter three different numbers");
    int a, fcto, d, s,sqrt;
    float xbar;
    while (a!=4){
    printf("please enter the wanted option:\n 1.average\n 2.factorial\n 3.squareroot\n 4.exit\n");
    scanf("%d",&a);
    switch(a){

        case 1:
    		scanf("%f %f %f",&fa,&fb,&fc);
    		xbar=average(fa,fb,fc);
    		printf ("the average is %0.2f\n",xbar);
    		break;

    	case 2:
            scanf ("%d",&d);
            fcto=factorial(d);
			printf ("the factorial of the entered number is : %d\n",fcto);
    		break;

    	case 3:
            scanf ("%d",&s);
            sqrt=squareroot(s);
            printf("the square root of the entered number is: %d\n", sqrt);
    		break;

    	case 4:

    		a=4;
    		break;
    }
    }
}
