#pragma once

/*
 * DirectChat.h
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

#include "Conversation.h"

#include "Account.h"

namespace messenger {

class DirectChat: public Conversation {
private:
  Account* user;
public:
  DirectChat();
  virtual ~DirectChat();

  const Account*& getUser() const {
    return user;
  }
};

} /* namespace messenger */
