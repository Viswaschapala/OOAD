
#ifndef VOTING_H
#define VOTING_H

#include <string>
#include vector



/**
  * class VOTING
  * 
  */

class VOTING
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  VOTING ();

  /**
   * Empty Destructor
   */
  virtual ~VOTING ();

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
  void login ()
  {
  }


  /**
   */
  void vote ()
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

  int regNo;
  object fingerPrint;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of regNo
   * @param new_var the new value of regNo
   */
  void setRegNo (int new_var)   {
      regNo = new_var;
  }

  /**
   * Get the value of regNo
   * @return the value of regNo
   */
  int getRegNo ()   {
    return regNo;
  }

  /**
   * Set the value of fingerPrint
   * @param new_var the new value of fingerPrint
   */
  void setFingerPrint (object new_var)   {
      fingerPrint = new_var;
  }

  /**
   * Get the value of fingerPrint
   * @return the value of fingerPrint
   */
  object getFingerPrint ()   {
    return fingerPrint;
  }
private:


  void initAttributes () ;

};

#endif // VOTING_H
