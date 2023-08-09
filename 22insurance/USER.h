
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



  /**
   */
  void registerPolicies ()
  {
  }


  /**
   */
  void policyRenewal ()
  {
  }


  /**
   */
  void details ()
  {
  }


  /**
   */
  void updateDetails ()
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

  int userId;
  str userName;
  str userAddress;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of userId
   * @param new_var the new value of userId
   */
  void setUserId (int new_var)   {
      userId = new_var;
  }

  /**
   * Get the value of userId
   * @return the value of userId
   */
  int getUserId ()   {
    return userId;
  }

  /**
   * Set the value of userName
   * @param new_var the new value of userName
   */
  void setUserName (str new_var)   {
      userName = new_var;
  }

  /**
   * Get the value of userName
   * @return the value of userName
   */
  str getUserName ()   {
    return userName;
  }

  /**
   * Set the value of userAddress
   * @param new_var the new value of userAddress
   */
  void setUserAddress (str new_var)   {
      userAddress = new_var;
  }

  /**
   * Get the value of userAddress
   * @return the value of userAddress
   */
  str getUserAddress ()   {
    return userAddress;
  }
private:


  void initAttributes () ;

};

#endif // USER_H
