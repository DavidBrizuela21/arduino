const http = require('http');
const express = require('express');
const socketIO = require('socket.io');

const app = express();
const server = http.createServer(app);
const io = socketIO(server);

app.use(express.static(__dirname + '/public'));
server.listen(8000, function(){console.log('server on port', 8000);});

//COMUNICACION SERIAL
const {SerialPort} = require('serialport');
const {ReadlineParser} = require('@serialport/parser-readline');

const port = new SerialPort({path:"COM3", baudRate: 9600});
const parser = port.pipe(new ReadlineParser({ delimiter: '\r\n' }))

port.on('open', function () {
  console.log('connection is opened');
});

let palabraActual = ''; // Variable para almacenar la palabra actual

parser.on('data', function (data) {
  let letra = data.trim(); // Elimina espacios y caracteres de nueva línea
  console.log(letra);

  if (letra === ' ') {
    // Espacio en blanco indica el final de una palabra
    io.emit('palabra', palabraActual);
    palabraActual = ''; // Reinicia la variable para la próxima palabra
  } else {
    palabraActual += letra; // Concatena la letra a la palabra actual
  }
});


parser.on('error', (err) => console.log(err));
port.on('error', (err) => console.log(err));