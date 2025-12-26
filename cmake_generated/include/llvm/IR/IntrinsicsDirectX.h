/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifndef LLVM_IR_INTRINSIC_DX_ENUMS_H
#define LLVM_IR_INTRINSIC_DX_ENUMS_H
namespace llvm::Intrinsic {
enum DXIntrinsics : unsigned {
// Enum values for intrinsics.
    dx_all = 4118,                                    // llvm.dx.all (IntrinsicsDirectX.td:83)
    dx_any,                                    // llvm.dx.any (IntrinsicsDirectX.td:84)
    dx_asdouble,                               // llvm.dx.asdouble (IntrinsicsDirectX.td:85)
    dx_cross,                                  // llvm.dx.cross (IntrinsicsDirectX.td:89)
    dx_degrees,                                // llvm.dx.degrees (IntrinsicsDirectX.td:133)
    dx_discard,                                // llvm.dx.discard (IntrinsicsDirectX.td:164)
    dx_dot2,                                   // llvm.dx.dot2 (IntrinsicsDirectX.td:92)
    dx_dot2add,                                // llvm.dx.dot2add (IntrinsicsDirectX.td:125)
    dx_dot3,                                   // llvm.dx.dot3 (IntrinsicsDirectX.td:98)
    dx_dot4,                                   // llvm.dx.dot4 (IntrinsicsDirectX.td:105)
    dx_dot4add_i8packed,                       // llvm.dx.dot4add.i8packed (IntrinsicsDirectX.td:129)
    dx_dot4add_u8packed,                       // llvm.dx.dot4add.u8packed (IntrinsicsDirectX.td:130)
    dx_fdot,                                   // llvm.dx.fdot (IntrinsicsDirectX.td:113)
    dx_firstbitlow,                            // llvm.dx.firstbitlow (IntrinsicsDirectX.td:167)
    dx_firstbitshigh,                          // llvm.dx.firstbitshigh (IntrinsicsDirectX.td:166)
    dx_firstbituhigh,                          // llvm.dx.firstbituhigh (IntrinsicsDirectX.td:165)
    dx_flattened_thread_id_in_group,           // llvm.dx.flattened.thread.id.in.group (IntrinsicsDirectX.td:18)
    dx_frac,                                   // llvm.dx.frac (IntrinsicsDirectX.td:132)
    dx_group_id,                               // llvm.dx.group.id (IntrinsicsDirectX.td:16)
    dx_group_memory_barrier_with_group_sync,   // llvm.dx.group.memory.barrier.with.group.sync (IntrinsicsDirectX.td:169)
    dx_imad,                                   // llvm.dx.imad (IntrinsicsDirectX.td:143)
    dx_isinf,                                  // llvm.dx.isinf (IntrinsicsDirectX.td:135)
    dx_isnan,                                  // llvm.dx.isnan (IntrinsicsDirectX.td:137)
    dx_lerp,                                   // llvm.dx.lerp (IntrinsicsDirectX.td:140)
    dx_nclamp,                                 // llvm.dx.nclamp (IntrinsicsDirectX.td:88)
    dx_normalize,                              // llvm.dx.normalize (IntrinsicsDirectX.td:145)
    dx_radians,                                // llvm.dx.radians (IntrinsicsDirectX.td:163)
    dx_resource_casthandle,                    // llvm.dx.resource.casthandle (IntrinsicsDirectX.td:81)
    dx_resource_getpointer,                    // llvm.dx.resource.getpointer (IntrinsicsDirectX.td:39)
    dx_resource_handlefrombinding,             // llvm.dx.resource.handlefrombinding (IntrinsicsDirectX.td:24)
    dx_resource_handlefromimplicitbinding,     // llvm.dx.resource.handlefromimplicitbinding (IntrinsicsDirectX.td:33)
    dx_resource_load_cbufferrow_2,             // llvm.dx.resource.load.cbufferrow.2 (IntrinsicsDirectX.td:72)
    dx_resource_load_cbufferrow_4,             // llvm.dx.resource.load.cbufferrow.4 (IntrinsicsDirectX.td:68)
    dx_resource_load_cbufferrow_8,             // llvm.dx.resource.load.cbufferrow.8 (IntrinsicsDirectX.td:63)
    dx_resource_load_rawbuffer,                // llvm.dx.resource.load.rawbuffer (IntrinsicsDirectX.td:52)
    dx_resource_load_typedbuffer,              // llvm.dx.resource.load.typedbuffer (IntrinsicsDirectX.td:46)
    dx_resource_nonuniformindex,               // llvm.dx.resource.nonuniformindex (IntrinsicsDirectX.td:43)
    dx_resource_store_rawbuffer,               // llvm.dx.resource.store.rawbuffer (IntrinsicsDirectX.td:56)
    dx_resource_store_typedbuffer,             // llvm.dx.resource.store.typedbuffer (IntrinsicsDirectX.td:49)
    dx_resource_updatecounter,                 // llvm.dx.resource.updatecounter (IntrinsicsDirectX.td:76)
    dx_rsqrt,                                  // llvm.dx.rsqrt (IntrinsicsDirectX.td:146)
    dx_saturate,                               // llvm.dx.saturate (IntrinsicsDirectX.td:90)
    dx_sclamp,                                 // llvm.dx.sclamp (IntrinsicsDirectX.td:87)
    dx_sdot,                                   // llvm.dx.sdot (IntrinsicsDirectX.td:117)
    dx_sign,                                   // llvm.dx.sign (IntrinsicsDirectX.td:159)
    dx_splitdouble,                            // llvm.dx.splitdouble (IntrinsicsDirectX.td:161)
    dx_step,                                   // llvm.dx.step (IntrinsicsDirectX.td:160)
    dx_thread_id,                              // llvm.dx.thread.id (IntrinsicsDirectX.td:15)
    dx_thread_id_in_group,                     // llvm.dx.thread.id.in.group (IntrinsicsDirectX.td:17)
    dx_uclamp,                                 // llvm.dx.uclamp (IntrinsicsDirectX.td:86)
    dx_udot,                                   // llvm.dx.udot (IntrinsicsDirectX.td:121)
    dx_umad,                                   // llvm.dx.umad (IntrinsicsDirectX.td:144)
    dx_wave_active_countbits,                  // llvm.dx.wave.active.countbits (IntrinsicsDirectX.td:147)
    dx_wave_all,                               // llvm.dx.wave.all (IntrinsicsDirectX.td:148)
    dx_wave_any,                               // llvm.dx.wave.any (IntrinsicsDirectX.td:149)
    dx_wave_get_lane_count,                    // llvm.dx.wave.get.lane.count (IntrinsicsDirectX.td:157)
    dx_wave_getlaneindex,                      // llvm.dx.wave.getlaneindex (IntrinsicsDirectX.td:150)
    dx_wave_is_first_lane,                     // llvm.dx.wave.is.first.lane (IntrinsicsDirectX.td:155)
    dx_wave_readlane,                          // llvm.dx.wave.readlane (IntrinsicsDirectX.td:156)
    dx_wave_reduce_max,                        // llvm.dx.wave.reduce.max (IntrinsicsDirectX.td:151)
    dx_wave_reduce_sum,                        // llvm.dx.wave.reduce.sum (IntrinsicsDirectX.td:153)
    dx_wave_reduce_umax,                       // llvm.dx.wave.reduce.umax (IntrinsicsDirectX.td:152)
    dx_wave_reduce_usum,                       // llvm.dx.wave.reduce.usum (IntrinsicsDirectX.td:154)
}; // enum
} // namespace llvm::Intrinsic
#endif

