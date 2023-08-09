
#ifndef DATABASE_H
#define DATABASE_H

#include <string>

/**
  * class DATABASE
  * 
  */

class DATABASE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DATABASE ();

  /**
   * Empty Destructor
   */
  virtual ~DATABASE ();

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
  void accNO ()
  {
  }


  /**
   */
  void accPay ()
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

  int accNO;
  int balance;
  int date;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of accNO
   * @param new_var the new value of accNO
   */
  void setAccNO (int new_var)   {
      accNO = new_var;
  }

  /**
   * Get the value of accNO
   * @return the value of accNO
   */
  int getAccNO ()   {
    return accNO;
  }

  /**
   * Set the value of balance
   * @param new_var the new value of balance
   */
  void setBalance (int new_var)   {
      balance = new_var;
  }

  /**
   * Get the value of balance
   * @return the value of balance
   */
  int getBalance ()   {
    return balance;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (int new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  int getDate ()   {
    return date;
  }
private:


  void initAttributes () ;

};

#endif // DATABASE_H
