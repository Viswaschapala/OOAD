
#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <string>

/**
  * class REGISTRATION
  * 
  */

class REGISTRATION
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  REGISTRATION ();

  /**
   * Empty Destructor
   */
  virtual ~REGISTRATION ();

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
  void display ()
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

  int reg_no;
  string course_opted;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of reg_no
   * @param new_var the new value of reg_no
   */
  void setReg_no (int new_var)   {
      reg_no = new_var;
  }

  /**
   * Get the value of reg_no
   * @return the value of reg_no
   */
  int getReg_no ()   {
    return reg_no;
  }

  /**
   * Set the value of course_opted
   * @param new_var the new value of course_opted
   */
  void setCourse_opted (string new_var)   {
      course_opted = new_var;
  }

  /**
   * Get the value of course_opted
   * @return the value of course_opted
   */
  string getCourse_opted ()   {
    return course_opted;
  }
private:


  void initAttributes () ;

};

#endif // REGISTRATION_H
