//Write C program to evaluate each of the following equations: i) v = u+at ii) s = ut + 1/2at 2 where v, u, a, t, s are variable.
//v=u+at

#include<stdio.h>

int main(){
	float u,a,t;
	
	printf("Enter the value of u =");
	scanf("%f",&u);
	
	printf("Enter the value of a =");
	scanf("%f",&a);
	
	printf ("Enter the value of t =");
	scanf("%f",&t);
	
	float v = (u+(a*t));
	scanf("v=%f",&v);
	
//	float s = (u*t + 1/2*a*t*t);
//	scanf("s=%f",&s);
}
