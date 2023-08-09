
#ifndef SALARY_DETAILS_H
#define SALARY_DETAILS_H

#include <string>

/**
  * class SALARY_DETAILS
  * 
  */

class SALARY_DETAILS
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  SALARY_DETAILS ();

  /**
   * Empty Destructor
   */
  virtual ~SALARY_DETAILS ();

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
  void salary ()
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

  int bank_account;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of bank_account
   * @param new_var the new value of bank_account
   */
  void setBank_account (int new_var)   {
      bank_account = new_var;
  }

  /**
   * Get the value of bank_account
   * @return the value of bank_account
   */
  int getBank_account ()   {
    return bank_account;
  }
private:


  void initAttributes () ;

};

#endif // SALARY_DETAILS_H
