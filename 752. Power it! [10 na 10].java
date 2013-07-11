import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner;
import java.io.*;
import java.lang.Math;
//http://pl.spoj.com/problems/MPOWER/
public class Main {

	public static void main(String[] args) throws IOException {

		  Scanner scanner = new Scanner(System.in);
		  int t = scanner.nextInt();
		
          while(scanner.hasNext()) {
        	 BigInteger x = new BigInteger(scanner.next());
        	 BigInteger y = new BigInteger(scanner.next());
        	 BigInteger n = new BigInteger(scanner.next());
			 System.out.println(x.modPow(y,n));
         }
	}
	
}