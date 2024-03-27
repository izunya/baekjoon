fun main(){
    val t = readln().toInt()
    repeat(t){
        val a = readln().toInt()
        val res = (a%100)/ (a+1)
        println(a%100)
        println(res)
    }
}