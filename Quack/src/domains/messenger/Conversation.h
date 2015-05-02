#pragma once

/*
 * Conversation.h
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

#include <string>
#include <vector>
#include "Account.h"
#include "Message.h"

namespace messenger {

class Conversation {
private:
  /**
   * conversation name to display
   */
  std::string name;
  /**
   * account in the conversation
   */
  Account* account;
  /**
   * topic of the conversation
   */
  std::string topic;
  /**
   * description of the conversation
   */
  std::string description;
  /**
   * protocol internal conversation id
   */
  std::string id;
public:
  Conversation();
  virtual ~Conversation();

  virtual void addMessage(Message* msg);
};

} /* namespace messenger */
