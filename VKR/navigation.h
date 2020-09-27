#pragma once
double current_speed (double st_speed, double speed, double acc, double dt);
bool current_course
(double new_course, double& course, double speed, double Rc, double dt);
void conversion_coord
(double& Sx, double& Sy, double X, double Y, double dt);
