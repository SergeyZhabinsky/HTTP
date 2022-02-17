import com.zhabinsky.firstlesson.data.Start

//import sun.jvm.hotspot.oops.CellTypeState.value



class Homo{
    var age : Int = 18
    set(value3){
        if(value3 in 15..20)
            field = value3
        else
            field = 9
    }

}


fun main(args: Array<String>) {
    val st = Start();
    st.getArray()
/*
    var h = Homo()
    h.age = 15
    println("Hello World! " + h.age)
    h.age = 16
    println("Hello World! " + h.age)
    h.age = 17
    println("Hello World! " + h.age)
    h.age = 18
    println("Hello World! " + h.age)
    h.age = 19
    println("Hello World! " + h.age)
    h.age = 20
    println("Hello World! " + h.age)
    h.age = 21
    println("Hello World! " + h.age)

    var w1 = Weather("Moscow", -7)
    var w2 = Weather("London")
    var w3 = Weather( temperature = 2)
    println(w1.town + " = " + w1.temperature)
    println(w2.town + " = " + w2.temperature)
    println(w3.town + " = " + w3.temperature)

    for(i in 1 .. 6){
        println("O")
    }
*/
    // Try adding program arguments at Run/Debug configuration
//    println("Program arguments: ${args.joinToString()}")
}