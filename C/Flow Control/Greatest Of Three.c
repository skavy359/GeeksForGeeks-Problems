//User function Template for C


int find_greatest_number(int a, int b, int c){
    // Write your code here..
    if(a>=b && a>=c){
        return a;
        
    }
    else if(b>=a && b>=c){
        return b;
        
    }
    if(c>a && c>b){
        return c;
        
    }
}