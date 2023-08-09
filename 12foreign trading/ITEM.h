
#ifndef ITEM_H
#define ITEM_H

#include <string>

/**
  * class ITEM
  * 
  */

class ITEM
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ITEM ();

  /**
   * Empty Destructor
   */
  virtual ~ITEM ();

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
  void getItem ()
  {
  }


  /**
   */
  void getDate ()
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
  int id;
  int rate;
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
   * Set the value of rate
   * @param new_var the new value of rate
   */
  void setRate (int new_var)   {
      rate = new_var;
  }

  /**
   * Get the value of rate
   * @return the value of rate
   */
  int getRate ()   {
    return rate;
  }
private:


  void initAttributes () ;

};

#endif // ITEM_H
