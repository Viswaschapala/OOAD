
#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include vector



/**
  * class ADMIN
  * 
  */

class ADMIN
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ADMIN ();

  /**
   * Empty Destructor
   */
  virtual ~ADMIN ();

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
  void aboutPolicy ()
  {
  }


  /**
   */
  void viewPayment ()
  {
  }


  /**
   */
  void pay ()
  {
  }


  /**
   */
  void issuePolicy ()
  {
  }


  /**
   */
  void updatePolicy ()
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
  str name;
  str policy;
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
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (str new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  str getName ()   {
    return name;
  }

  /**
   * Set the value of policy
   * @param new_var the new value of policy
   */
  void setPolicy (str new_var)   {
      policy = new_var;
  }

  /**
   * Get the value of policy
   * @return the value of policy
   */
  str getPolicy ()   {
    return policy;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H
