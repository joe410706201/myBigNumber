#include <cstdio>
#include <string>
#include <cstdlib>
#include <iostream>
class nodeint{
  private:
    int value;
    nodeint* next;
  public:
  nodeint(int value){
      this->value = value;
      this->next = NULL;
  }
  void setnext(nodeint* ptr){
      this->next = ptr;
  }
  nodeint* getnext(){
      return this->next;
  }
  void setvalue(int value){
      this->value = value;
  }
  int getvalue(){
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

class LinkedListInt{
    private:
        nodeint* head;
        int length;
    public:
    LinkedListInt(){
        nodeint* head = NULL;
        this->head = head;
        this->length = 0;
    }
    void add(nodeint addpoint){
        nodeint* prePtr = this->head;
        if (this->head == NULL){
            this->head = &addpoint;	 
        }
        else{
            while(prePtr->getnext() != NULL){
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
        nodeint* headptr = this->head;
        int i;
        for (i = 0;i< this->length;i++){
            headptr->show();
            headptr = headptr->getnext();
        }
        printf("\n");
    }
};
class node{
  private:
    std::string value;
    node* next;
  public:
  node(std::string value){
      this->value = value;
      this->next = NULL;
  }
  void setnext(node* ptr){
      this->next = ptr;
  }
  node* getnext(){
      return this->next;
  }
  void setvalue(std::string value){
      this->value = value;
  }
  std::string getvalue(){
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
        node* head;
        int length;
    public:
    LinkedListString(){
        node* head = NULL;
        this->head = head;
        this->length = 0;
    }
    void add(node addpoint){
        node* prePtr = this->head;
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
        node* headptr = this->head;
        int i;
        for (i = 0;i< this->length;i++){
            headptr->show();
            headptr = headptr->getnext();
        }
        printf("\n");
    }
};
class bignumber{
    public:
    bignumber(LinkedListString li){
        int length = li.getlength();
        
    }
};
