const socket = io();
let palabraArray = []; // Array para almacenar las letras

socket.on('palabra', function (data) {
    console.log(data);
    addToWord(data);
});

function addToWord(letter) {
    palabraArray.push(letter);
    updateWordDisplay();
}

function deleteLetter() {
    palabraArray.pop();
    updateWordDisplay();
}

function updateWordDisplay() {
    const wordContainer = document.getElementById('word');
    wordContainer.innerText = `Palabra: ${palabraArray.join('')}`;
}

function speakWord() {
    const word = palabraArray.join('');
    window.speechSynthesis.speak(new SpeechSynthesisUtterance(word));
}
