/*
 * Circle.h
 *
 *  Created on: 2024年3月9日
 *      Author: lenovo
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "Color.h"
#include "Point.h"

class Circle {
public:
	Circle();
	Circle(Point, int, Color,bool isfill = false,Color fColor = {0,255,0});
	virtual ~Circle();
	const Point& getCenter() const;
	void setCenter(const Point &center);

	int getRadius() const;
	void setRadius(int radius);

	void draw();
	const Color& getBorderColor() const;
	void setBorderColor(const Color &borderColor);
	const Color& getFillColor() const;
	void setFillColor(const Color &fillColor);
	bool isIsfill() const;
	void setIsfill(bool isfill);

private:
	Point center;
	int radius;
	Color borderColor;
	bool isfill;
	Color fillColor;

};

#endif /* CIRCLE_H_ */
