// var passport = require('passport');

// module.exports = function (app) {
// 	// body...
	// app.use(passport.initialize());
	// app.use(passport.session());
// 	passport.serializeUser(function(user,done) {
// 		done(null, user);		// body...
// 	});
// 	passport.deserializeUser(function(user,done) {
// 		done(null, user);		// body...
// 	});
// 	require('./strategies/local.strategy.js')();
// };

var JwtStrategy = require('passport-jwt').Strategy;
var ExtractJwt = require('passport-jwt').ExtractJwt;
var JWT_STRATEGY_CONFIG = {
  jwtFromRequest: ExtractJwt.fromAuthHeader(),
};
// load up the user model
var User = require('../../public/models/model_user.js');
//var config = require('../config/database'); // get db config file
 
module.exports = function(passport) {
  var opts = {};
  opts.jwtFromRequest = ExtractJwt.fromAuthHeader();
  opts.secretOrKey = 'devdacticIsAwesome';
  passport.use(new JwtStrategy(opts, function(jwt_payload, done) {
    User.findOne({id: jwt_payload.id}, function(err, user) {
          if (err) {
              return done(err, false);
          }
          if (user) {
              done(null, user);
          } else {
              done(null, false);
          }
      });
  }));
};