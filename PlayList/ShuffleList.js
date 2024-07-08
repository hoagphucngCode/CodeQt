// ShuffleList.js

function shuffleArray(array) {
    console.log("Shuffling array")
    for (let i = array.count - 1; i > 0; i--) {
        const j = Math.floor(Math.random() * (i + 1));
        const tempTitle = array.get(i).title;
        array.set(i, { title: array.get(j).title });
        array.set(j, { title: tempTitle });
    }
}
