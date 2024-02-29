#pragma once
#include <iostream>
#include <cstdio>
#include "Queue.h"


template <class T>
   Queue<T>::Queue() {
       
  }


 template <class T> 
 Queue<T>::~Queue() {
 }




 template <class T>
 void Queue<T>::clear(void) {
  
     a.clear();

 }

 

 template<class T>
 void Queue<T>::transferFrom(Queue& source) {

     a.transferFrom(source.a);
 }

  template<class T>
  Queue<T>& Queue<T>::operator = (Queue& rhs) {

      a.operator = (rhs.a);
  }
   

 template <class T>
 void Queue<T>::enqueue(T& x) {
     a.add(x, length());

 }


 template <class T>
 void Queue<T>::dequeue(T& x) {

     a.remove(x, 0);
 }

 template<class T>
 void Queue<T>::replaceFront(T& x) {
      
     T temp = x;
     a.remove(x, 0);
     a.add(temp, 0);
 }



 template <class T>
 T& Queue<T>::front(void) {

     return a.entry(0);

 }

 template <class T>
 int Queue<T>::length(void) {

     return a.length;
 }



 
 



 

