
#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include vector



/**
  * class MEMBER
  * 
  */

class MEMBER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  MEMBER ();

  /**
   * Empty Destructor
   */
  virtual ~MEMBER ();

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
  void DownloadBook ()
  {
  }


  /**
   */
  void SearchBook ()
  {
  }


  /**
   */
  void viewInfo ()
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
  int password;
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
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (int new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  int getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // MEMBER_H
