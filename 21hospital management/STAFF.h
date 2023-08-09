
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
  void assistPatient ()
  {
  }


  /**
   */
  void getPayment ()
  {
  }


  /**
   */
  void assistDoctor ()
  {
  }


  /**
   */
  void getReports ()
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
  str dept;
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
   * Set the value of dept
   * @param new_var the new value of dept
   */
  void setDept (str new_var)   {
      dept = new_var;
  }

  /**
   * Get the value of dept
   * @return the value of dept
   */
  str getDept ()   {
    return dept;
  }
private:


  void initAttributes () ;

};

#endif // STAFF_H
