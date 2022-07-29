#include<cstring>

// Implement a HashMap
// Separate chaining technique

template<typename T>
class Node{
 public:
    string key;
    T value;
    Node<T> * next;

    Node(string key,T val){
        this->key = key;
        value = val;
        next  = NULL;
    }
    //destructor
    ~Node(){
        if(next != NULl){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{

    Node<T>** table;
    int current_size;
    int table_size;

    int hashFn(string key){
        int idx = 0;
        int p = 1;
        for(int j=0;j<key.lenght();j++){
            idx = idx + (key[j]*p)%table_size;
            idx = idx%table_size;
            p = (p*27)%table_size;
        }
        return idx;
    }


    public:
      Hashtable(int ts =7){
        table_size = ts;
        table = new Node<t>*[table_size];
        current_size = 0;
        for(int  i=0;i<table_size;i++){
            table[i] = NULL;
        }
      }

      void insert(string key , T value){ 
        //..
        int idx = hashFn(key);

        Node<T>* n = new Node<t>(key,value);
        //Insert at head of the linked list with id = idx
        n->next = table[idx];
        table[idx] = n;
        current_size++;

        //rehash..
      }
      void print(){
        for(int i=0;i<table_size;i++){
            cout<<"Bucket "<<i<<" ->";
            Node<T>*temp = table[i];
            while(temp != NULL){
                cout<< temp->key>>"->";
                temp = temp->next;
            }
            cout<<endl;
        }

      }

      
      /* T search(string key){

      }
      void erase(string key){

      } */


};