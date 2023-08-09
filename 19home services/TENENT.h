
#ifndef TENENT_H
#define TENENT_H

#include <string>
#include vector



/**
  * class TENENT
  * 
  */

class TENENT
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TENENT ();

  /**
   * Empty Destructor
   */
  virtual ~TENENT ();

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
  void getName ()
  {
  }


  /**
   */
  void getId ()
  {
  }


  /**
   */
  void getNumber ()
  {
  }


  /**
   */
  void getEmail ()
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
  int tenantId;
  int phnNo;
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
   * Set the value of tenantId
   * @param new_var the new value of tenantId
   */
  void setTenantId (int new_var)   {
      tenantId = new_var;
  }

  /**
   * Get the value of tenantId
   * @return the value of tenantId
   */
  int getTenantId ()   {
    return tenantId;
  }

  /**
   * Set the value of phnNo
   * @param new_var the new value of phnNo
   */
  void setPhnNo (int new_var)   {
      phnNo = new_var;
  }

  /**
   * Get the value of phnNo
   * @return the value of phnNo
   */
  int getPhnNo ()   {
    return phnNo;
  }
private:


  void initAttributes () ;

};

#endif // TENENT_H
