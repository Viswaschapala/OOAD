
#ifndef STAFF_H
#define STAFF_H

#include <string>
#include vector



/**
  * class STAFF
  * 
  */

class STAFF
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  STAFF ();

  /**
   * Empty Destructor
   */
  virtual ~STAFF ();

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
  void new_operationupdateInfo ()
  {
  }


  /**
   */
  void ViewBooks ()
  {
  }


  /**
   */
  void SearchBook ()
  {
  }


  /**
   */
  void Membership ()
  {
  }


  /**
   */
  void addBooks ()
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
  str password;
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
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (str new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  str getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // STAFF_H
