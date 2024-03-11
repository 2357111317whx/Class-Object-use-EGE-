/*
 * Rect.h
 *
 *  Created on: 2024年3月8日
 *      Author: lenovo
 */

#ifndef Rect_H_
#define Rect_H_
#include "Color.h"
#include "Point.h"

class Rect {
public:
	Rect();
	Rect(Point, Point, Color, bool isf = false, Color fColor= {0,255,0});
	virtual ~Rect();
	const Color& getBorderColor() const;
	void setBorderColor(const Color &borderColor);
	const Point& getEnd() const;
	void setEnd(const Point &end);
	const Color& getFillColor() const;
	void setFillColor(const Color &fillColor);
	const Point& getStart() const;
	void setStart(const Point &start);

	void draw();
	bool isIsfill() const;
	void setIsfill(bool isfill);

private:
	Point start;
	Point end;
	Color borderColor;
	bool isfill;
	Color fillColor;
};

#endif /* Rect_H_ */
