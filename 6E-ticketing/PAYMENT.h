
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

/**
  * class PAYMENT
  * 
  */

class PAYMENT
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  PAYMENT ();

  /**
   * Empty Destructor
   */
  virtual ~PAYMENT ();

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

  int amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (int new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  int getAmount ()   {
    return amount;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
