/*    2017/11/7 
 *    This code is sample driver code to map the memory. 
 *
 * */


#include<linux/module.h>
#include<linux/init.h>
#include<asm/io.h>

// Init module
int memory_module( void ){ 
   char * reg;

   printk( KERN_INFO "Memory INIT process.\n" ); 
    
   reg = ioremap_nocache(0xFEC0000, 4);
      
   if(reg == NULL ){
      printk("Failed to map I/O \n");
      iounmap(reg);
   }


   return 0; 
} 



// Unload module
void exit_module( void ){ 
  printk( KERN_INFO "END process !!\n" ); 
} 

module_init(memory_module);

module_exit(exit_module);
