//User function Template for C

bool prime(int n){
    
    if(n==0 || n==1){
        return false;
    }
    //Write your code here
    //returns a boolean value 
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
    
}
