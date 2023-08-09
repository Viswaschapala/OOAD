
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

/**
  * class EMPLOYEE
  * 
  */

class EMPLOYEE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  EMPLOYEE ();

  /**
   * Empty Destructor
   */
  virtual ~EMPLOYEE ();

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
  void training ()
  {
  }


  /**
   */
  void salary ()
  {
  }


  /**
   */
  void performance ()
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

  str commitment;
  int bank_account;
  str workType;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of commitment
   * @param new_var the new value of commitment
   */
  void setCommitment (str new_var)   {
      commitment = new_var;
  }

  /**
   * Get the value of commitment
   * @return the value of commitment
   */
  str getCommitment ()   {
    return commitment;
  }

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

  /**
   * Set the value of workType
   * @param new_var the new value of workType
   */
  void setWorkType (str new_var)   {
      workType = new_var;
  }

  /**
   * Get the value of workType
   * @return the value of workType
   */
  str getWorkType ()   {
    return workType;
  }
private:


  void initAttributes () ;

};

#endif // EMPLOYEE_H
