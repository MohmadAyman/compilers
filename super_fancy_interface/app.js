var fs = require('fs');
var bodyParser = require('body-parser');
var express = require('express');
var app = require('express')();
var util = require('util');
var server = require('http').Server(app);
var io = require('socket.io')(server);


// var spawn = require('child_process').spawn;
// var gzserver;
// gzserver = spawn('compiler ' , [' < source.c']);

// gzserver.stdout.on('data', (data) => {
//   console.log(`stdout: ${data}`);
// });

app.use(bodyParser.urlencoded({
    extended: true
}));
app.use(bodyParser.json());

app.use(express.static('public'));
app.set('views',__dirname+'/src/views');

app.set('view engine', 'ejs');


app.get('/main', function (req, res) {
    res.sendFile(__dirname+'/user.html');
});

app.post('/compile', function (req, res) {
    var source = req.body.source;
    // check if already exists
    fs.exists('source.txt', (exists) => {
        console.log(exists);
        if(exists){

        fs.unlinkSync(__dirname+'/source.txt');
        console.log('successfully deleted source.txt');
    }
    });
    fs.appendFile('source.txt', source , (err) => {
      if (err) throw err;
      console.log('The "data to append" was appended to file!');
  });
    var exec = require('child_process').exec
    const child = exec('compiler < source.txt' , (error, stdout, stderr) => {
      if (error) {
        throw error;
    }
    console.log(stdout);
    res.render('welcome',{output: stdout});
});
});

// POST method route
app.post('/read_paths', function (req, res) {
    in_path = req.body.in_path;
    out_path = req.body.out_path;
        // res.render('welcome',{output: source});
        console.log(in_path);
        var exec = require('child_process').exec
        const child = exec('compiler <' + in_path, (error, stdout, stderr) => {
          if (error) {
            throw error;
        }
        console.log(stdout);
        res.render('welcome',{output: stdout});
    });


    });

// router.route('/compile')
// .post(function (req,res) {
//     source = req.body.source;
//     console.log(urce);

//    res.render('welcome');
// });

// router.route('/read_paths')
// .post(function (req,res) {
//     in_path = req.body.in_path;
//     out_path = req.body.out_path;
//        res.render('welcome');
//         console.log(in_path + out_path);
//           // res.sendfile(__dirname + '/public/index.html');
//           fs.appendFile('source.txt', source , (err) => {
//               if (err) throw err;
//               console.log('The "data to append" was appended to file!');
//           });
//       });



var port = 8088; 
server.listen(port,function(err){
    console.log('running on server at port '+ port);
})