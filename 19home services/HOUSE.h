
#ifndef HOUSE_H
#define HOUSE_H

#include <string>
#include vector



/**
  * class HOUSE
  * 
  */

class HOUSE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  HOUSE ();

  /**
   * Empty Destructor
   */
  virtual ~HOUSE ();

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
  void getTitle ()
  {
  }


  /**
   */
  void getNumber ()
  {
  }


  /**
   */
  void getAmount ()
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

  str title;
  int amount;
  str location;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of title
   * @param new_var the new value of title
   */
  void setTitle (str new_var)   {
      title = new_var;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  str getTitle ()   {
    return title;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (int new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  int getAmount ()   {
    return amount;
  }

  /**
   * Set the value of location
   * @param new_var the new value of location
   */
  void setLocation (str new_var)   {
      location = new_var;
  }

  /**
   * Get the value of location
   * @return the value of location
   */
  str getLocation ()   {
    return location;
  }
private:


  void initAttributes () ;

};

#endif // HOUSE_H
