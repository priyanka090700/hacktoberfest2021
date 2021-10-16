package com.company;
import java.util.*;
public class Factorial {
    public static void main(String args[] ) throws Exception {

        Scanner sc= new Scanner(System.in);
        int fact=1;
        int n=sc.nextInt();
        if(n==0 || n==1){
            fact=1;
        }else{
            for(int i=1;i<=n;i++){
                fact=i*fact;
            }

        }
        System.out.println(fact);
    }
}
