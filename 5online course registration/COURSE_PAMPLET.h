
#ifndef COURSE_PAMPLET_H
#define COURSE_PAMPLET_H

#include <string>

/**
  * class COURSE_PAMPLET
  * 
  */

class COURSE_PAMPLET
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  COURSE_PAMPLET ();

  /**
   * Empty Destructor
   */
  virtual ~COURSE_PAMPLET ();

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
  void view ()
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

  string course_name;
  int course_no;
  int perico;
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
   * Set the value of course_no
   * @param new_var the new value of course_no
   */
  void setCourse_no (int new_var)   {
      course_no = new_var;
  }

  /**
   * Get the value of course_no
   * @return the value of course_no
   */
  int getCourse_no ()   {
    return course_no;
  }

  /**
   * Set the value of perico
   * @param new_var the new value of perico
   */
  void setPerico (int new_var)   {
      perico = new_var;
  }

  /**
   * Get the value of perico
   * @return the value of perico
   */
  int getPerico ()   {
    return perico;
  }
private:


  void initAttributes () ;

};

#endif // COURSE_PAMPLET_H
