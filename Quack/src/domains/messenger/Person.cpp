/*
 * Person.cpp
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

#include "Person.h"

namespace messenger {

Person::Person() {
  // TODO Auto-generated constructor stub

}

std::string Person::getName() const {
  return name;
}

void Person::setName(std::string name) {
  this->name = name;
}

Person::~Person() {
  // TODO Auto-generated destructor stub
}

} /* namespace messenger */
