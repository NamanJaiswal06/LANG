// document.addEventListener('click' , function(){
//     console.log('I have clicked on it');
// });

//  function eventFunction() {
//     console.log('I have clicked on the document');
//  }

//  document.addEventListener('click' , eventFunction);
//  document.removeEventListener('click' , eventFunction);
//  const content = document.querySelector('#wrapper');
//  content.addEventListener('click' , function(event){
//     console.log(event);
//  });

// let myDiv = document.createElement('div');

// function paraStatus(event){
//     console.log('Para' + event.target.textContent);
// }
// myDiv.addEventListener('click' , paraStatus); 
// for(let i = 1 ; i<=100 ; i++){
//     let newElement = document.createElement('p');
//     newElement.textContent = 'this is para' + i;

//     // newElement.addEventListener('click', function(event){
//     //     console.log('i have clicked on para');

//     // });
//     myDiv.appendChild(newElement);

// }
// document.body.appendChild(myDiv);
let element = document.querySelector('#wrapper');
element.addEventListener('click' , function(event){
    if(event.target.nodeName ==='SPAN'){
        console.log('span pr click kiya hai' + event.target.textContent);}
    
})