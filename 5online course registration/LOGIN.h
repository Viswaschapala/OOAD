
#ifndef LOGIN_H
#define LOGIN_H

#include <string>

/**
  * class LOGIN
  * 
  */

class LOGIN
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  LOGIN ();

  /**
   * Empty Destructor
   */
  virtual ~LOGIN ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  string username;
  string password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (string new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  string getUsername ()   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (string new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  string getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // LOGIN_H
