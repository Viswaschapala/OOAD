
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



  /**
   */
  void login ()
  {
  }


  /**
   */
  void signup ()
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

  str name;
  str email;
  str password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (str new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  str getName ()   {
    return name;
  }

  /**
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (str new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  str getEmail ()   {
    return email;
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
private:


  void initAttributes () ;

};

#endif // LOGIN_H
