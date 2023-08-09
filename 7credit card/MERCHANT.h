
#ifndef MERCHANT_H
#define MERCHANT_H

#include <string>

/**
  * class MERCHANT
  * 
  */

class MERCHANT
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  MERCHANT ();

  /**
   * Empty Destructor
   */
  virtual ~MERCHANT ();

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
  void accept_transaction ()
  {
  }


  /**
   */
  void viewBalance ()
  {
  }


  /**
   */
  void validateUser ()
  {
  }


  /**
   */
  void getAuthentication ()
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

  int merchant_id;
  int password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of merchant_id
   * @param new_var the new value of merchant_id
   */
  void setMerchant_id (int new_var)   {
      merchant_id = new_var;
  }

  /**
   * Get the value of merchant_id
   * @return the value of merchant_id
   */
  int getMerchant_id ()   {
    return merchant_id;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (int new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  int getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // MERCHANT_H
