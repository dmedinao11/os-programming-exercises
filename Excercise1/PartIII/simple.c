#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <asm/param.h>
#include <linux/jiffies.h>

static int simple_init(void)
{
       printk(KERN_INFO "HZ: %d\nJiffies: %d\n", HZ, jiffies);
       return 0;
}


static void simple_exit(void) {
	printk(KERN_INFO "Jiffies: %d\n", jiffies);
}

module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
