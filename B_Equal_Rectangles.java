import java.util.Scanner;
import java.util.Arrays;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    int t = sc.nextInt();
    while(t-->0){
        int n = sc.nextInt();
        
        int[] arr = new int[4*n];
        for(int i = 0; i<arr.length; i++){
            arr[i] = sc.nextInt();
        }
        
        Arrays.sort(arr);
        int area = arr[0]*arr[arr.length-1];
        boolean flag = true;
        
        for(int i = 0; i<n; i++){
            int left = 2*i;
            int right = 4*n-2*i-2;
            
            if(arr[left] != arr[left+1] || arr[right] != arr[right+1] || arr[left]*arr[right] != area){
                flag = false;
                break;
            }
        }
        
        if(flag == true){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        
    }

  }
}