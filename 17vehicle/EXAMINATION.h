
#ifndef EXAMINATION_H
#define EXAMINATION_H

#include <string>

/**
  * class EXAMINATION
  * 
  */

class EXAMINATION
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  EXAMINATION ();

  /**
   * Empty Destructor
   */
  virtual ~EXAMINATION ();

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
  void attendExam ()
  {
  }


  /**
   */
  void examTime ()
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

  str name;
  int time;
  str signature;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of time
   * @param new_var the new value of time
   */
  void setTime (int new_var)   {
      time = new_var;
  }

  /**
   * Get the value of time
   * @return the value of time
   */
  int getTime ()   {
    return time;
  }

  /**
   * Set the value of signature
   * @param new_var the new value of signature
   */
  void setSignature (str new_var)   {
      signature = new_var;
  }

  /**
   * Get the value of signature
   * @return the value of signature
   */
  str getSignature ()   {
    return signature;
  }
private:


  void initAttributes () ;

};

#endif // EXAMINATION_H
