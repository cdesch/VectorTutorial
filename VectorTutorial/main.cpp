//
//  main.cpp
//  VectorTutorial
//
//  Created by cj on 10/2/14.
//  Copyright (c) 2014 KickinEspresso. All rights reserved.
//

#include <iostream>
#include <vector> // Include the 'vector' header from th STD Library

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    //Our vector is a array on steroids.
    //A empty vector is defined as:
    vector <int> myVector;
    /*
        vector is the type of object that we are declaring
        <int> is the type of objects that will go in each slot of the vector. In this case our vector will store integers
        myVector is the variable name of the vector
     */
    
    
    //Right now, our vector named "myVector" has no elements in it.
    //It should look like this:
    //[ ]   //<-- empty Vector
    
    
    //Using the push_back() function, we can add elements into the vector
    //Lets add 1,2 and 3 to the vector
    myVector.push_back(1);
    //The vectore now looks like: [1]
    myVector.push_back(2);
    //The vectore now looks like: [1,2]
    myVector.push_back(3);
    //The vectore now looks like: [1,2,3]
    
    
    //To access an item on the vector, we just need to call the index
    // Vector Elements: [ 1 , 2 , 3]
    // Vector Index:    [ 0 , 1 , 2]
    //If we get the element at vector index 1, we should get the element which is the integer 2
    int index = 1;
    cout << "Index: " << index << " Element: " << myVector[1] << endl;
    
    
    
    return 0;
}
