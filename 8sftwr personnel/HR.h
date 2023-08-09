
#ifndef HR_H
#define HR_H

#include <string>

/**
  * class HR
  * 
  */

class HR
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  HR ();

  /**
   * Empty Destructor
   */
  virtual ~HR ();

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
  void recruit ()
  {
  }


  /**
   */
  void monitor ()
  {
  }


  /**
   */
  void increment ()
  {
  }


  /**
   */
  void motivation ()
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

  str curriculumvitae;
  str monitor_employees;
  str allot_work;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of curriculumvitae
   * @param new_var the new value of curriculumvitae
   */
  void setCurriculumvitae (str new_var)   {
      curriculumvitae = new_var;
  }

  /**
   * Get the value of curriculumvitae
   * @return the value of curriculumvitae
   */
  str getCurriculumvitae ()   {
    return curriculumvitae;
  }

  /**
   * Set the value of monitor_employees
   * @param new_var the new value of monitor_employees
   */
  void setMonitor_employees (str new_var)   {
      monitor_employees = new_var;
  }

  /**
   * Get the value of monitor_employees
   * @return the value of monitor_employees
   */
  str getMonitor_employees ()   {
    return monitor_employees;
  }

  /**
   * Set the value of allot_work
   * @param new_var the new value of allot_work
   */
  void setAllot_work (str new_var)   {
      allot_work = new_var;
  }

  /**
   * Get the value of allot_work
   * @return the value of allot_work
   */
  str getAllot_work ()   {
    return allot_work;
  }
private:


  void initAttributes () ;

};

#endif // HR_H
