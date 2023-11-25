const socket = io();

const flex = document.getElementById('flexion');

socket.on('flex', function (data) {
  console.log(data);
  flex.innerHTML = `${data} GRADOS DE FLEXION`;
});