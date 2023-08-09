
#ifndef TICKET_H
#define TICKET_H

#include <string>

/**
  * class TICKET
  * 
  */

class TICKET
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TICKET ();

  /**
   * Empty Destructor
   */
  virtual ~TICKET ();

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
  void fare ()
  {
  }


  /**
   */
  void new_ticket ()
  {
  }


  /**
   */
  void delete_ticket ()
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

  int ticketNo;
  string locations;
  int no_of_persons;
  string chargeType;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ticketNo
   * @param new_var the new value of ticketNo
   */
  void setTicketNo (int new_var)   {
      ticketNo = new_var;
  }

  /**
   * Get the value of ticketNo
   * @return the value of ticketNo
   */
  int getTicketNo ()   {
    return ticketNo;
  }

  /**
   * Set the value of locations
   * @param new_var the new value of locations
   */
  void setLocations (string new_var)   {
      locations = new_var;
  }

  /**
   * Get the value of locations
   * @return the value of locations
   */
  string getLocations ()   {
    return locations;
  }

  /**
   * Set the value of no_of_persons
   * @param new_var the new value of no_of_persons
   */
  void setNo_of_persons (int new_var)   {
      no_of_persons = new_var;
  }

  /**
   * Get the value of no_of_persons
   * @return the value of no_of_persons
   */
  int getNo_of_persons ()   {
    return no_of_persons;
  }

  /**
   * Set the value of chargeType
   * @param new_var the new value of chargeType
   */
  void setChargeType (string new_var)   {
      chargeType = new_var;
  }

  /**
   * Get the value of chargeType
   * @return the value of chargeType
   */
  string getChargeType ()   {
    return chargeType;
  }
private:


  void initAttributes () ;

};

#endif // TICKET_H
