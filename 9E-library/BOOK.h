
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include vector



/**
  * class BOOK
  * 
  */

class BOOK
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  BOOK ();

  /**
   * Empty Destructor
   */
  virtual ~BOOK ();

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
  void removeFromCatalogue ()
  {
  }


  /**
   */
  void AddToCatalogue ()
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

  str nameOfBook;
  str authorName;
  int noOfBooks;
  str subject;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of nameOfBook
   * @param new_var the new value of nameOfBook
   */
  void setNameOfBook (str new_var)   {
      nameOfBook = new_var;
  }

  /**
   * Get the value of nameOfBook
   * @return the value of nameOfBook
   */
  str getNameOfBook ()   {
    return nameOfBook;
  }

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
   * Set the value of noOfBooks
   * @param new_var the new value of noOfBooks
   */
  void setNoOfBooks (int new_var)   {
      noOfBooks = new_var;
  }

  /**
   * Get the value of noOfBooks
   * @return the value of noOfBooks
   */
  int getNoOfBooks ()   {
    return noOfBooks;
  }

  /**
   * Set the value of subject
   * @param new_var the new value of subject
   */
  void setSubject (str new_var)   {
      subject = new_var;
  }

  /**
   * Get the value of subject
   * @return the value of subject
   */
  str getSubject ()   {
    return subject;
  }
private:


  void initAttributes () ;

};

#endif // BOOK_H
