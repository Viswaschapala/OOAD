
#ifndef TRAIN_H
#define TRAIN_H

#include <string>

/**
  * class TRAIN
  * 
  */

class TRAIN
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  TRAIN ();

  /**
   * Empty Destructor
   */
  virtual ~TRAIN ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  int trainNo;
  string train_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of trainNo
   * @param new_var the new value of trainNo
   */
  void setTrainNo (int new_var)   {
      trainNo = new_var;
  }

  /**
   * Get the value of trainNo
   * @return the value of trainNo
   */
  int getTrainNo ()   {
    return trainNo;
  }

  /**
   * Set the value of train_name
   * @param new_var the new value of train_name
   */
  void setTrain_name (string new_var)   {
      train_name = new_var;
  }

  /**
   * Get the value of train_name
   * @return the value of train_name
   */
  string getTrain_name ()   {
    return train_name;
  }
private:


  void initAttributes () ;

};

#endif // TRAIN_H
