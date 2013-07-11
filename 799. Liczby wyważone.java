import java.math.BigInteger;
import java.util.Scanner;
import java.io.*;
import java.lang.Math;
//http://pl.spoj.com/problems/LICZBYW/
public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		
		   while(scanner.hasNext()) {
		 
				BigInteger n = new BigInteger(scanner.next());
				BigInteger dwa = new BigInteger("2");
				BigInteger cztery = new BigInteger("4");
				BigInteger sze = new BigInteger("6");
				
				n = n.subtract(dwa);
				n = (BigInteger)n.divide(cztery);
				n = n.multiply(cztery);
				n = n.add(sze);
				
			    System.out.println(n.toString());
	    }
	}

}
