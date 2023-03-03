const mysql = require('mysql')

const connectdb=()=>{
  var connection = mysql.createConnection({     
    host     : 'localhost',       
    user     : 'root',              
    password : 'zlp0404',       
    port: '3306',                   
    database: 'webscoket' 
})
  return connection;
}

module.exports=connectdb;
