class Wektor2D
{
public:
	double x = 0;
	double y = 0;

	Wektor2D() {};
	Wektor2D(const double& X, const double& Y) : x(X), y(Y) {};

	void setX(const double& Vx) { x = Vx; };
	void setY(const double& Vy) { y = Vy; };
	double getX() { return x; };
	double getY() { return y; };

	friend Wektor2D operator+ (const Wektor2D& V1, const Wektor2D& V2) { return Wektor2D(V1.x + V2.x, V1.y + V2.y); };
	friend double operator* (const Wektor2D& V1, const Wektor2D& V2) { return V1.x * V2.x + V1.y * V2.y; };
};
