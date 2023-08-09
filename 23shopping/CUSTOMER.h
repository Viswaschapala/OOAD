
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
  void buyProduct ()
  {
  }


  /**
   */
  void viewProduct ()
  {
  }


  /**
   */
  void makePayment ()
  {
  }


  /**
   */
  void detailsFromCart ()
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

  int id;
  str name;
  str address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

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
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (str new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  str getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
