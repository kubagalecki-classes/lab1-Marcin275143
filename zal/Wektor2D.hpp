class Wektor2D
{
public:
	double x = 0;
	double y = 0;
	//	double Vx = 0, Vy = 0;

	Wektor2D() {};
	//	Wektor2D() { x = 0, y = 0; };
	Wektor2D(const double& X, const double& Y) : x(X), y(Y) {};

	void setX(const double& Vx) { x = Vx; };
	void setY(const double& Vy) { y = Vy; };
	double getX() { cout << x << endl; return x; };
	double getY() { cout << y << endl; return y; };

	friend Wektor2D operator+ (const Wektor2D& V1, const Wektor2D& V2) { double Vx = V1.x + V2.x; double Vy = V1.y + V2.y; return { Wektor2D(Vx, Vy) }; };
	friend double operator* (const Wektor2D& V1, const Wektor2D& V2) { double V = V1.x * V2.x + V1.y * V2.y; return V; };
	friend ostream& operator<< (ostream& wskaznik, const Wektor2D& V) { return wskaznik << "(" << V.x << ", " << V.y << ")" << endl; };
};
