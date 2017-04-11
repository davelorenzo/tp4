/*
 * PersonneAbsenteException.h
 *
 *  Created on: 2017-04-11
 *      Author: etudiant
 */

#ifndef PERSONNEABSENTEEXCEPTION_H_
#define PERSONNEABSENTEEXCEPTION_H_

#include "PersonneException.h"

class PersonneAbsenteException: public PersonneException {
public:
	PersonneAbsenteException();
	virtual ~PersonneAbsenteException();
};

#endif /* PERSONNEABSENTEEXCEPTION_H_ */
