/*
 * triangle.h
 *
 *  Created on: 2024年3月9日
 *      Author: lenovo
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Point.h"
#include "Color.h"
class triangle {
public:
	triangle();
	triangle(Point p1,Point p2,Point p3,Color borderColor,bool isfill = false,Color fillColor = {0,255,0});
	virtual ~triangle();
	const Point& getP1() const;
	void setP1(const Point&);
	const Point& getP2() const;
	void setP2(const Point&);
	const Point& getP3() const;
	void setP3(const Point&);
	void draw();
	const Color& getBorderColor() const;
	void setBorderColor(const Color &borderColor);
	const Color& getFillColor() const;
	void setFillColor(const Color &fillColor);
	bool isIsfill() const;
	void setIsfill(bool isfill);

private:
	Point p1;
	Point p2;
	Point p3;
	Color borderColor;
	bool isfill;
	Color fillColor;

};

#endif /* TRIANGLE_H_ */
