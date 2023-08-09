
#ifndef DRUG_H
#define DRUG_H

#include <string>
#include vector



/**
  * class DRUG
  * 
  */

class DRUG
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DRUG ();

  /**
   * Empty Destructor
   */
  virtual ~DRUG ();

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
  void checkAvaliability ()
  {
  }


  /**
   */
  void getPayment ()
  {
  }


  /**
   */
  void updateDocument ()
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

  str name;
  int age;
  int quantity;
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
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (int new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  int getAge ()   {
    return age;
  }

  /**
   * Set the value of quantity
   * @param new_var the new value of quantity
   */
  void setQuantity (int new_var)   {
      quantity = new_var;
  }

  /**
   * Get the value of quantity
   * @return the value of quantity
   */
  int getQuantity ()   {
    return quantity;
  }
private:


  void initAttributes () ;

};

#endif // DRUG_H
