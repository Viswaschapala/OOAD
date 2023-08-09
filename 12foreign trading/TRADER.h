
#ifndef TRADER_H
#define TRADER_H

#include <string>

/**
  * class TRADER
  * 
  */

class TRADER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TRADER ();

  /**
   * Empty Destructor
   */
  virtual ~TRADER ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void login ()
  {
  }


  /**
   */
  void placeOrder ()
  {
  }


  /**
   */
  void pay ()
  {
  }


  /**
   */
  void logout ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  str userName;
  str password;
  int accNo;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of userName
   * @param new_var the new value of userName
   */
  void setUserName (str new_var)   {
      userName = new_var;
  }

  /**
   * Get the value of userName
   * @return the value of userName
   */
  str getUserName ()   {
    return userName;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (str new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  str getPassword ()   {
    return password;
  }

  /**
   * Set the value of accNo
   * @param new_var the new value of accNo
   */
  void setAccNo (int new_var)   {
      accNo = new_var;
  }

  /**
   * Get the value of accNo
   * @return the value of accNo
   */
  int getAccNo ()   {
    return accNo;
  }
private:


  void initAttributes () ;

};

#endif // TRADER_H
