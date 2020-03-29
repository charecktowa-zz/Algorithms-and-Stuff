let eNumber = 0;

let counter = 0;
while (counter < 100) {
    // first calculate the factorial
    let factorial = 1;
    let anotherCounter = counter;
    while (anotherCounter > 0) {
        factorial *= anotherCounter;
        anotherCounter--;
    }
    eNumber += 1.0 / (factorial);
    counter++;
}

console.log(eNumber);