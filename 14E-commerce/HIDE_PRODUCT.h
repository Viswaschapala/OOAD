
#ifndef HIDE_PRODUCT_H
#define HIDE_PRODUCT_H

#include <string>

/**
  * class HIDE_PRODUCT
  * 
  */

class HIDE_PRODUCT
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  HIDE_PRODUCT ();

  /**
   * Empty Destructor
   */
  virtual ~HIDE_PRODUCT ();

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
  void hide_product ()
  {
  }


  /**
   */
  void unhide ()
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
  str category;
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
   * Set the value of category
   * @param new_var the new value of category
   */
  void setCategory (str new_var)   {
      category = new_var;
  }

  /**
   * Get the value of category
   * @return the value of category
   */
  str getCategory ()   {
    return category;
  }
private:


  void initAttributes () ;

};

#endif // HIDE_PRODUCT_H
