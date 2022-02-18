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

    if( st.setValue( 0,"floorCount", "55" ) )
        println("OK OK OK")
    else
        println("NO NO NO")
    if( st.setValue( 0,"colour", "BROWN" ) )
        println("OK OK OK")
    else
        println("NO NO NO")
    if( st.setValue( 2,"floorCount", "55" ) )
        println("OK OK OK")
    else
        println("NO NO NO")
    if( st.setValue( 3,"floorCount", "55" ) )
        println("OK OK OK")
    else
        println("NO NO NO")

    st.getArray()
}