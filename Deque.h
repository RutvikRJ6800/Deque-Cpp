#include <iostream>
#include <string>
using namespace std; 

template <typename T> class Deque
{
// private:
    /* data */
public:
    T* ptr; 
    long long int tail,head,osize;
    T defaultDT = T();

    
    Deque(){
        osize=0;
        ptr = new T[osize];
        tail=head=-1;
    }
    

    void deque(){
        osize=0;
        ptr = new T[osize];
        tail=head=-1;
    }

    void deque(long long int s, T data){
        osize=s;
        ptr = new T[osize];
        tail=s-1;
        head=0;
        for(int i=head; i<=tail; i++){
            ptr[i]=data;
        }
    }

    void reallocate(){

        long long int currsize=osize, newsize=2*osize;

        if(empty()){
            osize=1;
            T* tempptr = new T[osize];
            ptr=tempptr;
            tempptr=NULL;
        }
        else{
            int i=head,j=0;
            T* tempptr = new T[newsize];
            while((i%currsize)!=tail){
                    tempptr[j]=ptr[i];
                    j++;
                    i=(i+1)%currsize;
                }
                tempptr[j]=ptr[tail];
                head=0;
                tail=j;
            osize=newsize;
            ptr=tempptr;
            tempptr=NULL;
        }
    }

    void clear(){
        head=tail=-1;
    }

    void resize(long long x, T data){
        long long currsize=size();
        if(x>currsize){
            reallocate();
            long long int newInsertion=x-currsize,count=0;
            while(count!=newInsertion){
                push_back(data);
                count++;
            }
        }
        else if(x<currsize){
            long long int newDeletion=currsize-x,count=0;
            while(count!=newDeletion){
                pop_back();
                count++;
            }
        }
    }

    void print(){
        if(empty())return;
        int i = head;
        while(i!=tail){
            cout << ptr[i] << " ";
            i=(i+1)%osize;
        }
        cout <<ptr[tail]<<endl;
    }

    bool isEmpty(){
        if(tail==-1 && head==-1)return true;
        else return false;
    }

    bool isFull(){
        if(head==-1 && tail==-1) return true;
        else if((head==0 && tail==osize-1)||(head==(tail+1)))return true;
        else return false;
    }

    long long int size(){
        if(empty())return 0;
        if(tail>=head){
            return (tail-head+1);
        }
        else{
            return (osize-(head-tail-1));
        }
    }

    void push_back(T data){
        if(isFull()){
            // resize with double of the curr size
            reallocate();
        }
        if(tail==-1){
            tail=head=0;
        }
        else{
            tail=(tail+1)%osize;
        }
        ptr[tail]=data;
    }
    void push_front(T data){
        if(isFull()){
            // resize with double of the curr size
            reallocate();
        }
        if(head==-1){
            tail=head=0;
        }
        else if(head==0){
            head=(osize-1);
        }
        else{
            head--;
        }
        ptr[head]=data;
    }

    void pop_back(){
        if(isEmpty()){
            return;
        }
        if(head==tail){
            head=tail=-1;
        }
        else if(tail==0){
            tail=osize-1;
        }
        else{
            tail--;
        }
    }

    void pop_front(){
        if(isEmpty()){
            return;
        }
        if(head==tail){
            head=tail=-1;
        }
        else{
            head=(head+1)%osize;
        }
    }

    T front(){
        if(isEmpty()){
            return defaultDataType();
        }
        return ptr[head];
    }

    T back(){
        if(isEmpty()){
            return defaultDataType();
        }
        return ptr[tail];
    }

    T operator[](long long i){
        if(size()<i){
            return defaultDataType();
        }
        return ptr[(head+i)%osize];
        
    }

    bool empty(){
        return isEmpty();
    }

    int getSize(){
        return osize;
    }

    T defaultDataType(){
        return defaultDT;
    }
};