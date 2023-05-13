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

fun ehTriangulo(a : int, b : int, c : int) : bool
  if a + b > c && b + c > a && a + c > b then True else False

fun tipoTriangulo(a : int, b : int, c : int) : string
  if a == b && b == c then "equilatero"
  elif a == b || b == c || a == c then "isosceles"
  else "escaleno"

fun triangulo(a : int, b : int, c : int) : string
  if ehTriangulo(a,b,c) then tipoTriangulo(a,b,c) else "nao eh um triangulo"

fun somaPares(n : int) : div int
  if n == 0 then
    0
  elif n % 2 == 0 then
    val i = n - 2
    n + somaPares(i)
  else
    val i = n - 1
    somaPares(i)