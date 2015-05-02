/*
 * Account.cpp
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

#include "Account.h"

namespace messenger {

Account::Account() {
  // TODO Auto-generated constructor stub

}

const std::string& Account::getDescription() const {
  return description;
}

void Account::setDescription(const std::string& description) {
  this->description = description;
}

const std::string& Account::getId() const {
  return id;
}

const std::string& Account::getLogin() const {
  return login;
}

const std::string& Account::getName() const {
  return name;
}

unsigned int Account::getPort() const {
  return port;
}

void Account::setPort(unsigned int port) {
  this->port = port;
}

const Protocoll*& Account::getProtocol() const {
  return protocol;
}

const std::string& Account::getServer() const {
  return server;
}

void Account::setServer(const std::string& server) {
  this->server = server;
}

Account::~Account() {
  // TODO Auto-generated destructor stub
}

} /* namespace messenger */
