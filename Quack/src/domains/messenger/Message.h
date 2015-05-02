#pragma once

/*
 * Message.h
 *
 *  Created on: May 2, 2015
 *      Author: Moritz Willig
 */

namespace messenger {

#include <string>
#include "Account.h"
#include "Conversation.h"

class Message {
private:
  /**
   * message id by protocol
   */
  std::string id;
  /**
   * sender of the message
   */
  Account* sender;
  /**
   * conversation in which the message was sent
   */
  Conversation* conversation;
  /**
   * timestamp when the message was sent
   */
  time_t sent;
  /**
   * signals if the message was recived
   */
  bool recived;
  /**
   * signals if the message was edited
   */
  Account* modified;
  /**
   * signals the type of the message (see documentation)
   */
  int messageType;
public:
  Message();
  virtual ~Message();

  virtual unsigned int getTokenCount();
  virtual MessageToken* getToken(unsigned int token);
};

} /* namespace messenger */
