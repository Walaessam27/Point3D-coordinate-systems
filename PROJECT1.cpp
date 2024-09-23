// PROJECT1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "PROJECT1.h"
#include <iostream>
#include <cstring>
#include <string.h>
#include <cmath>
using namespace std;

Point3D::Point3D()
{
	set_x() = y = z = 0.0;
	char* name = new char[];
	strcpy(get_name(), "");
}

double Point3D::get_x()
{
	return x;
}

double Point3D::get_y()
{
	return y;
}

double Point3D::get_z()
{
	return z;
}

char* Point3D::get_name()
{
	return get_name();
}

void Point3D::set_x(double xvalue)
{
	x = xvalue;
}

void Point3D::set_y(double yvalue)
{
	y = yvalue;
}

void Point3D::set_z(double zvalue)
{
	z = zvalue;
}

void Point3D::set_name(char* nname)
{
	strcpy(get_name(), nname);
}

double Point3D::dist_From(Point3D& a)
{
	double dz = pow(this->get_z() - a.get_z(), 2);
	double dy = pow(this->get_y() - a.get_y(), 2);
	double dx = pow(this->get_x() - a.get_x(), 2);

	double d = sqrt(dz + dy + dx);
	return d;

}

Point3D Point3D::operator+(Point3D& a)
{
	Point3D pluse;
	pluse.z = this->get_z() + a.get_z();
	pluse.y = this->get_y() + a.get_y();
	pluse.x = this->get_x() + a.get_x();
	cout << "size:" << endl;
	cin >> size;
	char* name = new char[size];
	name = strcat(this->get_name(), a.get_name());
	cout << name << endl;
	return pluse;
}

Point3D Point3D::operator+=(Point3D& a)
{

	this->z += a.get_z();
	this->y += a.get_y();
	this->x += a.get_x();
	return *this;


}

Point3D Point3D::operator=(Point3D& a)
{
	this->z = a.get_z();
	this->y = a.get_y();
	this->x = a.get_x();
	strcpy(this->get_name(), a.get_name());
	return *this;
}


bool Point3D::operator>(double)
{
	Point3D A(0.0, 0.0, 0.0);
	Point3D B;
	Point3D C;
	cin >> B;
	cin >> C;
	double a = C.dist_From(A);
	double b = B.dist_From(A);
	if (a > b)
	{
		cout << "Yes" << endl;
	};

}

bool Point3D::operator<(double)
{
	Point3D A(0.0, 0.0, 0.0);
	Point3D B;
	Point3D C;
	cin >> B;
	cin >> C;
	double a = C.dist_From(A);
	double b = B.dist_From(A);
	if (a < b)
	{
		cout << "Yes" << endl;
	};
}

bool Point3D::operator==(double)
{

	Point3D A(0.0, 0.0, 0.0);
	Point3D B;
	Point3D C;
	cin >> B;
	cin >> C;
	double a = C.dist_From(A);
	double b = B.dist_From(A);
	if (a == b)
	{
		cout << "Yes" << endl;
	};
}

Point3D::~Point3D()
{
	cout << "Done" << endl;
	delete[] name;
}

Point3D operator--(Point3D& a, int)
{
	Point3D tmp;
	tmp.z = a.get_z();
	tmp.y = a.get_y();
	tmp.x = a.get_x();

	a.x--;
	a.z--;
	a.y--;

	return tmp;
}

Point3D operator+(Point3D& a, int)
{
	return Point3D();
}

ostream& operator<<(ostream& out, Point3D& a)
{
	out << "(" << a.get_x() << "," << a.get_y() << "," << a.get_z() << ")" << a.get_name() << endl;
	return out;

}

istream& operator>>(istream& in, Point3D& a)
{
	in << a.get_x() >> a.get_y() >> a.get_z() >> a.get_name();
	return in;
}
int main()
{
    std::cout << "Hello World!\n";
}
