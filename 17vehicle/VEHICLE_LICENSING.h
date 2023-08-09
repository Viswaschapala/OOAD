
#ifndef VEHICLE_LICENSING_H
#define VEHICLE_LICENSING_H

#include <string>

/**
  * class VEHICLE_LICENSING
  * 
  */

class VEHICLE_LICENSING
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  VEHICLE_LICENSING ();

  /**
   * Empty Destructor
   */
  virtual ~VEHICLE_LICENSING ();

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
  void license ()
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
  int age;
  str address;
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
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (int new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  int getAge ()   {
    return age;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (str new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  str getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // VEHICLE_LICENSING_H
