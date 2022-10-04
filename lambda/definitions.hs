module Definitions where

test :: Int
test = 1

increment :: Int -> Int
increment a = a + 1

canDivide :: Int -> Int -> Bool
canDivide a b = a `mod` b == 0

isEven :: Int -> Bool
isEven x = x `mod` 2 == 0

isOdd :: Int -> Bool
isOdd x = not (isEven x)
