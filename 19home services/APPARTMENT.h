
#ifndef APPARTMENT_H
#define APPARTMENT_H

#include <string>
#include vector



/**
  * class APPARTMENT
  * 
  */

class APPARTMENT
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  APPARTMENT ();

  /**
   * Empty Destructor
   */
  virtual ~APPARTMENT ();

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
  void getInfo ()
  {
  }


  /**
   */
  void getTitle ()
  {
  }


  /**
   */
  void getLocation ()
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
  str owner;
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
   * Set the value of owner
   * @param new_var the new value of owner
   */
  void setOwner (str new_var)   {
      owner = new_var;
  }

  /**
   * Get the value of owner
   * @return the value of owner
   */
  str getOwner ()   {
    return owner;
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

#endif // APPARTMENT_H
