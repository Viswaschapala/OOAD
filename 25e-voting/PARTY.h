
#ifndef PARTY_H
#define PARTY_H

#include <string>

/**
  * class PARTY
  * 
  */

class PARTY
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  PARTY ();

  /**
   * Empty Destructor
   */
  virtual ~PARTY ();

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
  void registration ()
  {
  }


  /**
   */
  void selectParty ()
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

  str surName;
  str lastName;
  str nickName;
  object photo;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of surName
   * @param new_var the new value of surName
   */
  void setSurName (str new_var)   {
      surName = new_var;
  }

  /**
   * Get the value of surName
   * @return the value of surName
   */
  str getSurName ()   {
    return surName;
  }

  /**
   * Set the value of lastName
   * @param new_var the new value of lastName
   */
  void setLastName (str new_var)   {
      lastName = new_var;
  }

  /**
   * Get the value of lastName
   * @return the value of lastName
   */
  str getLastName ()   {
    return lastName;
  }

  /**
   * Set the value of nickName
   * @param new_var the new value of nickName
   */
  void setNickName (str new_var)   {
      nickName = new_var;
  }

  /**
   * Get the value of nickName
   * @return the value of nickName
   */
  str getNickName ()   {
    return nickName;
  }

  /**
   * Set the value of photo
   * @param new_var the new value of photo
   */
  void setPhoto (object new_var)   {
      photo = new_var;
  }

  /**
   * Get the value of photo
   * @return the value of photo
   */
  object getPhoto ()   {
    return photo;
  }
private:


  void initAttributes () ;

};

#endif // PARTY_H
