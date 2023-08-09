
#ifndef DONOR_H
#define DONOR_H

#include <string>
#include vector



/**
  * class DONOR
  * 
  */

class DONOR
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DONOR ();

  /**
   * Empty Destructor
   */
  virtual ~DONOR ();

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
  void addInfo ()
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
  str status;
  str bloodtype;
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
   * Set the value of status
   * @param new_var the new value of status
   */
  void setStatus (str new_var)   {
      status = new_var;
  }

  /**
   * Get the value of status
   * @return the value of status
   */
  str getStatus ()   {
    return status;
  }

  /**
   * Set the value of bloodtype
   * @param new_var the new value of bloodtype
   */
  void setBloodtype (str new_var)   {
      bloodtype = new_var;
  }

  /**
   * Get the value of bloodtype
   * @return the value of bloodtype
   */
  str getBloodtype ()   {
    return bloodtype;
  }
private:


  void initAttributes () ;

};

#endif // DONOR_H
