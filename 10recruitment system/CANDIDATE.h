
#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>
#include vector



/**
  * class CANDIDATE
  * 
  */

class CANDIDATE
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CANDIDATE ();

  /**
   * Empty Destructor
   */
  virtual ~CANDIDATE ();

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
  void details ()
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
  str fullName;
  str email;
  str gitHubLink;
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
   * Set the value of fullName
   * @param new_var the new value of fullName
   */
  void setFullName (str new_var)   {
      fullName = new_var;
  }

  /**
   * Get the value of fullName
   * @return the value of fullName
   */
  str getFullName ()   {
    return fullName;
  }

  /**
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (str new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  str getEmail ()   {
    return email;
  }

  /**
   * Set the value of gitHubLink
   * @param new_var the new value of gitHubLink
   */
  void setGitHubLink (str new_var)   {
      gitHubLink = new_var;
  }

  /**
   * Get the value of gitHubLink
   * @return the value of gitHubLink
   */
  str getGitHubLink ()   {
    return gitHubLink;
  }
private:


  void initAttributes () ;

};

#endif // CANDIDATE_H
