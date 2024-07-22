function test(){
    // let i = 342;
    for(let i=0;i<=5;i++){
    setTimeout(function f() {
        console.log(i);
    }, 1000); 
    }
}
console.log("hello");
test();
// ouput: hello 342

