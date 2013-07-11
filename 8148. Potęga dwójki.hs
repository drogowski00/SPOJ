import IO
import Char
import Data.Array.IO
import Data.Array
import System.IO
--http://pl.spoj.com/problems/POW2/
 
main = do
         x <- readNum
         isEOF <- hIsEOF stdin
         if isEOF
           then print $ 2^x
           else do
             print $ 2^x
             main
       where
         readNum :: IO Integer
         readNum = do
           line <- getLine
           readIO line