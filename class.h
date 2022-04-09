#include <cstdio>
#include <string>
#include <cstdlib>
#include <iostream>
#define MAX 10000
template <typename T>
class node{
  private:
    T value;
    node* next;
  public:
  	node(){	
	}
	node(T value){
      this->value = value;
      this->next = NULL;
  }
  void setnext(node<T>* ptr){
      this->next = ptr;
  }
  node* getnext(){
      return this->next;
  }
  void setvalue(T value){
      this->value = value;
  }
  T getvalue(){
      return this->value;
  }
  void show(){
      if (this->next != NULL){
          std::cout<<this->value<<"->";
      }
      else{
          std::cout<<this->value<<std::endl;
      }
  }
  
};

class LinkedListString{
    private:
        node<std::string>* head;
        int length;
    public:
    LinkedListString(){
        node<std::string>* head = NULL;
        this->head = head;
        this->length = 0;
    }
    void add(node<std::string> addpoint){
        node<std::string>* prePtr = this->head;
        if (this->head == NULL){
            this->head = &addpoint;
        }
        else{
            while(prePtr->getnext()!= NULL){
                prePtr = prePtr->getnext();
                
            }
            prePtr->setnext(&addpoint);
        }
        this->length+= 1;
    }
    int getlength(){
        return this->length;
    }
    void show(){
        node<std::string>* headptr = this->head;
        int i;
        for (i = 0;i< this->length;i++){
            headptr->show();
            headptr = headptr->getnext();
        }
        printf("\n");
    }
    node<std::string>* gethead(){
    	return this->head;
	}
};
class LinkedListInt{
    private:
        node<int>* head;
        int length;
    public:
    LinkedListInt(){//constructor for LinkedListInt
        node<int>* head = NULL;
        this->head = head;
        this->length = 0;
    }
    void add(node<int>* addpoint){//pass node address for argment
        if (this->head == NULL){
            this->head = addpoint;
        }
        else{
        	node<int>* prePtr = this->head;
            while(prePtr->getnext()!= NULL){
                prePtr = prePtr->getnext();
                
            }
            prePtr->setnext(addpoint);
        }
        this->length+= 1;
    }
    int getlength(){
        return this->length;
    }
    node<int>* gethead(){
    	return this->head;
	}
    void show(){
        node<int>* headptr = this->head;
        int i;
        for (i = 0;i< this->length;i++){
            headptr->show();
            headptr = headptr->getnext();
        }
        printf("\n");
    }
};
LinkedListInt create_linkedlist_int(int arr[],int len){
	LinkedListInt li;
	int i;
	node<int> nodelist[MAX]; 
	for(i = 0;i<len;i++){
		nodelist[i] = node<int>(arr[i]);
	}
	for (i = 0; i<len ;i++){
		li.add(&nodelist[i]);
	}
	return li;
}
LinkedListString create_linkedlist_str(std::string arr[],int len){
	LinkedListString li;
	int i;
	node<std::string> nodelist[MAX]; 
	for(i = 0;i<len;i++){
		nodelist[i] = node<std::string>(arr[i]);
	}
	for (i = 0; i<len ;i++){
		li.add(nodelist[i]);
	}
	return li;
}
