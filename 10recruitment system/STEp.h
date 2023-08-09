
#ifndef STEP_H
#define STEP_H

#include <string>
#include vector



/**
  * class STEP
  * 
  */

class STEP
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  STEP ();

  /**
   * Empty Destructor
   */
  virtual ~STEP ();

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
  void step ()
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
  str stepName;
  date stepDate;
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
   * Set the value of stepName
   * @param new_var the new value of stepName
   */
  void setStepName (str new_var)   {
      stepName = new_var;
  }

  /**
   * Get the value of stepName
   * @return the value of stepName
   */
  str getStepName ()   {
    return stepName;
  }

  /**
   * Set the value of stepDate
   * @param new_var the new value of stepDate
   */
  void setStepDate (date new_var)   {
      stepDate = new_var;
  }

  /**
   * Get the value of stepDate
   * @return the value of stepDate
   */
  date getStepDate ()   {
    return stepDate;
  }
private:


  void initAttributes () ;

};

#endif // STEP_H
