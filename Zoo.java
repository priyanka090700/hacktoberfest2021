package com.company;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
import java.util.Scanner;
public class Zoo {
    public static void main(String args[] ) throws Exception {
       // InputStreamReader r =new InputStreamReader(System.in);
        //BufferedReader br =new BufferedReader(r);
        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        int l,t;
        t=str.indexOf('o');
        l=str.length();
        if((2*t)==(l-t)){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
        sc.close();
    }
}
