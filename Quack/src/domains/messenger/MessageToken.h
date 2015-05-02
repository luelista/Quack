#pragma once

/*
 * MessageToken.h
 *
 *  Created on: May 3, 2015
 *      Author: Moritz Willig
 */

namespace messenger {

class MessageToken {
public:
  MessageToken();
  virtual ~MessageToken();

  /**
   * type of the token
   */
  virtual unsigned int getTokenType()=0;
  virtual char* getTokenParams(std::string& str, std::string& value);
  virtual void getTokenParami(unsigned int idx, int& value);
};

} /* namespace messenger */
