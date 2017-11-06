#include<linux/module.h>
#include<linux/init.h>

int  hello_module( void ){ 
  printk( KERN_INFO "INIT process.\n" ); 
  return 0; 
} 


void exit_module( void ){ 
  printk( KERN_INFO "END process !!\n" ); 
} 

module_init(hello_module);

module_exit(exit_module);
