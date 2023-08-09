
#ifndef OWNER_H
#define OWNER_H

#include <string>

/**
  * class OWNER
  * 
  */

class OWNER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  OWNER ();

  /**
   * Empty Destructor
   */
  virtual ~OWNER ();

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
  void getDetails ()
  {
  }


  /**
   */
  void getName ()
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

  str firstName;
  str lastName;
  int phnNO;
  str email;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of firstName
   * @param new_var the new value of firstName
   */
  void setFirstName (str new_var)   {
      firstName = new_var;
  }

  /**
   * Get the value of firstName
   * @return the value of firstName
   */
  str getFirstName ()   {
    return firstName;
  }

  /**
   * Set the value of lastName
   * @param new_var the new value of lastName
   */
  void setLastName (str new_var)   {
      lastName = new_var;
  }

  /**
   * Get the value of lastName
   * @return the value of lastName
   */
  str getLastName ()   {
    return lastName;
  }

  /**
   * Set the value of phnNO
   * @param new_var the new value of phnNO
   */
  void setPhnNO (int new_var)   {
      phnNO = new_var;
  }

  /**
   * Get the value of phnNO
   * @return the value of phnNO
   */
  int getPhnNO ()   {
    return phnNO;
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
private:


  void initAttributes () ;

};

#endif // OWNER_H
