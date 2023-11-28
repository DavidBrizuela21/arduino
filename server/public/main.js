const socket = io();
const wordContainer = document.getElementById('word');
const speakButton = document.getElementById('speak-button');

socket.on('palabra', function (data) {
    console.log(data);
    wordContainer.innerHTML = `Palabra: ${data}`;
});

function speakWord() {
    const word = wordContainer.innerText.split(': ')[1];
    window.speechSynthesis.speak(new SpeechSynthesisUtterance(word));
}