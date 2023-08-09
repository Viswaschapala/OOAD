
#ifndef FINANCE_H
#define FINANCE_H

#include <string>

/**
  * class FINANCE
  * 
  */

class FINANCE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  FINANCE ();

  /**
   * Empty Destructor
   */
  virtual ~FINANCE ();

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
  void fund ()
  {
  }


  /**
   */
  void due ()
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

  int balanceRupee;
  str owner;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of balanceRupee
   * @param new_var the new value of balanceRupee
   */
  void setBalanceRupee (int new_var)   {
      balanceRupee = new_var;
  }

  /**
   * Get the value of balanceRupee
   * @return the value of balanceRupee
   */
  int getBalanceRupee ()   {
    return balanceRupee;
  }

  /**
   * Set the value of owner
   * @param new_var the new value of owner
   */
  void setOwner (str new_var)   {
      owner = new_var;
  }

  /**
   * Get the value of owner
   * @return the value of owner
   */
  str getOwner ()   {
    return owner;
  }
private:


  void initAttributes () ;

};

#endif // FINANCE_H
