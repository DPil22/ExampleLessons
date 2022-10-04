module Recursion where

getLastElement :: [a] -> a
getLastElement (a:[]) = a
getLastElement (a:bz) = getLastElement bz

mySum :: Num a => [a] -> a
mySum ([]) = 0
mySum (a:bz) = a + mySum bz

myProduct :: Num a => [a] -> a
myProduct ([]) = 1
myProduct (a:bz) = a * myProduct bz
