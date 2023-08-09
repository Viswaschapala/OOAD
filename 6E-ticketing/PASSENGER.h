
#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

/**
  * class PASSENGER
  * 
  */

class PASSENGER
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  PASSENGER ();

  /**
   * Empty Destructor
   */
  virtual ~PASSENGER ();

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
  void searchTrain ()
  {
  }


  /**
   */
  void book_ticket ()
  {
  }


  /**
   */
  void cancel_ticket ()
  {
  }


  /**
   */
  void pay_charges ()
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

  string name;
  string address;
  int age;
  string gender_;
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
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }

  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (int new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  int getAge ()   {
    return age;
  }

  /**
   * Set the value of gender_
   * @param new_var the new value of gender_
   */
  void setGender_ (string new_var)   {
      gender_ = new_var;
  }

  /**
   * Get the value of gender_
   * @return the value of gender_
   */
  string getGender_ ()   {
    return gender_;
  }
private:


  void initAttributes () ;

};

#endif // PASSENGER_H
