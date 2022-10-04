module Lists where

listFromTo :: Enum a => a -> a -> [a]
listFromTo a b = [a .. b]

doubleTuple :: (a, b) -> ((a, b), (a, b))
doubleTuple a = (a, a)

generateEvenListUntil :: Integral a => a -> [a]
generateEvenListUntil a = [x | x <- [1..a], even x]

isEmpty :: [a] -> Bool
isEmpty [] = True
isEmpty _ = False

getHead :: [a] -> a
getHead (a:_) = a

getTail :: [a] -> [a]
getTail (_:bz) = bz
