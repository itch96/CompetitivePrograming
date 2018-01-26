// Implement an algorithm to determine if a string has all unique characters.
// What if you cannot use additional data structures?

function isUnique(inputString) {
  inputString += ''; // casting it to string
  var myMap = {}; // using hashmap to store the characters.
  for(var i = 0; i < inputString.length; i ++) {
    if(myMap[inputString[i]]) {
      myMap[inputString[i]] += 1;
    } else {
      myMap[inputString[i]] = 1;
    }
  }
  for(var i in myMap) {
    if(myMap[i] > 1) return false;
  }
  return true;
}

function isUnique2(inputString) {
  // this is without using additional data structure
  inputString += ''; // casting it to string
  for(var i = 0; i < inputString.length; i ++) {
    for(var j = (i + 1); j < inputString.length; j ++) {
      if(inputString[i] === inputString[j]) return false;
    }
  }
  return true;
}

console.log(isUnique('helo')); // should output true
console.log(isUnique('hello')); // should output false
console.log(isUnique2('helo')); // should output true
console.log(isUnique2('hello')); // should output false

// isUnique(string) takes O(n) time complexity and O(n) space complexity.
// isUnique2(string) takes O(n^2) time complexity and O(1) space complexity.
