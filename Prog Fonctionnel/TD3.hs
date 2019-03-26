fib n = do
    if n == 0 then 0
    else if n == 1 then 1
    else (fib (n-1) + fib (n-2))

suite n a r = if n == 0 then a else r + suite (n-1) (a) r

puissance (x,n) = if n == 0 then 1 else (x * puissance (x,n-1))

primetest n = primetestaux (n,n-1)

primetestaux (n,count) = if count == 1 then True
                            else if ((n `mod` count) == 0) then False
                                    else primetestaux (n,count-1)

