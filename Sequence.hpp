#pragma once
#include <iostream>
#include <cstdio>
#include "Sequence.h"


template <class T>
Sequence<T>::Sequence() {
    head = NULL;
    size = 0;
}

template <class T>
Sequence<T>::~Sequence() {
    reclaimAllNodes(head);
    // ~Sequence;;;
}

template <class T>
void Sequence<T>::clear(void) {
    reclaimAllNodes(head);
    head = NULL;
}

template<class T>
  void Sequence<T>::add(T& x, int pos) {
    if (pos<0 || pos > size) {
        cout << "Position out of bounds" << endl;
        return;
    } //if

    NodeRecord* temp = new NodeRecord;
    temp->value = x;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
    }
    else if (pos == 0) {
        temp->next = head;
        head = temp;
    }  //else if
    else {


        NodeRecord* current = head;

        for (int i = 0; i < pos - 1; i++) {
            current = current->next;

        }
        temp->next = current->next;
        current->next = temp;
    } //else
    size++;
} //add

template<class T>
void Sequence<T>::remove(T& x, int pos) {
    if (pos<0 || pos > size) {
        cout << "Position out of bounds" << endl;
        return;
    } //if

    NodeRecord* temp = head;
    if (pos == 0) {
        x = head->value;
        head = head->next;
    } //if

    else {
        for (int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        } //for


        x = temp->next->value;
        if (pos == size) {
            temp->next = NULL;
        } //if
        else {
            temp->next = temp->next->next;
        } //else
        size--;
    } //else
} //remove


template<class T>
T& Sequence<T>::entry(int pos) {
    if (pos < 0 || pos >= size) {
        cout << "Position out of bounds" << endl;
        return head->value;
    } //if
    NodeRecord* temp = head;
    for (int i = 0; i < pos; i++) {
        temp = temp->next;
    }
    return temp->value;
}

template<class T>
int Sequence<T>::length(void) {
    return size;
} //length


template<class T>
void Sequence<T>::outputSequence(void) {

    NodeRecord* current;
    current = head;
    while (current != NULL) {
        cout << current->value << ", ";
        current = current->next;
    }
    cout << "\n";
} //outputsequence#pragma once



template <class T>
   Sequence<T>::Sequence() {

    head = NULL;
    size = 0;
}

template <class T>
Sequence<T>::~Sequence() {
    reclaimAllNodes(head);
    // ~Sequence;;;
}

template <class T>
void Sequence<T>::clear(void) {
    reclaimAllNodes(head);
    head = NULL;
}


template <class T>
void Sequence <T>::transferFrom(const Sequence source) {
  
    clear();
     
    for (int i = 0; i < source.length(); i++) {
        
        add(source.entry(i), length()); 
    }
   source.clear();
} //transferFrom


template <class T>
Sequence<T>& Sequence<T>:: operator= (Sequence& rhs) {
    clear();
    for (int i = 0; i < rhs.length(); i++) {

        add(rhs.entry(i), length());

    }
    
   return (*this);
}


template <class T>
void Sequence<T>::reclaimAllNodes(NodeRecord*& initialP) {

    if (initialP != NULL) {
        reclaimAllNodes(initialP->next);
        delete (initialP);
    } // end if
 }


