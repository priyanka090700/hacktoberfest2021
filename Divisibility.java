package com.company;
import java.util.*;
public class Divisibility {
    public static void main(String args[] ) throws Exception {


        // Write your code here
        Scanner sc = new Scanner(System.in);
        int N=sc.nextInt();
        int num=0;
        int[] arr=new int[N];
        for(int i=0;i<N;i++){
            arr[i]=sc.nextInt();
        }

        if(arr[N-1]%10==0){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
        sc.close();
    }
}
