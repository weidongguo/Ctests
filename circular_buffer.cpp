//Weidong Guo
//Description: implement a circular buffer 
#include <iostream>

class CircularBuffer{ // a char(byte) Circular buffer
  int size, count; 
 //size - size of buffer
 //count - # of elements pushed in, essential to differentiate from a full buffer or empty buffer

  char *buf, *read, *write;
  public:
    CircularBuffer(int _size);
    ~CircularBuffer();
    char pop();
    CircularBuffer& push(char c);
    void display(void);
};

CircularBuffer::CircularBuffer(int _size){
   size = _size;
   buf = new char[size]; 
   read = write = buf; 
   count = 0;
}

CircularBuffer::~CircularBuffer(){
  delete[] buf;
}

char CircularBuffer::pop(){
  if( count > 0){
    char c = *read; 
    if(read == buf + size - 1) // hits the end of the array
      read = buf; //wrap around
    else
      read++;
    count--;  
    return c;
  }
  return 0;
}

CircularBuffer& CircularBuffer::push(char c){
  *write = c;
  if(write == buf + size - 1) // hits the end of the array
    write = buf; //wrap around
  else
    write++;
  if(count < size) 
    count++;
  return *this; //allows chaining the function
}

void CircularBuffer::display(void){//test function
  char *ptr = read; 
  std::cout << "==Content==\n";
  for(int i = 0 ; i < count; i++){
      std::cout << *ptr << '\t';
      if(ptr >= buf+size-1)
        ptr = buf;
      else
        ptr++;
  }
  
  std::cout << std::endl;
}

//test function
void popAndPrint(CircularBuffer &buf, int times){
  std::cout << "==Pop==\n";
  for(int i = 0 ; i < times; i++){
    std::cout << buf.pop() << std::endl;
  }
}

int main(){
  CircularBuffer buf(7);
  buf.push('1').push('2').push('3');
  buf.display();
  popAndPrint(buf, 2); 
  buf.display();
  buf.push('4').push('5').push('6').push('7').push('8').push('9');
  buf.display();
  buf.push('A').push('B');
  buf.display();
  return 0;
}

