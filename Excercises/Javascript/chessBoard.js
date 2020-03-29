const sizeGrid = 8;

let board = ""
for (let columns = 1; columns <= sizeGrid; columns++) {
    for (let rows = 1; rows <= sizeGrid; rows++) {
        if ((columns + rows) % 2 != 0) 
            board += ' ';
        else
            board += '#'; 
    }
    board += '\n';
}

console.log(board);