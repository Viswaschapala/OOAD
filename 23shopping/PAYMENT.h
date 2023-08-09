
#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
#include vector



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



  /**
   */
  void viewCart ()
  {
  }


  /**
   */
  void makePayment ()
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

  int custd;
  str custName;
  str cartType;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of custd
   * @param new_var the new value of custd
   */
  void setCustd (int new_var)   {
      custd = new_var;
  }

  /**
   * Get the value of custd
   * @return the value of custd
   */
  int getCustd ()   {
    return custd;
  }

  /**
   * Set the value of custName
   * @param new_var the new value of custName
   */
  void setCustName (str new_var)   {
      custName = new_var;
  }

  /**
   * Get the value of custName
   * @return the value of custName
   */
  str getCustName ()   {
    return custName;
  }

  /**
   * Set the value of cartType
   * @param new_var the new value of cartType
   */
  void setCartType (str new_var)   {
      cartType = new_var;
  }

  /**
   * Get the value of cartType
   * @return the value of cartType
   */
  str getCartType ()   {
    return cartType;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
