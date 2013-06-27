import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;
import java.io.*;
import java.lang.Math;
//http://pl.spoj.com/problems/TDIVL/
public class Main {

	public static void main(String[] args) throws IOException {

		 Scanner scanner = new Scanner(System.in);
		 int t = scanner.nextInt();
		
          while(scanner.hasNext()) {
        	 BigInteger x = new BigInteger(scanner.next());
        	 BigInteger y = new BigInteger(scanner.next());
        	 BigInteger z = x.remainder(y);
        	 BigInteger zero = new BigInteger("0");
        	 
        	 		if (z.compareTo(zero) == 0)
        	 		System.out.println("TAK");
    			   else
    				System.out.println("NIE");
         }	
	}
}