
 //line below is used to print on the console window
    //     console.log('Namaste Dunia');
    // let lastName = 'naman';
    // lastName = 5;
    // let person = {
    //     fName : 'naman',
    //     lName: 'jaiswal',
    //     get fullName(){
    //         return `${person.fName} ${person.lName}`;
    //     },
    //     set fullName(value){
    //         if(typeof value !== String){
    //             throw new Error("you have not  sent a string")
    //         }
    //         let parts = value.split(' ');
    //         this.fName = parts[0];
    //         this.lName = parts[1];
    //     }
    // };


    // try{
    //     person.fullName = true;

    // }
    // catch(e){
    //     alert(e);
    // }


    let arr = [1 , 2, 3, 4];
    // let total = 0;
    // for(let value of arr){
    //     total = total +value;

    // }
    // console.log(total);




   let totalSum= arr.reduce((accumulator , currentValue) => accumulator +currentValue ,0) ;
     console.log(totalSum);