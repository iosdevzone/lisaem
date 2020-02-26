/**************************************************************************************\
*                             Apple Lisa 2 Emulator                                    *
*                                                                                      *
*              The Lisa Emulator Project  1.2.7-BETA_2020.02.22                    *
*                  Copyright (C) 2020 Ray Arachelian                                   *
*                            All Rights Reserved                                       *
*                                                                                      *
*                        Reset Global Variables .c file                                *
*                                                                                      *
*            This is a stub file - actual variables are in vars.h.                     *
*        (this is autogenerated by the build script. do not hand edit.)                *
\**************************************************************************************/

#define IN_UNVARS_C 1
// include all the includes we'll (might) need (and want)
#include <vars.h>

#define REASSIGN(  a , b  , c  )  {(b) = (c);}

void unvars(void)
{

#undef GLOBAL
#undef AGLOBAL
#undef ACGLOBAL

REASSIGN(int,cheat_ram_test,1);  // careful if we change the type of this: `extern "C" float hidpi_scale;` in LisaConfigFrame.cpp also
REASSIGN(int,romless,0);
REASSIGN(int,sound_effects_on,1);
REASSIGN(int,profile_power,127);
REASSIGN(float,hidpi_scale,1.0); // time to support HiDPI displays and "Retina" displays, yeay!  Party like it's 2012!
REASSIGN(int32,video_scan,0);
REASSIGN(int,lisa_vid_size_x,720);
REASSIGN(int,lisa_vid_size_y,364);
REASSIGN(int,lisa_vid_size_xbytes,90);
REASSIGN(int,has_lisa_xl_screenmod,0);
REASSIGN(int,running_lisa_os,LISA_ROM_RUNNING);
REASSIGN(int,mouse_x_tolerance,0);
REASSIGN(int,mouse_y_tolerance,0);
REASSIGN(int,mouse_x_halfing_tolerance,1);
REASSIGN(int,mouse_y_halfing_tolerance,1);
REASSIGN(uint32,lisa_os_mouse_x_ptr,0x486);
REASSIGN(uint32,lisa_os_mouse_y_ptr,0x488);
REASSIGN(uint32,lisa_os_boot_mouse_x_ptr,0x486);
REASSIGN(uint32,lisa_os_boot_mouse_y_ptr,0x488);
REASSIGN(int8,floppy_picked,1);                         //2006.06.11 - if 1 enable profile access immediately
REASSIGN(uint8,floppy_iorom,0);
REASSIGN(int32,lisa_alarm,0);
REASSIGN(uint8,lisa_clock_set_idx,0);
REASSIGN(uint8,lisa_alarm_power,0);
REASSIGN(uint8,lisa_clock_on,1);
REASSIGN(uint8,lastsflag,0);
REASSIGN(uint8,floppy_FDIR,0);
REASSIGN(uint8,floppy_6504_wait,1);
REASSIGN(uint8,floppy_irq_top,1);
REASSIGN(uint8,floppy_irq_bottom,1);  // interrupt settings (are floppies allowd to interrupt)
REASSIGN(uint32,mmudirty,0);
REASSIGN(uint32,segment1,0);                   // MMU related bits
REASSIGN(uint32,segment2,0);
REASSIGN(uint32,context,0);
REASSIGN(uint32,lastcontext,0);
REASSIGN(uint32,address32,0);                  // not sure that this is needed anymore
REASSIGN(uint32,address,0);
REASSIGN(uint32,mmuseg,0);
REASSIGN(uint32,mmucontext,0);
REASSIGN(uint32,transaddress,0);
REASSIGN(uint32,diag1,0);
REASSIGN(uint32,diag2,0);
REASSIGN(uint32,start,1);
REASSIGN(uint32,softmem,0);
REASSIGN(uint32,vertical,0);
REASSIGN(uint32,verticallatch,0);
REASSIGN(uint32,hardmem,0);
REASSIGN(uint32,videolatch,0x2f);
REASSIGN(uint32,lastvideolatch,0x2f);
REASSIGN(uint32,statusregister,0);
REASSIGN(uint32,videoramdirty,0);
REASSIGN(uint32,videoximgdirty,0);
REASSIGN(uint16,memerror,0);
REASSIGN(int,dirty_x_min,720);
REASSIGN(int,dirty_x_max,0);
REASSIGN(int,dirty_y_min,364);
REASSIGN(int,dirty_y_max,0);
REASSIGN(int,e_dirty_x_min,720);
REASSIGN(int,e_dirty_x_max,0);
REASSIGN(int,e_dirty_y_min,500);
REASSIGN(int,e_dirty_y_max,0);
REASSIGN(uint8,contrast,0xff); // 0xff=black 0x80=visible 0x00=all white
REASSIGN(uint8,volume,4); // 0x0e is the mask for this.
REASSIGN(int,debug_log_enabled,0);
REASSIGN(int,debug_log_onclick,0);
REASSIGN(int,dbx,0);
REASSIGN(int16,copsqueuelen,0);
REASSIGN(uint8, NMIKEY,0);
REASSIGN(uint8, cops_powerset,0);
REASSIGN(uint8, cops_clocksetmode,0);
REASSIGN(uint8, cops_timermode,0);
REASSIGN( int8, mouse_pending,0);
REASSIGN( int8, mouse_pending_x,0);
REASSIGN( int8, mouse_pending_y,0);
REASSIGN(int16, last_mouse_x,0);
REASSIGN(int16, last_mouse_y,0);
REASSIGN(int16, last_mouse_button,0);
REASSIGN(int16, mousequeuelen,0);
REASSIGN(uint32,iipct_mallocs ,0);
REASSIGN(uint32,ipcts_allocated,0);
REASSIGN(int64,ipcts_used,0);
REASSIGN(int64,ipcts_free,0);
REASSIGN(uint32,initial_ipcts,4128);
REASSIGN(XTIMER,lastrefresh,0);
REASSIGN(XTIMER,virq_start,FULL_FRAME_CYCLES);
REASSIGN(XTIMER,fdir_timer,-1);
REASSIGN(XTIMER,cpu68k_clocks_stop,ONE_SECOND);
REASSIGN(XTIMER,cpu68k_clocks,0);
REASSIGN(XTIMER,lasttenth,0);
REASSIGN(XTIMER,clktest,0);
REASSIGN(XTIMER,cops_event,-1);
REASSIGN(XTIMER,tenth_sec_cycles,TENTH_OF_A_SECOND);      // 10th of a second cycles.  5,000,000 cycles/sec so 500000 10ths/sec
REASSIGN(XTIMER,z8530_event,-1);
REASSIGN(uint32,via_clock_diff,2);       // 2
REASSIGN(float,via_throttle_factor,1.0);
REASSIGN(int,microsleep_tix,0);
REASSIGN(int,microsleep_tix,0);
REASSIGN(uint32,TWOMEGMLIM,0x001fffff);
REASSIGN(uint8,via_running,0); // If any VIA has a runing timer/SHIFTREG, then this is set (using bitmap of vianumber)
REASSIGN(uint8,bitdepth,0);
REASSIGN(uint8,softmemerror,0);
REASSIGN(uint8,harderror,0);
REASSIGN(uint8,videoirq,0);
REASSIGN(uint8,bustimeout,0);
REASSIGN(uint8,videobit,0);
REASSIGN(uint8,serialnumshiftcount,0);
REASSIGN(uint8,serialnumshift,0);
REASSIGN(int,SoundLastOne,5);
REASSIGN(int,z8530_last_irq_status_bits,0);
REASSIGN(int,scc_a_IW,-1);
REASSIGN(int,scc_b_IW,-1);
REASSIGN(uint8,serial_a,SCC_NOTHING);
REASSIGN(uint8,serial_b,SCC_NOTHING);
REASSIGN(uint32,last_bad_parity_adr,0);
REASSIGN(int,scc_running,0);
REASSIGN(int32,physaddr,0);
REASSIGN(int,dispmemready,0);
REASSIGN(uint32,minlisaram,0);
}
