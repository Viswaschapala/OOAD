
#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

#include <string>
#include vector



/**
  * class BLOOD_BANK
  * 
  */

class BLOOD_BANK
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  BLOOD_BANK ();

  /**
   * Empty Destructor
   */
  virtual ~BLOOD_BANK ();

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
  void processRequest ()
  {
  }


  /**
   */
  void validateTransaction ()
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
  str name;
  str details;
  str address;
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
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (str new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  str getDetails ()   {
    return details;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (str new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  str getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // BLOOD_BANK_H
