
#ifndef USER_H
#define USER_H

#include <string>
#include vector



/**
  * class USER
  * 
  */

class USER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  USER ();

  /**
   * Empty Destructor
   */
  virtual ~USER ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  string course_taken;
  int year_handled;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of course_taken
   * @param new_var the new value of course_taken
   */
  void setCourse_taken (string new_var)   {
      course_taken = new_var;
  }

  /**
   * Get the value of course_taken
   * @return the value of course_taken
   */
  string getCourse_taken ()   {
    return course_taken;
  }

  /**
   * Set the value of year_handled
   * @param new_var the new value of year_handled
   */
  void setYear_handled (int new_var)   {
      year_handled = new_var;
  }

  /**
   * Get the value of year_handled
   * @return the value of year_handled
   */
  int getYear_handled ()   {
    return year_handled;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
