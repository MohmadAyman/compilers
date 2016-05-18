var mongoose = require('mongoose');
var Schema = mongoose.Schema;
var bcrypt = require('bcrypt');

mongoose.connect('mongodb://mm:00@ds027739.mlab.com:27739/users');

var requiredStringValidate = [
	function(val){
		var testVal = val.trim();
		return (testVal.length>0)
	},
	'Feild Cannot be left empty'];
var orderSchema = new Schema({
    createdAt: {type: Date, default: Date.now},
    cost:  Number,
    paid: {type: Boolean, default: false},
    client: String
});

var userMongoose = new Schema({
    name: {type:String, required:true, validate: requiredStringValidate},
    password : {type:String,required:true,validate: requiredStringValidate},
    email: {type:String,required:true,validate: requiredStringValidate},
    isActive: {type: Boolean, default: true},
    ordered: {type: Boolean, default: false},
    order: [orderSchema]
});

userMongoose.pre('save', function (next) {
    var user = this;
    if (this.isModified('password') || this.isNew) {
        bcrypt.genSalt(10, function (err, salt) {
            if (err) {
                return next(err);
            }
            bcrypt.hash(user.password, salt, function (err, hash) {
                if (err) {
                    return next(err);
                }
                user.password = hash;
                next();
            });
        });
    } else {
        return next();
    }
});

userMongoose.methods.comparePassword = function (passw, cb) {
    bcrypt.compare(passw, this.password, function (err, isMatch) {
        if (err) {
            return cb(err);
        }
        cb(null, isMatch);
    });
};

module.exports = mongoose.model('user',userMongoose);