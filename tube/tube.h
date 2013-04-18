/*
 * tube.h
 *
 *  Created on: Apr 17, 2013
 *      Author: agu
 */

#ifndef TUBE_H_
#define TUBE_H_

#include "Arduino.h"

class Tube {
public:

	virtual ~Tube();
	virtual byte * getBuff();
	virtual byte getBuffLength() = 0;
	void setBuff(byte *p, byte length);
	virtual void runEffect() = 0;
	virtual void setChar(char c) = 0;
	virtual void setPoint(byte c) = 0;
protected:
	Tube();
	byte *_buff;
	virtual byte convertCharToIndex(char c) = 0;
};

#endif /* TUBE_H_ */
