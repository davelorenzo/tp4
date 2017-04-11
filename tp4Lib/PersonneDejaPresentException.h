/*
 * PersonneDejaPresentException.h
 *
 *  Created on: 2017-04-11
 *      Author: etudiant
 */

#ifndef PERSONNEDEJAPRESENTEXCEPTION_H_
#define PERSONNEDEJAPRESENTEXCEPTION_H_

#include "PersonneException.h"

class PersonneDejaPresentException: public PersonneException {
public:
	PersonneDejaPresentException();
	virtual ~PersonneDejaPresentException();
};

#endif /* PERSONNEDEJAPRESENTEXCEPTION_H_ */
