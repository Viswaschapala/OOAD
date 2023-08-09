
#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <string>

/**
  * class ADMINISTRATION
  * 
  */

class ADMINISTRATION
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ADMINISTRATION ();

  /**
   * Empty Destructor
   */
  virtual ~ADMINISTRATION ();

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
  void bill_1 ()
  {
  }


  /**
   */
  void bill_2 ()
  {
  }


  /**
   */
  void trackOrder ()
  {
  }


  /**
   */
  void payBill_1 ()
  {
  }


  /**
   */
  void payBill_2 ()
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
private:


  void initAttributes () ;

};

#endif // ADMINISTRATION_H
