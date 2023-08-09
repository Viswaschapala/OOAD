
#ifndef DESIGN_H
#define DESIGN_H

#include <string>
#include vector



/**
  * class DESIGN
  * 
  */

class DESIGN
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  DESIGN ();

  /**
   * Empty Destructor
   */
  virtual ~DESIGN ();

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
  void fontcolor ()
  {
  }


  /**
   */
  void size ()
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

  str color;
  int size;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of color
   * @param new_var the new value of color
   */
  void setColor (str new_var)   {
      color = new_var;
  }

  /**
   * Get the value of color
   * @return the value of color
   */
  str getColor ()   {
    return color;
  }

  /**
   * Set the value of size
   * @param new_var the new value of size
   */
  void setSize (int new_var)   {
      size = new_var;
  }

  /**
   * Get the value of size
   * @return the value of size
   */
  int getSize ()   {
    return size;
  }
private:


  void initAttributes () ;

};

#endif // DESIGN_H
