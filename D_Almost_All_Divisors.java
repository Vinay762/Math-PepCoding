import java.util.*;

public class Main {
    
    public static boolean containAllDivs(ArrayList<Long> ar, Long x){
        ArrayList<Long> ori = new ArrayList<Long>();
        
        long cdiv = 2;
        while(cdiv*cdiv <= x){
            if(x % cdiv == 0){
                ori.add(cdiv);
                if(x/cdiv != cdiv){
                    ori.add(x/cdiv);
                }
            }
            cdiv++;
        }
        Collections.sort(ori);
        return ar.equals(ori);
    }

  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    // your code here
    int T = scn.nextInt();
    while(T-- > 0){
        int n = scn.nextInt();
        ArrayList<Long>ar = new ArrayList<Long>();
        for(int i = 0; i<n; i++){
            long x = scn.nextLong();
            ar.add(x);
        }
        
        Collections.sort(ar);
        long ans = ar.get(0)* ar.get(ar.size()-1);
        
        boolean bad = false;
        for(long x : ar){
            if(ans % x > 0){
                bad = true;
                break;
            }
        }
        
        if(bad || !containAllDivs(ar,ans))System.out.println(-1);
        else System.out.println(ans);
    }
  }
}