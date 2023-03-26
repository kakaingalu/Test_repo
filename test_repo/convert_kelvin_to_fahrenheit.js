// Declared a variable named kelvin and assigned 293
const kelvin = 273;
// conversion take place here where celsius is 273 less than kelvin 
const celsius = kelvin - 273;
// And now conversion of of celsius to fahrenheit 
let fahrenheit = celsius * (9/5) + 32;
// round down fahrenheit from decimal
Math.floor(fahrenheit);

console.log(`The temperature is ${fahrenheit} degrees fahrenheit.`)
