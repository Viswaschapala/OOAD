
#ifndef CREW_H
#define CREW_H

#include <string>
#include vector



/**
  * class CREW
  * 
  */

class CREW
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CREW ();

  /**
   * Empty Destructor
   */
  virtual ~CREW ();

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

  string course_name;
  int year_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of course_name
   * @param new_var the new value of course_name
   */
  void setCourse_name (string new_var)   {
      course_name = new_var;
  }

  /**
   * Get the value of course_name
   * @return the value of course_name
   */
  string getCourse_name ()   {
    return course_name;
  }

  /**
   * Set the value of year_
   * @param new_var the new value of year_
   */
  void setYear_ (int new_var)   {
      year_ = new_var;
  }

  /**
   * Get the value of year_
   * @return the value of year_
   */
  int getYear_ ()   {
    return year_;
  }
private:


  void initAttributes () ;

};

#endif // CREW_H
