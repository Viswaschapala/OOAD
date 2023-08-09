
#ifndef PRODUCTS_H
#define PRODUCTS_H

#include <string>
#include vector



/**
  * class PRODUCTS
  * 
  */

class PRODUCTS
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  PRODUCTS ();

  /**
   * Empty Destructor
   */
  virtual ~PRODUCTS ();

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
  void product ()
  {
  }


  /**
   */
  void select ()
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
  str group;
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
   * Set the value of group
   * @param new_var the new value of group
   */
  void setGroup (str new_var)   {
      group = new_var;
  }

  /**
   * Get the value of group
   * @return the value of group
   */
  str getGroup ()   {
    return group;
  }
private:


  void initAttributes () ;

};

#endif // PRODUCTS_H
