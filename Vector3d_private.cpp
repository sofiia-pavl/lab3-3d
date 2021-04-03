#include "Vector3d_private.h"

ostream& operator <<(ostream& out, const Vector3d_private& c)
{
	return out << string(c);
}

istream& operator >>(istream& in, Vector3d_private& g)
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

Vector3d_private operator +(const Vector3d_private& o, const Vector3d_private& u)
{
	Vector3d_private s;
	int a = o.getX() + u.getX();
	int b = o.getY() + u.getY();
	int c = o.getZ() + u.getZ();

	s.setX(a);
	s.setY(b);
	s.setZ(c);

	return s;
}

int operator * (const Vector3d_private o, const Vector3d_private u)
{

	int a = o.getX() * u.getX();
	int b = o.getY() * u.getY();
	int c = o.getZ() * u.getZ();

	int s = a + b + c;

	return s;
}

Vector3d_private::operator string() const
{
	ostringstream ss;
	ss << "(" << getX() << "," << getY() << "," << getZ() << ")";
	return ss.str();
}