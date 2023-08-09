
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

/**
  * class VEHICLE
  * 
  */

class VEHICLE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  VEHICLE ();

  /**
   * Empty Destructor
   */
  virtual ~VEHICLE ();

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
  void registerVehicle ()
  {
  }


  /**
   */
  void getDetails ()
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

  str vehicleName;
  str owner;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of vehicleName
   * @param new_var the new value of vehicleName
   */
  void setVehicleName (str new_var)   {
      vehicleName = new_var;
  }

  /**
   * Get the value of vehicleName
   * @return the value of vehicleName
   */
  str getVehicleName ()   {
    return vehicleName;
  }

  /**
   * Set the value of owner
   * @param new_var the new value of owner
   */
  void setOwner (str new_var)   {
      owner = new_var;
  }

  /**
   * Get the value of owner
   * @return the value of owner
   */
  str getOwner ()   {
    return owner;
  }
private:


  void initAttributes () ;

};

#endif // VEHICLE_H
