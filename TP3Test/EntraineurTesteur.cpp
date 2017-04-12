/*
 * EntraineurTest.cpp
 *
 *  Created on: 2017-04-06
 *      Author: etudiant
 */

#include "Entraineur.h"
#include <gtest/gtest.h>

TEST(Entraineur, ConstructeurValide){
	Entraineur unEntraineur("atsop","Irene",util::Date(8,1,1995),"438 878-0289","ATSI 9551 0810",'F');
	Entraineur moi("lorenzo","dave",util::Date(8,1,1995),"438 887-3719","LORD 9311 0307",'M');
}


