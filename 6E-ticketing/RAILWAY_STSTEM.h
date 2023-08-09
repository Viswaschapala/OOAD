
#ifndef RAILWAY_STSTEM_H
#define RAILWAY_STSTEM_H

#include <string>

/**
  * class RAILWAY_STSTEM
  * 
  */

class RAILWAY_STSTEM
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  RAILWAY_STSTEM ();

  /**
   * Empty Destructor
   */
  virtual ~RAILWAY_STSTEM ();

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
  void response ()
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
  string Station;
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
   * Set the value of Station
   * @param new_var the new value of Station
   */
  void setStation (string new_var)   {
      Station = new_var;
  }

  /**
   * Get the value of Station
   * @return the value of Station
   */
  string getStation ()   {
    return Station;
  }
private:


  void initAttributes () ;

};

#endif // RAILWAY_STSTEM_H
