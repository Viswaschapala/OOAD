
#ifndef LOGIN_H
#define LOGIN_H

#include <string>
#include vector



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
  void getUsername ()
  {
  }


  /**
   */
  void getPassword ()
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

  str username;
  str password;
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
  void setUsername (str new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  str getUsername ()   {
    return username;
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
