var express = require('express');
var app = express();
var mongodb = require('mongodb').MongoClient;
var userRouter = express.Router();
var objectId = require('mongodb').ObjectID;
var passport = require('passport');
var path = require('path');
var userCtrl =  require('../../public/controllers/userController.js');
var env = process.env.NODE_ENV = process.env.NODE_ENV || 'devlopment';
var logger = require('morgan');
var User = require('../../public/models/model_user.js');
var jwt         = require('jwt-simple');
var router = function(){

    var username = {};
    var orders = [{}];

    var Facets = {};
    var sandwitches = [{
        name: 'Batates',
        price: '5'
    },
    {
        name: 'Batates',
        price: '5'
    },{
        name: 'Batates',
        price: '5'
    },{
        name: 'Shawrma',
        price: '5'
    }];
    Facets.menu = [{name: 'sandwitches' ,menu: sandwitches},{name: 'Pizza' ,menu: sandwitches},
    {name: 'Sori' ,menu: sandwitches},{name: 'Drinks' ,menu: sandwitches},{name: 'Drinks' ,menu: sandwitches}];

    var menu = Facets.menu;

    userRouter.route('/')
    .get(function (req,res) {
        res.render('welcome',{title:'Welcome !!'});
    });

    userRouter.route('/Signup')
    .get(function (req,res) {
        res.render('signup',{title: 'Sign Up !!!', msg:''});
    });

    require('../config/passport.js')(passport);

    userRouter.route('/auth/signup')
    .post(function (req,res) {
      userCtrl.create(req,res);
  });

    userRouter.route('/auth/signinnnnnnnnnnn')
    .post(function(req,res,next){
        var auth = passport.authenticate('local', function (err,user) {
            if(err){return next(err);}
            if(!user){res.send({sucess:false});}
            req.logIn(user, function(err){
                username = req.body.username;
                res.redirect('/menu');
            })
        })
        auth(req,res,next);
    });

userRouter.post('/auth/signin', function(req, res) {
  console.log(req.body.username)
  User.findOne({
    name: req.body.username
  }, function(err, user) {
    if (err) throw err;
    if (!user) {
      res.send({success: false, msg: 'Authentication failed. User not found.'});
    } else {
      // check if password matches
      user.comparePassword(req.body.password, function (err, isMatch) {
        if (isMatch & !err) {
          // if user is found and password is right create a token
          var token = jwt.encode(user, 'devdacticIsAwesome');
          // return the information including token as JSON
          res.json({success: true, token: 'JWT ' + token});
        } else {
          res.send({success: false, msg: 'Authentication failed. Wrong password.'});
        }
      });
    }
  });
});

userRouter.get('/memberinfo', passport.authenticate('jwt', { session: false}), function(req, res) {
  var token = getToken(req.headers);
  if (token) {
    var decoded = jwt.decode(token, 'devdacticIsAwesome');
    User.findOne({
      name: decoded.name
    }, function(err, user) {
        if (err) {
                console.log('error a user router : ')
            throw err;}
 
        if (!user) {
          return res.status(403).send({success: false, msg: 'Authentication failed. User not found.'});
        } else {
          res.json({success: true, msg: 'Welcome in the member area ' + user.name + '!'});
        }
    });
  } else {
    return res.status(403).send({success: false, msg: 'No token provided.'});
  }
});
 
getToken = function (headers) {
  if (headers && headers.authorization) {
    var parted = headers.authorization.split(' ');
    if (parted.length === 2) {
      return parted[1];
    } else {
      return null;
    }
  } else {
    return null;
  }
};

    userRouter.route('/menu')
    .all(function(req,res,next){
        if(!req.user){
            res.redirect('/');
        }
        next();
    })
    .get(function(req, res) {
        res.sendFile(path.resolve( __dirname + '/../views/userOrder.html'));
    });

    userRouter.route('/api/menu')
    .get(function (req,res) {
        res.json(menu);
    });

    userRouter.route('/api/username')
    .get(function (req,res) {
        console.log('form userrouter ');
        console.log(username);
        res.json(username);
    });
    return userRouter;
}

module.exports = router;