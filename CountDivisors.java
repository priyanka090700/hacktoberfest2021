package com.company;

import java.util.*;

public class CountDivisors {
    public static void main(String args[] ) throws Exception {
        

        // Write your code here
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int r = sc.nextInt();
        int k = sc.nextInt();
        int c = 0;

        for (int i = l; i <= r; i++) {
            if (i % k == 0) {
                c++;
            }
        }
        System.out.println(c);
    }
}
