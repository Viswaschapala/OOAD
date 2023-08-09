
#ifndef BANK_H
#define BANK_H

#include <string>
#include vector



/**
  * class BANK
  * 
  */

class BANK
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  BANK ();

  /**
   * Empty Destructor
   */
  virtual ~BANK ();

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
  void validateUser ()
  {
  }


  /**
   */
  void validateMerchant ()
  {
  }


  /**
   */
  void ApproveTrans ()
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

  char name;
  int branchCode;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (char new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  char getName ()   {
    return name;
  }

  /**
   * Set the value of branchCode
   * @param new_var the new value of branchCode
   */
  void setBranchCode (int new_var)   {
      branchCode = new_var;
  }

  /**
   * Get the value of branchCode
   * @return the value of branchCode
   */
  int getBranchCode ()   {
    return branchCode;
  }
private:


  void initAttributes () ;

};

#endif // BANK_H
