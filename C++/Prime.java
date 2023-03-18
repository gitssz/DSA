class Prime{
     public static void main(String[] args) {
    int n=40;
        boolean arr[]= new boolean[n+1];      //u have to include 40 also 
        // System.out.println(arr[3]); 
     
        // Boolean ans=isPrime(9);
        // System.out.println(ans);
    //     for(int i=2;i<40;i++){
    //         // System.out.print();          //prime nos between 1 to 40
    //         if(isPrime(i)){
    //         System.out.println(i);          //o(n*sqrt(n))
    //     }
    // }

    seive(n, arr);
}


static boolean isPrime(int n){
for (int i=2;i<=Math.sqrt(n);i++){
    if(n%i==0){
        return false;
    }
}
return true;
}

// arr[0]=false, arr[1]=false, arr[2]=false............
static void seive(int n, boolean[] primes){
// #by deafult elements in boolean array are false
    for(int i=2;i*i<=n;i++){            //i<=sqrt(n).....squaring both sides
            //false - isprime , true- not prime
        if(!primes[i]){         // if i is true 
            for(int j=i*2;j<=n;j+=i){
                primes[j]=true;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(!primes[i]){
            System.out.println(i);
        }
    }
}

}