/*
 * Box.h
 *
 *  Created on: 15 ago. 2022
 *      Author: Lorenzo
 */

#ifndef BOX_H_
#define BOX_H_

class Box
{
private:
  double length {1.0};
  double width {1.0};
  double height {1.0};

public:
  Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv} {}
  Box() = default;

  double volume() const { return length*width*height; }
};


#endif /* BOX_H_ */
