#include"physics.h"
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14
#define G (6.67430 * pow(10,-11))
#define g 9.8

double acceleration(float v, float u, float t)
{
    double res;
    res = (( v - u ) / t );
    return res;
}

double capacitive_rec(float f, float C)
{
    double rec;
    rec = (1 / (2*PI*f*C));
    return rec;
}

double circular_velocity(double r, double t)
{
    double vel;
    vel = (2 * PI * r ) / t;
    return vel;
}

double gravitation_force(float M1, float M2, float D)
{
    double force;
    force = ((G * M1 * M2) / (D * D));
    return force;
}

// double projectile_motion(float V, float angle)
// {
//     double range;
//     range = (double)(((V * V ) * sin(2*angle) ) / g);
//     return range;
// }