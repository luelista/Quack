#pragma once

/*
 * GroupChat.h
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

#include "Conversation.h"

#include <string>
#include <vector>
#include "Account.h"

namespace messenger {

class GroupChat: public Conversation {
public:
  GroupChat();
  virtual ~GroupChat();

  virtual std::vector<Account*> getMembers()=0;
  virtual std::string getRole(Account* account)=0;
  virtual bool setRole(Account* account, std::string role)=0;
};

} /* namespace messenger */
