// write a method to replace all spaces in a string with '%20'.
// you may assume that the string has sufficient space at the end
// to hold the additional characters, and that you are
// given the 'true' length of the string.

function URLify(str) {
 return str.trim().split(' ').join('%20'); 
}

console.log(URLify('Mr John Smith     '));