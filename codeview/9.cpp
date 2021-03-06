Boot Info Script e7fc706 + Boot-Repair extra info      [Boot-Info 9Feb2015]


============================= Boot Info Summary: ===============================

 => No boot loader is installed in the MBR of /dev/sda.
 => No known boot loader is installed in the MBR of /dev/sdc.

sda1: __________________________________________________________________________

    File system:       vfat
    Boot sector type:  Unknown
    Boot sector info:  According to the info in the boot sector, sda1 starts 
                       at sector 0. But according to the info from fdisk, 
                       sda1 starts at sector 40.
    Operating System:  
    Boot files:        /EFI/Boot/bootx64.efi /EFI/refind/refind_x64.efi 
                       /EFI/tools/gptsync_x64.efi /EFI/ubuntu/MokManager.efi 
                       /EFI/ubuntu/grubx64.efi /EFI/ubuntu/shimx64.efi 
                       /EFI/Microsoft/Boot/bootmgfw.efi 
                       /EFI/Microsoft/Boot/bootx64.efi 
                       /EFI/refind/drivers_x64/ext4_x64.efi

sda2: __________________________________________________________________________

    File system:       hfsplus
    Boot sector type:  -
    Boot sector info: 
    Operating System:  
    Boot files:        

sda3: __________________________________________________________________________

    File system:       hfsplus
    Boot sector type:  -
    Boot sector info: 
    Operating System:  
    Boot files:        

sda4: __________________________________________________________________________

    File system:       xfs
    Boot sector type:  -
    Boot sector info: 
    Operating System:  Ubuntu 15.04 
    Boot files:        /boot/grub/grub.cfg /etc/fstab

sda5: __________________________________________________________________________

    File system:       swap
    Boot sector type:  -
    Boot sector info: 

sdc1: __________________________________________________________________________

    File system:       iso9660
    Boot sector type:  Unknown
    Boot sector info: 
    Mounting failed:   mount: /dev/sdc1 is already mounted or /mnt/BootInfo/sdc1 busy

sdc2: __________________________________________________________________________

    File system:       vfat
    Boot sector type:  FAT16
    Boot sector info:  According to the info in the boot sector, sdc2 starts 
                       at sector 0. But according to the info from fdisk, 
                       sdc2 starts at sector 2231888. According to the info 
                       in the boot sector, sdc2 has 0 sectors.
    Mounting failed:   mount: /dev/sdc1 is already mounted or /mnt/BootInfo/sdc1 busy
mount: /dev/sdc2 is already mounted or /mnt/BootInfo/sdc2 busy

============================ Drive/Partition Info: =============================

Drive: sda _____________________________________________________________________

Disk /dev/sda: 465.9 GiB, 500277790720 bytes, 977105060 sectors
Units: sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 4096 bytes
I/O size (minimum/optimal): 4096 bytes / 4096 bytes

Partition  Boot  Start Sector    End Sector  # of Sectors  Id System

/dev/sda1                   1       409,639       409,639  ee GPT
/dev/sda2    *        409,640   195,499,455   195,089,816  af HFS / HFS+
/dev/sda3         195,499,456   196,768,999     1,269,544  af HFS / HFS+
/dev/sda4         196,769,792   958,488,575   761,718,784  83 Linux


GUID Partition Table detected.

Partition    Start Sector    End Sector  # of Sectors System
/dev/sda1              40       409,639       409,600 EFI System partition
/dev/sda2         409,640   195,499,455   195,089,816 Hierarchical File System Plus (HFS+) partition (Mac OS X)
/dev/sda3     195,499,456   196,768,999     1,269,544 Apple Boot partition (Mac OS X)
/dev/sda4     196,769,792   958,488,575   761,718,784 Data partition (Linux)
/dev/sda5     958,488,576   977,104,895    18,616,320 Swap partition (Linux)

Drive: sdc _____________________________________________________________________

Disk /dev/sdc: 14.6 GiB, 15610576896 bytes, 30489408 sectors
Units: sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes

Partition  Boot  Start Sector    End Sector  # of Sectors  Id System

/dev/sdc1    *              0     2,247,743     2,247,744   0 Empty
/dev/sdc2           2,231,888     2,236,431         4,544  ef EFI (FAT-12/16/32)

/dev/sdc1 overlaps with /dev/sdc2

GUID Partition Table detected, but does not seem to be used.

Partition    Start Sector    End Sector  # of Sectors System
/dev/sdc1               0     2,247,687     2,247,688 Data partition (Windows/Linux)
/dev/sdc2       2,231,888     2,236,431         4,544 Data partition (Windows/Linux)

"blkid" output: ________________________________________________________________

Device           UUID                                   TYPE       LABEL

/dev/loop0                                              squashfs   
/dev/sda1        67E3-17ED                              vfat       EFI
/dev/sda2        40f124a2-186b-32f4-8f42-eeb827bfbd79   hfsplus    OS X
/dev/sda3        71291adb-a520-3e83-acf2-8242bcf172c9   hfsplus    Recovery HD
/dev/sda4        3cddf9a4-6d41-419e-be8e-67ab5b424423   xfs        
/dev/sda5        95dc4ba5-d05a-443d-9843-23ced6fc6888   swap       
/dev/sdc1        2015-04-22-12-30-17-00                 iso9660    Ubuntu 15.04 amd64
/dev/sdc2        2474-67AF                              vfat       

========================= "ls -l /dev/disk/by-id" output: ======================

total 0
lrwxrwxrwx 1 root root  9 May 19 23:45 ata-APPLE_SSD_SM0512F_S1K5NYAF576475 -> ../../sda
lrwxrwxrwx 1 root root 10 May 19 23:45 ata-APPLE_SSD_SM0512F_S1K5NYAF576475-part1 -> ../../sda1
lrwxrwxrwx 1 root root 10 May 19 23:45 ata-APPLE_SSD_SM0512F_S1K5NYAF576475-part2 -> ../../sda2
lrwxrwxrwx 1 root root 10 May 19 23:45 ata-APPLE_SSD_SM0512F_S1K5NYAF576475-part3 -> ../../sda3
lrwxrwxrwx 1 root root 10 May 19 23:45 ata-APPLE_SSD_SM0512F_S1K5NYAF576475-part4 -> ../../sda4
lrwxrwxrwx 1 root root 10 May 19 23:45 ata-APPLE_SSD_SM0512F_S1K5NYAF576475-part5 -> ../../sda5
lrwxrwxrwx 1 root root  9 May 19 23:41 usb-APPLE_SD_Card_Reader_000000000820-0:0 -> ../../sdb
lrwxrwxrwx 1 root root  9 May 19 23:43 usb-Kingston_DT_101_G2_F46D04613D6BED1179200080-0:0 -> ../../sdc
lrwxrwxrwx 1 root root 10 May 19 23:43 usb-Kingston_DT_101_G2_F46D04613D6BED1179200080-0:0-part1 -> ../../sdc1
lrwxrwxrwx 1 root root 10 May 19 23:45 usb-Kingston_DT_101_G2_F46D04613D6BED1179200080-0:0-part2 -> ../../sdc2
lrwxrwxrwx 1 root root  9 May 19 23:45 wwn-0x5562039377649356802x -> ../../sda
lrwxrwxrwx 1 root root 10 May 19 23:45 wwn-0x5562039377649356802x-part1 -> ../../sda1
lrwxrwxrwx 1 root root 10 May 19 23:45 wwn-0x5562039377649356802x-part2 -> ../../sda2
lrwxrwxrwx 1 root root 10 May 19 23:45 wwn-0x5562039377649356802x-part3 -> ../../sda3
lrwxrwxrwx 1 root root 10 May 19 23:45 wwn-0x5562039377649356802x-part4 -> ../../sda4
lrwxrwxrwx 1 root root 10 May 19 23:45 wwn-0x5562039377649356802x-part5 -> ../../sda5

================================ Mount points: =================================

Device           Mount_Point              Type       Options

/dev/loop0       /rofs                    squashfs   (ro,noatime)
/dev/sdc         /cdrom                   iso9660    (ro,noatime)


=========================== sda4/boot/grub/grub.cfg: ===========================

--------------------------------------------------------------------------------
#
# DO NOT EDIT THIS FILE
#
# It is automatically generated by grub-mkconfig using templates
# from /etc/grub.d and settings from /etc/default/grub
#

### BEGIN /etc/grub.d/00_header ###
if [ -s $prefix/grubenv ]; then
  set have_grubenv=true
  load_env
fi
if [ "${next_entry}" ] ; then
   set default="${next_entry}"
   set next_entry=
   save_env next_entry
   set boot_once=true
else
   set default="0"
fi

if [ x"${feature_menuentry_id}" = xy ]; then
  menuentry_id_option="--id"
else
  menuentry_id_option=""
fi

export menuentry_id_option

if [ "${prev_saved_entry}" ]; then
  set saved_entry="${prev_saved_entry}"
  save_env saved_entry
  set prev_saved_entry=
  save_env prev_saved_entry
  set boot_once=true
fi

function savedefault {
  if [ -z "${boot_once}" ]; then
    saved_entry="${chosen}"
    save_env saved_entry
  fi
}
function recordfail {
  set recordfail=1
  if [ -n "${have_grubenv}" ]; then if [ -z "${boot_once}" ]; then save_env recordfail; fi; fi
}
function load_video {
  if [ x$feature_all_video_module = xy ]; then
    insmod all_video
  else
    insmod efi_gop
    insmod efi_uga
    insmod ieee1275_fb
    insmod vbe
    insmod vga
    insmod video_bochs
    insmod video_cirrus
  fi
}

if [ x$feature_default_font_path = xy ] ; then
   font=unicode
else
insmod part_gpt
insmod xfs
set root='hd0,gpt4'
if [ x$feature_platform_search_hint = xy ]; then
  search --no-floppy --fs-uuid --set=root --hint-bios=hd0,gpt4 --hint-efi=hd0,gpt4 --hint-baremetal=ahci0,gpt4  3cddf9a4-6d41-419e-be8e-67ab5b424423
else
  search --no-floppy --fs-uuid --set=root 3cddf9a4-6d41-419e-be8e-67ab5b424423
fi
    font="/usr/share/grub/unicode.pf2"
fi

if loadfont $font ; then
  set gfxmode=auto
  load_video
  insmod gfxterm
  set locale_dir=$prefix/locale
  set lang=en_US
  insmod gettext
fi
terminal_output gfxterm
if [ "${recordfail}" = 1 ] ; then
  set timeout=10
else
  if [ x$feature_timeout_style = xy ] ; then
    set timeout_style=menu
    set timeout=10
  # Fallback normal timeout code in case the timeout_style feature is
  # unavailable.
  else
    set timeout=10
  fi
fi
### END /etc/grub.d/00_header ###

### BEGIN /etc/grub.d/05_debian_theme ###
set menu_color_normal=white/black
set menu_color_highlight=black/light-gray
if background_color 44,0,30,0; then
  clear
fi
### END /etc/grub.d/05_debian_theme ###

### BEGIN /etc/grub.d/10_linux ###
function gfxmode {
	set gfxpayload="${1}"
	if [ "${1}" = "keep" ]; then
		set vt_handoff=vt.handoff=7
	else
		set vt_handoff=
	fi
}
if [ "${recordfail}" != 1 ]; then
  if [ -e ${prefix}/gfxblacklist.txt ]; then
    if hwmatch ${prefix}/gfxblacklist.txt 3; then
      if [ ${match} = 0 ]; then
        set linux_gfx_mode=keep
      else
        set linux_gfx_mode=text
      fi
    else
      set linux_gfx_mode=text
    fi
  else
    set linux_gfx_mode=keep
  fi
else
  set linux_gfx_mode=text
fi
export linux_gfx_mode
menuentry 'Ubuntu' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-simple-3cddf9a4-6d41-419e-be8e-67ab5b424423' {
	recordfail
	load_video
	gfxmode $linux_gfx_mode
	insmod gzio
	if [ x$grub_platform = xxen ]; then insmod xzio; insmod lzopio; fi
	insmod part_gpt
	insmod xfs
	set root='hd0,gpt4'
	if [ x$feature_platform_search_hint = xy ]; then
	  search --no-floppy --fs-uuid --set=root --hint-bios=hd0,gpt4 --hint-efi=hd0,gpt4 --hint-baremetal=ahci0,gpt4  3cddf9a4-6d41-419e-be8e-67ab5b424423
	else
	  search --no-floppy --fs-uuid --set=root 3cddf9a4-6d41-419e-be8e-67ab5b424423
	fi
	linux	/boot/vmlinuz-3.19.0-15-generic.efi.signed root=UUID=3cddf9a4-6d41-419e-be8e-67ab5b424423 ro  quiet splash $vt_handoff
	initrd	/boot/initrd.img-3.19.0-15-generic
}
submenu 'Advanced options for Ubuntu' $menuentry_id_option 'gnulinux-advanced-3cddf9a4-6d41-419e-be8e-67ab5b424423' {
	menuentry 'Ubuntu, with Linux 3.19.0-15-generic' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-3.19.0-15-generic-advanced-3cddf9a4-6d41-419e-be8e-67ab5b424423' {
		recordfail
		load_video
		gfxmode $linux_gfx_mode
		insmod gzio
		if [ x$grub_platform = xxen ]; then insmod xzio; insmod lzopio; fi
		insmod part_gpt
		insmod xfs
		set root='hd0,gpt4'
		if [ x$feature_platform_search_hint = xy ]; then
		  search --no-floppy --fs-uuid --set=root --hint-bios=hd0,gpt4 --hint-efi=hd0,gpt4 --hint-baremetal=ahci0,gpt4  3cddf9a4-6d41-419e-be8e-67ab5b424423
		else
		  search --no-floppy --fs-uuid --set=root 3cddf9a4-6d41-419e-be8e-67ab5b424423
		fi
		echo	'Loading Linux 3.19.0-15-generic ...'
		linux	/boot/vmlinuz-3.19.0-15-generic.efi.signed root=UUID=3cddf9a4-6d41-419e-be8e-67ab5b424423 ro  quiet splash $vt_handoff
		echo	'Loading initial ramdisk ...'
		initrd	/boot/initrd.img-3.19.0-15-generic
	}
	menuentry 'Ubuntu, with Linux 3.19.0-15-generic (upstart)' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-3.19.0-15-generic-init-upstart-3cddf9a4-6d41-419e-be8e-67ab5b424423' {
		recordfail
		load_video
		gfxmode $linux_gfx_mode
		insmod gzio
		if [ x$grub_platform = xxen ]; then insmod xzio; insmod lzopio; fi
		insmod part_gpt
		insmod xfs
		set root='hd0,gpt4'
		if [ x$feature_platform_search_hint = xy ]; then
		  search --no-floppy --fs-uuid --set=root --hint-bios=hd0,gpt4 --hint-efi=hd0,gpt4 --hint-baremetal=ahci0,gpt4  3cddf9a4-6d41-419e-be8e-67ab5b424423
		else
		  search --no-floppy --fs-uuid --set=root 3cddf9a4-6d41-419e-be8e-67ab5b424423
		fi
		echo	'Loading Linux 3.19.0-15-generic ...'
		linux	/boot/vmlinuz-3.19.0-15-generic.efi.signed root=UUID=3cddf9a4-6d41-419e-be8e-67ab5b424423 ro  quiet splash $vt_handoff init=/sbin/upstart
		echo	'Loading initial ramdisk ...'
		initrd	/boot/initrd.img-3.19.0-15-generic
	}
	menuentry 'Ubuntu, with Linux 3.19.0-15-generic (recovery mode)' --class ubuntu --class gnu-linux --class gnu --class os $menuentry_id_option 'gnulinux-3.19.0-15-generic-recovery-3cddf9a4-6d41-419e-be8e-67ab5b424423' {
		recordfail
		load_video
		insmod gzio
		if [ x$grub_platform = xxen ]; then insmod xzio; insmod lzopio; fi
		insmod part_gpt
		insmod xfs
		set root='hd0,gpt4'
		if [ x$feature_platform_search_hint = xy ]; then
		  search --no-floppy --fs-uuid --set=root --hint-bios=hd0,gpt4 --hint-efi=hd0,gpt4 --hint-baremetal=ahci0,gpt4  3cddf9a4-6d41-419e-be8e-67ab5b424423
		else
		  search --no-floppy --fs-uuid --set=root 3cddf9a4-6d41-419e-be8e-67ab5b424423
		fi
		echo	'Loading Linux 3.19.0-15-generic ...'
		linux	/boot/vmlinuz-3.19.0-15-generic.efi.signed root=UUID=3cddf9a4-6d41-419e-be8e-67ab5b424423 ro recovery nomodeset 
		echo	'Loading initial ramdisk ...'
		initrd	/boot/initrd.img-3.19.0-15-generic
	}
}

### END /etc/grub.d/10_linux ###

### BEGIN /etc/grub.d/20_linux_xen ###

### END /etc/grub.d/20_linux_xen ###

### BEGIN /etc/grub.d/20_memtest86+ ###
### END /etc/grub.d/20_memtest86+ ###

### BEGIN /etc/grub.d/25_custom ###

menuentry "MacOS UEFI Firmware.scap" {
search --fs-uuid --no-floppy --set=root 67E3-17ED
chainloader (${root})/EFI/APPLE/EXTENSIONS/Firmware.scap
}

menuentry "EFI/refind/refind_x64.efi" {
search --fs-uuid --no-floppy --set=root 67E3-17ED
chainloader (${root})/EFI/refind/refind_x64.efi
}

menuentry "EFI/tools/gptsync_x64.efi" {
search --fs-uuid --no-floppy --set=root 67E3-17ED
chainloader (${root})/EFI/tools/gptsync_x64.efi
}

menuentry "EFI/ubuntu/MokManager.efi" {
search --fs-uuid --no-floppy --set=root 67E3-17ED
chainloader (${root})/EFI/ubuntu/MokManager.efi
}

menuentry "EFI/refind/drivers_x64/ext4_x64.efi" {
search --fs-uuid --no-floppy --set=root 67E3-17ED
chainloader (${root})/EFI/refind/drivers_x64/ext4_x64.efi
}
### END /etc/grub.d/25_custom ###

### BEGIN /etc/grub.d/30_os-prober ###
menuentry 'Mac OS X (32-bit) (on /dev/sda2)' --class osx --class darwin --class os $menuentry_id_option 'osprober-xnu-32-62e530dd1ce1cfa2'  {
	insmod part_gpt
	insmod hfsplus
	set root='hd0,gpt2'
	if [ x$feature_platform_search_hint = xy ]; then
	  search --no-floppy --fs-uuid --set=root --hint-bios=hd0,gpt2 --hint-efi=hd0,gpt2 --hint-baremetal=ahci0,gpt2  62e530dd1ce1cfa2
	else
	  search --no-floppy --fs-uuid --set=root 62e530dd1ce1cfa2
	fi
        load_video
        set do_resume=0
        if [ /var/vm/sleepimage -nt10 / ]; then
           if xnu_resume /var/vm/sleepimage; then
             set do_resume=1
           fi
        fi
        if [ $do_resume = 0 ]; then
           xnu_uuid 62e530dd1ce1cfa2 uuid
           if [ -f /Extra/DSDT.aml ]; then
              acpi -e /Extra/DSDT.aml
           fi
           if [ /kernelcache -nt /System/Library/Extensions ]; then
              xnu_kernel /kernelcache boot-uuid=${uuid} rd=*uuid
           else
              xnu_kernel /mach_kernel boot-uuid=${uuid} rd=*uuid
              if [ /System/Library/Extensions.mkext -nt /System/Library/Extensions ]; then
                xnu_mkext /System/Library/Extensions.mkext
              else
                xnu_kextdir /System/Library/Extensions
              fi
           fi
           if [ -f /Extra/Extensions.mkext ]; then
              xnu_mkext /Extra/Extensions.mkext
           fi
           if [ -d /Extra/Extensions ]; then
              xnu_kextdir /Extra/Extensions
           fi
           if [ -f /Extra/devprop.bin ]; then
              xnu_devprop_load /Extra/devprop.bin
           fi
           if [ -f /Extra/splash.jpg ]; then
              insmod jpeg
              xnu_splash /Extra/splash.jpg
           fi
           if [ -f /Extra/splash.png ]; then
              insmod png
              xnu_splash /Extra/splash.png
           fi
           if [ -f /Extra/splash.tga ]; then
              insmod tga
              xnu_splash /Extra/splash.tga
           fi
        fi
}
menuentry 'Mac OS X (64-bit) (on /dev/sda2)' --class osx --class darwin --class os $menuentry_id_option 'osprober-xnu-64-62e530dd1ce1cfa2'  {
	insmod part_gpt
	insmod hfsplus
	set root='hd0,gpt2'
	if [ x$feature_platform_search_hint = xy ]; then
	  search --no-floppy --fs-uuid --set=root --hint-bios=hd0,gpt2 --hint-efi=hd0,gpt2 --hint-baremetal=ahci0,gpt2  62e530dd1ce1cfa2
	else
	  search --no-floppy --fs-uuid --set=root 62e530dd1ce1cfa2
	fi
        load_video
        set do_resume=0
        if [ /var/vm/sleepimage -nt10 / ]; then
           if xnu_resume /var/vm/sleepimage; then
             set do_resume=1
           fi
        fi
        if [ $do_resume = 0 ]; then
           xnu_uuid 62e530dd1ce1cfa2 uuid
           if [ -f /Extra/DSDT.aml ]; then
              acpi -e /Extra/DSDT.aml
           fi
           if [ /kernelcache -nt /System/Library/Extensions ]; then
              xnu_kernel64 /kernelcache boot-uuid=${uuid} rd=*uuid
           else
              xnu_kernel64 /mach_kernel boot-uuid=${uuid} rd=*uuid
              if [ /System/Library/Extensions.mkext -nt /System/Library/Extensions ]; then
                xnu_mkext /System/Library/Extensions.mkext
              else
                xnu_kextdir /System/Library/Extensions
              fi
           fi
           if [ -f /Extra/Extensions.mkext ]; then
              xnu_mkext /Extra/Extensions.mkext
           fi
           if [ -d /Extra/Extensions ]; then
              xnu_kextdir /Extra/Extensions
           fi
           if [ -f /Extra/devprop.bin ]; then
              xnu_devprop_load /Extra/devprop.bin
           fi
           if [ -f /Extra/splash.jpg ]; then
              insmod jpeg
              xnu_splash /Extra/splash.jpg
           fi
           if [ -f /Extra/splash.png ]; then
              insmod png
              xnu_splash /Extra/splash.png
           fi
           if [ -f /Extra/splash.tga ]; then
              insmod tga
              xnu_splash /Extra/splash.tga
           fi
        fi
}
set timeout_style=menu
if [ "${timeout}" = 0 ]; then
  set timeout=10
fi
### END /etc/grub.d/30_os-prober ###

### BEGIN /etc/grub.d/30_uefi-firmware ###
### END /etc/grub.d/30_uefi-firmware ###

### BEGIN /etc/grub.d/40_custom ###
# This file provides an easy way to add custom menu entries.  Simply type the
# menu entries you want to add after this comment.  Be careful not to change
# the 'exec tail' line above.
### END /etc/grub.d/40_custom ###

### BEGIN /etc/grub.d/41_custom ###
if [ -f  ${config_directory}/custom.cfg ]; then
  source ${config_directory}/custom.cfg
elif [ -z "${config_directory}" -a -f  $prefix/custom.cfg ]; then
  source $prefix/custom.cfg;
fi
### END /etc/grub.d/41_custom ###
--------------------------------------------------------------------------------

=============================== sda4/etc/fstab: ================================

--------------------------------------------------------------------------------
# /etc/fstab: static file system information.
#
# Use 'blkid' to print the universally unique identifier for a
# device; this may be used with UUID= as a more robust way to name devices
# that works even if disks are added and removed. See fstab(5).
#
# <file system> <mount point>   <type>  <options>       <dump>  <pass>
# / was on /dev/sda4 during installation
UUID=3cddf9a4-6d41-419e-be8e-67ab5b424423 /               xfs     defaults        0       1
# /boot/efi was on /dev/sda1 during installation
#UUID=67E3-17ED  /boot/efi       vfat    umask=0077      0       1
# swap was on /dev/sda5 during installation
#UUID=95dc4ba5-d05a-443d-9843-23ced6fc6888 none            swap    sw              0       0
/dev/mapper/cryptswap1 none swap sw 0 0
UUID=67E3-17ED	/boot/efi	vfat	defaults	0	1
--------------------------------------------------------------------------------

======================== Unknown MBRs/Boot Sectors/etc: ========================

Unknown MBR on /dev/sdc

00000000  45 52 08 00 00 00 90 90  00 00 00 00 00 00 00 00  |ER..............|
00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000020  33 ed fa 8e d5 bc 00 7c  fb fc 66 31 db 66 31 c9  |3......|..f1.f1.|
00000030  66 53 66 51 06 57 8e dd  8e c5 52 be 00 7c bf 00  |fSfQ.W....R..|..|
00000040  06 b9 00 01 f3 a5 ea 4b  06 00 00 52 b4 41 bb aa  |.......K...R.A..|
00000050  55 31 c9 30 f6 f9 cd 13  72 16 81 fb 55 aa 75 10  |U1.0....r...U.u.|
00000060  83 e1 01 74 0b 66 c7 06  f1 06 b4 42 eb 15 eb 00  |...t.f.....B....|
00000070  5a 51 b4 08 cd 13 83 e1  3f 5b 51 0f b6 c6 40 50  |ZQ......?[Q...@P|
00000080  f7 e1 53 52 50 bb 00 7c  b9 04 00 66 a1 b0 07 e8  |..SRP..|...f....|
00000090  44 00 0f 82 80 00 66 40  80 c7 02 e2 f2 66 81 3e  |D.....f@.....f.>|
000000a0  40 7c fb c0 78 70 75 09  fa bc ec 7b ea 44 7c 00  |@|..xpu....{.D|.|
000000b0  00 e8 83 00 69 73 6f 6c  69 6e 75 78 2e 62 69 6e  |....isolinux.bin|
000000c0  20 6d 69 73 73 69 6e 67  20 6f 72 20 63 6f 72 72  | missing or corr|
000000d0  75 70 74 2e 0d 0a 66 60  66 31 d2 66 03 06 f8 7b  |upt...f`f1.f...{|
000000e0  66 13 16 fc 7b 66 52 66  50 06 53 6a 01 6a 10 89  |f...{fRfP.Sj.j..|
000000f0  e6 66 f7 36 e8 7b c0 e4  06 88 e1 88 c5 92 f6 36  |.f.6.{.........6|
00000100  ee 7b 88 c6 08 e1 41 b8  01 02 8a 16 f2 7b cd 13  |.{....A......{..|
00000110  8d 64 10 66 61 c3 e8 1e  00 4f 70 65 72 61 74 69  |.d.fa....Operati|
00000120  6e 67 20 73 79 73 74 65  6d 20 6c 6f 61 64 20 65  |ng system load e|
00000130  72 72 6f 72 2e 0d 0a 5e  ac b4 0e 8a 3e 62 04 b3  |rror...^....>b..|
00000140  07 cd 10 3c 0a 75 f1 cd  18 f4 eb fd 00 00 00 00  |...<.u..........|
00000150  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000160  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000170  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000180  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000190  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000001a0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000001b0  98 d9 21 00 00 00 00 00  59 58 ae 1c 00 00 80 00  |..!.....YX......|
000001c0  01 00 00 44 e0 f9 00 00  00 00 40 4c 22 00 00 fe  |...D......@L"...|
000001d0  ff ff ef fe ff ff 50 0e  22 00 c0 11 00 00 00 00  |......P.".......|
000001e0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000001f0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 55 aa  |..............U.|
00000200

Unknown BootLoader on sda1

00000000  eb 58 90 42 53 44 20 20  34 2e 34 00 02 01 20 00  |.X.BSD  4.4... .|
00000010  02 00 00 00 00 f0 00 00  20 00 10 00 00 00 00 00  |........ .......|
00000020  00 40 06 00 4f 0c 00 00  00 00 00 00 02 00 00 00  |.@..O...........|
00000030  01 00 06 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000040  00 00 29 ed 17 e3 67 45  46 49 20 20 20 20 20 20  |..)...gEFI      |
00000050  20 20 46 41 54 33 32 20  20 20 fa 31 c0 8e d0 bc  |  FAT32   .1....|
00000060  00 7c fb 8e d8 e8 00 00  5e 83 c6 19 bb 07 00 fc  |.|......^.......|
00000070  ac 84 c0 74 06 b4 0e cd  10 eb f5 30 e4 cd 16 cd  |...t.......0....|
00000080  19 0d 0a 4e 6f 6e 2d 73  79 73 74 65 6d 20 64 69  |...Non-system di|
00000090  73 6b 0d 0a 50 72 65 73  73 20 61 6e 79 20 6b 65  |sk..Press any ke|
000000a0  79 20 74 6f 20 72 65 62  6f 6f 74 0d 0a 00 00 00  |y to reboot.....|
000000b0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
000001f0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 55 aa  |..............U.|
00000200

Unknown BootLoader on sdc1

00000000  45 52 08 00 00 00 90 90  00 00 00 00 00 00 00 00  |ER..............|
00000010  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000020  33 ed fa 8e d5 bc 00 7c  fb fc 66 31 db 66 31 c9  |3......|..f1.f1.|
00000030  66 53 66 51 06 57 8e dd  8e c5 52 be 00 7c bf 00  |fSfQ.W....R..|..|
00000040  06 b9 00 01 f3 a5 ea 4b  06 00 00 52 b4 41 bb aa  |.......K...R.A..|
00000050  55 31 c9 30 f6 f9 cd 13  72 16 81 fb 55 aa 75 10  |U1.0....r...U.u.|
00000060  83 e1 01 74 0b 66 c7 06  f1 06 b4 42 eb 15 eb 00  |...t.f.....B....|
00000070  5a 51 b4 08 cd 13 83 e1  3f 5b 51 0f b6 c6 40 50  |ZQ......?[Q...@P|
00000080  f7 e1 53 52 50 bb 00 7c  b9 04 00 66 a1 b0 07 e8  |..SRP..|...f....|
00000090  44 00 0f 82 80 00 66 40  80 c7 02 e2 f2 66 81 3e  |D.....f@.....f.>|
000000a0  40 7c fb c0 78 70 75 09  fa bc ec 7b ea 44 7c 00  |@|..xpu....{.D|.|
000000b0  00 e8 83 00 69 73 6f 6c  69 6e 75 78 2e 62 69 6e  |....isolinux.bin|
000000c0  20 6d 69 73 73 69 6e 67  20 6f 72 20 63 6f 72 72  | missing or corr|
000000d0  75 70 74 2e 0d 0a 66 60  66 31 d2 66 03 06 f8 7b  |upt...f`f1.f...{|
000000e0  66 13 16 fc 7b 66 52 66  50 06 53 6a 01 6a 10 89  |f...{fRfP.Sj.j..|
000000f0  e6 66 f7 36 e8 7b c0 e4  06 88 e1 88 c5 92 f6 36  |.f.6.{.........6|
00000100  ee 7b 88 c6 08 e1 41 b8  01 02 8a 16 f2 7b cd 13  |.{....A......{..|
00000110  8d 64 10 66 61 c3 e8 1e  00 4f 70 65 72 61 74 69  |.d.fa....Operati|
00000120  6e 67 20 73 79 73 74 65  6d 20 6c 6f 61 64 20 65  |ng system load e|
00000130  72 72 6f 72 2e 0d 0a 5e  ac b4 0e 8a 3e 62 04 b3  |rror...^....>b..|
00000140  07 cd 10 3c 0a 75 f1 cd  18 f4 eb fd 00 00 00 00  |...<.u..........|
00000150  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
000001b0  98 d9 21 00 00 00 00 00  59 58 ae 1c 00 00 80 00  |..!.....YX......|
000001c0  01 00 00 44 e0 f9 00 00  00 00 40 4c 22 00 00 fe  |...D......@L"...|
000001d0  ff ff ef fe ff ff 50 0e  22 00 c0 11 00 00 00 00  |......P.".......|
000001e0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000001f0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 55 aa  |..............U.|
00000200


========= Devices which don't seem to have a corresponding hard drive: =========

sdb 

=============================== StdErr Messages: ===============================

File descriptor 9 (/proc/5112/mounts) leaked on lvs invocation. Parent PID 16595: bash
File descriptor 63 (pipe:[68701]) leaked on lvs invocation. Parent PID 16595: bash
  No volume groups found

ADDITIONAL INFORMATION :
=================== log of boot-repair 2015-05-19__23h43 ===================
boot-repair version : 4ppa33
boot-sav version : 4ppa33
glade2script version : 3.2.2~ppa47~saucy
boot-sav-extra version : 4ppa33
grub-probe: error: cannot find a GRUB drive for /dev/sdc1.  Check your device.map.
Error: The primary GPT table is corrupt, but the backup appears OK, so that will be used.
Error: The primary GPT table is corrupt, but the backup appears OK, so that will be used.
boot-repair is executed in live-session (Ubuntu 15.04, vivid, Ubuntu, x86_64)
CPU op-mode(s):        32-bit, 64-bit
BOOT_IMAGE=/casper/vmlinuz.efi file=/cdrom/preseed/ubuntu.seed boot=casper quiet splash ---
ls: cannot access /home/usr/.config: No such file or directory
mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount /dev/sdc2 : Error code 32
mount -r /dev/sdc2 /mnt/boot-sav/sdc2
mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount -r /dev/sdc2 : Error code 32

=================== os-prober:
/dev/sda2:Mac OS X:MacOSX:macosx
/dev/sda4:Ubuntu 15.04 (15.04):Ubuntu:linux

=================== blkid:
/dev/sda1: LABEL="EFI" UUID="67E3-17ED" TYPE="vfat" PARTLABEL="EFI System Partition" PARTUUID="1a5f675f-5eb5-40ed-9da1-1bf509504936"
/dev/sda2: UUID="40f124a2-186b-32f4-8f42-eeb827bfbd79" LABEL="OS X" TYPE="hfsplus" PARTLABEL="OS X" PARTUUID="967612aa-f0f1-4824-b638-9c7eadb40a34"
/dev/sda3: UUID="71291adb-a520-3e83-acf2-8242bcf172c9" LABEL="Recovery HD" TYPE="hfsplus" PARTLABEL="Recovery HD" PARTUUID="0caf9916-66f9-49c6-9fc7-c65f8f77266e"
/dev/loop0: TYPE="squashfs"
/dev/sda4: UUID="3cddf9a4-6d41-419e-be8e-67ab5b424423" TYPE="xfs" PARTUUID="faa66d20-3cf3-468c-afd6-9c3554f3b969"
/dev/sda5: UUID="95dc4ba5-d05a-443d-9843-23ced6fc6888" TYPE="swap" PARTUUID="cc5e3678-d652-44db-a512-618db16e0d4b"
/dev/sdc1: UUID="2015-04-22-12-30-17-00" LABEL="Ubuntu 15.04 amd64" TYPE="iso9660" PTUUID="1cae5859" PTTYPE="dos" PARTUUID="1cae5859-01"
/dev/sdc2: SEC_TYPE="msdos" UUID="2474-67AF" TYPE="vfat" PARTUUID="1cae5859-02"


1 disks with OS, 2 OS : 1 Linux, 1 MacOS, 0 Windows, 0 unknown type OS.

mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount /dev/sdc2 : Error code 32
mount -r /dev/sdc2 /mnt/boot-sav/sdc2
mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount -r /dev/sdc2 : Error code 32
mkdir: cannot create directory ‘/mnt/boot-sav/sda2/boot-sav’: Read-only file system
sda2 is Read-only or full
dd: invalid number ‘0’
Warning: /var/log/boot-sav/log/2015-05-19__23h43boot-repair03/sdc/current_mbr.img could not be created. Please report this message to boot.repair@gmail.com
Presence of MacEFI file detected: /mnt/boot-sav/sda1/EFI/APPLE/EXTENSIONS/Firmware.scap

=================== sda4/etc/grub.d/ :
drwxr-xr-x  2 root root    4096 Apr 22 12:08 grub.d
total 76
-rwxr-xr-x 1 root root  9424 Apr  6 20:43 00_header
-rwxr-xr-x 1 root root  6058 Feb 11 19:53 05_debian_theme
-rwxr-xr-x 1 root root 12261 Apr  6 20:43 10_linux
-rwxr-xr-x 1 root root 11082 Apr  6 20:43 20_linux_xen
-rwxr-xr-x 1 root root  1992 Mar  6 16:23 20_memtest86+
-rwxr-xr-x 1 root root 11692 Apr  6 20:43 30_os-prober
-rwxr-xr-x 1 root root  1416 Apr  6 20:43 30_uefi-firmware
-rwxr-xr-x 1 root root   214 Apr  6 20:43 40_custom
-rwxr-xr-x 1 root root   216 Apr  6 20:43 41_custom
-rw-r--r-- 1 root root   483 Apr  6 20:43 README




=================== sda4/etc/default/grub :

# If you change this file, run 'update-grub' afterwards to update
# /boot/grub/grub.cfg.
# For full documentation of the options in this file, see:
#   info -f grub -n 'Simple configuration'

GRUB_DEFAULT=0
#GRUB_HIDDEN_TIMEOUT=0
GRUB_HIDDEN_TIMEOUT_QUIET=true
GRUB_TIMEOUT=10
GRUB_DISTRIBUTOR=`lsb_release -i -s 2> /dev/null || echo Debian`
GRUB_CMDLINE_LINUX_DEFAULT="quiet splash"
GRUB_CMDLINE_LINUX=""

# Uncomment to enable BadRAM filtering, modify to suit your needs
# This works with Linux (no patch required) and with any kernel that obtains
# the memory map information from GRUB (GNU Mach, kernel of FreeBSD ...)
#GRUB_BADRAM="0x01234567,0xfefefefe,0x89abcdef,0xefefefef"

# Uncomment to disable graphical terminal (grub-pc only)
#GRUB_TERMINAL=console

# The resolution used on graphical terminal
# note that you can use only modes which your graphic card supports via VBE
# you can see them in real GRUB with the command `vbeinfo'
#GRUB_GFXMODE=640x480

# Uncomment if you don't want GRUB to pass "root=UUID=xxx" parameter to Linux
#GRUB_DISABLE_LINUX_UUID=true

# Uncomment to disable generation of recovery mode menu entries
#GRUB_DISABLE_RECOVERY="true"

# Uncomment to get a beep at grub start
#GRUB_INIT_TUNE="480 440 1"



/boot/efi detected in the fstab of sda4: UUID=67E3-17ED   (sda1)
ls /sys/firmware/efi/vars : Timeout-8be4df61-93ca-11d2-aa0d-00e098032b8c,Test_ALS_Data-7c436110-ab2a-4bbb-a880-fe41995c9f82,SystemAudioVolumeDB-7c436110-ab2a-4bbb-a880-fe41995c9f82,SystemAudioVolume-7c436110-ab2a-4bbb-a880-fe41995c9f82,SSN-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,SetupDefaults-05299c28-3953-4a5f-b7d8-f6c6a7150b2a,Setup-4dfbbaab-1392-4fde-abb8-c41cc5ad7d5d,ROM-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,prev-lang:kbd-7c436110-ab2a-4bbb-a880-fe41995c9f82,PreviousBoot-36d08fa7-cf0b-42f5-8f14-68df73ed3740,preferred-networks-36c28ab5-6566-4c50-9ebd-cbb920f83843,preferred-count-36c28ab5-6566-4c50-9ebd-cbb920f83843,PchS3Peim-e6c2f70a-b604-4877-85ba-deec89e117eb,PchInit-e6c2f70a-b604-4877-85ba-deec89e117eb,new_var,MTC-eb704011-1402-11d3-8e77-00a0c969723b,MokListRT-605dab50-e046-4300-abb6-3dd810dd8b23,MLB-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,MemoryConfih-8be4df61-93ca-11d2-aa0d-00e098032b8c,MemoryConfig-8be4df61-93ca-11d2-aa0d-00e098032b8c,LocationServicesEnabled-7c436110-ab2a-4bbb-a880-fe41995c9f82,last-oslogin-ident-8d63d4fe-bd3c-4aad-881d-86fd974bc1df,LangCodes-8be4df61-93ca-11d2-aa0d-00e098032b8c,Lang-8be4df61-93ca-11d2-aa0d-00e098032b8c,HW_ROM-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,HW_MLB-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,HW_ICT-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,HardwareBootMode-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,GR_CAUSE-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,gpu-power-prefs-fa4ce28d-b62f-4c99-9cc3-6815686e30f9,gpu-policy-7c436110-ab2a-4bbb-a880-fe41995c9f82,gfx-saved-config-restore-status-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,fmm-mobileme-token-FMM-7c436110-ab2a-4bbb-a880-fe41995c9f82,fmm-computer-name-7c436110-ab2a-4bbb-a880-fe41995c9f82,FirmwareFeaturesMask-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,FirmwareFeatures-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,ErrOutDev-8be4df61-93ca-11d2-aa0d-00e098032b8c,epid_provisioned-8be4df61-93ca-11d2-aa0d-00e098032b8c,efi-boot-device-data-7c436110-ab2a-4bbb-a880-fe41995c9f82,efi-boot-device-7c436110-ab2a-4bbb-a880-fe41995c9f82,efi-apple-recovery-7c436110-ab2a-4bbb-a880-fe41995c9f82,del_var,current-network-36c28ab5-6566-4c50-9ebd-cbb920f83843,ConOutDev-8be4df61-93ca-11d2-aa0d-00e098032b8c,ConOut-8be4df61-93ca-11d2-aa0d-00e098032b8c,BootOrder-8be4df61-93ca-11d2-aa0d-00e098032b8c,BootFFFF-8be4df61-93ca-11d2-aa0d-00e098032b8c,BootCurrent-8be4df61-93ca-11d2-aa0d-00e098032b8c,BootCampProcessorPstates-7c436110-ab2a-4bbb-a880-fe41995c9f82,Boot0082-8be4df61-93ca-11d2-aa0d-00e098032b8c,Boot0081-8be4df61-93ca-11d2-aa0d-00e098032b8c,Boot0080-8be4df61-93ca-11d2-aa0d-00e098032b8c,Boot0001-8be4df61-93ca-11d2-aa0d-00e098032b8c,Boot0000-8be4df61-93ca-11d2-aa0d-00e098032b8c,BluetoothUHEDevices-24a6edcb-ebb6-490b-a455-fc9e8fab5366,bluetoothInternalControllerInfo-7c436110-ab2a-4bbb-a880-fe41995c9f82,bluetoothActiveControllerInfo-7c436110-ab2a-4bbb-a880-fe41995c9f82,backlight-level-7c436110-ab2a-4bbb-a880-fe41995c9f82,ALS_Data-7c436110-ab2a-4bbb-a880-fe41995c9f82,AcpiGlobalVariable-af9ffd67-ec10-488a-9dfc-6cbf5ee22c2e,AAPL,PathProperties0000-4d1ede05-38c7-4a6a-9cc6-4bcca8b38c14,
Please report this message to boot.repair@gmail.com

=================== efibootmgr -v
BootCurrent: 0000
Timeout: 5 seconds
BootOrder: 0080,0001,0000
Boot0000* Fedora	HD(1,800,64000,f91ef186-256a-4805-9f05-65ff9335baf1)File(EFIfedorashim.efi)
Boot0001* ubuntu	HD(1,28,64000,1a5f675f-5eb5-40ed-9da1-1bf509504936)File(EFIubuntushimx64.efi)
Boot0080* Mac OS X	HD(1,28,64000,1a5f675f-5eb5-40ed-9da1-1bf509504936)File(EFIrefindrefind_x64.efi)
Boot0081* Recovery OS	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1080,136000,48d4015d-fdbc-476a-93f8-e926958006e4)File(com.apple.recovery.bootboot.efi)
Boot0082* 	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1080,136000,48d4015d-fdbc-476a-93f8-e926958006e4)
BootFFFF* 	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1158,135f28,54c1c12c-1bdf-4146-a7be-344dfb37b3f5)File(SystemLibraryCoreServicesboot.efi)

=================== UEFI/Legacy mode:
BIOS is EFI-compatible, and is setup in EFI-mode for this live-session.
SecureBoot maybe enabled. (maybe sec-boot, Please report this message to boot.repair@gmail.com)


=================== PARTITIONS & DISKS:
sda1	: sda,	not-sepboot,	no-grubenv	nogrub,	no-docgrub,	no-update-grub,	32,	no-boot,	no-os,	is-correct-EFI,	part-has-no-fstab,	part-has-no-fstab,	no-nt,	no-winload,	no-recov-nor-hid,	no-bmgr,	notwinboot,	nopakmgr,	nogrubinstall,	no---usr,	part-has-no-fstab,	not-sep-usr,	standard,	not-far,	/mnt/boot-sav/sda1.
sda2	: sda,	not-sepboot,	no-grubenv	nogrub,	no-docgrub,	no-update-grub,	32,	no-boot,	is-os,	not--efi--part,	part-has-no-fstab,	part-has-no-fstab,	no-nt,	no-winload,	no-recov-nor-hid,	no-bmgr,	notwinboot,	nopakmgr,	nogrubinstall,	with--usr,	part-has-no-fstab,	not-sep-usr,	standard,	farbios,	/mnt/boot-sav/sda2.
sda3	: sda,	maybesepboot,	no-grubenv	nogrub,	no-docgrub,	no-update-grub,	32,	no-boot,	no-os,	not--efi--part,	part-has-no-fstab,	part-has-no-fstab,	no-nt,	no-winload,	no-recov-nor-hid,	no-bmgr,	notwinboot,	nopakmgr,	nogrubinstall,	no---usr,	part-has-no-fstab,	not-sep-usr,	standard,	farbios,	/mnt/boot-sav/sda3.
sda4	: sda,	not-sepboot,	grubenv-ok	grub2,	signed grub-efi ,	update-grub,	64,	with-boot,	is-os,	not--efi--part,	fstab-without-boot,	fstab-has-goodEFI,	no-nt,	no-winload,	no-recov-nor-hid,	no-bmgr,	notwinboot,	apt-get,	grub-install,	with--usr,	fstab-without-usr,	not-sep-usr,	standard,	farbios,	/mnt/boot-sav/sda4.
sdc2	: sdc,	not-sepboot,	no-grubenv	nogrub,	no-docgrub,	no-update-grub,	32,	no-boot,	no-os,	not--efi--part,	part-has-no-fstab,	part-has-no-fstab,	no-nt,	no-winload,	no-recov-nor-hid,	no-bmgr,	notwinboot,	nopakmgr,	nogrubinstall,	no---usr,	part-has-no-fstab,	not-sep-usr,	standard,	not-far,	/mnt/boot-sav/sdc2.

sda	: GPT,	no-BIOS_boot,	has-correctEFI, 	not-usb,	has-os,	40 sectors * 512 bytes
sdc	: GPT,	no-BIOS_boot,	has-no-EFIpart, 	usb-disk,	no-os,	0 sectors * 512 bytes


=================== parted -l:

Model: ATA APPLE SSD SM0512 (scsi)
Disk /dev/sda: 500GB
Sector size (logical/physical): 512B/4096B
Partition Table: gpt
Disk Flags:

Number  Start   End    Size    File system     Name                  Flags
1      20.5kB  210MB  210MB   fat32           EFI System Partition  boot, esp
2      210MB   100GB  99.9GB  hfs+            OS X
3      100GB   101GB  650MB   hfs+            Recovery HD
4      101GB   491GB  390GB   xfs
5      491GB   500GB  9532MB  linux-swap(v1)


Model: Kingston DT 101 G2 (scsi)
Disk /dev/sdc: 15.6GB
Sector size (logical/physical): 512B/512B
Partition Table: gpt
Disk Flags: pmbr_boot

Number  Start   End     Size    File system  Name                  Flags
1      20.5kB  210MB   210MB                EFI System Partition  boot, esp
2      210MB   15.5GB  15.3GB               OS X Install

=================== parted -lm:

BYT;
/dev/sda:500GB:scsi:512:4096:gpt:ATA APPLE SSD SM0512:;
1:20.5kB:210MB:210MB:fat32:EFI System Partition:boot, esp;
2:210MB:100GB:99.9GB:hfs+:OS X:;
3:100GB:101GB:650MB:hfs+:Recovery HD:;
4:101GB:491GB:390GB:xfs::;
5:491GB:500GB:9532MB:linux-swap(v1)::;

BYT;
/dev/sdc:15.6GB:scsi:512:512:gpt:Kingston DT 101 G2:pmbr_boot;
1:20.5kB:210MB:210MB::EFI System Partition:boot, esp;
2:210MB:15.5GB:15.3GB::OS X Install:;

=================== lsblk:
KNAME TYPE FSTYPE     SIZE LABEL              MODEL            UUID
sda   disk          465.9G                    APPLE SSD SM0512
sda1  part vfat       200M EFI                                 67E3-17ED
sda2  part hfsplus     93G OS X                                40f124a2-186b-32f4-8f42-eeb827bfbd79
sda3  part hfsplus  619.9M Recovery HD                         71291adb-a520-3e83-acf2-8242bcf172c9
sda4  part xfs      363.2G                                     3cddf9a4-6d41-419e-be8e-67ab5b424423
sda5  part swap       8.9G                                     95dc4ba5-d05a-443d-9843-23ced6fc6888
sdc   disk iso9660   14.6G Ubuntu 15.04 amd64 DT 101 G2        2015-04-22-12-30-17-00
sdc1  part iso9660    1.1G Ubuntu 15.04 amd64                  2015-04-22-12-30-17-00
sdc2  part vfat       2.2M Ubuntu 15.04 amd64                  2474-67AF
loop0 loop squashfs     1G

KNAME ROTA RO RM STATE   MOUNTPOINT
sda      0  0  0 running
sda1     0  0  0         /mnt/boot-sav/sda1
sda2     0  0  0         /mnt/boot-sav/sda2
sda3     0  0  0         /mnt/boot-sav/sda3
sda4     0  0  0         /mnt/boot-sav/sda4
sda5     0  0  0         [SWAP]
sdc      1  0  1 running
sdc1     1  0  1
sdc2     1  0  1
loop0    1  1  0         /rofs


=================== mount:
sysfs on /sys type sysfs (rw,nosuid,nodev,noexec,relatime)
proc on /proc type proc (rw,nosuid,nodev,noexec,relatime)
udev on /dev type devtmpfs (rw,relatime,size=8157412k,nr_inodes=2039353,mode=755)
devpts on /dev/pts type devpts (rw,nosuid,noexec,relatime,gid=5,mode=620,ptmxmode=000)
tmpfs on /run type tmpfs (rw,nosuid,noexec,relatime,size=1633932k,mode=755)
/dev/sdc on /cdrom type iso9660 (ro,noatime)
/dev/loop0 on /rofs type squashfs (ro,noatime)
/cow on / type overlay (rw,relatime,lowerdir=//filesystem.squashfs,upperdir=/cow/upper,workdir=/cow/work)
securityfs on /sys/kernel/security type securityfs (rw,nosuid,nodev,noexec,relatime)
tmpfs on /dev/shm type tmpfs (rw,nosuid,nodev)
tmpfs on /run/lock type tmpfs (rw,nosuid,nodev,noexec,relatime,size=5120k)
tmpfs on /sys/fs/cgroup type tmpfs (rw,mode=755)
cgroup on /sys/fs/cgroup/systemd type cgroup (rw,nosuid,nodev,noexec,relatime,xattr,release_agent=/lib/systemd/systemd-cgroups-agent,name=systemd)
pstore on /sys/fs/pstore type pstore (rw,nosuid,nodev,noexec,relatime)
efivarfs on /sys/firmware/efi/efivars type efivarfs (rw,nosuid,nodev,noexec,relatime)
cgroup on /sys/fs/cgroup/memory type cgroup (rw,nosuid,nodev,noexec,relatime,memory)
cgroup on /sys/fs/cgroup/cpu,cpuacct type cgroup (rw,nosuid,nodev,noexec,relatime,cpu,cpuacct)
cgroup on /sys/fs/cgroup/freezer type cgroup (rw,nosuid,nodev,noexec,relatime,freezer)
cgroup on /sys/fs/cgroup/perf_event type cgroup (rw,nosuid,nodev,noexec,relatime,perf_event,release_agent=/run/cgmanager/agents/cgm-release-agent.perf_event)
cgroup on /sys/fs/cgroup/blkio type cgroup (rw,nosuid,nodev,noexec,relatime,blkio)
cgroup on /sys/fs/cgroup/cpuset type cgroup (rw,nosuid,nodev,noexec,relatime,cpuset,clone_children)
cgroup on /sys/fs/cgroup/net_cls,net_prio type cgroup (rw,nosuid,nodev,noexec,relatime,net_cls,net_prio)
cgroup on /sys/fs/cgroup/devices type cgroup (rw,nosuid,nodev,noexec,relatime,devices)
cgroup on /sys/fs/cgroup/hugetlb type cgroup (rw,nosuid,nodev,noexec,relatime,hugetlb,release_agent=/run/cgmanager/agents/cgm-release-agent.hugetlb)
systemd-1 on /proc/sys/fs/binfmt_misc type autofs (rw,relatime,fd=22,pgrp=1,timeout=300,minproto=5,maxproto=5,direct)
mqueue on /dev/mqueue type mqueue (rw,relatime)
debugfs on /sys/kernel/debug type debugfs (rw,relatime)
hugetlbfs on /dev/hugepages type hugetlbfs (rw,relatime)
fusectl on /sys/fs/fuse/connections type fusectl (rw,relatime)
tmpfs on /tmp type tmpfs (rw,nosuid,nodev,relatime)
cgmfs on /run/cgmanager/fs type tmpfs (rw,relatime,size=100k,mode=755)
tmpfs on /run/user/999 type tmpfs (rw,nosuid,nodev,relatime,size=1633932k,mode=700,uid=999,gid=999)
gvfsd-fuse on /run/user/999/gvfs type fuse.gvfsd-fuse (rw,nosuid,nodev,relatime,user_id=999,group_id=999)
/dev/sda1 on /mnt/boot-sav/sda1 type vfat (rw,relatime,fmask=0022,dmask=0022,codepage=437,iocharset=iso8859-1,shortname=mixed,errors=remount-ro)
/dev/sda2 on /mnt/boot-sav/sda2 type hfsplus (ro,relatime,umask=22,uid=0,gid=0,nls=utf8)
/dev/sda3 on /mnt/boot-sav/sda3 type hfsplus (ro,relatime,umask=22,uid=0,gid=0,nls=utf8)
/dev/sda4 on /mnt/boot-sav/sda4 type xfs (rw,relatime,attr2,inode64,noquota)


=================== ls:
/sys/block/sda (filtered):  alignment_offset bdi capability dev device discard_alignment events events_async events_poll_msecs ext_range holders inflight power queue range removable ro sda1 sda2 sda3 sda4 sda5 size slaves stat subsystem trace uevent
/sys/block/sdb (filtered):  alignment_offset bdi capability dev device discard_alignment events events_async events_poll_msecs ext_range holders inflight power queue range removable ro size slaves stat subsystem trace uevent
/sys/block/sdc (filtered):  alignment_offset bdi capability dev device discard_alignment events events_async events_poll_msecs ext_range holders inflight power queue range removable ro sdc1 sdc2 size slaves stat subsystem trace uevent
/dev (filtered):  autofs block bsg btrfs-control bus char console core cpu cpu_dma_latency cuse disk dri ecryptfs fb0 fd full fuse hidraw0 hidraw1 hpet hugepages i2c-0 i2c-1 i2c-10 i2c-11 i2c-12 i2c-13 i2c-14 i2c-2 i2c-3 i2c-4 i2c-5 i2c-6 i2c-7 i2c-8 i2c-9 initctl input kmsg kvm log mapper mcelog mei0 mem memory_bandwidth mqueue net network_latency network_throughput null port ppp psaux ptmx pts random rfkill rtc rtc0 sda sda1 sda2 sda3 sda4 sda5 sdb sdc sdc1 sdc2 sg0 sg1 sg2 shm snapshot snd stderr stdin stdout uhid uinput urandom vfio vga_arbiter vhci vhost-net xconsole zero
ls /dev/mapper:  control

=================== hexdump -n512 -C /dev/sda1
00000000  eb 58 90 42 53 44 20 20  34 2e 34 00 02 01 20 00  |.X.BSD  4.4... .|
00000010  02 00 00 00 00 f0 00 00  20 00 10 00 00 00 00 00  |........ .......|
00000020  00 40 06 00 4f 0c 00 00  00 00 00 00 02 00 00 00  |.@..O...........|
00000030  01 00 06 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000040  00 01 29 ed 17 e3 67 45  46 49 20 20 20 20 20 20  |..)...gEFI      |
00000050  20 20 46 41 54 33 32 20  20 20 fa 31 c0 8e d0 bc  |  FAT32   .1....|
00000060  00 7c fb 8e d8 e8 00 00  5e 83 c6 19 bb 07 00 fc  |.|......^.......|
00000070  ac 84 c0 74 06 b4 0e cd  10 eb f5 30 e4 cd 16 cd  |...t.......0....|
00000080  19 0d 0a 4e 6f 6e 2d 73  79 73 74 65 6d 20 64 69  |...Non-system di|
00000090  73 6b 0d 0a 50 72 65 73  73 20 61 6e 79 20 6b 65  |sk..Press any ke|
000000a0  79 20 74 6f 20 72 65 62  6f 6f 74 0d 0a 00 00 00  |y to reboot.....|
000000b0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
000001f0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 55 aa  |..............U.|
00000200

=================== hexdump -n512 -C /dev/sdc2
00000000  eb 3c 90 6d 6b 66 73 2e  66 61 74 00 02 04 01 00  |.<.mkfs.fat.....|
00000010  02 00 02 c0 11 f8 04 00  20 00 40 00 00 00 00 00  |........ .@.....|
00000020  00 00 00 00 80 00 29 af  67 74 24 4e 4f 20 4e 41  |......).gt$NO NA|
00000030  4d 45 20 20 20 20 46 41  54 31 32 20 20 20 0e 1f  |ME    FAT12   ..|
00000040  be 5b 7c ac 22 c0 74 0b  56 b4 0e bb 07 00 cd 10  |.[|.".t.V.......|
00000050  5e eb f0 32 e4 cd 16 cd  19 eb fe 54 68 69 73 20  |^..2.......This |
00000060  69 73 20 6e 6f 74 20 61  20 62 6f 6f 74 61 62 6c  |is not a bootabl|
00000070  65 20 64 69 73 6b 2e 20  20 50 6c 65 61 73 65 20  |e disk.  Please |
00000080  69 6e 73 65 72 74 20 61  20 62 6f 6f 74 61 62 6c  |insert a bootabl|
00000090  65 20 66 6c 6f 70 70 79  20 61 6e 64 0d 0a 70 72  |e floppy and..pr|
000000a0  65 73 73 20 61 6e 79 20  6b 65 79 20 74 6f 20 74  |ess any key to t|
000000b0  72 79 20 61 67 61 69 6e  20 2e 2e 2e 20 0d 0a 00  |ry again ... ...|
000000c0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
000001f0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 55 aa  |..............U.|
00000200

=================== df -Th:

Filesystem     Type      Size  Used Avail Use% Mounted on
udev           devtmpfs  7.8G     0  7.8G   0% /dev
tmpfs          tmpfs     1.6G  9.2M  1.6G   1% /run
/dev/sdc       iso9660   1.1G  1.1G     0 100% /cdrom
/dev/loop0     squashfs  1.1G  1.1G     0 100% /rofs
/cow           overlay   7.8G   81M  7.8G   2% /
tmpfs          tmpfs     7.8G   80K  7.8G   1% /dev/shm
tmpfs          tmpfs     5.0M  4.0K  5.0M   1% /run/lock
tmpfs          tmpfs     7.8G     0  7.8G   0% /sys/fs/cgroup
tmpfs          tmpfs     7.8G  1.2M  7.8G   1% /tmp
cgmfs          tmpfs     100K     0  100K   0% /run/cgmanager/fs
tmpfs          tmpfs     1.6G   64K  1.6G   1% /run/user/999
/dev/sda1      vfat      197M   21M  177M  11% /mnt/boot-sav/sda1
/dev/sda2      hfsplus    94G   11G   83G  11% /mnt/boot-sav/sda2
/dev/sda3      hfsplus   620M  510M  111M  83% /mnt/boot-sav/sda3
/dev/sda4      xfs       364G  3.1G  360G   1% /mnt/boot-sav/sda4

=================== fdisk -l:

Disk /dev/loop0: 1 GiB, 1101672448 bytes, 2151704 sectors
Units: sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes
Disk /dev/sda: 465.9 GiB, 500277790720 bytes, 977105060 sectors
Units: sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 4096 bytes
I/O size (minimum/optimal): 4096 bytes / 4096 bytes
Disklabel type: gpt
Disk identifier: 2614A948-70CB-44FD-A5F4-B4AFFDC16F21

Device         Start       End   Sectors   Size Type
/dev/sda1         40    409639    409600   200M EFI System
/dev/sda2     409640 195499455 195089816    93G Apple HFS/HFS+
/dev/sda3  195499456 196768999   1269544 619.9M Apple boot
/dev/sda4  196769792 958488575 761718784 363.2G Linux filesystem
/dev/sda5  958488576 977104895  18616320   8.9G Linux swap

Disk /dev/sdc: 14.6 GiB, 15610576896 bytes, 30489408 sectors
Units: sectors of 1 * 512 = 512 bytes
Sector size (logical/physical): 512 bytes / 512 bytes
I/O size (minimum/optimal): 512 bytes / 512 bytes
Disklabel type: dos
Disk identifier: 0x1cae5859

Device     Boot   Start     End Sectors  Size Id Type
/dev/sdc1  *          0 2247743 2247744  1.1G  0 Empty
/dev/sdc2       2231888 2236431    4544  2.2M ef EFI (FAT-12/16/32)


Gtk-Message: GtkDialog mapped without a transient parent. This is discouraged.


=================== Default settings of Boot Repair
The default repair of the Boot-Repair utility would reinstall the grub-efi-amd64-signed of sda4, using the following options:        sda1/boot/efi,
Additional repair would be performed: unhide-bootmenu-10s repair-filesystems   use-standard-efi-file rename-ms-efi


=================== Final advice in case of suggested repair
Please do not forget to make your BIOS boot on sda (500GB) disk!

You may also want to install Refind. (https://help.ubuntu.com/community/ubuntupreciseon2011imac)


=================== User settings
The settings chosen by the user will reinstall the grub-efi-amd64-signed of sda4, using the following options:        sda1/boot/efi,
Additional repair will be performed: unhide-bootmenu-10s repair-filesystems   use-standard-efi-file rename-ms-efi


Gtk-Message: GtkDialog mapped without a transient parent. This is discouraged.
Force Unmount all blkid partitions (for fsck) except / /boot /cdrom /dev /etc /home /opt /pas /proc /rofs /sys /tmp /usr /var

fsck -fyM /dev/sda1
fsck from util-linux 2.25.2

fsck -fyM /dev/sda2
fsck from util-linux 2.25.2

fsck -fyM /dev/sda3
fsck from util-linux 2.25.2

fsck -fyM /dev/sda4
fsck from util-linux 2.25.2

fsck -fyM /dev/sdc2
fsck from util-linux 2.25.2
fsck.fat 3.0.27 (2014-11-12)
/dev/sdc2: 4 files, 1112/1125 clusters
mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount /dev/sdc2 : Error code 32
mount -r /dev/sdc2 /mnt/boot-sav/sdc2
mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount -r /dev/sdc2 : Error code 32
/boot/efi added in sda4/fstab
Mount sda1 on /mnt/boot-sav/sda4/boot/efi
ls sda1/efi: /refind/keys/SLES-UEFI-CA-Certificate.cer /refind/keys/refind.cer /refind/keys/openSUSE-UEFI-CA-Certificate.cer /refind/keys/microsoft-uefica-public.der /refind/keys/microsoft-pca-public.der /refind/keys/microsoft-kekca-public.der /refind/keys/fedora-ca.cer /refind/keys/canonical-uefi-ca.der /refind/keys/altlinux.cer /refind/icons/vol_optical.png /refind/icons/vol_net.png /refind/icons/vol_internal.png /refind/icons/vol_external.png /refind/icons/transparent.png /refind/icons/tool_windows_rescue.png /refind/icons/tool_shell.png /refind/icons/tool_part.png /refind/icons/tool_netboot.png /refind/icons/tool_mok_tool.png /refind/icons/tool_memtest.png /refind/icons/tool_apple_rescue.png /refind/icons/os_xubuntu.png /refind/icons/os_win.png /refind/icons/os_win8.png /refind/icons/os_unknown.png /refind/icons/os_ubuntu.png /refind/icons/os_suse.png /refind/icons/os_slackware.png /refind/icons/os_refit.png /refind/icons/os_refind.png /refind/icons/os_redhat.png /refind/icons/os_opensuse.png /refind/icons/os_openbsd.png /refind/icons/os_network.png /refind/icons/os_netbsd.png /refind/icons/os_mythbuntu.png /refind/icons/os_manjaro.png /refind/icons/os_mandriva.png /refind/icons/os_mageia.png /refind/icons/os_mac.png /refind/icons/os_lubuntu.png /refind/icons/os_linux.png /refind/icons/os_linuxmint.png /refind/icons/os_legacy.png /refind/icons/os_kubuntu.png /refind/icons/os_hwtest.png /refind/icons/os_haiku.png /refind/icons/os_gummiboot.png /refind/icons/os_gentoo.png /refind/icons/os_funtoo.png /refind/icons/os_freedos.png /refind/icons/os_freebsd.png /refind/icons/os_fedora.png /refind/icons/os_fatdog.png /refind/icons/os_ecomstation.png /refind/icons/os_debian.png /refind/icons/os_clover.png /refind/icons/os_chrome.png /refind/icons/os_centos.png /refind/icons/os_arch.png /refind/icons/os_altlinux.png /refind/icons/func_shutdown.png /refind/icons/func_reset.png /refind/icons/func_firmware.png /refind/icons/func_exit.png /refind/icons/func_about.png /refind/icons/boot_win.png /refind/icons/boot_linux.png /refind/icons/arrow_right.png /refind/icons/arrow_left.png /refind/drivers_x64/ext4_x64.efi /APPLE/EXTENSIONS/Firmware.scap /ubuntu/shimx64.efi /ubuntu/MokManager.efi /ubuntu/grubx64.efi /ubuntu/grub.cfg /tools/gptsync_x64.efi /refind/refind_x64.efi /refind/refind.conf /refind/keys /refind/icons /refind/drivers_x64 /APPLE/EXTENSIONS

*******lspci -nnk | grep -iA3 vga
01:00.0 VGA compatible controller [0300]: NVIDIA Corporation GK107M [GeForce GT 750M Mac Edition] [10de:0fe9] (rev a1)
Subsystem: Apple Inc. Device [106b:0130]
Kernel driver in use: nouveau
01:00.1 Audio device [0403]: NVIDIA Corporation GK107 HDMI Audio Controller [10de:0e1b] (rev a1)
*******

grub-install --version
grub-install (GRUB) 2.02~beta2-22ubuntu1,grub-install (GRUB) 2.

chroot /mnt/boot-sav/sda4 efibootmgr -v
BootCurrent: 0000
Timeout: 5 seconds
BootOrder: 0080,0001,0000
Boot0000* Fedora	HD(1,800,64000,f91ef186-256a-4805-9f05-65ff9335baf1)File(EFIfedorashim.efi)
Boot0001* ubuntu	HD(1,28,64000,1a5f675f-5eb5-40ed-9da1-1bf509504936)File(EFIubuntushimx64.efi)
Boot0080* Mac OS X	HD(1,28,64000,1a5f675f-5eb5-40ed-9da1-1bf509504936)File(EFIrefindrefind_x64.efi)
Boot0081* Recovery OS	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1080,136000,48d4015d-fdbc-476a-93f8-e926958006e4)File(com.apple.recovery.bootboot.efi)
Boot0082* 	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1080,136000,48d4015d-fdbc-476a-93f8-e926958006e4)
BootFFFF* 	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1158,135f28,54c1c12c-1bdf-4146-a7be-344dfb37b3f5)File(SystemLibraryCoreServicesboot.efi)

chroot /mnt/boot-sav/sda4 uname -r
Kernel: 3.19.0-15-generic

Reinstall the grub-efi-amd64-signed of sda4
Installing for x86_64-efi platform.
Installation finished. No error reported.
grub-install --efi-directory=/boot/efi --target=x86_64-efi --uefi-secure-boot : exit code of grub-install :0
Refind detected on sda1
ls sda1/efi: /refind/keys/SLES-UEFI-CA-Certificate.cer /refind/keys/refind.cer /refind/keys/openSUSE-UEFI-CA-Certificate.cer /refind/keys/microsoft-uefica-public.der /refind/keys/microsoft-pca-public.der /refind/keys/microsoft-kekca-public.der /refind/keys/fedora-ca.cer /refind/keys/canonical-uefi-ca.der /refind/keys/altlinux.cer /refind/icons/vol_optical.png /refind/icons/vol_net.png /refind/icons/vol_internal.png /refind/icons/vol_external.png /refind/icons/transparent.png /refind/icons/tool_windows_rescue.png /refind/icons/tool_shell.png /refind/icons/tool_part.png /refind/icons/tool_netboot.png /refind/icons/tool_mok_tool.png /refind/icons/tool_memtest.png /refind/icons/tool_apple_rescue.png /refind/icons/os_xubuntu.png /refind/icons/os_win.png /refind/icons/os_win8.png /refind/icons/os_unknown.png /refind/icons/os_ubuntu.png /refind/icons/os_suse.png /refind/icons/os_slackware.png /refind/icons/os_refit.png /refind/icons/os_refind.png /refind/icons/os_redhat.png /refind/icons/os_opensuse.png /refind/icons/os_openbsd.png /refind/icons/os_network.png /refind/icons/os_netbsd.png /refind/icons/os_mythbuntu.png /refind/icons/os_manjaro.png /refind/icons/os_mandriva.png /refind/icons/os_mageia.png /refind/icons/os_mac.png /refind/icons/os_lubuntu.png /refind/icons/os_linux.png /refind/icons/os_linuxmint.png /refind/icons/os_legacy.png /refind/icons/os_kubuntu.png /refind/icons/os_hwtest.png /refind/icons/os_haiku.png /refind/icons/os_gummiboot.png /refind/icons/os_gentoo.png /refind/icons/os_funtoo.png /refind/icons/os_freedos.png /refind/icons/os_freebsd.png /refind/icons/os_fedora.png /refind/icons/os_fatdog.png /refind/icons/os_ecomstation.png /refind/icons/os_debian.png /refind/icons/os_clover.png /refind/icons/os_chrome.png /refind/icons/os_centos.png /refind/icons/os_arch.png /refind/icons/os_altlinux.png /refind/icons/func_shutdown.png /refind/icons/func_reset.png /refind/icons/func_firmware.png /refind/icons/func_exit.png /refind/icons/func_about.png /refind/icons/boot_win.png /refind/icons/boot_linux.png /refind/icons/arrow_right.png /refind/icons/arrow_left.png /refind/drivers_x64/ext4_x64.efi /APPLE/EXTENSIONS/Firmware.scap /ubuntu/shimx64.efi /ubuntu/MokManager.efi /ubuntu/grubx64.efi /ubuntu/grub.cfg /tools/gptsync_x64.efi /refind/refind_x64.efi /refind/refind.conf /refind/keys /refind/icons /refind/drivers_x64 /APPLE/EXTENSIONS
df /dev/sda1
cp /mnt/boot-sav/sda4/boot/efi/EFI/ubuntu/shimx64.efi /mnt/boot-sav/sda4/boot/efi/EFI/Microsoft/Boot/bootmgfw.efi (& .grb)
df /dev/sda1
cp /mnt/boot-sav/sda4/boot/efi/EFI/ubuntu/shimx64.efi /mnt/boot-sav/sda4/boot/efi/EFI/Microsoft/Boot/bootx64.efi (& .grb)
df /dev/sda1
cp /mnt/boot-sav/sda4/boot/efi/EFI/ubuntu/shimx64.efi /mnt/boot-sav/sda4/boot/efi/EFI/Boot/bootx64.efi (& .grb)
ls sda1/efi: /refind/keys/SLES-UEFI-CA-Certificate.cer /refind/keys/refind.cer /refind/keys/openSUSE-UEFI-CA-Certificate.cer /refind/keys/microsoft-uefica-public.der /refind/keys/microsoft-pca-public.der /refind/keys/microsoft-kekca-public.der /refind/keys/fedora-ca.cer /refind/keys/canonical-uefi-ca.der /refind/keys/altlinux.cer /refind/icons/vol_optical.png /refind/icons/vol_net.png /refind/icons/vol_internal.png /refind/icons/vol_external.png /refind/icons/transparent.png /refind/icons/tool_windows_rescue.png /refind/icons/tool_shell.png /refind/icons/tool_part.png /refind/icons/tool_netboot.png /refind/icons/tool_mok_tool.png /refind/icons/tool_memtest.png /refind/icons/tool_apple_rescue.png /refind/icons/os_xubuntu.png /refind/icons/os_win.png /refind/icons/os_win8.png /refind/icons/os_unknown.png /refind/icons/os_ubuntu.png /refind/icons/os_suse.png /refind/icons/os_slackware.png /refind/icons/os_refit.png /refind/icons/os_refind.png /refind/icons/os_redhat.png /refind/icons/os_opensuse.png /refind/icons/os_openbsd.png /refind/icons/os_network.png /refind/icons/os_netbsd.png /refind/icons/os_mythbuntu.png /refind/icons/os_manjaro.png /refind/icons/os_mandriva.png /refind/icons/os_mageia.png /refind/icons/os_mac.png /refind/icons/os_lubuntu.png /refind/icons/os_linux.png /refind/icons/os_linuxmint.png /refind/icons/os_legacy.png /refind/icons/os_kubuntu.png /refind/icons/os_hwtest.png /refind/icons/os_haiku.png /refind/icons/os_gummiboot.png /refind/icons/os_gentoo.png /refind/icons/os_funtoo.png /refind/icons/os_freedos.png /refind/icons/os_freebsd.png /refind/icons/os_fedora.png /refind/icons/os_fatdog.png /refind/icons/os_ecomstation.png /refind/icons/os_debian.png /refind/icons/os_clover.png /refind/icons/os_chrome.png /refind/icons/os_centos.png /refind/icons/os_arch.png /refind/icons/os_altlinux.png /refind/icons/func_shutdown.png /refind/icons/func_reset.png /refind/icons/func_firmware.png /refind/icons/func_exit.png /refind/icons/func_about.png /refind/icons/boot_win.png /refind/icons/boot_linux.png /refind/icons/arrow_right.png /refind/icons/arrow_left.png /refind/drivers_x64/ext4_x64.efi /Microsoft/Boot/bootx64.efi.grb /Microsoft/Boot/bootx64.efi /Microsoft/Boot/bootmgfw.efi.grb /Microsoft/Boot/bootmgfw.efi /APPLE/EXTENSIONS/Firmware.scap /ubuntu/shimx64.efi /ubuntu/MokManager.efi /ubuntu/grubx64.efi /ubuntu/grub.cfg /tools/gptsync_x64.efi /refind/refind_x64.efi /refind/refind.conf /refind/keys /refind/icons /refind/drivers_x64 /Microsoft/Boot /Boot/bootx64.efi.grb /Boot/bootx64.efi /APPLE/EXTENSIONS
Add /mnt/boot-sav/sda4/boot/efi efi entries in /mnt/boot-sav/sda4/etc/grub.d/25_custom
Adding custom /mnt/boot-sav/sda4/boot/efi/EFI/APPLE/EXTENSIONS/Firmware.scap
Adding custom /mnt/boot-sav/sda4/boot/efi/EFI/refind/refind_x64.efi
Adding custom /mnt/boot-sav/sda4/boot/efi/EFI/tools/gptsync_x64.efi
Adding custom /mnt/boot-sav/sda4/boot/efi/EFI/ubuntu/MokManager.efi
Adding custom /mnt/boot-sav/sda4/boot/efi/EFI/refind/drivers_x64/ext4_x64.efi

chroot /mnt/boot-sav/sda4 efibootmgr -v
BootCurrent: 0000
Timeout: 5 seconds
BootOrder: 0001,0080,0000
Boot0000* Fedora	HD(1,800,64000,f91ef186-256a-4805-9f05-65ff9335baf1)File(EFIfedorashim.efi)
Boot0001* ubuntu	HD(1,28,64000,1a5f675f-5eb5-40ed-9da1-1bf509504936)File(EFIubuntushimx64.efi)
Boot0080* Mac OS X	HD(1,28,64000,1a5f675f-5eb5-40ed-9da1-1bf509504936)File(EFIrefindrefind_x64.efi)
Boot0081* Recovery OS	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1080,136000,48d4015d-fdbc-476a-93f8-e926958006e4)File(com.apple.recovery.bootboot.efi)
Boot0082* 	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1080,136000,48d4015d-fdbc-476a-93f8-e926958006e4)
BootFFFF* 	ACPI(a0341d0,0)PCI(1c,4)PCI(0,0)SATA(0,0,0)HD(3,3a2a1158,135f28,54c1c12c-1bdf-4146-a7be-344dfb37b3f5)File(SystemLibraryCoreServicesboot.efi)

chroot /mnt/boot-sav/sda4 update-grub
Generating grub configuration file ...
Found linux image: /boot/vmlinuz-3.19.0-15-generic
Found initrd image: /boot/initrd.img-3.19.0-15-generic
grub-probe: error: cannot find a GRUB drive for /dev/sdc1.  Check your device.map.
Found Mac OS X on /dev/sda2
mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount /dev/sdc2 : Error code 32
mount -r /dev/sdc2 /mnt/boot-sav/sdc2
mount: /dev/sdc2 is already mounted or /mnt/boot-sav/sdc2 busy
mount -r /dev/sdc2 : Error code 32
Unhide GRUB boot menu in sda4/boot/grub/grub.cfg

An error occurred during the repair.

You can now reboot your computer.
Please do not forget to make your BIOS boot on sda (500GB) disk!

You may also want to install Refind. (https://help.ubuntu.com/community/ubuntupreciseon2011imac)