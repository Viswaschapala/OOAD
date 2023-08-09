
#ifndef POSITION_H
#define POSITION_H

#include <string>
#include vector



/**
  * class POSITION
  * 
  */

class POSITION
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  POSITION ();

  /**
   * Empty Destructor
   */
  virtual ~POSITION ();

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
  void position ()
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
  str posName;
  str posdept;
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
   * Set the value of posName
   * @param new_var the new value of posName
   */
  void setPosName (str new_var)   {
      posName = new_var;
  }

  /**
   * Get the value of posName
   * @return the value of posName
   */
  str getPosName ()   {
    return posName;
  }

  /**
   * Set the value of posdept
   * @param new_var the new value of posdept
   */
  void setPosdept (str new_var)   {
      posdept = new_var;
  }

  /**
   * Get the value of posdept
   * @return the value of posdept
   */
  str getPosdept ()   {
    return posdept;
  }
private:


  void initAttributes () ;

};

#endif // POSITION_H
