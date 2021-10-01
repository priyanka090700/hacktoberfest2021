package beginner;

import java.util.Scanner;

public class ZOcount {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
        String a=s.nextLine();
        int t=a.length();
        int l=a.indexOf("o");
        if((2*l)==(t-l)) {
        	System.out.println("Yes");
        }
        else {
        	System.out.println("No");
        }
        
        
        s.close();

	}

}
