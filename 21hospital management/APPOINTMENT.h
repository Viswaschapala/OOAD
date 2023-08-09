
#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
#include vector



/**
  * class APPOINTMENT
  * 
  */

class APPOINTMENT
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  APPOINTMENT ();

  /**
   * Empty Destructor
   */
  virtual ~APPOINTMENT ();

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
  void checkAvaliability ()
  {
  }


  /**
   */
  void roomNo ()
  {
  }


  /**
   */
  void separateDatabase ()
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

  str date;
  str time;
  str doctorName;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (str new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  str getDate ()   {
    return date;
  }

  /**
   * Set the value of time
   * @param new_var the new value of time
   */
  void setTime (str new_var)   {
      time = new_var;
  }

  /**
   * Get the value of time
   * @return the value of time
   */
  str getTime ()   {
    return time;
  }

  /**
   * Set the value of doctorName
   * @param new_var the new value of doctorName
   */
  void setDoctorName (str new_var)   {
      doctorName = new_var;
  }

  /**
   * Get the value of doctorName
   * @return the value of doctorName
   */
  str getDoctorName ()   {
    return doctorName;
  }
private:


  void initAttributes () ;

};

#endif // APPOINTMENT_H
