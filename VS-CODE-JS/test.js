
var person = {};
Object.defineProperties(person, {
  _age: {
    value: 18
  },

  edition: {
    value: 1
  },

  age: {
    get: function(){
      return this._age;
    },
    set: function(newValue){
      this._age = newValue;
    }
  }
});
for(let i in person){
  console.log(person[i]);
}
console.log(person.edition);