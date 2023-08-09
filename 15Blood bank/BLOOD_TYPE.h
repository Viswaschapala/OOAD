
#ifndef BLOOD_TYPE_H
#define BLOOD_TYPE_H

#include <string>
#include vector



/**
  * class BLOOD_TYPE
  * 
  */

class BLOOD_TYPE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  BLOOD_TYPE ();

  /**
   * Empty Destructor
   */
  virtual ~BLOOD_TYPE ();

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
  void bloodtype ()
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

#endif // BLOOD_TYPE_H
