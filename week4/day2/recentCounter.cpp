class RecentCounter {
public:
    vector<int> q{3005,0};
    int head=0,tail=0;
    
    RecentCounter() {
        
    }
    void enq(int t){
        if(tail==3007){
            q[0]=t; tail=1;
        }
        else{
            q[tail]=t; tail++;
        }
    }
    int len(){
        if(tail>=head) return tail-head;
        else return (tail+3006-head+1);
    }
    void deq(){
        if(head==tail) {
            head=0; tail=0;
        }
        else if(head==3006 && tail!= 3007) head=0;
       else head++;
    }

    int ping(int t) {
        enq(t);
        if(q[head]>=t-3000) return len();
        else {
            while(q[head]<t-3000) deq();
            return len();
        } 
        
    }
    
    
};
