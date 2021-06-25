fun main() {

  var cnt    = 0
  val input  = List(4) {
    readLine()!!.toInt()
  }

  for (l in 0..input[0]) {
    for (m in 0..input[1]) {
      for (n in 0..input[2]) {
        if (input[3] == (500*l)+(100*m)+(50*n)) {
          cnt++
        }
      }
    }
  }
  
  println(cnt)

}