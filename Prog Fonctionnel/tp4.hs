data Tree a = Leaf | Branch (Tree a) a (Tree a)


example = ((Branch (Leaf) 5 Branch (Branch 3 1 Branch (Leaf 6 Leaf)))

maximum_Tree x = case x of {
Leaf -> 0;
Branch a b c -> if (b > maximum_Tree a) && (b > maximum_Tree c) then b 
                                        else if (maximum_Tree a > maximum_Tree c) then maximum_Tree a
                                                else maximum_Tree c
                                                }