// given two strings, write a method to decide if
// one is a permutation of the other.

function checkPermutation(str1, str2) {
  // check the lengths.
  // if lengths don't match, they can't be permutations
  if(str1.length !== str2.length) return false;
  else {
    // check if both strings are equal
    if(str1 === str2) return false;

    // create a hashmap of characters and count of each character
    // then compare the hashmap
    var myMap1 = {}
    var myMap2 = {}
    for(var i in str1.split('')) {
      if(myMap1[str1[i]]) myMap1[str1[i]] += 1;
      else myMap1[str1[i]] = 1;
    }
    for(var i in str2.split('')) {
      if(myMap2[str2[i]]) myMap2[str2[i]] += 1;
      else myMap2[str2[i]] = 1;
    }
    for(var i in myMap1) {
      if(!myMap1[i] || !myMap2[i] || myMap1[i] !== myMap2[i]) return false;
    }
  }
  return true;
}

console.log(checkPermutation('hello', 'loehl')); // should output true
console.log(checkPermutation('hello', 'loeha')); // should output false
console.log(checkPermutation("god      ", 'dog')); // should output false

// this is a O(n) solution.