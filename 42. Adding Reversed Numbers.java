import java.math.BigInteger;
import java.util.Scanner;
//http://www.spoj.com/problems/ADDREV/
class Main {
        public static void main(String[] args) {
                Scanner scan = new Scanner(System.in);
                for (int t = scan.nextInt(); t-- > 0;) {
                        BigInteger a = new BigInteger(new String(charReverse(scan.next().toCharArray())));
                        BigInteger b = new BigInteger(new String(charReverse(scan.next().toCharArray())));
                        System.out.println(new BigInteger(new String(charReverse(a.add(b).toString().toCharArray()))));
                }
        }
        private static char[] charReverse(char[] in) {
                char[] c = in.clone();
                for (int i = 0; i < c.length; ++i) {
                        c[i] = in[in.length - i - 1];
                }
                return c;
        }
}
 