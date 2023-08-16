#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/module.h>


static int __init driver_init(void)
{
        printk("Hello, world! Wellcome to my first driver in linux\n");
        return 0;
}

static void __exit driver_exit(void)
{
        printk("bye, this is my driver\n");
        return;
}

module_init(driver_init);
module_exit(driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("JONATAS FERNANDES");
MODULE_DESCRIPTION("MY FIRST DRIVER LINUX");                      
