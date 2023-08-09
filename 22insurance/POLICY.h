
#ifndef POLICY_H
#define POLICY_H

#include <string>

/**
  * class POLICY
  * 
  */

class POLICY
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  POLICY ();

  /**
   * Empty Destructor
   */
  virtual ~POLICY ();

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
  void addNewPolicy ()
  {
  }


  /**
   */
  void detailPolicy ()
  {
  }


  /**
   */
  void updatePolicyDetails ()
  {
  }


  /**
   */
  void searchPolicy ()
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

  int policyId;
  str policyName;
  str policyAdmin;
  str status;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of policyId
   * @param new_var the new value of policyId
   */
  void setPolicyId (int new_var)   {
      policyId = new_var;
  }

  /**
   * Get the value of policyId
   * @return the value of policyId
   */
  int getPolicyId ()   {
    return policyId;
  }

  /**
   * Set the value of policyName
   * @param new_var the new value of policyName
   */
  void setPolicyName (str new_var)   {
      policyName = new_var;
  }

  /**
   * Get the value of policyName
   * @return the value of policyName
   */
  str getPolicyName ()   {
    return policyName;
  }

  /**
   * Set the value of policyAdmin
   * @param new_var the new value of policyAdmin
   */
  void setPolicyAdmin (str new_var)   {
      policyAdmin = new_var;
  }

  /**
   * Get the value of policyAdmin
   * @return the value of policyAdmin
   */
  str getPolicyAdmin ()   {
    return policyAdmin;
  }

  /**
   * Set the value of status
   * @param new_var the new value of status
   */
  void setStatus (str new_var)   {
      status = new_var;
  }

  /**
   * Get the value of status
   * @return the value of status
   */
  str getStatus ()   {
    return status;
  }
private:


  void initAttributes () ;

};

#endif // POLICY_H
