#include "Vector3d_public.h"

ostream& operator <<(ostream& out, const Vector3d_public& c)
{
	return out << string(c);
}

istream& operator >>(istream& in, Vector3d_public& g)
{
	int a, b, c;
	cout << endl;
	cout << "vector = ? " << endl << endl;
	cout << "x =  "; in >> a;
	cout << "y =  "; in >> b;
	cout << "z =  "; in >> c;
	g.setX(a); g.setY(b); g.setZ(c);

	return in;
}

Vector3d_public operator +(const Vector3d_public& o, const Vector3d_public& u)
{
	Vector3d_public s;
	int a = o.getX() + u.getX();
	int b = o.getY() + u.getY();
	int c = o.getZ() + u.getZ();

	s.setX(a);
	s.setY(b);
	s.setZ(c);

	return s;
}

int operator * (const Vector3d_public o, const Vector3d_public u)
{

	int a = o.getX() * u.getX();
	int b = o.getY() * u.getY();
	int c = o.getZ() * u.getZ();

	int s = a + b + c;

	return s;
}

Vector3d_public::operator string() const
{
	ostringstream ss;
	ss << "(" << getX() << "," << getY() << "," << getZ() << ")";
	return ss.str();
}