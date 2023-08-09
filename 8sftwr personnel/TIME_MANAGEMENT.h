
#ifndef TIME_MANAGEMENT_H
#define TIME_MANAGEMENT_H

#include <string>

/**
  * class TIME_MANAGEMENT
  * 
  */

class TIME_MANAGEMENT
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TIME_MANAGEMENT ();

  /**
   * Empty Destructor
   */
  virtual ~TIME_MANAGEMENT ();

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
  void time_management ()
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

  int time_period;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of time_period
   * @param new_var the new value of time_period
   */
  void setTime_period (int new_var)   {
      time_period = new_var;
  }

  /**
   * Get the value of time_period
   * @return the value of time_period
   */
  int getTime_period ()   {
    return time_period;
  }
private:


  void initAttributes () ;

};

#endif // TIME_MANAGEMENT_H
