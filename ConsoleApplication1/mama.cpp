#include "mama.h";
#include <iostream>
#include <cmath>
using namespace std;

triunghi::triunghi(double a, double b, double c, double d, double e, double f)
{
	V1x = a;
	V1y = b;
	V2x = c;
	V2y = d;
	V3x = e;
	V3y = f;
}

void triunghi::setV1(double x, double y)
{
	V1x = x;
	V1y = y;
}

void triunghi::setV2(double x, double y)
{
	V2x = x;
	V2y = y;
}

void triunghi::setV3(double x, double y)
{
	V3x = x;
	V3y = y;
}

double triunghi::getV1x()
{
	return V1x;
}
double triunghi::getV1y()
{
	return V1y;
}
double triunghi::getV2x()
{
	return V2x;
}
double triunghi::getV2y()
{
	return V2y;
}
double triunghi::getV3x()
{
	return V3x;
}
double triunghi::getV3y()
{
	return V3y;
}

double triunghi::arie()
{
	double a,b,c;
	double sp;

	a = sqrt((V2x - V1x) * (V2x - V1x) + (V2y - V1y) * (V2y - V1y));
	b = sqrt((V3x - V2x) * (V3x - V2x) + (V3y - V2y) * (V3y - V2y));
	c = sqrt((V3x - V1x) * (V3x - V1x) + (V3y - V1y) * (V3y - V1y));
	sp = (a + b + c) / 2;

	return sqrt(sp * (sp - a) * (sp - b) * (sp - c));
}

double triunghi::isDreptunghic()
{
	double a, b, c;

	a = sqrt((V2x - V1x) * (V2x - V1x) + (V2y - V1y) * (V2y - V1y));
	b = sqrt((V3x - V2x) * (V3x - V2x) + (V3y - V2y) * (V3y - V2y));
	c = sqrt((V3x - V1x) * (V3x - V1x) + (V3y - V1y) * (V3y - V1y));

	if (a * a == b * b + c * c)
		return 1;
	else if (b * b == a * a + c * c)
		return 1;
	else if (c * c == a * a + b * b)
		return 1;
	return 0;
}