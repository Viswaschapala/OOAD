
#ifndef SALES_H
#define SALES_H

#include <string>
#include vector



/**
  * class SALES
  * 
  */

class SALES
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  SALES ();

  /**
   * Empty Destructor
   */
  virtual ~SALES ();

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
  void add_new_sale ()
  {
  }


  /**
   */
  void deal_sale ()
  {
  }


  /**
   */
  void edit_sale ()
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
  str title;
  int price;
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
   * Set the value of title
   * @param new_var the new value of title
   */
  void setTitle (str new_var)   {
      title = new_var;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  str getTitle ()   {
    return title;
  }

  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (int new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  int getPrice ()   {
    return price;
  }
private:


  void initAttributes () ;

};

#endif // SALES_H
