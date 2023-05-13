module lista1Koka

pub fun main()
  println("Ex1:")
  println(ehTriangulo(10,20,30).show)
  println(ehTriangulo(5,3,3).show)
  println(ehTriangulo(5,3,3).show)
  println("Ex2:")
  println(tipoTriangulo(5,5,5).show)
  println(tipoTriangulo(5,3,3).show)
  println(tipoTriangulo(5,3,4).show)
  println("Ex3:")
  println(triangulo(15,6,5).show)
  println(triangulo(5,3,4).show)
  println(triangulo(5,3,3).show)
  println("Ex4:")
  println(somaPares(5).show)
  println(somaPares(8).show)
  println("Ex5:")
  println(somaPot2m(6,4).show)
  println(somaPot2m(3,3).show)
  println("Ex6:")
  println(primo(37).show)
  println(primo(10).show)
  println("Ex7:")
  println(seriePI(100.0).show)
  println(seriePI(10000.0).show)

fun ehTriangulo(a : int, b : int, c : int) : bool
  if a + b > c && b + c > a && a + c > b then True else False

fun tipoTriangulo(a : int, b : int, c : int) : string
  if a == b && b == c then "equilatero"
  elif a == b || b == c || a == c then "isosceles"
  else "escaleno"

fun triangulo(a : int, b : int, c : int) : string
  if ehTriangulo(a,b,c) then tipoTriangulo(a,b,c) else "nao eh um triangulo"

//div : may diverge (recursion)
fun somaPares(n : int) : div int
  if n == 0 then
    0
  elif n % 2 == 0 then
    n + somaPares(n - 2)
  else
    somaPares(n - 1)

fun somaPot2m (m : int, n : int) : div int
  if n == 0 then m else m*2^n + somaPot2m(m, (n - 1))

fun primo(a : int) : div bool
  var i := a - 1
  var primo := True
  while {i > 1}
    if a % i == 0 then primo := False
    i := i - 1
  primo

fun seriePI(n : float64) : div float64
  var d := 1.0
  var s := 1.0
  var soma := 0.0
  while {d < n}
    soma := soma + (4.0/d)*s
    d := d + 2.0
    s := s * (-1.0)
  soma