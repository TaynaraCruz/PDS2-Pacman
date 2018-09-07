#ifndef UTILS_H
#define UTILS_H

#include <raylib.h>
#include <cmath>
#include <iostream>
#include <fstream>

#define VECTOR4_ZERO (Vector4){0.0,0.0,0.0,0.0}
#define VECTOR3_ZERO (Vector3){0.0,0.0,0.0}
#define VECTOR2_ZERO (Vector2){0.0,0.0}

double Clamp(double x, double upper, double lower);
char ClampColor(double x);
double Logistic(double x, double x0, double max, double steepness);
double Gaussian(double x, double x0, double max, double steepness);
float Lerp(float v0, float v1, float t);
Color Lerp(Color v0, Color v1, float t);

int Step(float edge, float x );
float Smoothstep(float edge0, float edge1, float x);
//Modulus function, returning only positive values
int Modulus(float a, float b);
float fModulus(float a, float b);

std::string FileToString(const char *filename);

#endif