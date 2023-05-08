  char name[80];
    int roll;

    public:
    object(){
        strcpy(name,"");
        roll=0;
    }
    object(char* name, int roll){
       strcpy(this->name,name);
        this->roll=roll;
    }