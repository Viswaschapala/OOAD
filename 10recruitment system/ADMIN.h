
#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include vector



/**
  * class ADMIN
  * 
  */

class ADMIN
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ADMIN ();

  /**
   * Empty Destructor
   */
  virtual ~ADMIN ();

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

  int id;
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
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

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

#endif // ADMIN_H
