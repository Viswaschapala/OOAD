
#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <string>
#include vector



/**
  * class CATALOGUE
  * 
  */

class CATALOGUE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CATALOGUE ();

  /**
   * Empty Destructor
   */
  virtual ~CATALOGUE ();

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
  void searchByBook ()
  {
  }


  /**
   */
  void searchByAuthor ()
  {
  }


  /**
   */
  void searchBySub ()
  {
  }


  /**
   */
  void updateInfo ()
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

  str authorName;
  int NoOfCopies;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of authorName
   * @param new_var the new value of authorName
   */
  void setAuthorName (str new_var)   {
      authorName = new_var;
  }

  /**
   * Get the value of authorName
   * @return the value of authorName
   */
  str getAuthorName ()   {
    return authorName;
  }

  /**
   * Set the value of NoOfCopies
   * @param new_var the new value of NoOfCopies
   */
  void setNoOfCopies (int new_var)   {
      NoOfCopies = new_var;
  }

  /**
   * Get the value of NoOfCopies
   * @return the value of NoOfCopies
   */
  int getNoOfCopies ()   {
    return NoOfCopies;
  }
private:


  void initAttributes () ;

};

#endif // CATALOGUE_H
