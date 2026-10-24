
//sync code
// function sync() {
//     console.log('first');
// }
// sync();
// console.log('second');

//async code
// setTimeout(function () {
//     console.log('third');

// } , 3000);
// function sync() {
//     console.log('first');
// }
// sync();
// console.log('second');


//promise

// let meraPromise = new Promise(function( resolve , reject){
//     // console.log('im inside promise');
//     // resolve(1998);
//     setTimeout(function() {
//         console.log('im inside promise');

//     } , 5000);
//     // resolve(2330);
//     reject(new Error('bhaisaab error aaye hai'));
// });
// console.log('pehla');

// let meraPromise1 = new Promise(function( resolve , reject) {
//     setTimeout(function() {
//         console.log('im inside promise 1');

//     } , 5000);
//     reject(2233);
// });
// // meraPromise1.then((value) => { console.log(value)});
// meraPromise1.catch((error) => {console.log("recieved an error")});
// let waadaa1 = new Promise(function(resolve , reject) {
//     setTimeout(() => {
//         console.log('setTimeout started');
//     } , 2000);
//     resolve(true);
// });
// waadaa1.then(() =>{
//     let waadaa2 = new Promise(function(resolve , reject){
//         resolve('waadaa 2 resolved');

//     })
//     return waadaa2;
// }).then((value) => console.log(value));


//async function
// async function abcd(){
//     return 7;
// };

async function utility() {

let delhiMausam = new Promise((resolve , reject) =>{
    setTimeout(() => {
        resolve("delhi me garmi hai");
    } , 1000);
});

let hydraMausam = new Promise((resolve , reject) =>{
    setTimeout(() => {
        resolve("delhi me cool hai");
    } , 5000);
});

let dM = await delhiMausam;
let hM = await hydraMausam;
return [dM , hM];

}


