
#ifndef QUANTITY_H
#define QUANTITY_H

#include <string>

/**
  * class QUANTITY
  * 
  */

class QUANTITY
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  QUANTITY ();

  /**
   * Empty Destructor
   */
  virtual ~QUANTITY ();

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
  void show_qty ()
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
  int qty;
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
   * Set the value of qty
   * @param new_var the new value of qty
   */
  void setQty (int new_var)   {
      qty = new_var;
  }

  /**
   * Get the value of qty
   * @return the value of qty
   */
  int getQty ()   {
    return qty;
  }
private:


  void initAttributes () ;

};

#endif // QUANTITY_H
