#include "NODE.h"

class MU_person:public NODE{
private: 
  /*long id;
	string name;*/
protected://ถ้าแปะใน protected ลูก(student)จะเข้าถึงได้
  long id;
	std::string name;

public:
	MU_person(long=112, string = "Pakchee"); //รับมาจาก thai 2 ค่า เลยต้องเพิ่มมาอีก 2 ค่า
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  std::cout<<"Destructor id="<<id<<std::endl;
}
MU_person::MU_person(long x,string n):NODE(x){
   	  // Set up all MU_Person values
        id = x;
        name = n;

        std::cout<<"MU person constructor "<<id<<std::endl;
         //cout<<"Name: "<<name<<endl;
}

void MU_person::display_person(){
  //display_Thai();

  std::cout<<"Show info per person"<<std::endl;
  std::cout<<"Name: "<<name<<std::endl;
  std::cout<<"id: "<<id<<std::endl;
  std::cout<<std::endl;
}
