#pragma once

/*
 * Account.h
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

#include <string>
#include <vector>

namespace messenger {

class Account {
private:
  /**
   * id of the account in the protocol
   */
  std::string id;
  /**
   * login information
   */
  std::string login;
  /**
   * account name shown to the user
   */
  std::string name;
  /**
   * user chosen account message
   */
  std::string description;
  /**
   * logo of the account
   */
  std::string logo;
  /**
   * protocol of the account
   */
  Protocol* protocol;
  /**
   * server to login
   */
  std::string server;
  /**
   * server port to login
   */
  unsigned int port;
public:
  Account();
  virtual ~Account();
  const std::string& getDescription() const;
  void setDescription(const std::string& description);
  const std::string& getId() const;
  const std::string& getLogin() const;
  const std::string& getName() const;
  unsigned int getPort() const;
  void setPort(unsigned int port);
  const Protocol*& getProtocol() const;
  const std::string& getServer() const;
  void setServer(const std::string& server);

  virtual bool isFriend(Account*)=0;
  virtual std::string getStatus()=0;
  virtual std::string getStatusMessage()=0;

  std::vector<Account*> contacts;
};

} /* namespace messenger */
