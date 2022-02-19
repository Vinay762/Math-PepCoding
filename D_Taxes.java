import java.util.*;

public class Main {
    
    static boolean isPrime(long x){
        if(x <= 1)return false;
        for(int i = 2; i*i <= x; i++){
            if(x%i == 0)return false;
        }
        return true;
    }

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    // your code here
    long n = scn.nextLong();
    if(isPrime(n))System.out.println(1);
    else if(n%2 == 0)System.out.println(2);
    else{
        if(isPrime(n-2))System.out.println(2);
        else System.out.println(3);
    }
  }
}