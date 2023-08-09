
#ifndef BLOOD_REQUEST_H
#define BLOOD_REQUEST_H

#include <string>
#include vector



/**
  * class BLOOD_REQUEST
  * 
  */

class BLOOD_REQUEST
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  BLOOD_REQUEST ();

  /**
   * Empty Destructor
   */
  virtual ~BLOOD_REQUEST ();

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
  void add ()
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
  str details;
  int date;
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
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (str new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  str getDetails ()   {
    return details;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (int new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  int getDate ()   {
    return date;
  }
private:


  void initAttributes () ;

};

#endif // BLOOD_REQUEST_H
