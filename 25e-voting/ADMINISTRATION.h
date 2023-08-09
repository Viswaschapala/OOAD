
#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <string>
#include vector



/**
  * class ADMINISTRATION
  * 
  */

class ADMINISTRATION
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ADMINISTRATION ();

  /**
   * Empty Destructor
   */
  virtual ~ADMINISTRATION ();

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
  void setParty ()
  {
  }


  /**
   */
  void collateVote ()
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

#endif // ADMINISTRATION_H
