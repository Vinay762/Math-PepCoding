import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int n = sc.nextInt();
    int m = sc.nextInt();
    
    boolean[] row = new boolean[n];
    boolean[] col = new boolean[n];
    
    long er = n;
    long ec = n;
    
    while(m-->0){
        int r = sc.nextInt();
        int c = sc.nextInt();
        
        if(row[r-1] == false){
            row[r-1] = true;
            er--;
        }
        
        if(col[c-1] == false){
            col[c-1] = true;
            ec--;
        }
        System.out.print(er*ec+" ");
    }

  }
}