class Point {
private: 
	double xCoord, yCoord;
public:
	Point();
	Point(double x, double y);
	void setX(double x);
	void setY(double y);
	double getX() const;
	double getY() const;
	double operator -(const Point& p2) const;
	bool operator ==(const Point& p2) const;
};