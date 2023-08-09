
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>

/**
  * class REGISTRATION
  * 
  */

class REGISTRATION
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  REGISTRATION ();

  /**
   * Empty Destructor
   */
  virtual ~REGISTRATION ();

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
  void getContestantName ()
  {
  }


  /**
   */
  void getContestantPhoto ()
  {
  }


  /**
   */
  void setParty ()
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
private:


  void initAttributes () ;

};

#endif // REGISTRATION_H
