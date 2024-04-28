fun main(){
    val t = readln().toInt()
    val r = readlnOrNull()?.split(' ')
    var p = 0
    repeat(t-1) {
        if(r?.get(it)!! < r.get(it+1)) p++
    }
    println(p+1)
}