/*ofd.c -Our First Driver Codr */
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>
#include<linux/types.h>
#include<linux/kdev_t.h>
#include<linux/fs.h>

static dev_t first; //Global variablr for the first device number

static int __init ofd_init(void) /*Constructor */
{
	printk(KERN_INFO "Hi: ofd registered");
     	if(alloc_chrdev_region(&first, 0, 3, "Siva") < 0)
	{
	  return -1;
	}
	printk(KERN_INFO "<Major, Minor>: <%d, %d>\n", MAJOR(first), MINOR(first));
	return 0;
}

static void __exit ofd_exit(void) /*Destructor*/
{
        unregister_chrdev_region(first, 3);
	printk(KERN_INFO "Bye: ofd unregistered");
}

module_init(ofd_init);
module_exit(ofd_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Siva KUmar");
MODULE_DESCRIPTION("Our First Driver");

