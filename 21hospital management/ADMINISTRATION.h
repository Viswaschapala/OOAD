
#ifndef ADMINISTRATION_H
#define ADMINISTRATION_H

#include <string>
#include vector



/**
  * class ADMINISTRATION
  * 
  */

class ADMINISTRATION
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ADMINISTRATION ();

  /**
   * Empty Destructor
   */
  virtual ~ADMINISTRATION ();

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
  void doctor ()
  {
  }


  /**
   */
  void patient ()
  {
  }


  /**
   */
  void salary ()
  {
  }


  /**
   */
  void getReports ()
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

  str adminName;
  str details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of adminName
   * @param new_var the new value of adminName
   */
  void setAdminName (str new_var)   {
      adminName = new_var;
  }

  /**
   * Get the value of adminName
   * @return the value of adminName
   */
  str getAdminName ()   {
    return adminName;
  }

  /**
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (str new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  str getDetails ()   {
    return details;
  }
private:


  void initAttributes () ;

};

#endif // ADMINISTRATION_H
