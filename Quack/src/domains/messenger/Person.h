#pragma once

/*
 * Person.h
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

namespace messenger {

#include <string>
#include <vector>
#include <map>
#include "Account.h"

class Person {
private:
  /**
   * name of the person
   */
  std::string name;
  /**
   * meta data related to the person
   */
  std::map<std::string,std::string> meta;
public:
  Person();
  virtual ~Person();
  std::string getName() const;
  void setName(std::string name);

  /**
   * accounts linked to the person
   */
  std::vector<Account*> accounts;
};

} /* namespace messenger */
