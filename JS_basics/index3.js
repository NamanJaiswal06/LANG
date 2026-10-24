//adding 100para
// const t1 = performance.now();
// for(let i=1; i<=100 ; i++){
//     let newElement = document.createElement('p');
//     newElement.textContent = 'This is para ' + i;
//     document.body.appendChild(newElement);
     



// }


//optimising a bit
// let myDiv = document.createElement('div');
// for(let i = 1 ;i<=100 ; i++){
//     let newElement = document.createElement('p');
//         newElement.textContent = 'This is para ' + i;
//         myDiv.appendChild(newElement);

// }
// document.body.appendChild(myDiv);
// const t2 = performance.now();
// console.log("this took " + (t2-t1) + "ms");




//fragments
// let fragment = document.createDocumentFragment();
// for(let i=1; i<=100 ; i++){
//     let newElement = document.createElement('p');
//     newElement.textContent = 'This is para ' + i;
//     fragment.appendChild(newElement);
// }
// document.body.appendChild(fragment); //1reflow //1repaint




function addPara() {
    let para = document.createElement('p');
    para.textContent = 'Js is Single';
    document.body.appendChild(para);
}

function appendNewMessage() {
    let para = document.createElement('p');
    para.textContent = 'kya haal chaal';
    document.body.appendChild(para);
}


addPara();
appendNewMessage();