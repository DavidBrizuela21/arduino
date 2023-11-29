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

parser.on('data', function (data) {
  let palabra = data.trim();
  console.log(palabra);
  io.emit('palabra', palabra);
});


parser.on('error', (err) => console.log(err));
port.on('error', (err) => console.log(err));