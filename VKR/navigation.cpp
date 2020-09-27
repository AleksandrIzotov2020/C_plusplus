#include <iostream>
#include <math.h>
#include "special.h"

#define M_PI 3.14159265358979323846

using namespace std;


double current_speed
( double st_speed, double speed, double acc, double dt )
{
	double Temp1 = st_speed - speed;
	double Temp2 = acc * dt / 2;
	if (abs(Temp1) > Temp2)
	{ speed += 2 * Temp2 * sign(st_speed - speed); }
	else
	{ speed = st_speed; }
	return speed;
};

bool current_course
( double new_course, double &course, double speed, double Rc, double dt )
{
	double Temp1 = new_course - course;
	double Temp2 = speed * dt / (2 * Rc);
	bool turn;
	if (abs(Temp1) > Temp2)
	{
		course += 2 * Temp2 * sign(new_course - course);
		turn = true;
	}
	else
	{
		course = new_course;
		turn = false;
	}
	return turn;
};


void conversion_coord
(double &Sx, double &Sy, double X, double Y, double dt)
{
	Sx += X * dt;
	Sy += Y * dt;
};

