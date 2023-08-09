
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include vector



/**
  * class CUSTOMER
  * 
  */

class CUSTOMER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CUSTOMER ();

  /**
   * Empty Destructor
   */
  virtual ~CUSTOMER ();

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
  void view ()
  {
  }


  /**
   */
  void performTrans ()
  {
  }


  /**
   */
  void payInstallment ()
  {
  }


  /**
   */
  void enterPIN ()
  {
  }


  /**
   */
  void cancelTrans ()
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

  int cardNo;
  int PIN;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of cardNo
   * @param new_var the new value of cardNo
   */
  void setCardNo (int new_var)   {
      cardNo = new_var;
  }

  /**
   * Get the value of cardNo
   * @return the value of cardNo
   */
  int getCardNo ()   {
    return cardNo;
  }

  /**
   * Set the value of PIN
   * @param new_var the new value of PIN
   */
  void setPIN (int new_var)   {
      PIN = new_var;
  }

  /**
   * Get the value of PIN
   * @return the value of PIN
   */
  int getPIN ()   {
    return PIN;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
