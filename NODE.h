class NODE{
      int data;
      NODE* next;
public:
        NODE(int);
        void show_node();
        void insert(NODE*&);
        NODE* move_next();
        ~NODE();
      };

 /*NODE::NODE(int n){
	data = n;
	std::cout<<"NODE constructor"<<std::endl;
 }*/
