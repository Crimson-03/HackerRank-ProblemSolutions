// Krishan Kumar
// 27-10-2022



// Write your Student class here
class Student{
    int scores[5];
    public:
       void input(){
           for (int i = 0; i<5; i++) {
                cin>>scores[i];    
           }
       }
       int calculateTotalScore(){
           int sum = 0;
           for (int i = 0; i<5; i++) {
               sum += scores[i];
           }
           return sum;
       }
};

