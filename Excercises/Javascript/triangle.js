for (let rows = 1; rows <= 7; rows++) {
    for (let nRows = 1; nRows <= 7 - rows; nRows++) {
        process.stdout.write("#");
    }
    console.log("");
}