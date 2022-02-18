import java.io.*;

public class Main{
    public static void main(String[] args) throws Exception{
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pr = new PrintWriter(System.out);

        //Code Here
        int t = Integer.parseInt(br.readLine());
        while(t-->0){
            int n = Integer.parseInt(br.readLine());
            long[] a = new long[n];
            long[] b = new long[n];

            for(int i = 0; i<n; i++){
                String[] inp = br.readLine().split(" ");
                a[i] = Long.parseLong(inp[0]);
                b[i] = Long.parseLong(inp[1]);
            }

            long sum = 0;
            for(int i = 0; i<n; i++){
                int j = (i+1)%n;
                sum += Math.max(0,a[j]-b[i]);
            }

            long min = Long.MAX_VALUE;
            for(int i = 0; i<n; i++){
                int j = (i+1)%n;
                min = Math.min(min,sum-Math.max(0,a[j]-b[i])+a[j]);
            }
            pr.println(min);
        }
        pr.close();
    }
}