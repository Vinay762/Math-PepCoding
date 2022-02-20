import java.util.*;

public class Main {

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    // your code here
    long n = scn.nextInt();
    long sum = 0;
    long maxi = 0;
    
    for(int i = 0; i<n; i++){
        int x = scn.nextInt();
        sum += x;
        maxi = Math.max(maxi, x);
    }
    
    long ans = sum/(long)(n-1);
    if(ans < maxi)ans = maxi;
    if(ans*(n-1) < sum)ans++;
    System.out.println(ans);
  }
}