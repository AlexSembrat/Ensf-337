/*
*  File Name: lab1exe_B.c
*  Assignment: Lab 1 Exercise B
*  Lab Section: B01
*  Completed by: Alexander Sembrat (30089188)
*  Submission Date: Sept 17th 2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define G 9.8   /* G is a constant: gravitation acceleration 9.8 m/s^2 */
#define PI 3.141592654  /* PI is constant */

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

int main(void)
{
    int n;
    double velocity;
    
    printf ("please enter the velocity at which the projectile is launched (m/sec): ");
    n = scanf("%lf" ,&velocity);
    
    if(n != 1)
    {
        printf("Invlid input. Bye...");
        exit(1);
    }
    
    while (velocity < 0 )
    {
        printf ("please enter a positive number for velocity: ");
        n = scanf("%lf", &velocity);
        if(n != 1)
        {
            printf("Invlid input. Bye...");
            exit(1);
        }
    }
    
    create_table(velocity); 
    
    return 0;
}

void create_table(double v)
{
	printf("Angle                 t                 d  \n");
	printf("(deg)               (sec)              (m) \n");
	double a = 0;
	while(a <= 90)
	{
		double t, d;
		t=Projectile_travel_time(a,v);
		d=Projectile_travel_distance(a,v);
		printf( "%lf          %lf          %lf \n",a,t,d);
		a=a+5;
	}
	
	
}

double Projectile_travel_time(double a, double v)
{
	double t;
	a = degree_to_radian(a);
	t = 2*v*sin(a)/G;
	return t;
}

double Projectile_travel_distance(double a, double v)
{
	double d;
	a = degree_to_radian(a);
	d=v*v*sin(2*a)/G;
	return d;
}

double degree_to_radian(double d)
{
	const int o = 180;
	double r;
	r=d/o*PI;
	return r;
}

/* UNCOMMENT THE CALL TO THE create_table IN THE main FUNCTION, AND COMPLETE THE PROGRAM */

