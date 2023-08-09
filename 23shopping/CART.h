
#ifndef CART_H
#define CART_H

#include <string>
#include vector



/**
  * class CART
  * 
  */

class CART
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CART ();

  /**
   * Empty Destructor
   */
  virtual ~CART ();

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
  void makePament ()
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
  str product;
  int price;
  int total;
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
   * Set the value of product
   * @param new_var the new value of product
   */
  void setProduct (str new_var)   {
      product = new_var;
  }

  /**
   * Get the value of product
   * @return the value of product
   */
  str getProduct ()   {
    return product;
  }

  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (int new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  int getPrice ()   {
    return price;
  }

  /**
   * Set the value of total
   * @param new_var the new value of total
   */
  void setTotal (int new_var)   {
      total = new_var;
  }

  /**
   * Get the value of total
   * @return the value of total
   */
  int getTotal ()   {
    return total;
  }
private:


  void initAttributes () ;

};

#endif // CART_H
