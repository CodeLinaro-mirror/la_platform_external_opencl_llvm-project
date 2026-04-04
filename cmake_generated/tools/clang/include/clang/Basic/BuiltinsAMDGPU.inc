/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* List of builtins that Clang recognizes                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_BUILTIN_ENUMERATORS
    BI__builtin_amdgcn_add_max_i32,
    BI__builtin_amdgcn_add_max_u32,
    BI__builtin_amdgcn_add_min_i32,
    BI__builtin_amdgcn_add_min_u32,
    BI__builtin_amdgcn_alignbit,
    BI__builtin_amdgcn_alignbyte,
    BI__builtin_amdgcn_ashr_pk_i8_i32,
    BI__builtin_amdgcn_ashr_pk_u8_i32,
    BI__builtin_amdgcn_atomic_dec32,
    BI__builtin_amdgcn_atomic_dec64,
    BI__builtin_amdgcn_atomic_inc32,
    BI__builtin_amdgcn_atomic_inc64,
    BI__builtin_amdgcn_ballot_w32,
    BI__builtin_amdgcn_ballot_w64,
    BI__builtin_amdgcn_bitop3_b16,
    BI__builtin_amdgcn_bitop3_b32,
    BI__builtin_amdgcn_buffer_wbinvl1,
    BI__builtin_amdgcn_buffer_wbinvl1_vol,
    BI__builtin_amdgcn_class,
    BI__builtin_amdgcn_classf,
    BI__builtin_amdgcn_classh,
    BI__builtin_amdgcn_cluster_id_x,
    BI__builtin_amdgcn_cluster_id_y,
    BI__builtin_amdgcn_cluster_id_z,
    BI__builtin_amdgcn_cluster_load_async_to_lds_b8,
    BI__builtin_amdgcn_cluster_load_async_to_lds_b32,
    BI__builtin_amdgcn_cluster_load_async_to_lds_b64,
    BI__builtin_amdgcn_cluster_load_async_to_lds_b128,
    BI__builtin_amdgcn_cluster_load_b32,
    BI__builtin_amdgcn_cluster_load_b64,
    BI__builtin_amdgcn_cluster_load_b128,
    BI__builtin_amdgcn_cluster_workgroup_flat_id,
    BI__builtin_amdgcn_cluster_workgroup_id_x,
    BI__builtin_amdgcn_cluster_workgroup_id_y,
    BI__builtin_amdgcn_cluster_workgroup_id_z,
    BI__builtin_amdgcn_cluster_workgroup_max_flat_id,
    BI__builtin_amdgcn_cluster_workgroup_max_id_x,
    BI__builtin_amdgcn_cluster_workgroup_max_id_y,
    BI__builtin_amdgcn_cluster_workgroup_max_id_z,
    BI__builtin_amdgcn_cooperative_atomic_load_8x16B,
    BI__builtin_amdgcn_cooperative_atomic_load_16x8B,
    BI__builtin_amdgcn_cooperative_atomic_load_32x4B,
    BI__builtin_amdgcn_cooperative_atomic_store_8x16B,
    BI__builtin_amdgcn_cooperative_atomic_store_16x8B,
    BI__builtin_amdgcn_cooperative_atomic_store_32x4B,
    BI__builtin_amdgcn_cos_bf16,
    BI__builtin_amdgcn_cosf,
    BI__builtin_amdgcn_cosh,
    BI__builtin_amdgcn_cubeid,
    BI__builtin_amdgcn_cubema,
    BI__builtin_amdgcn_cubesc,
    BI__builtin_amdgcn_cubetc,
    BI__builtin_amdgcn_cvt_f16_bf8,
    BI__builtin_amdgcn_cvt_f16_fp8,
    BI__builtin_amdgcn_cvt_f32_bf8,
    BI__builtin_amdgcn_cvt_f32_fp8,
    BI__builtin_amdgcn_cvt_f32_fp8_e5m3,
    BI__builtin_amdgcn_cvt_off_f32_i4,
    BI__builtin_amdgcn_cvt_pk_bf8_f16,
    BI__builtin_amdgcn_cvt_pk_bf8_f32,
    BI__builtin_amdgcn_cvt_pk_f16_bf8,
    BI__builtin_amdgcn_cvt_pk_f16_fp8,
    BI__builtin_amdgcn_cvt_pk_f32_bf8,
    BI__builtin_amdgcn_cvt_pk_f32_fp8,
    BI__builtin_amdgcn_cvt_pk_fp8_f16,
    BI__builtin_amdgcn_cvt_pk_fp8_f32,
    BI__builtin_amdgcn_cvt_pk_fp8_f32_e5m3,
    BI__builtin_amdgcn_cvt_pk_i16,
    BI__builtin_amdgcn_cvt_pk_u8_f32,
    BI__builtin_amdgcn_cvt_pk_u16,
    BI__builtin_amdgcn_cvt_pknorm_i16,
    BI__builtin_amdgcn_cvt_pknorm_u16,
    BI__builtin_amdgcn_cvt_pkrtz,
    BI__builtin_amdgcn_cvt_scale_pk8_bf16_bf8,
    BI__builtin_amdgcn_cvt_scale_pk8_bf16_fp4,
    BI__builtin_amdgcn_cvt_scale_pk8_bf16_fp8,
    BI__builtin_amdgcn_cvt_scale_pk8_f16_bf8,
    BI__builtin_amdgcn_cvt_scale_pk8_f16_fp4,
    BI__builtin_amdgcn_cvt_scale_pk8_f16_fp8,
    BI__builtin_amdgcn_cvt_scale_pk8_f32_bf8,
    BI__builtin_amdgcn_cvt_scale_pk8_f32_fp4,
    BI__builtin_amdgcn_cvt_scale_pk8_f32_fp8,
    BI__builtin_amdgcn_cvt_scale_pk16_bf16_bf6,
    BI__builtin_amdgcn_cvt_scale_pk16_bf16_fp6,
    BI__builtin_amdgcn_cvt_scale_pk16_f16_bf6,
    BI__builtin_amdgcn_cvt_scale_pk16_f16_fp6,
    BI__builtin_amdgcn_cvt_scale_pk16_f32_bf6,
    BI__builtin_amdgcn_cvt_scale_pk16_f32_fp6,
    BI__builtin_amdgcn_cvt_scalef32_2xpk16_bf6_f32,
    BI__builtin_amdgcn_cvt_scalef32_2xpk16_fp6_f32,
    BI__builtin_amdgcn_cvt_scalef32_f16_bf8,
    BI__builtin_amdgcn_cvt_scalef32_f16_fp8,
    BI__builtin_amdgcn_cvt_scalef32_f32_bf8,
    BI__builtin_amdgcn_cvt_scalef32_f32_fp8,
    BI__builtin_amdgcn_cvt_scalef32_pk8_bf8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk8_bf8_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk8_bf8_f32,
    BI__builtin_amdgcn_cvt_scalef32_pk8_fp4_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk8_fp4_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk8_fp4_f32,
    BI__builtin_amdgcn_cvt_scalef32_pk8_fp8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk8_fp8_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk8_fp8_f32,
    BI__builtin_amdgcn_cvt_scalef32_pk16_bf6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk16_bf6_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk16_bf6_f32,
    BI__builtin_amdgcn_cvt_scalef32_pk16_fp6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk16_fp6_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk16_fp6_f32,
    BI__builtin_amdgcn_cvt_scalef32_pk32_bf6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk32_bf6_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk32_bf16_bf6,
    BI__builtin_amdgcn_cvt_scalef32_pk32_bf16_fp6,
    BI__builtin_amdgcn_cvt_scalef32_pk32_f16_bf6,
    BI__builtin_amdgcn_cvt_scalef32_pk32_f16_fp6,
    BI__builtin_amdgcn_cvt_scalef32_pk32_f32_bf6,
    BI__builtin_amdgcn_cvt_scalef32_pk32_f32_fp6,
    BI__builtin_amdgcn_cvt_scalef32_pk32_fp6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk32_fp6_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk_bf8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk_bf8_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk_bf8_f32,
    BI__builtin_amdgcn_cvt_scalef32_pk_bf16_bf8,
    BI__builtin_amdgcn_cvt_scalef32_pk_bf16_fp4,
    BI__builtin_amdgcn_cvt_scalef32_pk_bf16_fp8,
    BI__builtin_amdgcn_cvt_scalef32_pk_f16_bf8,
    BI__builtin_amdgcn_cvt_scalef32_pk_f16_fp4,
    BI__builtin_amdgcn_cvt_scalef32_pk_f16_fp8,
    BI__builtin_amdgcn_cvt_scalef32_pk_f32_bf8,
    BI__builtin_amdgcn_cvt_scalef32_pk_f32_fp4,
    BI__builtin_amdgcn_cvt_scalef32_pk_f32_fp8,
    BI__builtin_amdgcn_cvt_scalef32_pk_fp4_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk_fp4_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk_fp4_f32,
    BI__builtin_amdgcn_cvt_scalef32_pk_fp8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_pk_fp8_f16,
    BI__builtin_amdgcn_cvt_scalef32_pk_fp8_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_bf8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_bf8_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_bf8_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_fp8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_fp8_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_fp8_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_f32,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk_fp4_bf16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk_fp4_f16,
    BI__builtin_amdgcn_cvt_scalef32_sr_pk_fp4_f32,
    BI__builtin_amdgcn_cvt_sr_bf8_f16,
    BI__builtin_amdgcn_cvt_sr_bf8_f32,
    BI__builtin_amdgcn_cvt_sr_bf16_f32,
    BI__builtin_amdgcn_cvt_sr_f16_f32,
    BI__builtin_amdgcn_cvt_sr_fp8_f16,
    BI__builtin_amdgcn_cvt_sr_fp8_f32,
    BI__builtin_amdgcn_cvt_sr_fp8_f32_e5m3,
    BI__builtin_amdgcn_cvt_sr_pk_bf16_f32,
    BI__builtin_amdgcn_cvt_sr_pk_f16_f32,
    BI__builtin_amdgcn_dispatch_ptr,
    BI__builtin_amdgcn_div_fixup,
    BI__builtin_amdgcn_div_fixupf,
    BI__builtin_amdgcn_div_fixuph,
    BI__builtin_amdgcn_div_fmas,
    BI__builtin_amdgcn_div_fmasf,
    BI__builtin_amdgcn_div_scale,
    BI__builtin_amdgcn_div_scalef,
    BI__builtin_amdgcn_dot4_f32_bf8_bf8,
    BI__builtin_amdgcn_dot4_f32_bf8_fp8,
    BI__builtin_amdgcn_dot4_f32_fp8_bf8,
    BI__builtin_amdgcn_dot4_f32_fp8_fp8,
    BI__builtin_amdgcn_ds_append,
    BI__builtin_amdgcn_ds_atomic_async_barrier_arrive_b64,
    BI__builtin_amdgcn_ds_atomic_barrier_arrive_rtn_b64,
    BI__builtin_amdgcn_ds_atomic_fadd_f32,
    BI__builtin_amdgcn_ds_atomic_fadd_f64,
    BI__builtin_amdgcn_ds_atomic_fadd_v2bf16,
    BI__builtin_amdgcn_ds_atomic_fadd_v2f16,
    BI__builtin_amdgcn_ds_bpermute,
    BI__builtin_amdgcn_ds_bpermute_fi_b32,
    BI__builtin_amdgcn_ds_bvh_stack_push4_pop1_rtn,
    BI__builtin_amdgcn_ds_bvh_stack_push8_pop1_rtn,
    BI__builtin_amdgcn_ds_bvh_stack_push8_pop2_rtn,
    BI__builtin_amdgcn_ds_bvh_stack_rtn,
    BI__builtin_amdgcn_ds_consume,
    BI__builtin_amdgcn_ds_faddf,
    BI__builtin_amdgcn_ds_fmaxf,
    BI__builtin_amdgcn_ds_fminf,
    BI__builtin_amdgcn_ds_gws_barrier,
    BI__builtin_amdgcn_ds_gws_init,
    BI__builtin_amdgcn_ds_gws_sema_br,
    BI__builtin_amdgcn_ds_gws_sema_p,
    BI__builtin_amdgcn_ds_gws_sema_release_all,
    BI__builtin_amdgcn_ds_gws_sema_v,
    BI__builtin_amdgcn_ds_load_tr4_b64_v2i32,
    BI__builtin_amdgcn_ds_load_tr6_b96_v3i32,
    BI__builtin_amdgcn_ds_load_tr8_b64_v2i32,
    BI__builtin_amdgcn_ds_load_tr16_b128_v8bf16,
    BI__builtin_amdgcn_ds_load_tr16_b128_v8f16,
    BI__builtin_amdgcn_ds_load_tr16_b128_v8i16,
    BI__builtin_amdgcn_ds_permute,
    BI__builtin_amdgcn_ds_read_tr4_b64_v2i32,
    BI__builtin_amdgcn_ds_read_tr6_b96_v3i32,
    BI__builtin_amdgcn_ds_read_tr8_b64_v2i32,
    BI__builtin_amdgcn_ds_read_tr16_b64_v4bf16,
    BI__builtin_amdgcn_ds_read_tr16_b64_v4f16,
    BI__builtin_amdgcn_ds_read_tr16_b64_v4i16,
    BI__builtin_amdgcn_ds_swizzle,
    BI__builtin_amdgcn_endpgm,
    BI__builtin_amdgcn_exp2_bf16,
    BI__builtin_amdgcn_exp2f,
    BI__builtin_amdgcn_fcmp,
    BI__builtin_amdgcn_fcmpf,
    BI__builtin_amdgcn_fdot2,
    BI__builtin_amdgcn_fdot2_bf16_bf16,
    BI__builtin_amdgcn_fdot2_f16_f16,
    BI__builtin_amdgcn_fdot2_f32_bf16,
    BI__builtin_amdgcn_fdot2c_f32_bf16,
    BI__builtin_amdgcn_fence,
    BI__builtin_amdgcn_flat_atomic_fadd_f32,
    BI__builtin_amdgcn_flat_atomic_fadd_f64,
    BI__builtin_amdgcn_flat_atomic_fadd_v2bf16,
    BI__builtin_amdgcn_flat_atomic_fadd_v2f16,
    BI__builtin_amdgcn_flat_atomic_fmax_f64,
    BI__builtin_amdgcn_flat_atomic_fmin_f64,
    BI__builtin_amdgcn_flat_load_monitor_b32,
    BI__builtin_amdgcn_flat_load_monitor_b64,
    BI__builtin_amdgcn_flat_load_monitor_b128,
    BI__builtin_amdgcn_flat_prefetch,
    BI__builtin_amdgcn_fmed3f,
    BI__builtin_amdgcn_fmed3h,
    BI__builtin_amdgcn_fract,
    BI__builtin_amdgcn_fractf,
    BI__builtin_amdgcn_fracth,
    BI__builtin_amdgcn_frexp_exp,
    BI__builtin_amdgcn_frexp_expf,
    BI__builtin_amdgcn_frexp_exph,
    BI__builtin_amdgcn_frexp_mant,
    BI__builtin_amdgcn_frexp_mantf,
    BI__builtin_amdgcn_frexp_manth,
    BI__builtin_amdgcn_get_fpenv,
    BI__builtin_amdgcn_global_atomic_fadd_f32,
    BI__builtin_amdgcn_global_atomic_fadd_f64,
    BI__builtin_amdgcn_global_atomic_fadd_v2bf16,
    BI__builtin_amdgcn_global_atomic_fadd_v2f16,
    BI__builtin_amdgcn_global_atomic_fmax_f64,
    BI__builtin_amdgcn_global_atomic_fmin_f64,
    BI__builtin_amdgcn_global_load_async_to_lds_b8,
    BI__builtin_amdgcn_global_load_async_to_lds_b32,
    BI__builtin_amdgcn_global_load_async_to_lds_b64,
    BI__builtin_amdgcn_global_load_async_to_lds_b128,
    BI__builtin_amdgcn_global_load_lds,
    BI__builtin_amdgcn_global_load_monitor_b32,
    BI__builtin_amdgcn_global_load_monitor_b64,
    BI__builtin_amdgcn_global_load_monitor_b128,
    BI__builtin_amdgcn_global_load_tr4_b64_v2i32,
    BI__builtin_amdgcn_global_load_tr6_b96_v3i32,
    BI__builtin_amdgcn_global_load_tr8_b64_v2i32,
    BI__builtin_amdgcn_global_load_tr16_b128_v8bf16,
    BI__builtin_amdgcn_global_load_tr16_b128_v8f16,
    BI__builtin_amdgcn_global_load_tr16_b128_v8i16,
    BI__builtin_amdgcn_global_load_tr_b64_i32,
    BI__builtin_amdgcn_global_load_tr_b64_v2i32,
    BI__builtin_amdgcn_global_load_tr_b128_v4bf16,
    BI__builtin_amdgcn_global_load_tr_b128_v4f16,
    BI__builtin_amdgcn_global_load_tr_b128_v4i16,
    BI__builtin_amdgcn_global_load_tr_b128_v8bf16,
    BI__builtin_amdgcn_global_load_tr_b128_v8f16,
    BI__builtin_amdgcn_global_load_tr_b128_v8i16,
    BI__builtin_amdgcn_global_prefetch,
    BI__builtin_amdgcn_global_store_async_from_lds_b8,
    BI__builtin_amdgcn_global_store_async_from_lds_b32,
    BI__builtin_amdgcn_global_store_async_from_lds_b64,
    BI__builtin_amdgcn_global_store_async_from_lds_b128,
    BI__builtin_amdgcn_grid_size_x,
    BI__builtin_amdgcn_grid_size_y,
    BI__builtin_amdgcn_grid_size_z,
    BI__builtin_amdgcn_groupstaticsize,
    BI__builtin_amdgcn_iglp_opt,
    BI__builtin_amdgcn_image_bvh8_intersect_ray,
    BI__builtin_amdgcn_image_bvh_dual_intersect_ray,
    BI__builtin_amdgcn_image_bvh_intersect_ray,
    BI__builtin_amdgcn_image_bvh_intersect_ray_h,
    BI__builtin_amdgcn_image_bvh_intersect_ray_l,
    BI__builtin_amdgcn_image_bvh_intersect_ray_lh,
    BI__builtin_amdgcn_image_gather4_lz_2d_v4f32_f32,
    BI__builtin_amdgcn_image_load_1d_v4f16_i32,
    BI__builtin_amdgcn_image_load_1d_v4f32_i32,
    BI__builtin_amdgcn_image_load_1darray_v4f16_i32,
    BI__builtin_amdgcn_image_load_1darray_v4f32_i32,
    BI__builtin_amdgcn_image_load_2d_f32_i32,
    BI__builtin_amdgcn_image_load_2d_v4f16_i32,
    BI__builtin_amdgcn_image_load_2d_v4f32_i32,
    BI__builtin_amdgcn_image_load_2darray_f32_i32,
    BI__builtin_amdgcn_image_load_2darray_v4f16_i32,
    BI__builtin_amdgcn_image_load_2darray_v4f32_i32,
    BI__builtin_amdgcn_image_load_3d_v4f16_i32,
    BI__builtin_amdgcn_image_load_3d_v4f32_i32,
    BI__builtin_amdgcn_image_load_cube_v4f16_i32,
    BI__builtin_amdgcn_image_load_cube_v4f32_i32,
    BI__builtin_amdgcn_image_load_mip_1d_v4f16_i32,
    BI__builtin_amdgcn_image_load_mip_1d_v4f32_i32,
    BI__builtin_amdgcn_image_load_mip_1darray_v4f16_i32,
    BI__builtin_amdgcn_image_load_mip_1darray_v4f32_i32,
    BI__builtin_amdgcn_image_load_mip_2d_f32_i32,
    BI__builtin_amdgcn_image_load_mip_2d_v4f16_i32,
    BI__builtin_amdgcn_image_load_mip_2d_v4f32_i32,
    BI__builtin_amdgcn_image_load_mip_2darray_f32_i32,
    BI__builtin_amdgcn_image_load_mip_2darray_v4f16_i32,
    BI__builtin_amdgcn_image_load_mip_2darray_v4f32_i32,
    BI__builtin_amdgcn_image_load_mip_3d_v4f16_i32,
    BI__builtin_amdgcn_image_load_mip_3d_v4f32_i32,
    BI__builtin_amdgcn_image_load_mip_cube_v4f16_i32,
    BI__builtin_amdgcn_image_load_mip_cube_v4f32_i32,
    BI__builtin_amdgcn_image_sample_1d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_1d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_1darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_1darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_2d_f32_f32,
    BI__builtin_amdgcn_image_sample_2d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_2d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_2darray_f32_f32,
    BI__builtin_amdgcn_image_sample_2darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_2darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_3d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_3d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_cube_v4f16_f32,
    BI__builtin_amdgcn_image_sample_cube_v4f32_f32,
    BI__builtin_amdgcn_image_sample_d_1d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_d_1d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_d_1darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_d_1darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_d_2d_f32_f32,
    BI__builtin_amdgcn_image_sample_d_2d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_d_2d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_d_2darray_f32_f32,
    BI__builtin_amdgcn_image_sample_d_2darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_d_2darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_d_3d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_d_3d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_l_1d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_l_1d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_l_1darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_l_1darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_l_2d_f32_f32,
    BI__builtin_amdgcn_image_sample_l_2d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_l_2d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_l_2darray_f32_f32,
    BI__builtin_amdgcn_image_sample_l_2darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_l_2darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_l_3d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_l_3d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_l_cube_v4f16_f32,
    BI__builtin_amdgcn_image_sample_l_cube_v4f32_f32,
    BI__builtin_amdgcn_image_sample_lz_1d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_lz_1d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_lz_1darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_lz_1darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_lz_2d_f32_f32,
    BI__builtin_amdgcn_image_sample_lz_2d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_lz_2d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_lz_2darray_f32_f32,
    BI__builtin_amdgcn_image_sample_lz_2darray_v4f16_f32,
    BI__builtin_amdgcn_image_sample_lz_2darray_v4f32_f32,
    BI__builtin_amdgcn_image_sample_lz_3d_v4f16_f32,
    BI__builtin_amdgcn_image_sample_lz_3d_v4f32_f32,
    BI__builtin_amdgcn_image_sample_lz_cube_v4f16_f32,
    BI__builtin_amdgcn_image_sample_lz_cube_v4f32_f32,
    BI__builtin_amdgcn_image_store_1d_v4f16_i32,
    BI__builtin_amdgcn_image_store_1d_v4f32_i32,
    BI__builtin_amdgcn_image_store_1darray_v4f16_i32,
    BI__builtin_amdgcn_image_store_1darray_v4f32_i32,
    BI__builtin_amdgcn_image_store_2d_f32_i32,
    BI__builtin_amdgcn_image_store_2d_v4f16_i32,
    BI__builtin_amdgcn_image_store_2d_v4f32_i32,
    BI__builtin_amdgcn_image_store_2darray_f32_i32,
    BI__builtin_amdgcn_image_store_2darray_v4f16_i32,
    BI__builtin_amdgcn_image_store_2darray_v4f32_i32,
    BI__builtin_amdgcn_image_store_3d_v4f16_i32,
    BI__builtin_amdgcn_image_store_3d_v4f32_i32,
    BI__builtin_amdgcn_image_store_cube_v4f16_i32,
    BI__builtin_amdgcn_image_store_cube_v4f32_i32,
    BI__builtin_amdgcn_image_store_mip_1d_v4f16_i32,
    BI__builtin_amdgcn_image_store_mip_1d_v4f32_i32,
    BI__builtin_amdgcn_image_store_mip_1darray_v4f16_i32,
    BI__builtin_amdgcn_image_store_mip_1darray_v4f32_i32,
    BI__builtin_amdgcn_image_store_mip_2d_f32_i32,
    BI__builtin_amdgcn_image_store_mip_2d_v4f16_i32,
    BI__builtin_amdgcn_image_store_mip_2d_v4f32_i32,
    BI__builtin_amdgcn_image_store_mip_2darray_f32_i32,
    BI__builtin_amdgcn_image_store_mip_2darray_v4f16_i32,
    BI__builtin_amdgcn_image_store_mip_2darray_v4f32_i32,
    BI__builtin_amdgcn_image_store_mip_3d_v4f16_i32,
    BI__builtin_amdgcn_image_store_mip_3d_v4f32_i32,
    BI__builtin_amdgcn_image_store_mip_cube_v4f16_i32,
    BI__builtin_amdgcn_image_store_mip_cube_v4f32_i32,
    BI__builtin_amdgcn_implicitarg_ptr,
    BI__builtin_amdgcn_interp_mov,
    BI__builtin_amdgcn_interp_p1,
    BI__builtin_amdgcn_interp_p1_f16,
    BI__builtin_amdgcn_interp_p2,
    BI__builtin_amdgcn_interp_p2_f16,
    BI__builtin_amdgcn_inverse_ballot_w32,
    BI__builtin_amdgcn_inverse_ballot_w64,
    BI__builtin_amdgcn_is_private,
    BI__builtin_amdgcn_is_shared,
    BI__builtin_amdgcn_kernarg_segment_ptr,
    BI__builtin_amdgcn_ldexp,
    BI__builtin_amdgcn_ldexpf,
    BI__builtin_amdgcn_ldexph,
    BI__builtin_amdgcn_lerp,
    BI__builtin_amdgcn_load_to_lds,
    BI__builtin_amdgcn_log_bf16,
    BI__builtin_amdgcn_log_clampf,
    BI__builtin_amdgcn_logf,
    BI__builtin_amdgcn_make_buffer_rsrc,
    BI__builtin_amdgcn_mbcnt_hi,
    BI__builtin_amdgcn_mbcnt_lo,
    BI__builtin_amdgcn_mfma_f32_4x4x1f32,
    BI__builtin_amdgcn_mfma_f32_4x4x2bf16,
    BI__builtin_amdgcn_mfma_f32_4x4x4bf16_1k,
    BI__builtin_amdgcn_mfma_f32_4x4x4f16,
    BI__builtin_amdgcn_mfma_f32_16x16x1f32,
    BI__builtin_amdgcn_mfma_f32_16x16x2bf16,
    BI__builtin_amdgcn_mfma_f32_16x16x4bf16_1k,
    BI__builtin_amdgcn_mfma_f32_16x16x4f16,
    BI__builtin_amdgcn_mfma_f32_16x16x4f32,
    BI__builtin_amdgcn_mfma_f32_16x16x8_xf32,
    BI__builtin_amdgcn_mfma_f32_16x16x8bf16,
    BI__builtin_amdgcn_mfma_f32_16x16x16bf16_1k,
    BI__builtin_amdgcn_mfma_f32_16x16x16f16,
    BI__builtin_amdgcn_mfma_f32_16x16x32_bf8_bf8,
    BI__builtin_amdgcn_mfma_f32_16x16x32_bf8_fp8,
    BI__builtin_amdgcn_mfma_f32_16x16x32_bf16,
    BI__builtin_amdgcn_mfma_f32_16x16x32_f16,
    BI__builtin_amdgcn_mfma_f32_16x16x32_fp8_bf8,
    BI__builtin_amdgcn_mfma_f32_16x16x32_fp8_fp8,
    BI__builtin_amdgcn_mfma_f32_32x32x1f32,
    BI__builtin_amdgcn_mfma_f32_32x32x2bf16,
    BI__builtin_amdgcn_mfma_f32_32x32x2f32,
    BI__builtin_amdgcn_mfma_f32_32x32x4_xf32,
    BI__builtin_amdgcn_mfma_f32_32x32x4bf16,
    BI__builtin_amdgcn_mfma_f32_32x32x4bf16_1k,
    BI__builtin_amdgcn_mfma_f32_32x32x4f16,
    BI__builtin_amdgcn_mfma_f32_32x32x8bf16_1k,
    BI__builtin_amdgcn_mfma_f32_32x32x8f16,
    BI__builtin_amdgcn_mfma_f32_32x32x16_bf8_bf8,
    BI__builtin_amdgcn_mfma_f32_32x32x16_bf8_fp8,
    BI__builtin_amdgcn_mfma_f32_32x32x16_bf16,
    BI__builtin_amdgcn_mfma_f32_32x32x16_f16,
    BI__builtin_amdgcn_mfma_f32_32x32x16_fp8_bf8,
    BI__builtin_amdgcn_mfma_f32_32x32x16_fp8_fp8,
    BI__builtin_amdgcn_mfma_f64_4x4x4f64,
    BI__builtin_amdgcn_mfma_f64_16x16x4f64,
    BI__builtin_amdgcn_mfma_i32_4x4x4i8,
    BI__builtin_amdgcn_mfma_i32_16x16x4i8,
    BI__builtin_amdgcn_mfma_i32_16x16x16i8,
    BI__builtin_amdgcn_mfma_i32_16x16x32_i8,
    BI__builtin_amdgcn_mfma_i32_16x16x64_i8,
    BI__builtin_amdgcn_mfma_i32_32x32x4i8,
    BI__builtin_amdgcn_mfma_i32_32x32x8i8,
    BI__builtin_amdgcn_mfma_i32_32x32x16_i8,
    BI__builtin_amdgcn_mfma_i32_32x32x32_i8,
    BI__builtin_amdgcn_mfma_scale_f32_16x16x128_f8f6f4,
    BI__builtin_amdgcn_mfma_scale_f32_32x32x64_f8f6f4,
    BI__builtin_amdgcn_mov_dpp,
    BI__builtin_amdgcn_mov_dpp8,
    BI__builtin_amdgcn_mqsad_pk_u16_u8,
    BI__builtin_amdgcn_mqsad_u32_u8,
    BI__builtin_amdgcn_msad_u8,
    BI__builtin_amdgcn_perm,
    BI__builtin_amdgcn_perm_pk16_b4_u4,
    BI__builtin_amdgcn_perm_pk16_b6_u4,
    BI__builtin_amdgcn_perm_pk16_b8_u4,
    BI__builtin_amdgcn_permlane16,
    BI__builtin_amdgcn_permlane16_swap,
    BI__builtin_amdgcn_permlane16_var,
    BI__builtin_amdgcn_permlane32_swap,
    BI__builtin_amdgcn_permlane64,
    BI__builtin_amdgcn_permlane_bcast,
    BI__builtin_amdgcn_permlane_down,
    BI__builtin_amdgcn_permlane_idx_gen,
    BI__builtin_amdgcn_permlane_up,
    BI__builtin_amdgcn_permlane_xor,
    BI__builtin_amdgcn_permlanex16,
    BI__builtin_amdgcn_permlanex16_var,
    BI__builtin_amdgcn_pk_add_max_i16,
    BI__builtin_amdgcn_pk_add_max_u16,
    BI__builtin_amdgcn_pk_add_min_i16,
    BI__builtin_amdgcn_pk_add_min_u16,
    BI__builtin_amdgcn_prng_b32,
    BI__builtin_amdgcn_qsad_pk_u16_u8,
    BI__builtin_amdgcn_queue_ptr,
    BI__builtin_amdgcn_raw_buffer_load_b8,
    BI__builtin_amdgcn_raw_buffer_load_b16,
    BI__builtin_amdgcn_raw_buffer_load_b32,
    BI__builtin_amdgcn_raw_buffer_load_b64,
    BI__builtin_amdgcn_raw_buffer_load_b96,
    BI__builtin_amdgcn_raw_buffer_load_b128,
    BI__builtin_amdgcn_raw_buffer_store_b8,
    BI__builtin_amdgcn_raw_buffer_store_b16,
    BI__builtin_amdgcn_raw_buffer_store_b32,
    BI__builtin_amdgcn_raw_buffer_store_b64,
    BI__builtin_amdgcn_raw_buffer_store_b96,
    BI__builtin_amdgcn_raw_buffer_store_b128,
    BI__builtin_amdgcn_raw_ptr_buffer_atomic_add_i32,
    BI__builtin_amdgcn_raw_ptr_buffer_atomic_fadd_f32,
    BI__builtin_amdgcn_raw_ptr_buffer_atomic_fadd_v2f16,
    BI__builtin_amdgcn_raw_ptr_buffer_atomic_fmax_f32,
    BI__builtin_amdgcn_raw_ptr_buffer_atomic_fmax_f64,
    BI__builtin_amdgcn_raw_ptr_buffer_atomic_fmin_f32,
    BI__builtin_amdgcn_raw_ptr_buffer_atomic_fmin_f64,
    BI__builtin_amdgcn_raw_ptr_buffer_load_lds,
    BI__builtin_amdgcn_rcp,
    BI__builtin_amdgcn_rcp_bf16,
    BI__builtin_amdgcn_rcpf,
    BI__builtin_amdgcn_rcph,
    BI__builtin_amdgcn_read_exec,
    BI__builtin_amdgcn_read_exec_hi,
    BI__builtin_amdgcn_read_exec_lo,
    BI__builtin_amdgcn_readfirstlane,
    BI__builtin_amdgcn_readlane,
    BI__builtin_amdgcn_rsq,
    BI__builtin_amdgcn_rsq_bf16,
    BI__builtin_amdgcn_rsq_clamp,
    BI__builtin_amdgcn_rsq_clampf,
    BI__builtin_amdgcn_rsqf,
    BI__builtin_amdgcn_rsqh,
    BI__builtin_amdgcn_s_barrier,
    BI__builtin_amdgcn_s_barrier_init,
    BI__builtin_amdgcn_s_barrier_join,
    BI__builtin_amdgcn_s_barrier_leave,
    BI__builtin_amdgcn_s_barrier_signal,
    BI__builtin_amdgcn_s_barrier_signal_isfirst,
    BI__builtin_amdgcn_s_barrier_signal_var,
    BI__builtin_amdgcn_s_barrier_wait,
    BI__builtin_amdgcn_s_buffer_prefetch_data,
    BI__builtin_amdgcn_s_cluster_barrier,
    BI__builtin_amdgcn_s_dcache_inv,
    BI__builtin_amdgcn_s_dcache_inv_vol,
    BI__builtin_amdgcn_s_dcache_wb,
    BI__builtin_amdgcn_s_decperflevel,
    BI__builtin_amdgcn_s_get_barrier_state,
    BI__builtin_amdgcn_s_get_named_barrier_state,
    BI__builtin_amdgcn_s_getpc,
    BI__builtin_amdgcn_s_getreg,
    BI__builtin_amdgcn_s_incperflevel,
    BI__builtin_amdgcn_s_memrealtime,
    BI__builtin_amdgcn_s_memtime,
    BI__builtin_amdgcn_s_monitor_sleep,
    BI__builtin_amdgcn_s_prefetch_data,
    BI__builtin_amdgcn_s_sendmsg,
    BI__builtin_amdgcn_s_sendmsg_rtn,
    BI__builtin_amdgcn_s_sendmsg_rtnl,
    BI__builtin_amdgcn_s_sendmsghalt,
    BI__builtin_amdgcn_s_setprio,
    BI__builtin_amdgcn_s_setprio_inc_wg,
    BI__builtin_amdgcn_s_setreg,
    BI__builtin_amdgcn_s_sleep,
    BI__builtin_amdgcn_s_sleep_var,
    BI__builtin_amdgcn_s_ttracedata,
    BI__builtin_amdgcn_s_ttracedata_imm,
    BI__builtin_amdgcn_s_wait_asynccnt,
    BI__builtin_amdgcn_s_wait_event_export_ready,
    BI__builtin_amdgcn_s_wait_tensorcnt,
    BI__builtin_amdgcn_s_waitcnt,
    BI__builtin_amdgcn_s_wakeup_barrier,
    BI__builtin_amdgcn_sad_hi_u8,
    BI__builtin_amdgcn_sad_u8,
    BI__builtin_amdgcn_sad_u16,
    BI__builtin_amdgcn_sat_pk4_i4_i8,
    BI__builtin_amdgcn_sat_pk4_u4_u8,
    BI__builtin_amdgcn_sbfe,
    BI__builtin_amdgcn_sched_barrier,
    BI__builtin_amdgcn_sched_group_barrier,
    BI__builtin_amdgcn_sdot2,
    BI__builtin_amdgcn_sdot4,
    BI__builtin_amdgcn_sdot8,
    BI__builtin_amdgcn_set_fpenv,
    BI__builtin_amdgcn_sicmp,
    BI__builtin_amdgcn_sicmpl,
    BI__builtin_amdgcn_sin_bf16,
    BI__builtin_amdgcn_sinf,
    BI__builtin_amdgcn_sinh,
    BI__builtin_amdgcn_smfmac_f32_16x16x32_bf16,
    BI__builtin_amdgcn_smfmac_f32_16x16x32_f16,
    BI__builtin_amdgcn_smfmac_f32_16x16x64_bf8_bf8,
    BI__builtin_amdgcn_smfmac_f32_16x16x64_bf8_fp8,
    BI__builtin_amdgcn_smfmac_f32_16x16x64_bf16,
    BI__builtin_amdgcn_smfmac_f32_16x16x64_f16,
    BI__builtin_amdgcn_smfmac_f32_16x16x64_fp8_bf8,
    BI__builtin_amdgcn_smfmac_f32_16x16x64_fp8_fp8,
    BI__builtin_amdgcn_smfmac_f32_16x16x128_bf8_bf8,
    BI__builtin_amdgcn_smfmac_f32_16x16x128_bf8_fp8,
    BI__builtin_amdgcn_smfmac_f32_16x16x128_fp8_bf8,
    BI__builtin_amdgcn_smfmac_f32_16x16x128_fp8_fp8,
    BI__builtin_amdgcn_smfmac_f32_32x32x16_bf16,
    BI__builtin_amdgcn_smfmac_f32_32x32x16_f16,
    BI__builtin_amdgcn_smfmac_f32_32x32x32_bf8_bf8,
    BI__builtin_amdgcn_smfmac_f32_32x32x32_bf8_fp8,
    BI__builtin_amdgcn_smfmac_f32_32x32x32_bf16,
    BI__builtin_amdgcn_smfmac_f32_32x32x32_f16,
    BI__builtin_amdgcn_smfmac_f32_32x32x32_fp8_bf8,
    BI__builtin_amdgcn_smfmac_f32_32x32x32_fp8_fp8,
    BI__builtin_amdgcn_smfmac_f32_32x32x64_bf8_bf8,
    BI__builtin_amdgcn_smfmac_f32_32x32x64_bf8_fp8,
    BI__builtin_amdgcn_smfmac_f32_32x32x64_fp8_bf8,
    BI__builtin_amdgcn_smfmac_f32_32x32x64_fp8_fp8,
    BI__builtin_amdgcn_smfmac_i32_16x16x64_i8,
    BI__builtin_amdgcn_smfmac_i32_16x16x128_i8,
    BI__builtin_amdgcn_smfmac_i32_32x32x32_i8,
    BI__builtin_amdgcn_smfmac_i32_32x32x64_i8,
    BI__builtin_amdgcn_sqrt,
    BI__builtin_amdgcn_sqrt_bf16,
    BI__builtin_amdgcn_sqrtf,
    BI__builtin_amdgcn_sqrth,
    BI__builtin_amdgcn_struct_ptr_buffer_load_lds,
    BI__builtin_amdgcn_sudot4,
    BI__builtin_amdgcn_sudot8,
    BI__builtin_amdgcn_swmmac_bf16_16x16x32_bf16_w32,
    BI__builtin_amdgcn_swmmac_bf16_16x16x32_bf16_w64,
    BI__builtin_amdgcn_swmmac_bf16_16x16x64_bf16,
    BI__builtin_amdgcn_swmmac_bf16f32_16x16x64_bf16,
    BI__builtin_amdgcn_swmmac_f16_16x16x32_f16_w32,
    BI__builtin_amdgcn_swmmac_f16_16x16x32_f16_w64,
    BI__builtin_amdgcn_swmmac_f16_16x16x64_f16,
    BI__builtin_amdgcn_swmmac_f16_16x16x128_bf8_bf8,
    BI__builtin_amdgcn_swmmac_f16_16x16x128_bf8_fp8,
    BI__builtin_amdgcn_swmmac_f16_16x16x128_fp8_bf8,
    BI__builtin_amdgcn_swmmac_f16_16x16x128_fp8_fp8,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_bf8_bf8_w32,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_bf8_bf8_w64,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_bf8_fp8_w32,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_bf8_fp8_w64,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_bf16_w32,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_bf16_w64,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_f16_w32,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_f16_w64,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_fp8_bf8_w32,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_fp8_bf8_w64,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_fp8_fp8_w32,
    BI__builtin_amdgcn_swmmac_f32_16x16x32_fp8_fp8_w64,
    BI__builtin_amdgcn_swmmac_f32_16x16x64_bf16,
    BI__builtin_amdgcn_swmmac_f32_16x16x64_f16,
    BI__builtin_amdgcn_swmmac_f32_16x16x128_bf8_bf8,
    BI__builtin_amdgcn_swmmac_f32_16x16x128_bf8_fp8,
    BI__builtin_amdgcn_swmmac_f32_16x16x128_fp8_bf8,
    BI__builtin_amdgcn_swmmac_f32_16x16x128_fp8_fp8,
    BI__builtin_amdgcn_swmmac_i32_16x16x32_iu4_w32,
    BI__builtin_amdgcn_swmmac_i32_16x16x32_iu4_w64,
    BI__builtin_amdgcn_swmmac_i32_16x16x32_iu8_w32,
    BI__builtin_amdgcn_swmmac_i32_16x16x32_iu8_w64,
    BI__builtin_amdgcn_swmmac_i32_16x16x64_iu4_w32,
    BI__builtin_amdgcn_swmmac_i32_16x16x64_iu4_w64,
    BI__builtin_amdgcn_swmmac_i32_16x16x128_iu8,
    BI__builtin_amdgcn_tanh_bf16,
    BI__builtin_amdgcn_tanhf,
    BI__builtin_amdgcn_tanhh,
    BI__builtin_amdgcn_tensor_load_to_lds,
    BI__builtin_amdgcn_tensor_load_to_lds_d2,
    BI__builtin_amdgcn_tensor_store_from_lds,
    BI__builtin_amdgcn_tensor_store_from_lds_d2,
    BI__builtin_amdgcn_trig_preop,
    BI__builtin_amdgcn_trig_preopf,
    BI__builtin_amdgcn_ubfe,
    BI__builtin_amdgcn_udot2,
    BI__builtin_amdgcn_udot4,
    BI__builtin_amdgcn_udot8,
    BI__builtin_amdgcn_uicmp,
    BI__builtin_amdgcn_uicmpl,
    BI__builtin_amdgcn_update_dpp,
    BI__builtin_amdgcn_wave_barrier,
    BI__builtin_amdgcn_wave_reduce_add_u32,
    BI__builtin_amdgcn_wave_reduce_add_u64,
    BI__builtin_amdgcn_wave_reduce_and_b32,
    BI__builtin_amdgcn_wave_reduce_and_b64,
    BI__builtin_amdgcn_wave_reduce_fadd_f32,
    BI__builtin_amdgcn_wave_reduce_fmax_f32,
    BI__builtin_amdgcn_wave_reduce_fmin_f32,
    BI__builtin_amdgcn_wave_reduce_fsub_f32,
    BI__builtin_amdgcn_wave_reduce_max_i32,
    BI__builtin_amdgcn_wave_reduce_max_i64,
    BI__builtin_amdgcn_wave_reduce_max_u32,
    BI__builtin_amdgcn_wave_reduce_max_u64,
    BI__builtin_amdgcn_wave_reduce_min_i32,
    BI__builtin_amdgcn_wave_reduce_min_i64,
    BI__builtin_amdgcn_wave_reduce_min_u32,
    BI__builtin_amdgcn_wave_reduce_min_u64,
    BI__builtin_amdgcn_wave_reduce_or_b32,
    BI__builtin_amdgcn_wave_reduce_or_b64,
    BI__builtin_amdgcn_wave_reduce_sub_u32,
    BI__builtin_amdgcn_wave_reduce_sub_u64,
    BI__builtin_amdgcn_wave_reduce_xor_b32,
    BI__builtin_amdgcn_wave_reduce_xor_b64,
    BI__builtin_amdgcn_wavefrontsize,
    BI__builtin_amdgcn_wmma_bf16_16x16x16_bf16_tied_w32,
    BI__builtin_amdgcn_wmma_bf16_16x16x16_bf16_tied_w64,
    BI__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w32,
    BI__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w32_gfx12,
    BI__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w64,
    BI__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w64_gfx12,
    BI__builtin_amdgcn_wmma_bf16_16x16x32_bf16,
    BI__builtin_amdgcn_wmma_bf16f32_16x16x32_bf16,
    BI__builtin_amdgcn_wmma_f16_16x16x16_f16_tied_w32,
    BI__builtin_amdgcn_wmma_f16_16x16x16_f16_tied_w64,
    BI__builtin_amdgcn_wmma_f16_16x16x16_f16_w32,
    BI__builtin_amdgcn_wmma_f16_16x16x16_f16_w32_gfx12,
    BI__builtin_amdgcn_wmma_f16_16x16x16_f16_w64,
    BI__builtin_amdgcn_wmma_f16_16x16x16_f16_w64_gfx12,
    BI__builtin_amdgcn_wmma_f16_16x16x32_f16,
    BI__builtin_amdgcn_wmma_f16_16x16x64_bf8_bf8,
    BI__builtin_amdgcn_wmma_f16_16x16x64_bf8_fp8,
    BI__builtin_amdgcn_wmma_f16_16x16x64_fp8_bf8,
    BI__builtin_amdgcn_wmma_f16_16x16x64_fp8_fp8,
    BI__builtin_amdgcn_wmma_f16_16x16x128_bf8_bf8,
    BI__builtin_amdgcn_wmma_f16_16x16x128_bf8_fp8,
    BI__builtin_amdgcn_wmma_f16_16x16x128_fp8_bf8,
    BI__builtin_amdgcn_wmma_f16_16x16x128_fp8_fp8,
    BI__builtin_amdgcn_wmma_f32_16x16x4_f32,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf8_bf8_w32_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf8_bf8_w64_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf8_fp8_w32_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf8_fp8_w64_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf16_w32,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf16_w32_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf16_w64,
    BI__builtin_amdgcn_wmma_f32_16x16x16_bf16_w64_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_f16_w32,
    BI__builtin_amdgcn_wmma_f32_16x16x16_f16_w32_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_f16_w64,
    BI__builtin_amdgcn_wmma_f32_16x16x16_f16_w64_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_fp8_bf8_w32_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_fp8_bf8_w64_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_fp8_fp8_w32_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x16_fp8_fp8_w64_gfx12,
    BI__builtin_amdgcn_wmma_f32_16x16x32_bf16,
    BI__builtin_amdgcn_wmma_f32_16x16x32_f16,
    BI__builtin_amdgcn_wmma_f32_16x16x64_bf8_bf8,
    BI__builtin_amdgcn_wmma_f32_16x16x64_bf8_fp8,
    BI__builtin_amdgcn_wmma_f32_16x16x64_fp8_bf8,
    BI__builtin_amdgcn_wmma_f32_16x16x64_fp8_fp8,
    BI__builtin_amdgcn_wmma_f32_16x16x128_bf8_bf8,
    BI__builtin_amdgcn_wmma_f32_16x16x128_bf8_fp8,
    BI__builtin_amdgcn_wmma_f32_16x16x128_f8f6f4,
    BI__builtin_amdgcn_wmma_f32_16x16x128_fp8_bf8,
    BI__builtin_amdgcn_wmma_f32_16x16x128_fp8_fp8,
    BI__builtin_amdgcn_wmma_f32_32x16x128_f4,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu4_w32,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu4_w32_gfx12,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu4_w64,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu4_w64_gfx12,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu8_w32,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu8_w32_gfx12,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu8_w64,
    BI__builtin_amdgcn_wmma_i32_16x16x16_iu8_w64_gfx12,
    BI__builtin_amdgcn_wmma_i32_16x16x32_iu4_w32_gfx12,
    BI__builtin_amdgcn_wmma_i32_16x16x32_iu4_w64_gfx12,
    BI__builtin_amdgcn_wmma_i32_16x16x64_iu8,
    BI__builtin_amdgcn_wmma_scale16_f32_16x16x128_f8f6f4,
    BI__builtin_amdgcn_wmma_scale16_f32_32x16x128_f4,
    BI__builtin_amdgcn_wmma_scale_f32_16x16x128_f8f6f4,
    BI__builtin_amdgcn_wmma_scale_f32_32x16x128_f4,
    BI__builtin_amdgcn_workgroup_id_x,
    BI__builtin_amdgcn_workgroup_id_y,
    BI__builtin_amdgcn_workgroup_id_z,
    BI__builtin_amdgcn_workgroup_size_x,
    BI__builtin_amdgcn_workgroup_size_y,
    BI__builtin_amdgcn_workgroup_size_z,
    BI__builtin_amdgcn_workitem_id_x,
    BI__builtin_amdgcn_workitem_id_y,
    BI__builtin_amdgcn_workitem_id_z,
    BI__builtin_r600_implicitarg_ptr,
    BI__builtin_r600_read_tgid_x,
    BI__builtin_r600_read_tgid_y,
    BI__builtin_r600_read_tgid_z,
    BI__builtin_r600_read_tidig_x,
    BI__builtin_r600_read_tidig_y,
    BI__builtin_r600_read_tidig_z,
    BI__builtin_r600_recipsqrt_ieee,
    BI__builtin_r600_recipsqrt_ieeef,

#endif // GET_BUILTIN_ENUMERATORS

#ifdef GET_BUILTIN_STR_TABLE

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char BuiltinStringsStorage[] =
  "\0"
  "__builtin_amdgcn_add_max_i32\0"
  "iiiiIb\0"
  "nc\0"
  "add-min-max-insts\0"
  "__builtin_amdgcn_add_max_u32\0"
  "UiUiUiUiIb\0"
  "__builtin_amdgcn_add_min_i32\0"
  "__builtin_amdgcn_add_min_u32\0"
  "__builtin_amdgcn_alignbit\0"
  "UiUiUiUi\0"
  "__builtin_amdgcn_alignbyte\0"
  "__builtin_amdgcn_ashr_pk_i8_i32\0"
  "UsUiUiUi\0"
  "ashr-pk-insts\0"
  "__builtin_amdgcn_ashr_pk_u8_i32\0"
  "__builtin_amdgcn_atomic_dec32\0"
  "UZiUZiD*UZiUicC*\0"
  "n\0"
  "__builtin_amdgcn_atomic_dec64\0"
  "UWiUWiD*UWiUicC*\0"
  "__builtin_amdgcn_atomic_inc32\0"
  "__builtin_amdgcn_atomic_inc64\0"
  "__builtin_amdgcn_ballot_w32\0"
  "UZib\0"
  "wavefrontsize32\0"
  "__builtin_amdgcn_ballot_w64\0"
  "UWib\0"
  "__builtin_amdgcn_bitop3_b16\0"
  "ssssIUi\0"
  "bitop3-insts\0"
  "__builtin_amdgcn_bitop3_b32\0"
  "iiiiIUi\0"
  "__builtin_amdgcn_buffer_wbinvl1\0"
  "v\0"
  "__builtin_amdgcn_buffer_wbinvl1_vol\0"
  "ci-insts\0"
  "__builtin_amdgcn_class\0"
  "bdi\0"
  "__builtin_amdgcn_classf\0"
  "bfi\0"
  "__builtin_amdgcn_classh\0"
  "bhi\0"
  "16-bit-insts\0"
  "__builtin_amdgcn_cluster_id_x\0"
  "Ui\0"
  "gfx1250-insts\0"
  "__builtin_amdgcn_cluster_id_y\0"
  "__builtin_amdgcn_cluster_id_z\0"
  "__builtin_amdgcn_cluster_load_async_to_lds_b8\0"
  "vc*1c*3IiIii\0"
  "mcast-load-insts,wavefrontsize32\0"
  "__builtin_amdgcn_cluster_load_async_to_lds_b32\0"
  "vi*1i*3IiIii\0"
  "__builtin_amdgcn_cluster_load_async_to_lds_b64\0"
  "vE2i*1E2i*3IiIii\0"
  "__builtin_amdgcn_cluster_load_async_to_lds_b128\0"
  "vE4i*1E4i*3IiIii\0"
  "__builtin_amdgcn_cluster_load_b32\0"
  "ii*1Iii\0"
  "__builtin_amdgcn_cluster_load_b64\0"
  "E2iE2i*1Iii\0"
  "__builtin_amdgcn_cluster_load_b128\0"
  "E4iE4i*1Iii\0"
  "__builtin_amdgcn_cluster_workgroup_flat_id\0"
  "__builtin_amdgcn_cluster_workgroup_id_x\0"
  "__builtin_amdgcn_cluster_workgroup_id_y\0"
  "__builtin_amdgcn_cluster_workgroup_id_z\0"
  "__builtin_amdgcn_cluster_workgroup_max_flat_id\0"
  "__builtin_amdgcn_cluster_workgroup_max_id_x\0"
  "__builtin_amdgcn_cluster_workgroup_max_id_y\0"
  "__builtin_amdgcn_cluster_workgroup_max_id_z\0"
  "__builtin_amdgcn_cooperative_atomic_load_8x16B\0"
  "E4iE4i*IicC*\0"
  "gfx1250-insts,wavefrontsize32\0"
  "__builtin_amdgcn_cooperative_atomic_load_16x8B\0"
  "E2iE2i*IicC*\0"
  "__builtin_amdgcn_cooperative_atomic_load_32x4B\0"
  "ii*IicC*\0"
  "__builtin_amdgcn_cooperative_atomic_store_8x16B\0"
  "vE4i*E4iIicC*\0"
  "__builtin_amdgcn_cooperative_atomic_store_16x8B\0"
  "vE2i*E2iIicC*\0"
  "__builtin_amdgcn_cooperative_atomic_store_32x4B\0"
  "vi*iIicC*\0"
  "__builtin_amdgcn_cos_bf16\0"
  "yy\0"
  "bf16-trans-insts\0"
  "__builtin_amdgcn_cosf\0"
  "ff\0"
  "__builtin_amdgcn_cosh\0"
  "hh\0"
  "__builtin_amdgcn_cubeid\0"
  "ffff\0"
  "cube-insts\0"
  "__builtin_amdgcn_cubema\0"
  "__builtin_amdgcn_cubesc\0"
  "__builtin_amdgcn_cubetc\0"
  "__builtin_amdgcn_cvt_f16_bf8\0"
  "hiIi\0"
  "__builtin_amdgcn_cvt_f16_fp8\0"
  "__builtin_amdgcn_cvt_f32_bf8\0"
  "fiIi\0"
  "fp8-conversion-insts\0"
  "__builtin_amdgcn_cvt_f32_fp8\0"
  "__builtin_amdgcn_cvt_f32_fp8_e5m3\0"
  "fp8e5m3-insts\0"
  "__builtin_amdgcn_cvt_off_f32_i4\0"
  "fi\0"
  "__builtin_amdgcn_cvt_pk_bf8_f16\0"
  "sE2h\0"
  "__builtin_amdgcn_cvt_pk_bf8_f32\0"
  "iffiIb\0"
  "__builtin_amdgcn_cvt_pk_f16_bf8\0"
  "E2hs\0"
  "__builtin_amdgcn_cvt_pk_f16_fp8\0"
  "__builtin_amdgcn_cvt_pk_f32_bf8\0"
  "E2fiIb\0"
  "__builtin_amdgcn_cvt_pk_f32_fp8\0"
  "__builtin_amdgcn_cvt_pk_fp8_f16\0"
  "__builtin_amdgcn_cvt_pk_fp8_f32\0"
  "__builtin_amdgcn_cvt_pk_fp8_f32_e5m3\0"
  "__builtin_amdgcn_cvt_pk_i16\0"
  "E2sii\0"
  "__builtin_amdgcn_cvt_pk_u8_f32\0"
  "UifUiUi\0"
  "__builtin_amdgcn_cvt_pk_u16\0"
  "E2UsUiUi\0"
  "__builtin_amdgcn_cvt_pknorm_i16\0"
  "E2sff\0"
  "cvt-pknorm-vop2-insts\0"
  "__builtin_amdgcn_cvt_pknorm_u16\0"
  "E2Usff\0"
  "__builtin_amdgcn_cvt_pkrtz\0"
  "E2hff\0"
  "__builtin_amdgcn_cvt_scale_pk8_bf16_bf8\0"
  "E8yE2UiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk8_bf16_fp4\0"
  "E8yUiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk8_bf16_fp8\0"
  "__builtin_amdgcn_cvt_scale_pk8_f16_bf8\0"
  "E8hE2UiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk8_f16_fp4\0"
  "E8hUiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk8_f16_fp8\0"
  "__builtin_amdgcn_cvt_scale_pk8_f32_bf8\0"
  "E8fE2UiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk8_f32_fp4\0"
  "E8fUiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk8_f32_fp8\0"
  "__builtin_amdgcn_cvt_scale_pk16_bf16_bf6\0"
  "E16yE3UiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk16_bf16_fp6\0"
  "__builtin_amdgcn_cvt_scale_pk16_f16_bf6\0"
  "E16hE3UiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk16_f16_fp6\0"
  "__builtin_amdgcn_cvt_scale_pk16_f32_bf6\0"
  "E16fE3UiUiIUi\0"
  "__builtin_amdgcn_cvt_scale_pk16_f32_fp6\0"
  "__builtin_amdgcn_cvt_scalef32_2xpk16_bf6_f32\0"
  "E6UiE16fE16ff\0"
  "gfx950-insts\0"
  "__builtin_amdgcn_cvt_scalef32_2xpk16_fp6_f32\0"
  "__builtin_amdgcn_cvt_scalef32_f16_bf8\0"
  "E2xE2xifIiIb\0"
  "bf8-cvt-scale-insts\0"
  "__builtin_amdgcn_cvt_scalef32_f16_fp8\0"
  "fp8-cvt-scale-insts\0"
  "__builtin_amdgcn_cvt_scalef32_f32_bf8\0"
  "fifIi\0"
  "__builtin_amdgcn_cvt_scalef32_f32_fp8\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_bf8_bf16\0"
  "E2UiE8yf\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_bf8_f16\0"
  "E2UiE8hf\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_bf8_f32\0"
  "E2UiE8ff\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_fp4_bf16\0"
  "UiE8yf\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_fp4_f16\0"
  "UiE8hf\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_fp4_f32\0"
  "UiE8ff\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_fp8_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_fp8_f16\0"
  "__builtin_amdgcn_cvt_scalef32_pk8_fp8_f32\0"
  "__builtin_amdgcn_cvt_scalef32_pk16_bf6_bf16\0"
  "E3UiE16yf\0"
  "__builtin_amdgcn_cvt_scalef32_pk16_bf6_f16\0"
  "E3UiE16hf\0"
  "__builtin_amdgcn_cvt_scalef32_pk16_bf6_f32\0"
  "E3UiE16ff\0"
  "__builtin_amdgcn_cvt_scalef32_pk16_fp6_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_pk16_fp6_f16\0"
  "__builtin_amdgcn_cvt_scalef32_pk16_fp6_f32\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_bf6_bf16\0"
  "E6UiE32yf\0"
  "f16bf16-to-fp6bf6-cvt-scale-insts\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_bf6_f16\0"
  "E6UiE32xf\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_bf16_bf6\0"
  "E32yE6Uif\0"
  "fp6bf6-cvt-scale-insts\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_bf16_fp6\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_f16_bf6\0"
  "E32xE6Uif\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_f16_fp6\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_f32_bf6\0"
  "E32fE6Uif\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_f32_fp6\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_fp6_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_pk32_fp6_f16\0"
  "__builtin_amdgcn_cvt_scalef32_pk_bf8_bf16\0"
  "E2sE2sE2yfIb\0"
  "__builtin_amdgcn_cvt_scalef32_pk_bf8_f16\0"
  "E2sE2sE2xfIb\0"
  "__builtin_amdgcn_cvt_scalef32_pk_bf8_f32\0"
  "E2sE2sfffIb\0"
  "__builtin_amdgcn_cvt_scalef32_pk_bf16_bf8\0"
  "E2yUifIb\0"
  "__builtin_amdgcn_cvt_scalef32_pk_bf16_fp4\0"
  "E2yUifIi\0"
  "fp4-cvt-scale-insts\0"
  "__builtin_amdgcn_cvt_scalef32_pk_bf16_fp8\0"
  "__builtin_amdgcn_cvt_scalef32_pk_f16_bf8\0"
  "E2xUifIb\0"
  "__builtin_amdgcn_cvt_scalef32_pk_f16_fp4\0"
  "E2xUifIi\0"
  "__builtin_amdgcn_cvt_scalef32_pk_f16_fp8\0"
  "__builtin_amdgcn_cvt_scalef32_pk_f32_bf8\0"
  "E2fUifIb\0"
  "__builtin_amdgcn_cvt_scalef32_pk_f32_fp4\0"
  "E2fUifIi\0"
  "__builtin_amdgcn_cvt_scalef32_pk_f32_fp8\0"
  "__builtin_amdgcn_cvt_scalef32_pk_fp4_bf16\0"
  "UiUiE2yfIi\0"
  "__builtin_amdgcn_cvt_scalef32_pk_fp4_f16\0"
  "UiUiE2xfIi\0"
  "__builtin_amdgcn_cvt_scalef32_pk_fp4_f32\0"
  "UiUifffIi\0"
  "__builtin_amdgcn_cvt_scalef32_pk_fp8_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_pk_fp8_f16\0"
  "__builtin_amdgcn_cvt_scalef32_pk_fp8_f32\0"
  "__builtin_amdgcn_cvt_scalef32_sr_bf8_bf16\0"
  "iiyUifIi\0"
  "__builtin_amdgcn_cvt_scalef32_sr_bf8_f16\0"
  "iixUifIi\0"
  "__builtin_amdgcn_cvt_scalef32_sr_bf8_f32\0"
  "iifUifIi\0"
  "__builtin_amdgcn_cvt_scalef32_sr_fp8_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_fp8_f16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_fp8_f32\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_bf16\0"
  "E2UiE8yUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_f16\0"
  "E2UiE8hUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_f32\0"
  "E2UiE8fUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_bf16\0"
  "UiE8yUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_f16\0"
  "UiE8hUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_f32\0"
  "UiE8fUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_f16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_f32\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_bf16\0"
  "E3UiE16yUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_f16\0"
  "E3UiE16hUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_f32\0"
  "E3UiE16fUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_f16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_f32\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_bf16\0"
  "E6UiE32yUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_f16\0"
  "E6UiE32xUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_f32\0"
  "E6UiE32fUif\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_bf16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_f16\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_f32\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk_fp4_bf16\0"
  "UiUiE2yUifIi\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk_fp4_f16\0"
  "UiUiE2xUifIi\0"
  "__builtin_amdgcn_cvt_scalef32_sr_pk_fp4_f32\0"
  "UiUiE2fUifIi\0"
  "__builtin_amdgcn_cvt_sr_bf8_f16\0"
  "ihiUiIi\0"
  "__builtin_amdgcn_cvt_sr_bf8_f32\0"
  "ifiiIi\0"
  "__builtin_amdgcn_cvt_sr_bf16_f32\0"
  "E2yE2yfUiIb\0"
  "f32-to-f16bf16-cvt-sr-insts\0"
  "__builtin_amdgcn_cvt_sr_f16_f32\0"
  "E2xE2xfUiIb\0"
  "__builtin_amdgcn_cvt_sr_fp8_f16\0"
  "__builtin_amdgcn_cvt_sr_fp8_f32\0"
  "__builtin_amdgcn_cvt_sr_fp8_f32_e5m3\0"
  "__builtin_amdgcn_cvt_sr_pk_bf16_f32\0"
  "E2yffi\0"
  "bf16-cvt-insts\0"
  "__builtin_amdgcn_cvt_sr_pk_f16_f32\0"
  "E2hffi\0"
  "__builtin_amdgcn_dispatch_ptr\0"
  "v*4\0"
  "__builtin_amdgcn_div_fixup\0"
  "dddd\0"
  "__builtin_amdgcn_div_fixupf\0"
  "__builtin_amdgcn_div_fixuph\0"
  "hhhh\0"
  "__builtin_amdgcn_div_fmas\0"
  "ddddb\0"
  "__builtin_amdgcn_div_fmasf\0"
  "ffffb\0"
  "__builtin_amdgcn_div_scale\0"
  "dddbb*\0"
  "__builtin_amdgcn_div_scalef\0"
  "fffbb*\0"
  "__builtin_amdgcn_dot4_f32_bf8_bf8\0"
  "fUiUif\0"
  "dot11-insts\0"
  "__builtin_amdgcn_dot4_f32_bf8_fp8\0"
  "__builtin_amdgcn_dot4_f32_fp8_bf8\0"
  "__builtin_amdgcn_dot4_f32_fp8_fp8\0"
  "__builtin_amdgcn_ds_append\0"
  "ii*3\0"
  "__builtin_amdgcn_ds_atomic_async_barrier_arrive_b64\0"
  "vLi*3\0"
  "__builtin_amdgcn_ds_atomic_barrier_arrive_rtn_b64\0"
  "LiLi*3Li\0"
  "__builtin_amdgcn_ds_atomic_fadd_f32\0"
  "ff*3f\0"
  "gfx8-insts\0"
  "__builtin_amdgcn_ds_atomic_fadd_f64\0"
  "dd*3d\0"
  "gfx90a-insts\0"
  "__builtin_amdgcn_ds_atomic_fadd_v2bf16\0"
  "E2sE2s*3E2s\0"
  "nt\0"
  "atomic-ds-pk-add-16-insts\0"
  "__builtin_amdgcn_ds_atomic_fadd_v2f16\0"
  "E2xE2x*3E2x\0"
  "__builtin_amdgcn_ds_bpermute\0"
  "iii\0"
  "__builtin_amdgcn_ds_bpermute_fi_b32\0"
  "gfx12-insts\0"
  "__builtin_amdgcn_ds_bvh_stack_push4_pop1_rtn\0"
  "E2UiUiUiE4UiIi\0"
  "gfx11-insts\0"
  "__builtin_amdgcn_ds_bvh_stack_push8_pop1_rtn\0"
  "E2UiUiUiE8UiIi\0"
  "__builtin_amdgcn_ds_bvh_stack_push8_pop2_rtn\0"
  "E2UWiUiUiE8UiIi\0"
  "__builtin_amdgcn_ds_bvh_stack_rtn\0"
  "__builtin_amdgcn_ds_consume\0"
  "__builtin_amdgcn_ds_faddf\0"
  "ff*3fIiIiIb\0"
  "__builtin_amdgcn_ds_fmaxf\0"
  "__builtin_amdgcn_ds_fminf\0"
  "__builtin_amdgcn_ds_gws_barrier\0"
  "vUiUi\0"
  "gws\0"
  "__builtin_amdgcn_ds_gws_init\0"
  "__builtin_amdgcn_ds_gws_sema_br\0"
  "__builtin_amdgcn_ds_gws_sema_p\0"
  "vUi\0"
  "__builtin_amdgcn_ds_gws_sema_release_all\0"
  "__builtin_amdgcn_ds_gws_sema_v\0"
  "__builtin_amdgcn_ds_load_tr4_b64_v2i32\0"
  "E2iE2i*3\0"
  "transpose-load-f4f6-insts,wavefrontsize32\0"
  "__builtin_amdgcn_ds_load_tr6_b96_v3i32\0"
  "E3iE3i*3\0"
  "__builtin_amdgcn_ds_load_tr8_b64_v2i32\0"
  "__builtin_amdgcn_ds_load_tr16_b128_v8bf16\0"
  "E8yE8y*3\0"
  "__builtin_amdgcn_ds_load_tr16_b128_v8f16\0"
  "E8hE8h*3\0"
  "__builtin_amdgcn_ds_load_tr16_b128_v8i16\0"
  "E8sE8s*3\0"
  "__builtin_amdgcn_ds_permute\0"
  "__builtin_amdgcn_ds_read_tr4_b64_v2i32\0"
  "__builtin_amdgcn_ds_read_tr6_b96_v3i32\0"
  "__builtin_amdgcn_ds_read_tr8_b64_v2i32\0"
  "__builtin_amdgcn_ds_read_tr16_b64_v4bf16\0"
  "E4yE4y*3\0"
  "__builtin_amdgcn_ds_read_tr16_b64_v4f16\0"
  "E4hE4h*3\0"
  "__builtin_amdgcn_ds_read_tr16_b64_v4i16\0"
  "E4sE4s*3\0"
  "__builtin_amdgcn_ds_swizzle\0"
  "iiIi\0"
  "__builtin_amdgcn_endpgm\0"
  "nr\0"
  "__builtin_amdgcn_exp2_bf16\0"
  "__builtin_amdgcn_exp2f\0"
  "__builtin_amdgcn_fcmp\0"
  "UWiddIi\0"
  "__builtin_amdgcn_fcmpf\0"
  "UWiffIi\0"
  "__builtin_amdgcn_fdot2\0"
  "fE2xE2xfIb\0"
  "dot10-insts\0"
  "__builtin_amdgcn_fdot2_bf16_bf16\0"
  "sE2sE2ss\0"
  "dot9-insts\0"
  "__builtin_amdgcn_fdot2_f16_f16\0"
  "xE2xE2xx\0"
  "__builtin_amdgcn_fdot2_f32_bf16\0"
  "fE2sE2sfIb\0"
  "dot12-insts\0"
  "__builtin_amdgcn_fdot2c_f32_bf16\0"
  "fE2yE2yfIb\0"
  "dot13-insts\0"
  "__builtin_amdgcn_fence\0"
  "vUicC*.\0"
  "__builtin_amdgcn_flat_atomic_fadd_f32\0"
  "ff*0f\0"
  "gfx940-insts\0"
  "__builtin_amdgcn_flat_atomic_fadd_f64\0"
  "dd*0d\0"
  "__builtin_amdgcn_flat_atomic_fadd_v2bf16\0"
  "E2sE2s*0E2s\0"
  "atomic-flat-pk-add-16-insts\0"
  "__builtin_amdgcn_flat_atomic_fadd_v2f16\0"
  "E2xE2x*0E2x\0"
  "__builtin_amdgcn_flat_atomic_fmax_f64\0"
  "__builtin_amdgcn_flat_atomic_fmin_f64\0"
  "__builtin_amdgcn_flat_load_monitor_b32\0"
  "ii*0Ii\0"
  "__builtin_amdgcn_flat_load_monitor_b64\0"
  "E2iE2i*0Ii\0"
  "__builtin_amdgcn_flat_load_monitor_b128\0"
  "E4iE4i*0Ii\0"
  "__builtin_amdgcn_flat_prefetch\0"
  "vvC*0Ii\0"
  "vmem-pref-insts\0"
  "__builtin_amdgcn_fmed3f\0"
  "__builtin_amdgcn_fmed3h\0"
  "gfx9-insts\0"
  "__builtin_amdgcn_fract\0"
  "dd\0"
  "__builtin_amdgcn_fractf\0"
  "__builtin_amdgcn_fracth\0"
  "__builtin_amdgcn_frexp_exp\0"
  "id\0"
  "__builtin_amdgcn_frexp_expf\0"
  "if\0"
  "__builtin_amdgcn_frexp_exph\0"
  "sh\0"
  "__builtin_amdgcn_frexp_mant\0"
  "__builtin_amdgcn_frexp_mantf\0"
  "__builtin_amdgcn_frexp_manth\0"
  "__builtin_amdgcn_get_fpenv\0"
  "UWi\0"
  "__builtin_amdgcn_global_atomic_fadd_f32\0"
  "ff*1f\0"
  "atomic-fadd-rtn-insts\0"
  "__builtin_amdgcn_global_atomic_fadd_f64\0"
  "dd*1d\0"
  "__builtin_amdgcn_global_atomic_fadd_v2bf16\0"
  "E2sE2s*1E2s\0"
  "atomic-global-pk-add-bf16-inst\0"
  "__builtin_amdgcn_global_atomic_fadd_v2f16\0"
  "E2xE2x*1E2x\0"
  "atomic-buffer-global-pk-add-f16-insts\0"
  "__builtin_amdgcn_global_atomic_fmax_f64\0"
  "__builtin_amdgcn_global_atomic_fmin_f64\0"
  "__builtin_amdgcn_global_load_async_to_lds_b8\0"
  "vc*1c*3IiIi\0"
  "__builtin_amdgcn_global_load_async_to_lds_b32\0"
  "vi*1i*3IiIi\0"
  "__builtin_amdgcn_global_load_async_to_lds_b64\0"
  "vE2i*1E2i*3IiIi\0"
  "__builtin_amdgcn_global_load_async_to_lds_b128\0"
  "vE4i*1E4i*3IiIi\0"
  "__builtin_amdgcn_global_load_lds\0"
  "vv*1v*3IUiIiIUi\0"
  "vmem-to-lds-load-insts\0"
  "__builtin_amdgcn_global_load_monitor_b32\0"
  "ii*1Ii\0"
  "__builtin_amdgcn_global_load_monitor_b64\0"
  "E2iE2i*1Ii\0"
  "__builtin_amdgcn_global_load_monitor_b128\0"
  "E4iE4i*1Ii\0"
  "__builtin_amdgcn_global_load_tr4_b64_v2i32\0"
  "E2iE2i*1\0"
  "__builtin_amdgcn_global_load_tr6_b96_v3i32\0"
  "E3iE3i*1\0"
  "__builtin_amdgcn_global_load_tr8_b64_v2i32\0"
  "__builtin_amdgcn_global_load_tr16_b128_v8bf16\0"
  "E8yE8y*1\0"
  "__builtin_amdgcn_global_load_tr16_b128_v8f16\0"
  "E8hE8h*1\0"
  "__builtin_amdgcn_global_load_tr16_b128_v8i16\0"
  "E8sE8s*1\0"
  "__builtin_amdgcn_global_load_tr_b64_i32\0"
  "ii*1\0"
  "gfx12-insts,wavefrontsize64\0"
  "__builtin_amdgcn_global_load_tr_b64_v2i32\0"
  "gfx12-insts,wavefrontsize32\0"
  "__builtin_amdgcn_global_load_tr_b128_v4bf16\0"
  "E4yE4y*1\0"
  "__builtin_amdgcn_global_load_tr_b128_v4f16\0"
  "E4hE4h*1\0"
  "__builtin_amdgcn_global_load_tr_b128_v4i16\0"
  "E4sE4s*1\0"
  "__builtin_amdgcn_global_load_tr_b128_v8bf16\0"
  "__builtin_amdgcn_global_load_tr_b128_v8f16\0"
  "__builtin_amdgcn_global_load_tr_b128_v8i16\0"
  "__builtin_amdgcn_global_prefetch\0"
  "vvC*1Ii\0"
  "__builtin_amdgcn_global_store_async_from_lds_b8\0"
  "__builtin_amdgcn_global_store_async_from_lds_b32\0"
  "__builtin_amdgcn_global_store_async_from_lds_b64\0"
  "__builtin_amdgcn_global_store_async_from_lds_b128\0"
  "__builtin_amdgcn_grid_size_x\0"
  "__builtin_amdgcn_grid_size_y\0"
  "__builtin_amdgcn_grid_size_z\0"
  "__builtin_amdgcn_groupstaticsize\0"
  "__builtin_amdgcn_iglp_opt\0"
  "vIi\0"
  "__builtin_amdgcn_image_bvh8_intersect_ray\0"
  "E10UiUWifUcE3fE3fUiE4UiE3f*E3f*\0"
  "__builtin_amdgcn_image_bvh_dual_intersect_ray\0"
  "E10UiUWifUcE3fE3fE2UiE4UiE3f*E3f*\0"
  "__builtin_amdgcn_image_bvh_intersect_ray\0"
  "E4UiUifE4fE4fE4fE4Ui\0"
  "gfx10-insts\0"
  "__builtin_amdgcn_image_bvh_intersect_ray_h\0"
  "E4UiUifE4fE4xE4xE4Ui\0"
  "__builtin_amdgcn_image_bvh_intersect_ray_l\0"
  "E4UiUWifE4fE4fE4fE4Ui\0"
  "__builtin_amdgcn_image_bvh_intersect_ray_lh\0"
  "E4UiUWifE4fE4xE4xE4Ui\0"
  "__builtin_amdgcn_image_gather4_lz_2d_v4f32_f32\0"
  "E4fiffQtE4ibii\0"
  "extended-image-insts\0"
  "__builtin_amdgcn_image_load_1d_v4f16_i32\0"
  "E4xiiQtii\0"
  "image-insts\0"
  "__builtin_amdgcn_image_load_1d_v4f32_i32\0"
  "E4fiiQtii\0"
  "__builtin_amdgcn_image_load_1darray_v4f16_i32\0"
  "E4xiiiQtii\0"
  "__builtin_amdgcn_image_load_1darray_v4f32_i32\0"
  "E4fiiiQtii\0"
  "__builtin_amdgcn_image_load_2d_f32_i32\0"
  "fiiiQtii\0"
  "__builtin_amdgcn_image_load_2d_v4f16_i32\0"
  "__builtin_amdgcn_image_load_2d_v4f32_i32\0"
  "__builtin_amdgcn_image_load_2darray_f32_i32\0"
  "fiiiiQtii\0"
  "__builtin_amdgcn_image_load_2darray_v4f16_i32\0"
  "E4xiiiiQtii\0"
  "__builtin_amdgcn_image_load_2darray_v4f32_i32\0"
  "E4fiiiiQtii\0"
  "__builtin_amdgcn_image_load_3d_v4f16_i32\0"
  "__builtin_amdgcn_image_load_3d_v4f32_i32\0"
  "__builtin_amdgcn_image_load_cube_v4f16_i32\0"
  "__builtin_amdgcn_image_load_cube_v4f32_i32\0"
  "__builtin_amdgcn_image_load_mip_1d_v4f16_i32\0"
  "__builtin_amdgcn_image_load_mip_1d_v4f32_i32\0"
  "__builtin_amdgcn_image_load_mip_1darray_v4f16_i32\0"
  "__builtin_amdgcn_image_load_mip_1darray_v4f32_i32\0"
  "__builtin_amdgcn_image_load_mip_2d_f32_i32\0"
  "__builtin_amdgcn_image_load_mip_2d_v4f16_i32\0"
  "__builtin_amdgcn_image_load_mip_2d_v4f32_i32\0"
  "__builtin_amdgcn_image_load_mip_2darray_f32_i32\0"
  "fiiiiiQtii\0"
  "__builtin_amdgcn_image_load_mip_2darray_v4f16_i32\0"
  "E4xiiiiiQtii\0"
  "__builtin_amdgcn_image_load_mip_2darray_v4f32_i32\0"
  "E4fiiiiiQtii\0"
  "__builtin_amdgcn_image_load_mip_3d_v4f16_i32\0"
  "__builtin_amdgcn_image_load_mip_3d_v4f32_i32\0"
  "__builtin_amdgcn_image_load_mip_cube_v4f16_i32\0"
  "__builtin_amdgcn_image_load_mip_cube_v4f32_i32\0"
  "__builtin_amdgcn_image_sample_1d_v4f16_f32\0"
  "E4xifQtE4ibii\0"
  "__builtin_amdgcn_image_sample_1d_v4f32_f32\0"
  "E4fifQtE4ibii\0"
  "__builtin_amdgcn_image_sample_1darray_v4f16_f32\0"
  "E4xiffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_1darray_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_2d_f32_f32\0"
  "fiffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_2d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_2d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_2darray_f32_f32\0"
  "fifffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_2darray_v4f16_f32\0"
  "E4xifffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_2darray_v4f32_f32\0"
  "E4fifffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_3d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_3d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_cube_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_cube_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_d_1d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_d_1d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_d_1darray_v4f16_f32\0"
  "E4xiffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_1darray_v4f32_f32\0"
  "E4fiffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_2d_f32_f32\0"
  "fiffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_2d_v4f16_f32\0"
  "E4xiffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_2d_v4f32_f32\0"
  "E4fiffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_2darray_f32_f32\0"
  "fifffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_2darray_v4f16_f32\0"
  "E4xifffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_2darray_v4f32_f32\0"
  "E4fifffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_3d_v4f16_f32\0"
  "E4xifffffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_d_3d_v4f32_f32\0"
  "E4fifffffffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_l_1d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_l_1d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_l_1darray_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_l_1darray_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_l_2d_f32_f32\0"
  "__builtin_amdgcn_image_sample_l_2d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_l_2d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_l_2darray_f32_f32\0"
  "fiffffQtE4ibii\0"
  "__builtin_amdgcn_image_sample_l_2darray_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_l_2darray_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_l_3d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_l_3d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_l_cube_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_l_cube_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_1d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_lz_1d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_1darray_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_lz_1darray_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_2d_f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_2d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_lz_2d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_2darray_f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_2darray_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_lz_2darray_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_3d_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_lz_3d_v4f32_f32\0"
  "__builtin_amdgcn_image_sample_lz_cube_v4f16_f32\0"
  "__builtin_amdgcn_image_sample_lz_cube_v4f32_f32\0"
  "__builtin_amdgcn_image_store_1d_v4f16_i32\0"
  "vE4xiiQtii\0"
  "__builtin_amdgcn_image_store_1d_v4f32_i32\0"
  "vE4fiiQtii\0"
  "__builtin_amdgcn_image_store_1darray_v4f16_i32\0"
  "vE4xiiiQtii\0"
  "__builtin_amdgcn_image_store_1darray_v4f32_i32\0"
  "vE4fiiiQtii\0"
  "__builtin_amdgcn_image_store_2d_f32_i32\0"
  "vfiiiQtii\0"
  "__builtin_amdgcn_image_store_2d_v4f16_i32\0"
  "__builtin_amdgcn_image_store_2d_v4f32_i32\0"
  "__builtin_amdgcn_image_store_2darray_f32_i32\0"
  "vfiiiiQtii\0"
  "__builtin_amdgcn_image_store_2darray_v4f16_i32\0"
  "vE4xiiiiQtii\0"
  "__builtin_amdgcn_image_store_2darray_v4f32_i32\0"
  "vE4fiiiiQtii\0"
  "__builtin_amdgcn_image_store_3d_v4f16_i32\0"
  "__builtin_amdgcn_image_store_3d_v4f32_i32\0"
  "__builtin_amdgcn_image_store_cube_v4f16_i32\0"
  "__builtin_amdgcn_image_store_cube_v4f32_i32\0"
  "__builtin_amdgcn_image_store_mip_1d_v4f16_i32\0"
  "__builtin_amdgcn_image_store_mip_1d_v4f32_i32\0"
  "__builtin_amdgcn_image_store_mip_1darray_v4f16_i32\0"
  "__builtin_amdgcn_image_store_mip_1darray_v4f32_i32\0"
  "__builtin_amdgcn_image_store_mip_2d_f32_i32\0"
  "__builtin_amdgcn_image_store_mip_2d_v4f16_i32\0"
  "__builtin_amdgcn_image_store_mip_2d_v4f32_i32\0"
  "__builtin_amdgcn_image_store_mip_2darray_f32_i32\0"
  "vfiiiiiQtii\0"
  "__builtin_amdgcn_image_store_mip_2darray_v4f16_i32\0"
  "vE4xiiiiiQtii\0"
  "__builtin_amdgcn_image_store_mip_2darray_v4f32_i32\0"
  "vE4fiiiiiQtii\0"
  "__builtin_amdgcn_image_store_mip_3d_v4f16_i32\0"
  "__builtin_amdgcn_image_store_mip_3d_v4f32_i32\0"
  "__builtin_amdgcn_image_store_mip_cube_v4f16_i32\0"
  "__builtin_amdgcn_image_store_mip_cube_v4f32_i32\0"
  "__builtin_amdgcn_implicitarg_ptr\0"
  "__builtin_amdgcn_interp_mov\0"
  "fUiUiUiUi\0"
  "__builtin_amdgcn_interp_p1\0"
  "ffUiUiUi\0"
  "__builtin_amdgcn_interp_p1_f16\0"
  "ffUiUibUi\0"
  "__builtin_amdgcn_interp_p2\0"
  "fffUiUiUi\0"
  "__builtin_amdgcn_interp_p2_f16\0"
  "hffUiUibUi\0"
  "__builtin_amdgcn_inverse_ballot_w32\0"
  "bUZi\0"
  "__builtin_amdgcn_inverse_ballot_w64\0"
  "bUWi\0"
  "wavefrontsize64\0"
  "__builtin_amdgcn_is_private\0"
  "bvC*0\0"
  "__builtin_amdgcn_is_shared\0"
  "__builtin_amdgcn_kernarg_segment_ptr\0"
  "__builtin_amdgcn_ldexp\0"
  "ddi\0"
  "__builtin_amdgcn_ldexpf\0"
  "ffi\0"
  "__builtin_amdgcn_ldexph\0"
  "hhi\0"
  "__builtin_amdgcn_lerp\0"
  "lerp-inst\0"
  "__builtin_amdgcn_load_to_lds\0"
  "vv*v*3IUiIiIUi\0"
  "__builtin_amdgcn_log_bf16\0"
  "__builtin_amdgcn_log_clampf\0"
  "__builtin_amdgcn_logf\0"
  "__builtin_amdgcn_make_buffer_rsrc\0"
  "Qbv*sWii\0"
  "__builtin_amdgcn_mbcnt_hi\0"
  "UiUiUi\0"
  "__builtin_amdgcn_mbcnt_lo\0"
  "__builtin_amdgcn_mfma_f32_4x4x1f32\0"
  "E4fffE4fIiIiIi\0"
  "mai-insts\0"
  "__builtin_amdgcn_mfma_f32_4x4x2bf16\0"
  "E4fE2sE2sE4fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_4x4x4bf16_1k\0"
  "E4fE4sE4sE4fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_4x4x4f16\0"
  "E4fE4xE4xE4fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x1f32\0"
  "E16fffE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x2bf16\0"
  "E16fE2sE2sE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x4bf16_1k\0"
  "E16fE4sE4sE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x4f16\0"
  "E16fE4xE4xE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x4f32\0"
  "__builtin_amdgcn_mfma_f32_16x16x8_xf32\0"
  "E4fE2fE2fE4fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x8bf16\0"
  "__builtin_amdgcn_mfma_f32_16x16x16bf16_1k\0"
  "__builtin_amdgcn_mfma_f32_16x16x16f16\0"
  "__builtin_amdgcn_mfma_f32_16x16x32_bf8_bf8\0"
  "E4fWiWiE4fIiIiIi\0"
  "fp8-insts\0"
  "__builtin_amdgcn_mfma_f32_16x16x32_bf8_fp8\0"
  "__builtin_amdgcn_mfma_f32_16x16x32_bf16\0"
  "E4fE8yE8yE4fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x32_f16\0"
  "E4fE8xE8xE4fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_16x16x32_fp8_bf8\0"
  "__builtin_amdgcn_mfma_f32_16x16x32_fp8_fp8\0"
  "__builtin_amdgcn_mfma_f32_32x32x1f32\0"
  "E32fffE32fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x2bf16\0"
  "E32fE2sE2sE32fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x2f32\0"
  "__builtin_amdgcn_mfma_f32_32x32x4_xf32\0"
  "E16fE2fE2fE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x4bf16\0"
  "__builtin_amdgcn_mfma_f32_32x32x4bf16_1k\0"
  "E32fE4sE4sE32fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x4f16\0"
  "E32fE4xE4xE32fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x8bf16_1k\0"
  "__builtin_amdgcn_mfma_f32_32x32x8f16\0"
  "__builtin_amdgcn_mfma_f32_32x32x16_bf8_bf8\0"
  "E16fWiWiE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x16_bf8_fp8\0"
  "__builtin_amdgcn_mfma_f32_32x32x16_bf16\0"
  "E16fE8yE8yE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x16_f16\0"
  "E16fE8xE8xE16fIiIiIi\0"
  "__builtin_amdgcn_mfma_f32_32x32x16_fp8_bf8\0"
  "__builtin_amdgcn_mfma_f32_32x32x16_fp8_fp8\0"
  "__builtin_amdgcn_mfma_f64_4x4x4f64\0"
  "ddddIiIiIi\0"
  "__builtin_amdgcn_mfma_f64_16x16x4f64\0"
  "E4dddE4dIiIiIi\0"
  "__builtin_amdgcn_mfma_i32_4x4x4i8\0"
  "E4iiiE4iIiIiIi\0"
  "__builtin_amdgcn_mfma_i32_16x16x4i8\0"
  "E16iiiE16iIiIiIi\0"
  "__builtin_amdgcn_mfma_i32_16x16x16i8\0"
  "__builtin_amdgcn_mfma_i32_16x16x32_i8\0"
  "E4iWiWiE4iIiIiIi\0"
  "__builtin_amdgcn_mfma_i32_16x16x64_i8\0"
  "E4iE4iE4iE4iIiIiIi\0"
  "__builtin_amdgcn_mfma_i32_32x32x4i8\0"
  "E32iiiE32iIiIiIi\0"
  "__builtin_amdgcn_mfma_i32_32x32x8i8\0"
  "__builtin_amdgcn_mfma_i32_32x32x16_i8\0"
  "E16iWiWiE16iIiIiIi\0"
  "__builtin_amdgcn_mfma_i32_32x32x32_i8\0"
  "E16iE4iE4iE16iIiIiIi\0"
  "__builtin_amdgcn_mfma_scale_f32_16x16x128_f8f6f4\0"
  "E4fE8ZiE8ZiE4fIiIiIiiIii\0"
  "__builtin_amdgcn_mfma_scale_f32_32x32x64_f8f6f4\0"
  "E16fE8ZiE8ZiE16fIiIiIiiIii\0"
  "__builtin_amdgcn_mov_dpp\0"
  "iiIiIiIiIb\0"
  "nct\0"
  "dpp\0"
  "__builtin_amdgcn_mov_dpp8\0"
  "UiUiIUi\0"
  "__builtin_amdgcn_mqsad_pk_u16_u8\0"
  "UWiUWiUiUWi\0"
  "__builtin_amdgcn_mqsad_u32_u8\0"
  "E4UiUWiUiE4Ui\0"
  "__builtin_amdgcn_msad_u8\0"
  "__builtin_amdgcn_perm\0"
  "__builtin_amdgcn_perm_pk16_b4_u4\0"
  "E2UiUiUiE2Ui\0"
  "tensor-cvt-lut-insts\0"
  "__builtin_amdgcn_perm_pk16_b6_u4\0"
  "E3UiUiULiE2Ui\0"
  "__builtin_amdgcn_perm_pk16_b8_u4\0"
  "E4UiULiULiE2Ui\0"
  "__builtin_amdgcn_permlane16\0"
  "UiUiUiUiUiIbIb\0"
  "__builtin_amdgcn_permlane16_swap\0"
  "E2UiUiUiIbIb\0"
  "permlane16-swap\0"
  "__builtin_amdgcn_permlane16_var\0"
  "UiUiUiUiIbIb\0"
  "__builtin_amdgcn_permlane32_swap\0"
  "permlane32-swap\0"
  "__builtin_amdgcn_permlane64\0"
  "UiUi\0"
  "__builtin_amdgcn_permlane_bcast\0"
  "iiii\0"
  "__builtin_amdgcn_permlane_down\0"
  "__builtin_amdgcn_permlane_idx_gen\0"
  "__builtin_amdgcn_permlane_up\0"
  "__builtin_amdgcn_permlane_xor\0"
  "__builtin_amdgcn_permlanex16\0"
  "__builtin_amdgcn_permlanex16_var\0"
  "__builtin_amdgcn_pk_add_max_i16\0"
  "E2sE2sE2sE2sIb\0"
  "pk-add-min-max-insts\0"
  "__builtin_amdgcn_pk_add_max_u16\0"
  "E2UsE2UsE2UsE2UsIb\0"
  "__builtin_amdgcn_pk_add_min_i16\0"
  "__builtin_amdgcn_pk_add_min_u16\0"
  "__builtin_amdgcn_prng_b32\0"
  "prng-inst\0"
  "__builtin_amdgcn_qsad_pk_u16_u8\0"
  "qsad-insts\0"
  "__builtin_amdgcn_queue_ptr\0"
  "__builtin_amdgcn_raw_buffer_load_b8\0"
  "UcQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_load_b16\0"
  "UsQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_load_b32\0"
  "UiQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_load_b64\0"
  "E2UiQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_load_b96\0"
  "E3UiQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_load_b128\0"
  "E4UiQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_store_b8\0"
  "vUcQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_store_b16\0"
  "vUsQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_store_b32\0"
  "vUiQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_store_b64\0"
  "vE2UiQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_store_b96\0"
  "vE3UiQbiiIi\0"
  "__builtin_amdgcn_raw_buffer_store_b128\0"
  "vE4UiQbiiIi\0"
  "__builtin_amdgcn_raw_ptr_buffer_atomic_add_i32\0"
  "iiQbiiIi\0"
  "__builtin_amdgcn_raw_ptr_buffer_atomic_fadd_f32\0"
  "ffQbiiIi\0"
  "__builtin_amdgcn_raw_ptr_buffer_atomic_fadd_v2f16\0"
  "E2xE2xQbiiIi\0"
  "__builtin_amdgcn_raw_ptr_buffer_atomic_fmax_f32\0"
  "atomic-fmin-fmax-global-f32\0"
  "__builtin_amdgcn_raw_ptr_buffer_atomic_fmax_f64\0"
  "ddQbiiIi\0"
  "atomic-fmin-fmax-global-f64\0"
  "__builtin_amdgcn_raw_ptr_buffer_atomic_fmin_f32\0"
  "__builtin_amdgcn_raw_ptr_buffer_atomic_fmin_f64\0"
  "__builtin_amdgcn_raw_ptr_buffer_load_lds\0"
  "vQbv*3IUiiiIiIi\0"
  "__builtin_amdgcn_rcp\0"
  "__builtin_amdgcn_rcp_bf16\0"
  "__builtin_amdgcn_rcpf\0"
  "__builtin_amdgcn_rcph\0"
  "__builtin_amdgcn_read_exec\0"
  "__builtin_amdgcn_read_exec_hi\0"
  "__builtin_amdgcn_read_exec_lo\0"
  "__builtin_amdgcn_readfirstlane\0"
  "ii\0"
  "__builtin_amdgcn_readlane\0"
  "__builtin_amdgcn_rsq\0"
  "__builtin_amdgcn_rsq_bf16\0"
  "__builtin_amdgcn_rsq_clamp\0"
  "__builtin_amdgcn_rsq_clampf\0"
  "__builtin_amdgcn_rsqf\0"
  "__builtin_amdgcn_rsqh\0"
  "__builtin_amdgcn_s_barrier\0"
  "__builtin_amdgcn_s_barrier_init\0"
  "vv*i\0"
  "__builtin_amdgcn_s_barrier_join\0"
  "vv*\0"
  "__builtin_amdgcn_s_barrier_leave\0"
  "vIs\0"
  "__builtin_amdgcn_s_barrier_signal\0"
  "__builtin_amdgcn_s_barrier_signal_isfirst\0"
  "bIi\0"
  "__builtin_amdgcn_s_barrier_signal_var\0"
  "__builtin_amdgcn_s_barrier_wait\0"
  "__builtin_amdgcn_s_buffer_prefetch_data\0"
  "vQbIiUi\0"
  "__builtin_amdgcn_s_cluster_barrier\0"
  "__builtin_amdgcn_s_dcache_inv\0"
  "__builtin_amdgcn_s_dcache_inv_vol\0"
  "__builtin_amdgcn_s_dcache_wb\0"
  "__builtin_amdgcn_s_decperflevel\0"
  "__builtin_amdgcn_s_get_barrier_state\0"
  "Uii\0"
  "__builtin_amdgcn_s_get_named_barrier_state\0"
  "Uiv*\0"
  "__builtin_amdgcn_s_getpc\0"
  "__builtin_amdgcn_s_getreg\0"
  "UiIi\0"
  "__builtin_amdgcn_s_incperflevel\0"
  "__builtin_amdgcn_s_memrealtime\0"
  "s-memrealtime\0"
  "__builtin_amdgcn_s_memtime\0"
  "s-memtime-inst\0"
  "__builtin_amdgcn_s_monitor_sleep\0"
  "__builtin_amdgcn_s_prefetch_data\0"
  "vvC*Ui\0"
  "__builtin_amdgcn_s_sendmsg\0"
  "vIiUi\0"
  "__builtin_amdgcn_s_sendmsg_rtn\0"
  "UiIUi\0"
  "__builtin_amdgcn_s_sendmsg_rtnl\0"
  "UWiIUi\0"
  "__builtin_amdgcn_s_sendmsghalt\0"
  "__builtin_amdgcn_s_setprio\0"
  "__builtin_amdgcn_s_setprio_inc_wg\0"
  "setprio-inc-wg-inst\0"
  "__builtin_amdgcn_s_setreg\0"
  "__builtin_amdgcn_s_sleep\0"
  "__builtin_amdgcn_s_sleep_var\0"
  "__builtin_amdgcn_s_ttracedata\0"
  "vi\0"
  "__builtin_amdgcn_s_ttracedata_imm\0"
  "__builtin_amdgcn_s_wait_asynccnt\0"
  "vIUs\0"
  "__builtin_amdgcn_s_wait_event_export_ready\0"
  "__builtin_amdgcn_s_wait_tensorcnt\0"
  "__builtin_amdgcn_s_waitcnt\0"
  "__builtin_amdgcn_s_wakeup_barrier\0"
  "s-wakeup-barrier-inst\0"
  "__builtin_amdgcn_sad_hi_u8\0"
  "sad-insts\0"
  "__builtin_amdgcn_sad_u8\0"
  "__builtin_amdgcn_sad_u16\0"
  "__builtin_amdgcn_sat_pk4_i4_i8\0"
  "UsUi\0"
  "__builtin_amdgcn_sat_pk4_u4_u8\0"
  "__builtin_amdgcn_sbfe\0"
  "__builtin_amdgcn_sched_barrier\0"
  "__builtin_amdgcn_sched_group_barrier\0"
  "vIiIiIi\0"
  "__builtin_amdgcn_sdot2\0"
  "iE2sE2siIb\0"
  "dot2-insts\0"
  "__builtin_amdgcn_sdot4\0"
  "dot1-insts\0"
  "__builtin_amdgcn_sdot8\0"
  "__builtin_amdgcn_set_fpenv\0"
  "vUWi\0"
  "__builtin_amdgcn_sicmp\0"
  "UWiiiIi\0"
  "__builtin_amdgcn_sicmpl\0"
  "UWiWiWiIi\0"
  "__builtin_amdgcn_sin_bf16\0"
  "__builtin_amdgcn_sinf\0"
  "__builtin_amdgcn_sinh\0"
  "__builtin_amdgcn_smfmac_f32_16x16x32_bf16\0"
  "E4fE4sE8sE4fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_16x16x32_f16\0"
  "E4fE4xE8xE4fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_16x16x64_bf8_bf8\0"
  "E4fE2iE4iE4fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_16x16x64_bf8_fp8\0"
  "__builtin_amdgcn_smfmac_f32_16x16x64_bf16\0"
  "E4fE8yE16yE4fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_16x16x64_f16\0"
  "E4fE8xE16xE4fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_16x16x64_fp8_bf8\0"
  "__builtin_amdgcn_smfmac_f32_16x16x64_fp8_fp8\0"
  "__builtin_amdgcn_smfmac_f32_16x16x128_bf8_bf8\0"
  "E4fE4iE8iE4fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_16x16x128_bf8_fp8\0"
  "__builtin_amdgcn_smfmac_f32_16x16x128_fp8_bf8\0"
  "__builtin_amdgcn_smfmac_f32_16x16x128_fp8_fp8\0"
  "__builtin_amdgcn_smfmac_f32_32x32x16_bf16\0"
  "E16fE4sE8sE16fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_32x32x16_f16\0"
  "E16fE4xE8xE16fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_32x32x32_bf8_bf8\0"
  "E16fE2iE4iE16fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_32x32x32_bf8_fp8\0"
  "__builtin_amdgcn_smfmac_f32_32x32x32_bf16\0"
  "E16fE8yE16yE16fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_32x32x32_f16\0"
  "E16fE8xE16xE16fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_32x32x32_fp8_bf8\0"
  "__builtin_amdgcn_smfmac_f32_32x32x32_fp8_fp8\0"
  "__builtin_amdgcn_smfmac_f32_32x32x64_bf8_bf8\0"
  "E16fE4iE8iE16fiIiIi\0"
  "__builtin_amdgcn_smfmac_f32_32x32x64_bf8_fp8\0"
  "__builtin_amdgcn_smfmac_f32_32x32x64_fp8_bf8\0"
  "__builtin_amdgcn_smfmac_f32_32x32x64_fp8_fp8\0"
  "__builtin_amdgcn_smfmac_i32_16x16x64_i8\0"
  "E4iE2iE4iE4iiIiIi\0"
  "__builtin_amdgcn_smfmac_i32_16x16x128_i8\0"
  "E4iE4iE8iE4iiIiIi\0"
  "__builtin_amdgcn_smfmac_i32_32x32x32_i8\0"
  "E16iE2iE4iE16iiIiIi\0"
  "__builtin_amdgcn_smfmac_i32_32x32x64_i8\0"
  "E16iE4iE8iE16iiIiIi\0"
  "__builtin_amdgcn_sqrt\0"
  "__builtin_amdgcn_sqrt_bf16\0"
  "__builtin_amdgcn_sqrtf\0"
  "__builtin_amdgcn_sqrth\0"
  "__builtin_amdgcn_struct_ptr_buffer_load_lds\0"
  "vQbv*3IUiiiiIiIi\0"
  "__builtin_amdgcn_sudot4\0"
  "iIbiIbiiIb\0"
  "dot8-insts\0"
  "__builtin_amdgcn_sudot8\0"
  "__builtin_amdgcn_swmmac_bf16_16x16x32_bf16_w32\0"
  "E8sE8sE16sE8si\0"
  "__builtin_amdgcn_swmmac_bf16_16x16x32_bf16_w64\0"
  "E4sE4sE8sE4si\0"
  "__builtin_amdgcn_swmmac_bf16_16x16x64_bf16\0"
  "E8yIbE16yIbE32yE8yiIbIb\0"
  "__builtin_amdgcn_swmmac_bf16f32_16x16x64_bf16\0"
  "E8fIbE16yIbE32yE8fiIbIb\0"
  "__builtin_amdgcn_swmmac_f16_16x16x32_f16_w32\0"
  "E8hE8hE16hE8hi\0"
  "__builtin_amdgcn_swmmac_f16_16x16x32_f16_w64\0"
  "E4hE4hE8hE4hi\0"
  "__builtin_amdgcn_swmmac_f16_16x16x64_f16\0"
  "E8hIbE16hIbE32hE8hiIbIb\0"
  "__builtin_amdgcn_swmmac_f16_16x16x128_bf8_bf8\0"
  "E8hE8iE16iE8hiIbIb\0"
  "__builtin_amdgcn_swmmac_f16_16x16x128_bf8_fp8\0"
  "__builtin_amdgcn_swmmac_f16_16x16x128_fp8_bf8\0"
  "__builtin_amdgcn_swmmac_f16_16x16x128_fp8_fp8\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_bf8_bf8_w32\0"
  "E8fE2iE4iE8fi\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_bf8_bf8_w64\0"
  "E4fiE2iE4fi\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_bf8_fp8_w32\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_bf8_fp8_w64\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_bf16_w32\0"
  "E8fE8sE16sE8fi\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_bf16_w64\0"
  "E4fE4sE8sE4fi\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_f16_w32\0"
  "E8fE8hE16hE8fi\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_f16_w64\0"
  "E4fE4hE8hE4fi\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_fp8_bf8_w32\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_fp8_bf8_w64\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_fp8_fp8_w32\0"
  "__builtin_amdgcn_swmmac_f32_16x16x32_fp8_fp8_w64\0"
  "__builtin_amdgcn_swmmac_f32_16x16x64_bf16\0"
  "__builtin_amdgcn_swmmac_f32_16x16x64_f16\0"
  "E8fIbE16hIbE32hE8fiIbIb\0"
  "__builtin_amdgcn_swmmac_f32_16x16x128_bf8_bf8\0"
  "E8fE8iE16iE8fiIbIb\0"
  "__builtin_amdgcn_swmmac_f32_16x16x128_bf8_fp8\0"
  "__builtin_amdgcn_swmmac_f32_16x16x128_fp8_bf8\0"
  "__builtin_amdgcn_swmmac_f32_16x16x128_fp8_fp8\0"
  "__builtin_amdgcn_swmmac_i32_16x16x32_iu4_w32\0"
  "E8iIbiIbE2iE8iiIb\0"
  "__builtin_amdgcn_swmmac_i32_16x16x32_iu4_w64\0"
  "E4iIbiIbiE4iiIb\0"
  "__builtin_amdgcn_swmmac_i32_16x16x32_iu8_w32\0"
  "E8iIbE2iIbE4iE8iiIb\0"
  "__builtin_amdgcn_swmmac_i32_16x16x32_iu8_w64\0"
  "E4iIbiIbE2iE4iiIb\0"
  "__builtin_amdgcn_swmmac_i32_16x16x64_iu4_w32\0"
  "__builtin_amdgcn_swmmac_i32_16x16x64_iu4_w64\0"
  "__builtin_amdgcn_swmmac_i32_16x16x128_iu8\0"
  "E8iIbE8iIbE16iE8iiIbIb.\0"
  "__builtin_amdgcn_tanh_bf16\0"
  "__builtin_amdgcn_tanhf\0"
  "tanh-insts\0"
  "__builtin_amdgcn_tanhh\0"
  "__builtin_amdgcn_tensor_load_to_lds\0"
  "vE4iE8iE4iE4iIi\0"
  "__builtin_amdgcn_tensor_load_to_lds_d2\0"
  "vE4iE8iIi\0"
  "__builtin_amdgcn_tensor_store_from_lds\0"
  "__builtin_amdgcn_tensor_store_from_lds_d2\0"
  "__builtin_amdgcn_trig_preop\0"
  "__builtin_amdgcn_trig_preopf\0"
  "__builtin_amdgcn_ubfe\0"
  "__builtin_amdgcn_udot2\0"
  "UiE2UsE2UsUiIb\0"
  "__builtin_amdgcn_udot4\0"
  "dot7-insts\0"
  "__builtin_amdgcn_udot8\0"
  "__builtin_amdgcn_uicmp\0"
  "UWiUiUiIi\0"
  "__builtin_amdgcn_uicmpl\0"
  "UWiUWiUWiIi\0"
  "__builtin_amdgcn_update_dpp\0"
  "iiiIiIiIiIb\0"
  "__builtin_amdgcn_wave_barrier\0"
  "__builtin_amdgcn_wave_reduce_add_u32\0"
  "UZiUZiZi\0"
  "__builtin_amdgcn_wave_reduce_add_u64\0"
  "UWiUWiZi\0"
  "__builtin_amdgcn_wave_reduce_and_b32\0"
  "ZiZiZi\0"
  "__builtin_amdgcn_wave_reduce_and_b64\0"
  "WiWiZi\0"
  "__builtin_amdgcn_wave_reduce_fadd_f32\0"
  "ffZi\0"
  "__builtin_amdgcn_wave_reduce_fmax_f32\0"
  "__builtin_amdgcn_wave_reduce_fmin_f32\0"
  "__builtin_amdgcn_wave_reduce_fsub_f32\0"
  "__builtin_amdgcn_wave_reduce_max_i32\0"
  "__builtin_amdgcn_wave_reduce_max_i64\0"
  "__builtin_amdgcn_wave_reduce_max_u32\0"
  "__builtin_amdgcn_wave_reduce_max_u64\0"
  "__builtin_amdgcn_wave_reduce_min_i32\0"
  "__builtin_amdgcn_wave_reduce_min_i64\0"
  "__builtin_amdgcn_wave_reduce_min_u32\0"
  "__builtin_amdgcn_wave_reduce_min_u64\0"
  "__builtin_amdgcn_wave_reduce_or_b32\0"
  "__builtin_amdgcn_wave_reduce_or_b64\0"
  "__builtin_amdgcn_wave_reduce_sub_u32\0"
  "__builtin_amdgcn_wave_reduce_sub_u64\0"
  "__builtin_amdgcn_wave_reduce_xor_b32\0"
  "__builtin_amdgcn_wave_reduce_xor_b64\0"
  "__builtin_amdgcn_wavefrontsize\0"
  "__builtin_amdgcn_wmma_bf16_16x16x16_bf16_tied_w32\0"
  "E16sE16sE16sE16sIb\0"
  "gfx11-insts,wavefrontsize32\0"
  "__builtin_amdgcn_wmma_bf16_16x16x16_bf16_tied_w64\0"
  "E8sE16sE16sE8sIb\0"
  "gfx11-insts,wavefrontsize64\0"
  "__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w32\0"
  "__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w32_gfx12\0"
  "E8sE8sE8sE8s\0"
  "__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w64\0"
  "__builtin_amdgcn_wmma_bf16_16x16x16_bf16_w64_gfx12\0"
  "E4sE4sE4sE4s\0"
  "__builtin_amdgcn_wmma_bf16_16x16x32_bf16\0"
  "E8yIbE16yIbE16yIsE8yIbIb\0"
  "__builtin_amdgcn_wmma_bf16f32_16x16x32_bf16\0"
  "E8yIbE16yIbE16yIsE8fIbIb\0"
  "__builtin_amdgcn_wmma_f16_16x16x16_f16_tied_w32\0"
  "E16xE16xE16xE16xIb\0"
  "__builtin_amdgcn_wmma_f16_16x16x16_f16_tied_w64\0"
  "E8xE16xE16xE8xIb\0"
  "__builtin_amdgcn_wmma_f16_16x16x16_f16_w32\0"
  "__builtin_amdgcn_wmma_f16_16x16x16_f16_w32_gfx12\0"
  "E8xE8xE8xE8x\0"
  "__builtin_amdgcn_wmma_f16_16x16x16_f16_w64\0"
  "__builtin_amdgcn_wmma_f16_16x16x16_f16_w64_gfx12\0"
  "E4xE4xE4xE4x\0"
  "__builtin_amdgcn_wmma_f16_16x16x32_f16\0"
  "E8hIbE16hIbE16hIsE8hIbIb\0"
  "__builtin_amdgcn_wmma_f16_16x16x64_bf8_bf8\0"
  "E8hE8iE8iIsE8hIbIb\0"
  "__builtin_amdgcn_wmma_f16_16x16x64_bf8_fp8\0"
  "__builtin_amdgcn_wmma_f16_16x16x64_fp8_bf8\0"
  "__builtin_amdgcn_wmma_f16_16x16x64_fp8_fp8\0"
  "__builtin_amdgcn_wmma_f16_16x16x128_bf8_bf8\0"
  "E8hE16iE16iIsE8hIbIb\0"
  "__builtin_amdgcn_wmma_f16_16x16x128_bf8_fp8\0"
  "__builtin_amdgcn_wmma_f16_16x16x128_fp8_bf8\0"
  "__builtin_amdgcn_wmma_f16_16x16x128_fp8_fp8\0"
  "__builtin_amdgcn_wmma_f32_16x16x4_f32\0"
  "E8fIbE2fIbE2fIsE8fIbIb\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf8_bf8_w32_gfx12\0"
  "E8fE2iE2iE8f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf8_bf8_w64_gfx12\0"
  "E4fiiE4f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf8_fp8_w32_gfx12\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf8_fp8_w64_gfx12\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf16_w32\0"
  "E8fE16sE16sE8f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf16_w32_gfx12\0"
  "E8fE8sE8sE8f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf16_w64\0"
  "E4fE16sE16sE4f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_bf16_w64_gfx12\0"
  "E4fE4sE4sE4f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_f16_w32\0"
  "E8fE16xE16xE8f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_f16_w32_gfx12\0"
  "E8fE8xE8xE8f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_f16_w64\0"
  "E4fE16xE16xE4f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_f16_w64_gfx12\0"
  "E4fE4xE4xE4f\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_fp8_bf8_w32_gfx12\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_fp8_bf8_w64_gfx12\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_fp8_fp8_w32_gfx12\0"
  "__builtin_amdgcn_wmma_f32_16x16x16_fp8_fp8_w64_gfx12\0"
  "__builtin_amdgcn_wmma_f32_16x16x32_bf16\0"
  "E8fIbE16yIbE16yIsE8fIbIb\0"
  "__builtin_amdgcn_wmma_f32_16x16x32_f16\0"
  "E8fIbE16hIbE16hIsE8fIbIb\0"
  "__builtin_amdgcn_wmma_f32_16x16x64_bf8_bf8\0"
  "E8fE8iE8iIsE8fIbIb\0"
  "__builtin_amdgcn_wmma_f32_16x16x64_bf8_fp8\0"
  "__builtin_amdgcn_wmma_f32_16x16x64_fp8_bf8\0"
  "__builtin_amdgcn_wmma_f32_16x16x64_fp8_fp8\0"
  "__builtin_amdgcn_wmma_f32_16x16x128_bf8_bf8\0"
  "E8fE16iE16iIsE8fIbIb\0"
  "__builtin_amdgcn_wmma_f32_16x16x128_bf8_fp8\0"
  "__builtin_amdgcn_wmma_f32_16x16x128_f8f6f4\0"
  "E8fIiE16iIiE16iIsE8f\0"
  "__builtin_amdgcn_wmma_f32_16x16x128_fp8_bf8\0"
  "__builtin_amdgcn_wmma_f32_16x16x128_fp8_fp8\0"
  "__builtin_amdgcn_wmma_f32_32x16x128_f4\0"
  "E16fE16iE8iIsE16f\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu4_w32\0"
  "E8iIbE2iIbE2iE8iIb\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu4_w32_gfx12\0"
  "E8iIbiIbiE8iIb\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu4_w64\0"
  "E4iIbE2iIbE2iE4iIb\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu4_w64_gfx12\0"
  "E4iIbiIbiE4iIb\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu8_w32\0"
  "E8iIbE4iIbE4iE8iIb\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu8_w32_gfx12\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu8_w64\0"
  "E4iIbE4iIbE4iE4iIb\0"
  "__builtin_amdgcn_wmma_i32_16x16x16_iu8_w64_gfx12\0"
  "__builtin_amdgcn_wmma_i32_16x16x32_iu4_w32_gfx12\0"
  "__builtin_amdgcn_wmma_i32_16x16x32_iu4_w64_gfx12\0"
  "__builtin_amdgcn_wmma_i32_16x16x64_iu8\0"
  "E8iIbE8iIbE8iE8iIbIb.\0"
  "__builtin_amdgcn_wmma_scale16_f32_16x16x128_f8f6f4\0"
  "E8fIiE16iIiE16iIsE8fIiIiLiIiIiLiIbIb\0"
  "__builtin_amdgcn_wmma_scale16_f32_32x16x128_f4\0"
  "E16fE16iE8iIsE16fIiIiLiIiIiLiIbIb\0"
  "__builtin_amdgcn_wmma_scale_f32_16x16x128_f8f6f4\0"
  "E8fIiE16iIiE16iIsE8fIiIiiIiIiiIbIb\0"
  "__builtin_amdgcn_wmma_scale_f32_32x16x128_f4\0"
  "E16fE16iE8iIsE16fIiIiiIiIiiIbIb\0"
  "__builtin_amdgcn_workgroup_id_x\0"
  "__builtin_amdgcn_workgroup_id_y\0"
  "__builtin_amdgcn_workgroup_id_z\0"
  "__builtin_amdgcn_workgroup_size_x\0"
  "Us\0"
  "__builtin_amdgcn_workgroup_size_y\0"
  "__builtin_amdgcn_workgroup_size_z\0"
  "__builtin_amdgcn_workitem_id_x\0"
  "__builtin_amdgcn_workitem_id_y\0"
  "__builtin_amdgcn_workitem_id_z\0"
  "__builtin_r600_implicitarg_ptr\0"
  "Uc*7\0"
  "__builtin_r600_read_tgid_x\0"
  "__builtin_r600_read_tgid_y\0"
  "__builtin_r600_read_tgid_z\0"
  "__builtin_r600_read_tidig_x\0"
  "__builtin_r600_read_tidig_y\0"
  "__builtin_r600_read_tidig_z\0"
  "__builtin_r600_recipsqrt_ieee\0"
  "__builtin_r600_recipsqrt_ieeef\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

static constexpr llvm::StringTable
BuiltinStrings = BuiltinStringsStorage;

#endif // GET_BUILTIN_STR_TABLE

#ifdef GET_BUILTIN_INFOS
    Builtin::Info{Builtin::Info::StrOffsets{1 /* __builtin_amdgcn_add_max_i32 */, 30 /* iiiiIb */, 37 /* nc */, 40 /* add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{58 /* __builtin_amdgcn_add_max_u32 */, 87 /* UiUiUiUiIb */, 37 /* nc */, 40 /* add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{98 /* __builtin_amdgcn_add_min_i32 */, 30 /* iiiiIb */, 37 /* nc */, 40 /* add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{127 /* __builtin_amdgcn_add_min_u32 */, 87 /* UiUiUiUiIb */, 37 /* nc */, 40 /* add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{156 /* __builtin_amdgcn_alignbit */, 182 /* UiUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{191 /* __builtin_amdgcn_alignbyte */, 182 /* UiUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{218 /* __builtin_amdgcn_ashr_pk_i8_i32 */, 250 /* UsUiUiUi */, 37 /* nc */, 259 /* ashr-pk-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{273 /* __builtin_amdgcn_ashr_pk_u8_i32 */, 250 /* UsUiUiUi */, 37 /* nc */, 259 /* ashr-pk-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{305 /* __builtin_amdgcn_atomic_dec32 */, 335 /* UZiUZiD*UZiUicC* */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{354 /* __builtin_amdgcn_atomic_dec64 */, 384 /* UWiUWiD*UWiUicC* */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{401 /* __builtin_amdgcn_atomic_inc32 */, 335 /* UZiUZiD*UZiUicC* */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{431 /* __builtin_amdgcn_atomic_inc64 */, 384 /* UWiUWiD*UWiUicC* */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{461 /* __builtin_amdgcn_ballot_w32 */, 489 /* UZib */, 37 /* nc */, 494 /* wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{510 /* __builtin_amdgcn_ballot_w64 */, 538 /* UWib */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{543 /* __builtin_amdgcn_bitop3_b16 */, 571 /* ssssIUi */, 37 /* nc */, 579 /* bitop3-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{592 /* __builtin_amdgcn_bitop3_b32 */, 620 /* iiiiIUi */, 37 /* nc */, 579 /* bitop3-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{628 /* __builtin_amdgcn_buffer_wbinvl1 */, 660 /* v */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{662 /* __builtin_amdgcn_buffer_wbinvl1_vol */, 660 /* v */, 352 /* n */, 698 /* ci-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{707 /* __builtin_amdgcn_class */, 730 /* bdi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{734 /* __builtin_amdgcn_classf */, 758 /* bfi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{762 /* __builtin_amdgcn_classh */, 786 /* bhi */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{803 /* __builtin_amdgcn_cluster_id_x */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{850 /* __builtin_amdgcn_cluster_id_y */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{880 /* __builtin_amdgcn_cluster_id_z */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{910 /* __builtin_amdgcn_cluster_load_async_to_lds_b8 */, 956 /* vc*1c*3IiIii */, 37 /* nc */, 969 /* mcast-load-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1002 /* __builtin_amdgcn_cluster_load_async_to_lds_b32 */, 1049 /* vi*1i*3IiIii */, 37 /* nc */, 969 /* mcast-load-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1062 /* __builtin_amdgcn_cluster_load_async_to_lds_b64 */, 1109 /* vE2i*1E2i*3IiIii */, 37 /* nc */, 969 /* mcast-load-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1126 /* __builtin_amdgcn_cluster_load_async_to_lds_b128 */, 1174 /* vE4i*1E4i*3IiIii */, 37 /* nc */, 969 /* mcast-load-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1191 /* __builtin_amdgcn_cluster_load_b32 */, 1225 /* ii*1Iii */, 37 /* nc */, 969 /* mcast-load-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1233 /* __builtin_amdgcn_cluster_load_b64 */, 1267 /* E2iE2i*1Iii */, 37 /* nc */, 969 /* mcast-load-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1279 /* __builtin_amdgcn_cluster_load_b128 */, 1314 /* E4iE4i*1Iii */, 37 /* nc */, 969 /* mcast-load-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1326 /* __builtin_amdgcn_cluster_workgroup_flat_id */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1369 /* __builtin_amdgcn_cluster_workgroup_id_x */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1409 /* __builtin_amdgcn_cluster_workgroup_id_y */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1449 /* __builtin_amdgcn_cluster_workgroup_id_z */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1489 /* __builtin_amdgcn_cluster_workgroup_max_flat_id */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1536 /* __builtin_amdgcn_cluster_workgroup_max_id_x */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1580 /* __builtin_amdgcn_cluster_workgroup_max_id_y */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1624 /* __builtin_amdgcn_cluster_workgroup_max_id_z */, 833 /* Ui */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1668 /* __builtin_amdgcn_cooperative_atomic_load_8x16B */, 1715 /* E4iE4i*IicC* */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1758 /* __builtin_amdgcn_cooperative_atomic_load_16x8B */, 1805 /* E2iE2i*IicC* */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1818 /* __builtin_amdgcn_cooperative_atomic_load_32x4B */, 1865 /* ii*IicC* */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1874 /* __builtin_amdgcn_cooperative_atomic_store_8x16B */, 1922 /* vE4i*E4iIicC* */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1936 /* __builtin_amdgcn_cooperative_atomic_store_16x8B */, 1984 /* vE2i*E2iIicC* */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{1998 /* __builtin_amdgcn_cooperative_atomic_store_32x4B */, 2046 /* vi*iIicC* */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2056 /* __builtin_amdgcn_cos_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2102 /* __builtin_amdgcn_cosf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2127 /* __builtin_amdgcn_cosh */, 2149 /* hh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2152 /* __builtin_amdgcn_cubeid */, 2176 /* ffff */, 37 /* nc */, 2181 /* cube-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2192 /* __builtin_amdgcn_cubema */, 2176 /* ffff */, 37 /* nc */, 2181 /* cube-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2216 /* __builtin_amdgcn_cubesc */, 2176 /* ffff */, 37 /* nc */, 2181 /* cube-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2240 /* __builtin_amdgcn_cubetc */, 2176 /* ffff */, 37 /* nc */, 2181 /* cube-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2264 /* __builtin_amdgcn_cvt_f16_bf8 */, 2293 /* hiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2298 /* __builtin_amdgcn_cvt_f16_fp8 */, 2293 /* hiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2327 /* __builtin_amdgcn_cvt_f32_bf8 */, 2356 /* fiIi */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2382 /* __builtin_amdgcn_cvt_f32_fp8 */, 2356 /* fiIi */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2411 /* __builtin_amdgcn_cvt_f32_fp8_e5m3 */, 2356 /* fiIi */, 37 /* nc */, 2445 /* fp8e5m3-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2459 /* __builtin_amdgcn_cvt_off_f32_i4 */, 2491 /* fi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2494 /* __builtin_amdgcn_cvt_pk_bf8_f16 */, 2526 /* sE2h */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2531 /* __builtin_amdgcn_cvt_pk_bf8_f32 */, 2563 /* iffiIb */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2570 /* __builtin_amdgcn_cvt_pk_f16_bf8 */, 2602 /* E2hs */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2607 /* __builtin_amdgcn_cvt_pk_f16_fp8 */, 2602 /* E2hs */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2639 /* __builtin_amdgcn_cvt_pk_f32_bf8 */, 2671 /* E2fiIb */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2678 /* __builtin_amdgcn_cvt_pk_f32_fp8 */, 2671 /* E2fiIb */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2710 /* __builtin_amdgcn_cvt_pk_fp8_f16 */, 2526 /* sE2h */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2742 /* __builtin_amdgcn_cvt_pk_fp8_f32 */, 2563 /* iffiIb */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2774 /* __builtin_amdgcn_cvt_pk_fp8_f32_e5m3 */, 2563 /* iffiIb */, 37 /* nc */, 2445 /* fp8e5m3-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2811 /* __builtin_amdgcn_cvt_pk_i16 */, 2839 /* E2sii */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2845 /* __builtin_amdgcn_cvt_pk_u8_f32 */, 2876 /* UifUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2884 /* __builtin_amdgcn_cvt_pk_u16 */, 2912 /* E2UsUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2921 /* __builtin_amdgcn_cvt_pknorm_i16 */, 2953 /* E2sff */, 37 /* nc */, 2959 /* cvt-pknorm-vop2-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{2981 /* __builtin_amdgcn_cvt_pknorm_u16 */, 3013 /* E2Usff */, 37 /* nc */, 2959 /* cvt-pknorm-vop2-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3020 /* __builtin_amdgcn_cvt_pkrtz */, 3047 /* E2hff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3053 /* __builtin_amdgcn_cvt_scale_pk8_bf16_bf8 */, 3093 /* E8yE2UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3106 /* __builtin_amdgcn_cvt_scale_pk8_bf16_fp4 */, 3146 /* E8yUiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3157 /* __builtin_amdgcn_cvt_scale_pk8_bf16_fp8 */, 3093 /* E8yE2UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3197 /* __builtin_amdgcn_cvt_scale_pk8_f16_bf8 */, 3236 /* E8hE2UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3249 /* __builtin_amdgcn_cvt_scale_pk8_f16_fp4 */, 3288 /* E8hUiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3299 /* __builtin_amdgcn_cvt_scale_pk8_f16_fp8 */, 3236 /* E8hE2UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3338 /* __builtin_amdgcn_cvt_scale_pk8_f32_bf8 */, 3377 /* E8fE2UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3390 /* __builtin_amdgcn_cvt_scale_pk8_f32_fp4 */, 3429 /* E8fUiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3440 /* __builtin_amdgcn_cvt_scale_pk8_f32_fp8 */, 3377 /* E8fE2UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3479 /* __builtin_amdgcn_cvt_scale_pk16_bf16_bf6 */, 3520 /* E16yE3UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3534 /* __builtin_amdgcn_cvt_scale_pk16_bf16_fp6 */, 3520 /* E16yE3UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3575 /* __builtin_amdgcn_cvt_scale_pk16_f16_bf6 */, 3615 /* E16hE3UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3629 /* __builtin_amdgcn_cvt_scale_pk16_f16_fp6 */, 3615 /* E16hE3UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3669 /* __builtin_amdgcn_cvt_scale_pk16_f32_bf6 */, 3709 /* E16fE3UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3723 /* __builtin_amdgcn_cvt_scale_pk16_f32_fp6 */, 3709 /* E16fE3UiUiIUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3763 /* __builtin_amdgcn_cvt_scalef32_2xpk16_bf6_f32 */, 3808 /* E6UiE16fE16ff */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3835 /* __builtin_amdgcn_cvt_scalef32_2xpk16_fp6_f32 */, 3808 /* E6UiE16fE16ff */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3880 /* __builtin_amdgcn_cvt_scalef32_f16_bf8 */, 3918 /* E2xE2xifIiIb */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{3951 /* __builtin_amdgcn_cvt_scalef32_f16_fp8 */, 3918 /* E2xE2xifIiIb */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4009 /* __builtin_amdgcn_cvt_scalef32_f32_bf8 */, 4047 /* fifIi */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4053 /* __builtin_amdgcn_cvt_scalef32_f32_fp8 */, 4047 /* fifIi */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4091 /* __builtin_amdgcn_cvt_scalef32_pk8_bf8_bf16 */, 4134 /* E2UiE8yf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4143 /* __builtin_amdgcn_cvt_scalef32_pk8_bf8_f16 */, 4185 /* E2UiE8hf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4194 /* __builtin_amdgcn_cvt_scalef32_pk8_bf8_f32 */, 4236 /* E2UiE8ff */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4245 /* __builtin_amdgcn_cvt_scalef32_pk8_fp4_bf16 */, 4288 /* UiE8yf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4295 /* __builtin_amdgcn_cvt_scalef32_pk8_fp4_f16 */, 4337 /* UiE8hf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4344 /* __builtin_amdgcn_cvt_scalef32_pk8_fp4_f32 */, 4386 /* UiE8ff */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4393 /* __builtin_amdgcn_cvt_scalef32_pk8_fp8_bf16 */, 4134 /* E2UiE8yf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4436 /* __builtin_amdgcn_cvt_scalef32_pk8_fp8_f16 */, 4185 /* E2UiE8hf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4478 /* __builtin_amdgcn_cvt_scalef32_pk8_fp8_f32 */, 4236 /* E2UiE8ff */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4520 /* __builtin_amdgcn_cvt_scalef32_pk16_bf6_bf16 */, 4564 /* E3UiE16yf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4574 /* __builtin_amdgcn_cvt_scalef32_pk16_bf6_f16 */, 4617 /* E3UiE16hf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4627 /* __builtin_amdgcn_cvt_scalef32_pk16_bf6_f32 */, 4670 /* E3UiE16ff */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4680 /* __builtin_amdgcn_cvt_scalef32_pk16_fp6_bf16 */, 4564 /* E3UiE16yf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4724 /* __builtin_amdgcn_cvt_scalef32_pk16_fp6_f16 */, 4617 /* E3UiE16hf */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4767 /* __builtin_amdgcn_cvt_scalef32_pk16_fp6_f32 */, 4670 /* E3UiE16ff */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4810 /* __builtin_amdgcn_cvt_scalef32_pk32_bf6_bf16 */, 4854 /* E6UiE32yf */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4898 /* __builtin_amdgcn_cvt_scalef32_pk32_bf6_f16 */, 4941 /* E6UiE32xf */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{4951 /* __builtin_amdgcn_cvt_scalef32_pk32_bf16_bf6 */, 4995 /* E32yE6Uif */, 37 /* nc */, 5005 /* fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5028 /* __builtin_amdgcn_cvt_scalef32_pk32_bf16_fp6 */, 4995 /* E32yE6Uif */, 37 /* nc */, 5005 /* fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5072 /* __builtin_amdgcn_cvt_scalef32_pk32_f16_bf6 */, 5115 /* E32xE6Uif */, 37 /* nc */, 5005 /* fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5125 /* __builtin_amdgcn_cvt_scalef32_pk32_f16_fp6 */, 5115 /* E32xE6Uif */, 37 /* nc */, 5005 /* fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5168 /* __builtin_amdgcn_cvt_scalef32_pk32_f32_bf6 */, 5211 /* E32fE6Uif */, 37 /* nc */, 5005 /* fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5221 /* __builtin_amdgcn_cvt_scalef32_pk32_f32_fp6 */, 5211 /* E32fE6Uif */, 37 /* nc */, 5005 /* fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5264 /* __builtin_amdgcn_cvt_scalef32_pk32_fp6_bf16 */, 4854 /* E6UiE32yf */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5308 /* __builtin_amdgcn_cvt_scalef32_pk32_fp6_f16 */, 4941 /* E6UiE32xf */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5351 /* __builtin_amdgcn_cvt_scalef32_pk_bf8_bf16 */, 5393 /* E2sE2sE2yfIb */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5406 /* __builtin_amdgcn_cvt_scalef32_pk_bf8_f16 */, 5447 /* E2sE2sE2xfIb */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5460 /* __builtin_amdgcn_cvt_scalef32_pk_bf8_f32 */, 5501 /* E2sE2sfffIb */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5513 /* __builtin_amdgcn_cvt_scalef32_pk_bf16_bf8 */, 5555 /* E2yUifIb */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5564 /* __builtin_amdgcn_cvt_scalef32_pk_bf16_fp4 */, 5606 /* E2yUifIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5635 /* __builtin_amdgcn_cvt_scalef32_pk_bf16_fp8 */, 5555 /* E2yUifIb */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5677 /* __builtin_amdgcn_cvt_scalef32_pk_f16_bf8 */, 5718 /* E2xUifIb */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5727 /* __builtin_amdgcn_cvt_scalef32_pk_f16_fp4 */, 5768 /* E2xUifIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5777 /* __builtin_amdgcn_cvt_scalef32_pk_f16_fp8 */, 5718 /* E2xUifIb */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5818 /* __builtin_amdgcn_cvt_scalef32_pk_f32_bf8 */, 5859 /* E2fUifIb */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5868 /* __builtin_amdgcn_cvt_scalef32_pk_f32_fp4 */, 5909 /* E2fUifIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5918 /* __builtin_amdgcn_cvt_scalef32_pk_f32_fp8 */, 5859 /* E2fUifIb */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{5959 /* __builtin_amdgcn_cvt_scalef32_pk_fp4_bf16 */, 6001 /* UiUiE2yfIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6012 /* __builtin_amdgcn_cvt_scalef32_pk_fp4_f16 */, 6053 /* UiUiE2xfIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6064 /* __builtin_amdgcn_cvt_scalef32_pk_fp4_f32 */, 6105 /* UiUifffIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6115 /* __builtin_amdgcn_cvt_scalef32_pk_fp8_bf16 */, 5393 /* E2sE2sE2yfIb */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6157 /* __builtin_amdgcn_cvt_scalef32_pk_fp8_f16 */, 5447 /* E2sE2sE2xfIb */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6198 /* __builtin_amdgcn_cvt_scalef32_pk_fp8_f32 */, 5501 /* E2sE2sfffIb */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6239 /* __builtin_amdgcn_cvt_scalef32_sr_bf8_bf16 */, 6281 /* iiyUifIi */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6290 /* __builtin_amdgcn_cvt_scalef32_sr_bf8_f16 */, 6331 /* iixUifIi */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6340 /* __builtin_amdgcn_cvt_scalef32_sr_bf8_f32 */, 6381 /* iifUifIi */, 37 /* nc */, 3931 /* bf8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6390 /* __builtin_amdgcn_cvt_scalef32_sr_fp8_bf16 */, 6281 /* iiyUifIi */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6432 /* __builtin_amdgcn_cvt_scalef32_sr_fp8_f16 */, 6331 /* iixUifIi */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6473 /* __builtin_amdgcn_cvt_scalef32_sr_fp8_f32 */, 6381 /* iifUifIi */, 37 /* nc */, 3989 /* fp8-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6514 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_bf16 */, 6560 /* E2UiE8yUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6571 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_f16 */, 6616 /* E2UiE8hUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6627 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_bf8_f32 */, 6672 /* E2UiE8fUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6683 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_bf16 */, 6729 /* UiE8yUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6738 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_f16 */, 6783 /* UiE8hUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6792 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_fp4_f32 */, 6837 /* UiE8fUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6846 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_bf16 */, 6560 /* E2UiE8yUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6892 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_f16 */, 6616 /* E2UiE8hUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6937 /* __builtin_amdgcn_cvt_scalef32_sr_pk8_fp8_f32 */, 6672 /* E2UiE8fUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{6982 /* __builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_bf16 */, 7029 /* E3UiE16yUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7041 /* __builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_f16 */, 7087 /* E3UiE16hUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7099 /* __builtin_amdgcn_cvt_scalef32_sr_pk16_bf6_f32 */, 7145 /* E3UiE16fUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7157 /* __builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_bf16 */, 7029 /* E3UiE16yUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7204 /* __builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_f16 */, 7087 /* E3UiE16hUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7250 /* __builtin_amdgcn_cvt_scalef32_sr_pk16_fp6_f32 */, 7145 /* E3UiE16fUif */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7296 /* __builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_bf16 */, 7343 /* E6UiE32yUif */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7355 /* __builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_f16 */, 7401 /* E6UiE32xUif */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7413 /* __builtin_amdgcn_cvt_scalef32_sr_pk32_bf6_f32 */, 7459 /* E6UiE32fUif */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7471 /* __builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_bf16 */, 7343 /* E6UiE32yUif */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7518 /* __builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_f16 */, 7401 /* E6UiE32xUif */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7564 /* __builtin_amdgcn_cvt_scalef32_sr_pk32_fp6_f32 */, 7459 /* E6UiE32fUif */, 37 /* nc */, 4864 /* f16bf16-to-fp6bf6-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7610 /* __builtin_amdgcn_cvt_scalef32_sr_pk_fp4_bf16 */, 7655 /* UiUiE2yUifIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7668 /* __builtin_amdgcn_cvt_scalef32_sr_pk_fp4_f16 */, 7712 /* UiUiE2xUifIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7725 /* __builtin_amdgcn_cvt_scalef32_sr_pk_fp4_f32 */, 7769 /* UiUiE2fUifIi */, 37 /* nc */, 5615 /* fp4-cvt-scale-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7782 /* __builtin_amdgcn_cvt_sr_bf8_f16 */, 7814 /* ihiUiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7822 /* __builtin_amdgcn_cvt_sr_bf8_f32 */, 7854 /* ifiiIi */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7861 /* __builtin_amdgcn_cvt_sr_bf16_f32 */, 7894 /* E2yE2yfUiIb */, 37 /* nc */, 7906 /* f32-to-f16bf16-cvt-sr-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7934 /* __builtin_amdgcn_cvt_sr_f16_f32 */, 7966 /* E2xE2xfUiIb */, 37 /* nc */, 7906 /* f32-to-f16bf16-cvt-sr-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{7978 /* __builtin_amdgcn_cvt_sr_fp8_f16 */, 7814 /* ihiUiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8010 /* __builtin_amdgcn_cvt_sr_fp8_f32 */, 7854 /* ifiiIi */, 37 /* nc */, 2361 /* fp8-conversion-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8042 /* __builtin_amdgcn_cvt_sr_fp8_f32_e5m3 */, 7854 /* ifiiIi */, 37 /* nc */, 2445 /* fp8e5m3-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8079 /* __builtin_amdgcn_cvt_sr_pk_bf16_f32 */, 8115 /* E2yffi */, 37 /* nc */, 8122 /* bf16-cvt-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8137 /* __builtin_amdgcn_cvt_sr_pk_f16_f32 */, 8172 /* E2hffi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8179 /* __builtin_amdgcn_dispatch_ptr */, 8209 /* v*4 */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8213 /* __builtin_amdgcn_div_fixup */, 8240 /* dddd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8245 /* __builtin_amdgcn_div_fixupf */, 2176 /* ffff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8273 /* __builtin_amdgcn_div_fixuph */, 8301 /* hhhh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8306 /* __builtin_amdgcn_div_fmas */, 8332 /* ddddb */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8338 /* __builtin_amdgcn_div_fmasf */, 8365 /* ffffb */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8371 /* __builtin_amdgcn_div_scale */, 8398 /* dddbb* */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8405 /* __builtin_amdgcn_div_scalef */, 8433 /* fffbb* */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8440 /* __builtin_amdgcn_dot4_f32_bf8_bf8 */, 8474 /* fUiUif */, 37 /* nc */, 8481 /* dot11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8493 /* __builtin_amdgcn_dot4_f32_bf8_fp8 */, 8474 /* fUiUif */, 37 /* nc */, 8481 /* dot11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8527 /* __builtin_amdgcn_dot4_f32_fp8_bf8 */, 8474 /* fUiUif */, 37 /* nc */, 8481 /* dot11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8561 /* __builtin_amdgcn_dot4_f32_fp8_fp8 */, 8474 /* fUiUif */, 37 /* nc */, 8481 /* dot11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8595 /* __builtin_amdgcn_ds_append */, 8622 /* ii*3 */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8627 /* __builtin_amdgcn_ds_atomic_async_barrier_arrive_b64 */, 8679 /* vLi*3 */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8685 /* __builtin_amdgcn_ds_atomic_barrier_arrive_rtn_b64 */, 8735 /* LiLi*3Li */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8744 /* __builtin_amdgcn_ds_atomic_fadd_f32 */, 8780 /* ff*3f */, 352 /* n */, 8786 /* gfx8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8797 /* __builtin_amdgcn_ds_atomic_fadd_f64 */, 8833 /* dd*3d */, 352 /* n */, 8839 /* gfx90a-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8852 /* __builtin_amdgcn_ds_atomic_fadd_v2bf16 */, 8891 /* E2sE2s*3E2s */, 8903 /* nt */, 8906 /* atomic-ds-pk-add-16-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8932 /* __builtin_amdgcn_ds_atomic_fadd_v2f16 */, 8970 /* E2xE2x*3E2x */, 8903 /* nt */, 8906 /* atomic-ds-pk-add-16-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{8982 /* __builtin_amdgcn_ds_bpermute */, 9011 /* iii */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9015 /* __builtin_amdgcn_ds_bpermute_fi_b32 */, 9011 /* iii */, 37 /* nc */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9063 /* __builtin_amdgcn_ds_bvh_stack_push4_pop1_rtn */, 9108 /* E2UiUiUiE4UiIi */, 352 /* n */, 9123 /* gfx11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9135 /* __builtin_amdgcn_ds_bvh_stack_push8_pop1_rtn */, 9180 /* E2UiUiUiE8UiIi */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9195 /* __builtin_amdgcn_ds_bvh_stack_push8_pop2_rtn */, 9240 /* E2UWiUiUiE8UiIi */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9256 /* __builtin_amdgcn_ds_bvh_stack_rtn */, 9108 /* E2UiUiUiE4UiIi */, 352 /* n */, 9123 /* gfx11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9290 /* __builtin_amdgcn_ds_consume */, 8622 /* ii*3 */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9318 /* __builtin_amdgcn_ds_faddf */, 9344 /* ff*3fIiIiIb */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9356 /* __builtin_amdgcn_ds_fmaxf */, 9344 /* ff*3fIiIiIb */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9382 /* __builtin_amdgcn_ds_fminf */, 9344 /* ff*3fIiIiIb */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9408 /* __builtin_amdgcn_ds_gws_barrier */, 9440 /* vUiUi */, 352 /* n */, 9446 /* gws */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9450 /* __builtin_amdgcn_ds_gws_init */, 9440 /* vUiUi */, 352 /* n */, 9446 /* gws */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9479 /* __builtin_amdgcn_ds_gws_sema_br */, 9440 /* vUiUi */, 352 /* n */, 9446 /* gws */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9511 /* __builtin_amdgcn_ds_gws_sema_p */, 9542 /* vUi */, 352 /* n */, 9446 /* gws */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9546 /* __builtin_amdgcn_ds_gws_sema_release_all */, 9542 /* vUi */, 352 /* n */, 698 /* ci-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9587 /* __builtin_amdgcn_ds_gws_sema_v */, 9542 /* vUi */, 352 /* n */, 9446 /* gws */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9618 /* __builtin_amdgcn_ds_load_tr4_b64_v2i32 */, 9657 /* E2iE2i*3 */, 37 /* nc */, 9666 /* transpose-load-f4f6-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9708 /* __builtin_amdgcn_ds_load_tr6_b96_v3i32 */, 9747 /* E3iE3i*3 */, 37 /* nc */, 9666 /* transpose-load-f4f6-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9756 /* __builtin_amdgcn_ds_load_tr8_b64_v2i32 */, 9657 /* E2iE2i*3 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9795 /* __builtin_amdgcn_ds_load_tr16_b128_v8bf16 */, 9837 /* E8yE8y*3 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9846 /* __builtin_amdgcn_ds_load_tr16_b128_v8f16 */, 9887 /* E8hE8h*3 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9896 /* __builtin_amdgcn_ds_load_tr16_b128_v8i16 */, 9937 /* E8sE8s*3 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9946 /* __builtin_amdgcn_ds_permute */, 9011 /* iii */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{9974 /* __builtin_amdgcn_ds_read_tr4_b64_v2i32 */, 9657 /* E2iE2i*3 */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10013 /* __builtin_amdgcn_ds_read_tr6_b96_v3i32 */, 9747 /* E3iE3i*3 */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10052 /* __builtin_amdgcn_ds_read_tr8_b64_v2i32 */, 9657 /* E2iE2i*3 */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10091 /* __builtin_amdgcn_ds_read_tr16_b64_v4bf16 */, 10132 /* E4yE4y*3 */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10141 /* __builtin_amdgcn_ds_read_tr16_b64_v4f16 */, 10181 /* E4hE4h*3 */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10190 /* __builtin_amdgcn_ds_read_tr16_b64_v4i16 */, 10230 /* E4sE4s*3 */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10239 /* __builtin_amdgcn_ds_swizzle */, 10267 /* iiIi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10272 /* __builtin_amdgcn_endpgm */, 660 /* v */, 10296 /* nr */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10299 /* __builtin_amdgcn_exp2_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10326 /* __builtin_amdgcn_exp2f */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10349 /* __builtin_amdgcn_fcmp */, 10371 /* UWiddIi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10379 /* __builtin_amdgcn_fcmpf */, 10402 /* UWiffIi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10410 /* __builtin_amdgcn_fdot2 */, 10433 /* fE2xE2xfIb */, 37 /* nc */, 10444 /* dot10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10456 /* __builtin_amdgcn_fdot2_bf16_bf16 */, 10489 /* sE2sE2ss */, 37 /* nc */, 10498 /* dot9-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10509 /* __builtin_amdgcn_fdot2_f16_f16 */, 10540 /* xE2xE2xx */, 37 /* nc */, 10498 /* dot9-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10549 /* __builtin_amdgcn_fdot2_f32_bf16 */, 10581 /* fE2sE2sfIb */, 37 /* nc */, 10592 /* dot12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10604 /* __builtin_amdgcn_fdot2c_f32_bf16 */, 10637 /* fE2yE2yfIb */, 37 /* nc */, 10648 /* dot13-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10660 /* __builtin_amdgcn_fence */, 10683 /* vUicC*. */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10691 /* __builtin_amdgcn_flat_atomic_fadd_f32 */, 10729 /* ff*0f */, 352 /* n */, 10735 /* gfx940-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10748 /* __builtin_amdgcn_flat_atomic_fadd_f64 */, 10786 /* dd*0d */, 352 /* n */, 8839 /* gfx90a-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10792 /* __builtin_amdgcn_flat_atomic_fadd_v2bf16 */, 10833 /* E2sE2s*0E2s */, 8903 /* nt */, 10845 /* atomic-flat-pk-add-16-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10873 /* __builtin_amdgcn_flat_atomic_fadd_v2f16 */, 10913 /* E2xE2x*0E2x */, 8903 /* nt */, 10845 /* atomic-flat-pk-add-16-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10925 /* __builtin_amdgcn_flat_atomic_fmax_f64 */, 10786 /* dd*0d */, 352 /* n */, 8839 /* gfx90a-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{10963 /* __builtin_amdgcn_flat_atomic_fmin_f64 */, 10786 /* dd*0d */, 352 /* n */, 8839 /* gfx90a-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11001 /* __builtin_amdgcn_flat_load_monitor_b32 */, 11040 /* ii*0Ii */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11047 /* __builtin_amdgcn_flat_load_monitor_b64 */, 11086 /* E2iE2i*0Ii */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11097 /* __builtin_amdgcn_flat_load_monitor_b128 */, 11137 /* E4iE4i*0Ii */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11148 /* __builtin_amdgcn_flat_prefetch */, 11179 /* vvC*0Ii */, 37 /* nc */, 11187 /* vmem-pref-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11203 /* __builtin_amdgcn_fmed3f */, 2176 /* ffff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11227 /* __builtin_amdgcn_fmed3h */, 8301 /* hhhh */, 37 /* nc */, 11251 /* gfx9-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11262 /* __builtin_amdgcn_fract */, 11285 /* dd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11288 /* __builtin_amdgcn_fractf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11312 /* __builtin_amdgcn_fracth */, 2149 /* hh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11336 /* __builtin_amdgcn_frexp_exp */, 11363 /* id */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11366 /* __builtin_amdgcn_frexp_expf */, 11394 /* if */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11397 /* __builtin_amdgcn_frexp_exph */, 11425 /* sh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11428 /* __builtin_amdgcn_frexp_mant */, 11285 /* dd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11456 /* __builtin_amdgcn_frexp_mantf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11485 /* __builtin_amdgcn_frexp_manth */, 2149 /* hh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11514 /* __builtin_amdgcn_get_fpenv */, 11541 /* UWi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11545 /* __builtin_amdgcn_global_atomic_fadd_f32 */, 11585 /* ff*1f */, 352 /* n */, 11591 /* atomic-fadd-rtn-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11613 /* __builtin_amdgcn_global_atomic_fadd_f64 */, 11653 /* dd*1d */, 352 /* n */, 8839 /* gfx90a-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11659 /* __builtin_amdgcn_global_atomic_fadd_v2bf16 */, 11702 /* E2sE2s*1E2s */, 8903 /* nt */, 11714 /* atomic-global-pk-add-bf16-inst */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11745 /* __builtin_amdgcn_global_atomic_fadd_v2f16 */, 11787 /* E2xE2x*1E2x */, 8903 /* nt */, 11799 /* atomic-buffer-global-pk-add-f16-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11837 /* __builtin_amdgcn_global_atomic_fmax_f64 */, 11653 /* dd*1d */, 352 /* n */, 8839 /* gfx90a-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11877 /* __builtin_amdgcn_global_atomic_fmin_f64 */, 11653 /* dd*1d */, 352 /* n */, 8839 /* gfx90a-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11917 /* __builtin_amdgcn_global_load_async_to_lds_b8 */, 11962 /* vc*1c*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{11974 /* __builtin_amdgcn_global_load_async_to_lds_b32 */, 12020 /* vi*1i*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12032 /* __builtin_amdgcn_global_load_async_to_lds_b64 */, 12078 /* vE2i*1E2i*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12094 /* __builtin_amdgcn_global_load_async_to_lds_b128 */, 12141 /* vE4i*1E4i*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12157 /* __builtin_amdgcn_global_load_lds */, 12190 /* vv*1v*3IUiIiIUi */, 352 /* n */, 12206 /* vmem-to-lds-load-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12229 /* __builtin_amdgcn_global_load_monitor_b32 */, 12270 /* ii*1Ii */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12277 /* __builtin_amdgcn_global_load_monitor_b64 */, 12318 /* E2iE2i*1Ii */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12329 /* __builtin_amdgcn_global_load_monitor_b128 */, 12371 /* E4iE4i*1Ii */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12382 /* __builtin_amdgcn_global_load_tr4_b64_v2i32 */, 12425 /* E2iE2i*1 */, 37 /* nc */, 9666 /* transpose-load-f4f6-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12434 /* __builtin_amdgcn_global_load_tr6_b96_v3i32 */, 12477 /* E3iE3i*1 */, 37 /* nc */, 9666 /* transpose-load-f4f6-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12486 /* __builtin_amdgcn_global_load_tr8_b64_v2i32 */, 12425 /* E2iE2i*1 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12529 /* __builtin_amdgcn_global_load_tr16_b128_v8bf16 */, 12575 /* E8yE8y*1 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12584 /* __builtin_amdgcn_global_load_tr16_b128_v8f16 */, 12629 /* E8hE8h*1 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12638 /* __builtin_amdgcn_global_load_tr16_b128_v8i16 */, 12683 /* E8sE8s*1 */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12692 /* __builtin_amdgcn_global_load_tr_b64_i32 */, 12732 /* ii*1 */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12765 /* __builtin_amdgcn_global_load_tr_b64_v2i32 */, 12425 /* E2iE2i*1 */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12835 /* __builtin_amdgcn_global_load_tr_b128_v4bf16 */, 12879 /* E4yE4y*1 */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12888 /* __builtin_amdgcn_global_load_tr_b128_v4f16 */, 12931 /* E4hE4h*1 */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12940 /* __builtin_amdgcn_global_load_tr_b128_v4i16 */, 12983 /* E4sE4s*1 */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{12992 /* __builtin_amdgcn_global_load_tr_b128_v8bf16 */, 12575 /* E8yE8y*1 */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13036 /* __builtin_amdgcn_global_load_tr_b128_v8f16 */, 12629 /* E8hE8h*1 */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13079 /* __builtin_amdgcn_global_load_tr_b128_v8i16 */, 12683 /* E8sE8s*1 */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13122 /* __builtin_amdgcn_global_prefetch */, 13155 /* vvC*1Ii */, 37 /* nc */, 11187 /* vmem-pref-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13163 /* __builtin_amdgcn_global_store_async_from_lds_b8 */, 11962 /* vc*1c*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13211 /* __builtin_amdgcn_global_store_async_from_lds_b32 */, 12020 /* vi*1i*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13260 /* __builtin_amdgcn_global_store_async_from_lds_b64 */, 12078 /* vE2i*1E2i*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13309 /* __builtin_amdgcn_global_store_async_from_lds_b128 */, 12141 /* vE4i*1E4i*3IiIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13359 /* __builtin_amdgcn_grid_size_x */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13388 /* __builtin_amdgcn_grid_size_y */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13417 /* __builtin_amdgcn_grid_size_z */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13446 /* __builtin_amdgcn_groupstaticsize */, 833 /* Ui */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13479 /* __builtin_amdgcn_iglp_opt */, 13505 /* vIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13509 /* __builtin_amdgcn_image_bvh8_intersect_ray */, 13551 /* E10UiUWifUcE3fE3fUiE4UiE3f*E3f* */, 37 /* nc */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13583 /* __builtin_amdgcn_image_bvh_dual_intersect_ray */, 13629 /* E10UiUWifUcE3fE3fE2UiE4UiE3f*E3f* */, 37 /* nc */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13663 /* __builtin_amdgcn_image_bvh_intersect_ray */, 13704 /* E4UiUifE4fE4fE4fE4Ui */, 37 /* nc */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13737 /* __builtin_amdgcn_image_bvh_intersect_ray_h */, 13780 /* E4UiUifE4fE4xE4xE4Ui */, 37 /* nc */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13801 /* __builtin_amdgcn_image_bvh_intersect_ray_l */, 13844 /* E4UiUWifE4fE4fE4fE4Ui */, 37 /* nc */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13866 /* __builtin_amdgcn_image_bvh_intersect_ray_lh */, 13910 /* E4UiUWifE4fE4xE4xE4Ui */, 37 /* nc */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{13932 /* __builtin_amdgcn_image_gather4_lz_2d_v4f32_f32 */, 13979 /* E4fiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14015 /* __builtin_amdgcn_image_load_1d_v4f16_i32 */, 14056 /* E4xiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14078 /* __builtin_amdgcn_image_load_1d_v4f32_i32 */, 14119 /* E4fiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14129 /* __builtin_amdgcn_image_load_1darray_v4f16_i32 */, 14175 /* E4xiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14186 /* __builtin_amdgcn_image_load_1darray_v4f32_i32 */, 14232 /* E4fiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14243 /* __builtin_amdgcn_image_load_2d_f32_i32 */, 14282 /* fiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14291 /* __builtin_amdgcn_image_load_2d_v4f16_i32 */, 14175 /* E4xiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14332 /* __builtin_amdgcn_image_load_2d_v4f32_i32 */, 14232 /* E4fiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14373 /* __builtin_amdgcn_image_load_2darray_f32_i32 */, 14417 /* fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14427 /* __builtin_amdgcn_image_load_2darray_v4f16_i32 */, 14473 /* E4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14485 /* __builtin_amdgcn_image_load_2darray_v4f32_i32 */, 14531 /* E4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14543 /* __builtin_amdgcn_image_load_3d_v4f16_i32 */, 14473 /* E4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14584 /* __builtin_amdgcn_image_load_3d_v4f32_i32 */, 14531 /* E4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14625 /* __builtin_amdgcn_image_load_cube_v4f16_i32 */, 14473 /* E4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14668 /* __builtin_amdgcn_image_load_cube_v4f32_i32 */, 14531 /* E4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14711 /* __builtin_amdgcn_image_load_mip_1d_v4f16_i32 */, 14175 /* E4xiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14756 /* __builtin_amdgcn_image_load_mip_1d_v4f32_i32 */, 14232 /* E4fiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14801 /* __builtin_amdgcn_image_load_mip_1darray_v4f16_i32 */, 14473 /* E4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14851 /* __builtin_amdgcn_image_load_mip_1darray_v4f32_i32 */, 14531 /* E4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14901 /* __builtin_amdgcn_image_load_mip_2d_f32_i32 */, 14417 /* fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14944 /* __builtin_amdgcn_image_load_mip_2d_v4f16_i32 */, 14473 /* E4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{14989 /* __builtin_amdgcn_image_load_mip_2d_v4f32_i32 */, 14531 /* E4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15034 /* __builtin_amdgcn_image_load_mip_2darray_f32_i32 */, 15082 /* fiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15093 /* __builtin_amdgcn_image_load_mip_2darray_v4f16_i32 */, 15143 /* E4xiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15156 /* __builtin_amdgcn_image_load_mip_2darray_v4f32_i32 */, 15206 /* E4fiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15219 /* __builtin_amdgcn_image_load_mip_3d_v4f16_i32 */, 15143 /* E4xiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15264 /* __builtin_amdgcn_image_load_mip_3d_v4f32_i32 */, 15206 /* E4fiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15309 /* __builtin_amdgcn_image_load_mip_cube_v4f16_i32 */, 15143 /* E4xiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15356 /* __builtin_amdgcn_image_load_mip_cube_v4f32_i32 */, 15206 /* E4fiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15403 /* __builtin_amdgcn_image_sample_1d_v4f16_f32 */, 15446 /* E4xifQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15460 /* __builtin_amdgcn_image_sample_1d_v4f32_f32 */, 15503 /* E4fifQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15517 /* __builtin_amdgcn_image_sample_1darray_v4f16_f32 */, 15565 /* E4xiffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15580 /* __builtin_amdgcn_image_sample_1darray_v4f32_f32 */, 13979 /* E4fiffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15628 /* __builtin_amdgcn_image_sample_2d_f32_f32 */, 15669 /* fiffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15682 /* __builtin_amdgcn_image_sample_2d_v4f16_f32 */, 15565 /* E4xiffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15725 /* __builtin_amdgcn_image_sample_2d_v4f32_f32 */, 13979 /* E4fiffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15768 /* __builtin_amdgcn_image_sample_2darray_f32_f32 */, 15814 /* fifffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15828 /* __builtin_amdgcn_image_sample_2darray_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15892 /* __builtin_amdgcn_image_sample_2darray_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15956 /* __builtin_amdgcn_image_sample_3d_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{15999 /* __builtin_amdgcn_image_sample_3d_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16042 /* __builtin_amdgcn_image_sample_cube_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16087 /* __builtin_amdgcn_image_sample_cube_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16132 /* __builtin_amdgcn_image_sample_d_1d_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16177 /* __builtin_amdgcn_image_sample_d_1d_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16222 /* __builtin_amdgcn_image_sample_d_1darray_v4f16_f32 */, 16272 /* E4xiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16289 /* __builtin_amdgcn_image_sample_d_1darray_v4f32_f32 */, 16339 /* E4fiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16356 /* __builtin_amdgcn_image_sample_d_2d_f32_f32 */, 16399 /* fiffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16416 /* __builtin_amdgcn_image_sample_d_2d_v4f16_f32 */, 16461 /* E4xiffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16480 /* __builtin_amdgcn_image_sample_d_2d_v4f32_f32 */, 16525 /* E4fiffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16544 /* __builtin_amdgcn_image_sample_d_2darray_f32_f32 */, 16592 /* fifffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16610 /* __builtin_amdgcn_image_sample_d_2darray_v4f16_f32 */, 16660 /* E4xifffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16680 /* __builtin_amdgcn_image_sample_d_2darray_v4f32_f32 */, 16730 /* E4fifffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16750 /* __builtin_amdgcn_image_sample_d_3d_v4f16_f32 */, 16795 /* E4xifffffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16817 /* __builtin_amdgcn_image_sample_d_3d_v4f32_f32 */, 16862 /* E4fifffffffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16884 /* __builtin_amdgcn_image_sample_l_1d_v4f16_f32 */, 15565 /* E4xiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16929 /* __builtin_amdgcn_image_sample_l_1d_v4f32_f32 */, 13979 /* E4fiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{16974 /* __builtin_amdgcn_image_sample_l_1darray_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17024 /* __builtin_amdgcn_image_sample_l_1darray_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17074 /* __builtin_amdgcn_image_sample_l_2d_f32_f32 */, 15814 /* fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17117 /* __builtin_amdgcn_image_sample_l_2d_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17162 /* __builtin_amdgcn_image_sample_l_2d_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17207 /* __builtin_amdgcn_image_sample_l_2darray_f32_f32 */, 17255 /* fiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17270 /* __builtin_amdgcn_image_sample_l_2darray_v4f16_f32 */, 16272 /* E4xiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17320 /* __builtin_amdgcn_image_sample_l_2darray_v4f32_f32 */, 16339 /* E4fiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17370 /* __builtin_amdgcn_image_sample_l_3d_v4f16_f32 */, 16272 /* E4xiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17415 /* __builtin_amdgcn_image_sample_l_3d_v4f32_f32 */, 16339 /* E4fiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17460 /* __builtin_amdgcn_image_sample_l_cube_v4f16_f32 */, 16272 /* E4xiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17507 /* __builtin_amdgcn_image_sample_l_cube_v4f32_f32 */, 16339 /* E4fiffffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17554 /* __builtin_amdgcn_image_sample_lz_1d_v4f16_f32 */, 15446 /* E4xifQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17600 /* __builtin_amdgcn_image_sample_lz_1d_v4f32_f32 */, 15503 /* E4fifQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17646 /* __builtin_amdgcn_image_sample_lz_1darray_v4f16_f32 */, 15565 /* E4xiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17697 /* __builtin_amdgcn_image_sample_lz_1darray_v4f32_f32 */, 13979 /* E4fiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17748 /* __builtin_amdgcn_image_sample_lz_2d_f32_f32 */, 15669 /* fiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17792 /* __builtin_amdgcn_image_sample_lz_2d_v4f16_f32 */, 15565 /* E4xiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17838 /* __builtin_amdgcn_image_sample_lz_2d_v4f32_f32 */, 13979 /* E4fiffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17884 /* __builtin_amdgcn_image_sample_lz_2darray_f32_f32 */, 15814 /* fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17933 /* __builtin_amdgcn_image_sample_lz_2darray_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{17984 /* __builtin_amdgcn_image_sample_lz_2darray_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18035 /* __builtin_amdgcn_image_sample_lz_3d_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18081 /* __builtin_amdgcn_image_sample_lz_3d_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18127 /* __builtin_amdgcn_image_sample_lz_cube_v4f16_f32 */, 15876 /* E4xifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18175 /* __builtin_amdgcn_image_sample_lz_cube_v4f32_f32 */, 15940 /* E4fifffQtE4ibii */, 37 /* nc */, 13994 /* extended-image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18223 /* __builtin_amdgcn_image_store_1d_v4f16_i32 */, 18265 /* vE4xiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18276 /* __builtin_amdgcn_image_store_1d_v4f32_i32 */, 18318 /* vE4fiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18329 /* __builtin_amdgcn_image_store_1darray_v4f16_i32 */, 18376 /* vE4xiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18388 /* __builtin_amdgcn_image_store_1darray_v4f32_i32 */, 18435 /* vE4fiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18447 /* __builtin_amdgcn_image_store_2d_f32_i32 */, 18487 /* vfiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18497 /* __builtin_amdgcn_image_store_2d_v4f16_i32 */, 18376 /* vE4xiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18539 /* __builtin_amdgcn_image_store_2d_v4f32_i32 */, 18435 /* vE4fiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18581 /* __builtin_amdgcn_image_store_2darray_f32_i32 */, 18626 /* vfiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18637 /* __builtin_amdgcn_image_store_2darray_v4f16_i32 */, 18684 /* vE4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18697 /* __builtin_amdgcn_image_store_2darray_v4f32_i32 */, 18744 /* vE4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18757 /* __builtin_amdgcn_image_store_3d_v4f16_i32 */, 18684 /* vE4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18799 /* __builtin_amdgcn_image_store_3d_v4f32_i32 */, 18744 /* vE4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18841 /* __builtin_amdgcn_image_store_cube_v4f16_i32 */, 18684 /* vE4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18885 /* __builtin_amdgcn_image_store_cube_v4f32_i32 */, 18744 /* vE4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18929 /* __builtin_amdgcn_image_store_mip_1d_v4f16_i32 */, 18376 /* vE4xiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{18975 /* __builtin_amdgcn_image_store_mip_1d_v4f32_i32 */, 18435 /* vE4fiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19021 /* __builtin_amdgcn_image_store_mip_1darray_v4f16_i32 */, 18684 /* vE4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19072 /* __builtin_amdgcn_image_store_mip_1darray_v4f32_i32 */, 18744 /* vE4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19123 /* __builtin_amdgcn_image_store_mip_2d_f32_i32 */, 18626 /* vfiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19167 /* __builtin_amdgcn_image_store_mip_2d_v4f16_i32 */, 18684 /* vE4xiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19213 /* __builtin_amdgcn_image_store_mip_2d_v4f32_i32 */, 18744 /* vE4fiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19259 /* __builtin_amdgcn_image_store_mip_2darray_f32_i32 */, 19308 /* vfiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19320 /* __builtin_amdgcn_image_store_mip_2darray_v4f16_i32 */, 19371 /* vE4xiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19385 /* __builtin_amdgcn_image_store_mip_2darray_v4f32_i32 */, 19436 /* vE4fiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19450 /* __builtin_amdgcn_image_store_mip_3d_v4f16_i32 */, 19371 /* vE4xiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19496 /* __builtin_amdgcn_image_store_mip_3d_v4f32_i32 */, 19436 /* vE4fiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19542 /* __builtin_amdgcn_image_store_mip_cube_v4f16_i32 */, 19371 /* vE4xiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19590 /* __builtin_amdgcn_image_store_mip_cube_v4f32_i32 */, 19436 /* vE4fiiiiiQtii */, 37 /* nc */, 14066 /* image-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19638 /* __builtin_amdgcn_implicitarg_ptr */, 8209 /* v*4 */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19671 /* __builtin_amdgcn_interp_mov */, 19699 /* fUiUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19709 /* __builtin_amdgcn_interp_p1 */, 19736 /* ffUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19745 /* __builtin_amdgcn_interp_p1_f16 */, 19776 /* ffUiUibUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19786 /* __builtin_amdgcn_interp_p2 */, 19813 /* fffUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19823 /* __builtin_amdgcn_interp_p2_f16 */, 19854 /* hffUiUibUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19865 /* __builtin_amdgcn_inverse_ballot_w32 */, 19901 /* bUZi */, 37 /* nc */, 494 /* wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19906 /* __builtin_amdgcn_inverse_ballot_w64 */, 19942 /* bUWi */, 37 /* nc */, 19947 /* wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19963 /* __builtin_amdgcn_is_private */, 19991 /* bvC*0 */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{19997 /* __builtin_amdgcn_is_shared */, 19991 /* bvC*0 */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20024 /* __builtin_amdgcn_kernarg_segment_ptr */, 8209 /* v*4 */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20061 /* __builtin_amdgcn_ldexp */, 20084 /* ddi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20088 /* __builtin_amdgcn_ldexpf */, 20112 /* ffi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20116 /* __builtin_amdgcn_ldexph */, 20140 /* hhi */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20144 /* __builtin_amdgcn_lerp */, 182 /* UiUiUiUi */, 37 /* nc */, 20166 /* lerp-inst */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20176 /* __builtin_amdgcn_load_to_lds */, 20205 /* vv*v*3IUiIiIUi */, 352 /* n */, 12206 /* vmem-to-lds-load-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20220 /* __builtin_amdgcn_log_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20246 /* __builtin_amdgcn_log_clampf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20274 /* __builtin_amdgcn_logf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20296 /* __builtin_amdgcn_make_buffer_rsrc */, 20330 /* Qbv*sWii */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20339 /* __builtin_amdgcn_mbcnt_hi */, 20365 /* UiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20372 /* __builtin_amdgcn_mbcnt_lo */, 20365 /* UiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20398 /* __builtin_amdgcn_mfma_f32_4x4x1f32 */, 20433 /* E4fffE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20458 /* __builtin_amdgcn_mfma_f32_4x4x2bf16 */, 20494 /* E4fE2sE2sE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20513 /* __builtin_amdgcn_mfma_f32_4x4x4bf16_1k */, 20552 /* E4fE4sE4sE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20571 /* __builtin_amdgcn_mfma_f32_4x4x4f16 */, 20606 /* E4fE4xE4xE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20625 /* __builtin_amdgcn_mfma_f32_16x16x1f32 */, 20662 /* E16fffE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20679 /* __builtin_amdgcn_mfma_f32_16x16x2bf16 */, 20717 /* E16fE2sE2sE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20738 /* __builtin_amdgcn_mfma_f32_16x16x4bf16_1k */, 20779 /* E16fE4sE4sE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20800 /* __builtin_amdgcn_mfma_f32_16x16x4f16 */, 20837 /* E16fE4xE4xE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20858 /* __builtin_amdgcn_mfma_f32_16x16x4f32 */, 20433 /* E4fffE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20895 /* __builtin_amdgcn_mfma_f32_16x16x8_xf32 */, 20934 /* E4fE2fE2fE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20953 /* __builtin_amdgcn_mfma_f32_16x16x8bf16 */, 20494 /* E4fE2sE2sE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{20991 /* __builtin_amdgcn_mfma_f32_16x16x16bf16_1k */, 20552 /* E4fE4sE4sE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21033 /* __builtin_amdgcn_mfma_f32_16x16x16f16 */, 20606 /* E4fE4xE4xE4fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21071 /* __builtin_amdgcn_mfma_f32_16x16x32_bf8_bf8 */, 21114 /* E4fWiWiE4fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21141 /* __builtin_amdgcn_mfma_f32_16x16x32_bf8_fp8 */, 21114 /* E4fWiWiE4fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21184 /* __builtin_amdgcn_mfma_f32_16x16x32_bf16 */, 21224 /* E4fE8yE8yE4fIiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21243 /* __builtin_amdgcn_mfma_f32_16x16x32_f16 */, 21282 /* E4fE8xE8xE4fIiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21301 /* __builtin_amdgcn_mfma_f32_16x16x32_fp8_bf8 */, 21114 /* E4fWiWiE4fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21344 /* __builtin_amdgcn_mfma_f32_16x16x32_fp8_fp8 */, 21114 /* E4fWiWiE4fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21387 /* __builtin_amdgcn_mfma_f32_32x32x1f32 */, 21424 /* E32fffE32fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21441 /* __builtin_amdgcn_mfma_f32_32x32x2bf16 */, 21479 /* E32fE2sE2sE32fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21500 /* __builtin_amdgcn_mfma_f32_32x32x2f32 */, 20662 /* E16fffE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21537 /* __builtin_amdgcn_mfma_f32_32x32x4_xf32 */, 21576 /* E16fE2fE2fE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21597 /* __builtin_amdgcn_mfma_f32_32x32x4bf16 */, 20717 /* E16fE2sE2sE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21635 /* __builtin_amdgcn_mfma_f32_32x32x4bf16_1k */, 21676 /* E32fE4sE4sE32fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21697 /* __builtin_amdgcn_mfma_f32_32x32x4f16 */, 21734 /* E32fE4xE4xE32fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21755 /* __builtin_amdgcn_mfma_f32_32x32x8bf16_1k */, 20779 /* E16fE4sE4sE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21796 /* __builtin_amdgcn_mfma_f32_32x32x8f16 */, 20837 /* E16fE4xE4xE16fIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21833 /* __builtin_amdgcn_mfma_f32_32x32x16_bf8_bf8 */, 21876 /* E16fWiWiE16fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21895 /* __builtin_amdgcn_mfma_f32_32x32x16_bf8_fp8 */, 21876 /* E16fWiWiE16fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21938 /* __builtin_amdgcn_mfma_f32_32x32x16_bf16 */, 21978 /* E16fE8yE8yE16fIiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{21999 /* __builtin_amdgcn_mfma_f32_32x32x16_f16 */, 22038 /* E16fE8xE8xE16fIiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22059 /* __builtin_amdgcn_mfma_f32_32x32x16_fp8_bf8 */, 21876 /* E16fWiWiE16fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22102 /* __builtin_amdgcn_mfma_f32_32x32x16_fp8_fp8 */, 21876 /* E16fWiWiE16fIiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22145 /* __builtin_amdgcn_mfma_f64_4x4x4f64 */, 22180 /* ddddIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22191 /* __builtin_amdgcn_mfma_f64_16x16x4f64 */, 22228 /* E4dddE4dIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22243 /* __builtin_amdgcn_mfma_i32_4x4x4i8 */, 22277 /* E4iiiE4iIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22292 /* __builtin_amdgcn_mfma_i32_16x16x4i8 */, 22328 /* E16iiiE16iIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22345 /* __builtin_amdgcn_mfma_i32_16x16x16i8 */, 22277 /* E4iiiE4iIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22382 /* __builtin_amdgcn_mfma_i32_16x16x32_i8 */, 22420 /* E4iWiWiE4iIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22437 /* __builtin_amdgcn_mfma_i32_16x16x64_i8 */, 22475 /* E4iE4iE4iE4iIiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22494 /* __builtin_amdgcn_mfma_i32_32x32x4i8 */, 22530 /* E32iiiE32iIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22547 /* __builtin_amdgcn_mfma_i32_32x32x8i8 */, 22328 /* E16iiiE16iIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22583 /* __builtin_amdgcn_mfma_i32_32x32x16_i8 */, 22621 /* E16iWiWiE16iIiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22640 /* __builtin_amdgcn_mfma_i32_32x32x32_i8 */, 22678 /* E16iE4iE4iE16iIiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22699 /* __builtin_amdgcn_mfma_scale_f32_16x16x128_f8f6f4 */, 22748 /* E4fE8ZiE8ZiE4fIiIiIiiIii */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22773 /* __builtin_amdgcn_mfma_scale_f32_32x32x64_f8f6f4 */, 22821 /* E16fE8ZiE8ZiE16fIiIiIiiIii */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22848 /* __builtin_amdgcn_mov_dpp */, 22873 /* iiIiIiIiIb */, 22884 /* nct */, 22888 /* dpp */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22892 /* __builtin_amdgcn_mov_dpp8 */, 22918 /* UiUiIUi */, 22884 /* nct */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22926 /* __builtin_amdgcn_mqsad_pk_u16_u8 */, 22959 /* UWiUWiUiUWi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{22971 /* __builtin_amdgcn_mqsad_u32_u8 */, 23001 /* E4UiUWiUiE4Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23015 /* __builtin_amdgcn_msad_u8 */, 182 /* UiUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23040 /* __builtin_amdgcn_perm */, 182 /* UiUiUiUi */, 37 /* nc */, 8786 /* gfx8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23062 /* __builtin_amdgcn_perm_pk16_b4_u4 */, 23095 /* E2UiUiUiE2Ui */, 37 /* nc */, 23108 /* tensor-cvt-lut-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23129 /* __builtin_amdgcn_perm_pk16_b6_u4 */, 23162 /* E3UiUiULiE2Ui */, 37 /* nc */, 23108 /* tensor-cvt-lut-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23176 /* __builtin_amdgcn_perm_pk16_b8_u4 */, 23209 /* E4UiULiULiE2Ui */, 37 /* nc */, 23108 /* tensor-cvt-lut-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23224 /* __builtin_amdgcn_permlane16 */, 23252 /* UiUiUiUiUiIbIb */, 37 /* nc */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23267 /* __builtin_amdgcn_permlane16_swap */, 23300 /* E2UiUiUiIbIb */, 37 /* nc */, 23313 /* permlane16-swap */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23329 /* __builtin_amdgcn_permlane16_var */, 23361 /* UiUiUiUiIbIb */, 37 /* nc */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23374 /* __builtin_amdgcn_permlane32_swap */, 23300 /* E2UiUiUiIbIb */, 37 /* nc */, 23407 /* permlane32-swap */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23423 /* __builtin_amdgcn_permlane64 */, 23451 /* UiUi */, 37 /* nc */, 9123 /* gfx11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23456 /* __builtin_amdgcn_permlane_bcast */, 23488 /* iiii */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23493 /* __builtin_amdgcn_permlane_down */, 23488 /* iiii */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23524 /* __builtin_amdgcn_permlane_idx_gen */, 9011 /* iii */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23558 /* __builtin_amdgcn_permlane_up */, 23488 /* iiii */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23587 /* __builtin_amdgcn_permlane_xor */, 23488 /* iiii */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23617 /* __builtin_amdgcn_permlanex16 */, 23252 /* UiUiUiUiUiIbIb */, 37 /* nc */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23646 /* __builtin_amdgcn_permlanex16_var */, 23361 /* UiUiUiUiIbIb */, 37 /* nc */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23679 /* __builtin_amdgcn_pk_add_max_i16 */, 23711 /* E2sE2sE2sE2sIb */, 37 /* nc */, 23726 /* pk-add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23747 /* __builtin_amdgcn_pk_add_max_u16 */, 23779 /* E2UsE2UsE2UsE2UsIb */, 37 /* nc */, 23726 /* pk-add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23798 /* __builtin_amdgcn_pk_add_min_i16 */, 23711 /* E2sE2sE2sE2sIb */, 37 /* nc */, 23726 /* pk-add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23830 /* __builtin_amdgcn_pk_add_min_u16 */, 23779 /* E2UsE2UsE2UsE2UsIb */, 37 /* nc */, 23726 /* pk-add-min-max-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23862 /* __builtin_amdgcn_prng_b32 */, 23451 /* UiUi */, 37 /* nc */, 23888 /* prng-inst */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23898 /* __builtin_amdgcn_qsad_pk_u16_u8 */, 22959 /* UWiUWiUiUWi */, 37 /* nc */, 23930 /* qsad-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23941 /* __builtin_amdgcn_queue_ptr */, 8209 /* v*4 */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{23968 /* __builtin_amdgcn_raw_buffer_load_b8 */, 24004 /* UcQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24013 /* __builtin_amdgcn_raw_buffer_load_b16 */, 24050 /* UsQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24059 /* __builtin_amdgcn_raw_buffer_load_b32 */, 24096 /* UiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24105 /* __builtin_amdgcn_raw_buffer_load_b64 */, 24142 /* E2UiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24153 /* __builtin_amdgcn_raw_buffer_load_b96 */, 24190 /* E3UiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24201 /* __builtin_amdgcn_raw_buffer_load_b128 */, 24239 /* E4UiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24250 /* __builtin_amdgcn_raw_buffer_store_b8 */, 24287 /* vUcQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24297 /* __builtin_amdgcn_raw_buffer_store_b16 */, 24335 /* vUsQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24345 /* __builtin_amdgcn_raw_buffer_store_b32 */, 24383 /* vUiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24393 /* __builtin_amdgcn_raw_buffer_store_b64 */, 24431 /* vE2UiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24443 /* __builtin_amdgcn_raw_buffer_store_b96 */, 24481 /* vE3UiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24493 /* __builtin_amdgcn_raw_buffer_store_b128 */, 24532 /* vE4UiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24544 /* __builtin_amdgcn_raw_ptr_buffer_atomic_add_i32 */, 24591 /* iiQbiiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24600 /* __builtin_amdgcn_raw_ptr_buffer_atomic_fadd_f32 */, 24648 /* ffQbiiIi */, 352 /* n */, 11591 /* atomic-fadd-rtn-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24657 /* __builtin_amdgcn_raw_ptr_buffer_atomic_fadd_v2f16 */, 24707 /* E2xE2xQbiiIi */, 352 /* n */, 11799 /* atomic-buffer-global-pk-add-f16-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24720 /* __builtin_amdgcn_raw_ptr_buffer_atomic_fmax_f32 */, 24648 /* ffQbiiIi */, 352 /* n */, 24768 /* atomic-fmin-fmax-global-f32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24796 /* __builtin_amdgcn_raw_ptr_buffer_atomic_fmax_f64 */, 24844 /* ddQbiiIi */, 352 /* n */, 24853 /* atomic-fmin-fmax-global-f64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24881 /* __builtin_amdgcn_raw_ptr_buffer_atomic_fmin_f32 */, 24648 /* ffQbiiIi */, 352 /* n */, 24768 /* atomic-fmin-fmax-global-f32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24929 /* __builtin_amdgcn_raw_ptr_buffer_atomic_fmin_f64 */, 24844 /* ddQbiiIi */, 352 /* n */, 24853 /* atomic-fmin-fmax-global-f64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{24977 /* __builtin_amdgcn_raw_ptr_buffer_load_lds */, 25018 /* vQbv*3IUiiiIiIi */, 352 /* n */, 12206 /* vmem-to-lds-load-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25034 /* __builtin_amdgcn_rcp */, 11285 /* dd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25055 /* __builtin_amdgcn_rcp_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25081 /* __builtin_amdgcn_rcpf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25103 /* __builtin_amdgcn_rcph */, 2149 /* hh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25125 /* __builtin_amdgcn_read_exec */, 11541 /* UWi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25152 /* __builtin_amdgcn_read_exec_hi */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25182 /* __builtin_amdgcn_read_exec_lo */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25212 /* __builtin_amdgcn_readfirstlane */, 25243 /* ii */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25246 /* __builtin_amdgcn_readlane */, 9011 /* iii */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25272 /* __builtin_amdgcn_rsq */, 11285 /* dd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25293 /* __builtin_amdgcn_rsq_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25319 /* __builtin_amdgcn_rsq_clamp */, 11285 /* dd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25346 /* __builtin_amdgcn_rsq_clampf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25374 /* __builtin_amdgcn_rsqf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25396 /* __builtin_amdgcn_rsqh */, 2149 /* hh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25418 /* __builtin_amdgcn_s_barrier */, 660 /* v */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25445 /* __builtin_amdgcn_s_barrier_init */, 25477 /* vv*i */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25482 /* __builtin_amdgcn_s_barrier_join */, 25514 /* vv* */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25518 /* __builtin_amdgcn_s_barrier_leave */, 25551 /* vIs */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25555 /* __builtin_amdgcn_s_barrier_signal */, 13505 /* vIi */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25589 /* __builtin_amdgcn_s_barrier_signal_isfirst */, 25631 /* bIi */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25635 /* __builtin_amdgcn_s_barrier_signal_var */, 25477 /* vv*i */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25673 /* __builtin_amdgcn_s_barrier_wait */, 25551 /* vIs */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25705 /* __builtin_amdgcn_s_buffer_prefetch_data */, 25745 /* vQbIiUi */, 37 /* nc */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25753 /* __builtin_amdgcn_s_cluster_barrier */, 660 /* v */, 352 /* n */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25788 /* __builtin_amdgcn_s_dcache_inv */, 660 /* v */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25818 /* __builtin_amdgcn_s_dcache_inv_vol */, 660 /* v */, 352 /* n */, 698 /* ci-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25852 /* __builtin_amdgcn_s_dcache_wb */, 660 /* v */, 352 /* n */, 8786 /* gfx8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25881 /* __builtin_amdgcn_s_decperflevel */, 13505 /* vIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25913 /* __builtin_amdgcn_s_get_barrier_state */, 25950 /* Uii */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{25954 /* __builtin_amdgcn_s_get_named_barrier_state */, 25997 /* Uiv* */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26002 /* __builtin_amdgcn_s_getpc */, 11541 /* UWi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26027 /* __builtin_amdgcn_s_getreg */, 26053 /* UiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26058 /* __builtin_amdgcn_s_incperflevel */, 13505 /* vIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26090 /* __builtin_amdgcn_s_memrealtime */, 11541 /* UWi */, 352 /* n */, 26121 /* s-memrealtime */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26135 /* __builtin_amdgcn_s_memtime */, 11541 /* UWi */, 352 /* n */, 26162 /* s-memtime-inst */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26177 /* __builtin_amdgcn_s_monitor_sleep */, 25551 /* vIs */, 352 /* n */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26210 /* __builtin_amdgcn_s_prefetch_data */, 26243 /* vvC*Ui */, 37 /* nc */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26250 /* __builtin_amdgcn_s_sendmsg */, 26277 /* vIiUi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26283 /* __builtin_amdgcn_s_sendmsg_rtn */, 26314 /* UiIUi */, 352 /* n */, 9123 /* gfx11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26320 /* __builtin_amdgcn_s_sendmsg_rtnl */, 26352 /* UWiIUi */, 352 /* n */, 9123 /* gfx11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26359 /* __builtin_amdgcn_s_sendmsghalt */, 26277 /* vIiUi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26390 /* __builtin_amdgcn_s_setprio */, 25551 /* vIs */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26417 /* __builtin_amdgcn_s_setprio_inc_wg */, 25551 /* vIs */, 352 /* n */, 26451 /* setprio-inc-wg-inst */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26471 /* __builtin_amdgcn_s_setreg */, 26277 /* vIiUi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26497 /* __builtin_amdgcn_s_sleep */, 13505 /* vIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26522 /* __builtin_amdgcn_s_sleep_var */, 9542 /* vUi */, 352 /* n */, 9051 /* gfx12-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26551 /* __builtin_amdgcn_s_ttracedata */, 26581 /* vi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26584 /* __builtin_amdgcn_s_ttracedata_imm */, 25551 /* vIs */, 352 /* n */, 13725 /* gfx10-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26618 /* __builtin_amdgcn_s_wait_asynccnt */, 26651 /* vIUs */, 352 /* n */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26656 /* __builtin_amdgcn_s_wait_event_export_ready */, 660 /* v */, 352 /* n */, 9123 /* gfx11-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26699 /* __builtin_amdgcn_s_wait_tensorcnt */, 26651 /* vIUs */, 352 /* n */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26733 /* __builtin_amdgcn_s_waitcnt */, 13505 /* vIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26760 /* __builtin_amdgcn_s_wakeup_barrier */, 25514 /* vv* */, 352 /* n */, 26794 /* s-wakeup-barrier-inst */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26816 /* __builtin_amdgcn_sad_hi_u8 */, 182 /* UiUiUiUi */, 37 /* nc */, 26843 /* sad-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26853 /* __builtin_amdgcn_sad_u8 */, 182 /* UiUiUiUi */, 37 /* nc */, 26843 /* sad-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26877 /* __builtin_amdgcn_sad_u16 */, 182 /* UiUiUiUi */, 37 /* nc */, 26843 /* sad-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26902 /* __builtin_amdgcn_sat_pk4_i4_i8 */, 26933 /* UsUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26938 /* __builtin_amdgcn_sat_pk4_u4_u8 */, 26933 /* UsUi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26969 /* __builtin_amdgcn_sbfe */, 182 /* UiUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{26991 /* __builtin_amdgcn_sched_barrier */, 13505 /* vIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27022 /* __builtin_amdgcn_sched_group_barrier */, 27059 /* vIiIiIi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27067 /* __builtin_amdgcn_sdot2 */, 27090 /* iE2sE2siIb */, 37 /* nc */, 27101 /* dot2-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27112 /* __builtin_amdgcn_sdot4 */, 30 /* iiiiIb */, 37 /* nc */, 27135 /* dot1-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27146 /* __builtin_amdgcn_sdot8 */, 30 /* iiiiIb */, 37 /* nc */, 27135 /* dot1-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27169 /* __builtin_amdgcn_set_fpenv */, 27196 /* vUWi */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27201 /* __builtin_amdgcn_sicmp */, 27224 /* UWiiiIi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27232 /* __builtin_amdgcn_sicmpl */, 27256 /* UWiWiWiIi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27266 /* __builtin_amdgcn_sin_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27292 /* __builtin_amdgcn_sinf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27314 /* __builtin_amdgcn_sinh */, 2149 /* hh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27336 /* __builtin_amdgcn_smfmac_f32_16x16x32_bf16 */, 27378 /* E4fE4sE8sE4fiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27396 /* __builtin_amdgcn_smfmac_f32_16x16x32_f16 */, 27437 /* E4fE4xE8xE4fiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27455 /* __builtin_amdgcn_smfmac_f32_16x16x64_bf8_bf8 */, 27500 /* E4fE2iE4iE4fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27518 /* __builtin_amdgcn_smfmac_f32_16x16x64_bf8_fp8 */, 27500 /* E4fE2iE4iE4fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27563 /* __builtin_amdgcn_smfmac_f32_16x16x64_bf16 */, 27605 /* E4fE8yE16yE4fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27624 /* __builtin_amdgcn_smfmac_f32_16x16x64_f16 */, 27665 /* E4fE8xE16xE4fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27684 /* __builtin_amdgcn_smfmac_f32_16x16x64_fp8_bf8 */, 27500 /* E4fE2iE4iE4fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27729 /* __builtin_amdgcn_smfmac_f32_16x16x64_fp8_fp8 */, 27500 /* E4fE2iE4iE4fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27774 /* __builtin_amdgcn_smfmac_f32_16x16x128_bf8_bf8 */, 27820 /* E4fE4iE8iE4fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27838 /* __builtin_amdgcn_smfmac_f32_16x16x128_bf8_fp8 */, 27820 /* E4fE4iE8iE4fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27884 /* __builtin_amdgcn_smfmac_f32_16x16x128_fp8_bf8 */, 27820 /* E4fE4iE8iE4fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27930 /* __builtin_amdgcn_smfmac_f32_16x16x128_fp8_fp8 */, 27820 /* E4fE4iE8iE4fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{27976 /* __builtin_amdgcn_smfmac_f32_32x32x16_bf16 */, 28018 /* E16fE4sE8sE16fiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28038 /* __builtin_amdgcn_smfmac_f32_32x32x16_f16 */, 28079 /* E16fE4xE8xE16fiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28099 /* __builtin_amdgcn_smfmac_f32_32x32x32_bf8_bf8 */, 28144 /* E16fE2iE4iE16fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28164 /* __builtin_amdgcn_smfmac_f32_32x32x32_bf8_fp8 */, 28144 /* E16fE2iE4iE16fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28209 /* __builtin_amdgcn_smfmac_f32_32x32x32_bf16 */, 28251 /* E16fE8yE16yE16fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28272 /* __builtin_amdgcn_smfmac_f32_32x32x32_f16 */, 28313 /* E16fE8xE16xE16fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28334 /* __builtin_amdgcn_smfmac_f32_32x32x32_fp8_bf8 */, 28144 /* E16fE2iE4iE16fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28379 /* __builtin_amdgcn_smfmac_f32_32x32x32_fp8_fp8 */, 28144 /* E16fE2iE4iE16fiIiIi */, 37 /* nc */, 21131 /* fp8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28424 /* __builtin_amdgcn_smfmac_f32_32x32x64_bf8_bf8 */, 28469 /* E16fE4iE8iE16fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28489 /* __builtin_amdgcn_smfmac_f32_32x32x64_bf8_fp8 */, 28469 /* E16fE4iE8iE16fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28534 /* __builtin_amdgcn_smfmac_f32_32x32x64_fp8_bf8 */, 28469 /* E16fE4iE8iE16fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28579 /* __builtin_amdgcn_smfmac_f32_32x32x64_fp8_fp8 */, 28469 /* E16fE4iE8iE16fiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28624 /* __builtin_amdgcn_smfmac_i32_16x16x64_i8 */, 28664 /* E4iE2iE4iE4iiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28682 /* __builtin_amdgcn_smfmac_i32_16x16x128_i8 */, 28723 /* E4iE4iE8iE4iiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28741 /* __builtin_amdgcn_smfmac_i32_32x32x32_i8 */, 28781 /* E16iE2iE4iE16iiIiIi */, 37 /* nc */, 20448 /* mai-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28801 /* __builtin_amdgcn_smfmac_i32_32x32x64_i8 */, 28841 /* E16iE4iE8iE16iiIiIi */, 37 /* nc */, 3822 /* gfx950-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28861 /* __builtin_amdgcn_sqrt */, 11285 /* dd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28883 /* __builtin_amdgcn_sqrt_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28910 /* __builtin_amdgcn_sqrtf */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28933 /* __builtin_amdgcn_sqrth */, 2149 /* hh */, 37 /* nc */, 790 /* 16-bit-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{28956 /* __builtin_amdgcn_struct_ptr_buffer_load_lds */, 29000 /* vQbv*3IUiiiiIiIi */, 352 /* n */, 12206 /* vmem-to-lds-load-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29017 /* __builtin_amdgcn_sudot4 */, 29041 /* iIbiIbiiIb */, 37 /* nc */, 29052 /* dot8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29063 /* __builtin_amdgcn_sudot8 */, 29041 /* iIbiIbiiIb */, 37 /* nc */, 29052 /* dot8-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29087 /* __builtin_amdgcn_swmmac_bf16_16x16x32_bf16_w32 */, 29134 /* E8sE8sE16sE8si */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29149 /* __builtin_amdgcn_swmmac_bf16_16x16x32_bf16_w64 */, 29196 /* E4sE4sE8sE4si */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29210 /* __builtin_amdgcn_swmmac_bf16_16x16x64_bf16 */, 29253 /* E8yIbE16yIbE32yE8yiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29277 /* __builtin_amdgcn_swmmac_bf16f32_16x16x64_bf16 */, 29323 /* E8fIbE16yIbE32yE8fiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29347 /* __builtin_amdgcn_swmmac_f16_16x16x32_f16_w32 */, 29392 /* E8hE8hE16hE8hi */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29407 /* __builtin_amdgcn_swmmac_f16_16x16x32_f16_w64 */, 29452 /* E4hE4hE8hE4hi */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29466 /* __builtin_amdgcn_swmmac_f16_16x16x64_f16 */, 29507 /* E8hIbE16hIbE32hE8hiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29531 /* __builtin_amdgcn_swmmac_f16_16x16x128_bf8_bf8 */, 29577 /* E8hE8iE16iE8hiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29596 /* __builtin_amdgcn_swmmac_f16_16x16x128_bf8_fp8 */, 29577 /* E8hE8iE16iE8hiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29642 /* __builtin_amdgcn_swmmac_f16_16x16x128_fp8_bf8 */, 29577 /* E8hE8iE16iE8hiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29688 /* __builtin_amdgcn_swmmac_f16_16x16x128_fp8_fp8 */, 29577 /* E8hE8iE16iE8hiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29734 /* __builtin_amdgcn_swmmac_f32_16x16x32_bf8_bf8_w32 */, 29783 /* E8fE2iE4iE8fi */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29797 /* __builtin_amdgcn_swmmac_f32_16x16x32_bf8_bf8_w64 */, 29846 /* E4fiE2iE4fi */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29858 /* __builtin_amdgcn_swmmac_f32_16x16x32_bf8_fp8_w32 */, 29783 /* E8fE2iE4iE8fi */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29907 /* __builtin_amdgcn_swmmac_f32_16x16x32_bf8_fp8_w64 */, 29846 /* E4fiE2iE4fi */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{29956 /* __builtin_amdgcn_swmmac_f32_16x16x32_bf16_w32 */, 30002 /* E8fE8sE16sE8fi */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30017 /* __builtin_amdgcn_swmmac_f32_16x16x32_bf16_w64 */, 30063 /* E4fE4sE8sE4fi */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30077 /* __builtin_amdgcn_swmmac_f32_16x16x32_f16_w32 */, 30122 /* E8fE8hE16hE8fi */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30137 /* __builtin_amdgcn_swmmac_f32_16x16x32_f16_w64 */, 30182 /* E4fE4hE8hE4fi */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30196 /* __builtin_amdgcn_swmmac_f32_16x16x32_fp8_bf8_w32 */, 29783 /* E8fE2iE4iE8fi */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30245 /* __builtin_amdgcn_swmmac_f32_16x16x32_fp8_bf8_w64 */, 29846 /* E4fiE2iE4fi */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30294 /* __builtin_amdgcn_swmmac_f32_16x16x32_fp8_fp8_w32 */, 29783 /* E8fE2iE4iE8fi */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30343 /* __builtin_amdgcn_swmmac_f32_16x16x32_fp8_fp8_w64 */, 29846 /* E4fiE2iE4fi */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30392 /* __builtin_amdgcn_swmmac_f32_16x16x64_bf16 */, 29323 /* E8fIbE16yIbE32yE8fiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30434 /* __builtin_amdgcn_swmmac_f32_16x16x64_f16 */, 30475 /* E8fIbE16hIbE32hE8fiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30499 /* __builtin_amdgcn_swmmac_f32_16x16x128_bf8_bf8 */, 30545 /* E8fE8iE16iE8fiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30564 /* __builtin_amdgcn_swmmac_f32_16x16x128_bf8_fp8 */, 30545 /* E8fE8iE16iE8fiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30610 /* __builtin_amdgcn_swmmac_f32_16x16x128_fp8_bf8 */, 30545 /* E8fE8iE16iE8fiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30656 /* __builtin_amdgcn_swmmac_f32_16x16x128_fp8_fp8 */, 30545 /* E8fE8iE16iE8fiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30702 /* __builtin_amdgcn_swmmac_i32_16x16x32_iu4_w32 */, 30747 /* E8iIbiIbE2iE8iiIb */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30765 /* __builtin_amdgcn_swmmac_i32_16x16x32_iu4_w64 */, 30810 /* E4iIbiIbiE4iiIb */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30826 /* __builtin_amdgcn_swmmac_i32_16x16x32_iu8_w32 */, 30871 /* E8iIbE2iIbE4iE8iiIb */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30891 /* __builtin_amdgcn_swmmac_i32_16x16x32_iu8_w64 */, 30936 /* E4iIbiIbE2iE4iiIb */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30954 /* __builtin_amdgcn_swmmac_i32_16x16x64_iu4_w32 */, 30871 /* E8iIbE2iIbE4iE8iiIb */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{30999 /* __builtin_amdgcn_swmmac_i32_16x16x64_iu4_w64 */, 30936 /* E4iIbiIbE2iE4iiIb */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31044 /* __builtin_amdgcn_swmmac_i32_16x16x128_iu8 */, 31086 /* E8iIbE8iIbE16iE8iiIbIb. */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31110 /* __builtin_amdgcn_tanh_bf16 */, 2082 /* yy */, 37 /* nc */, 2085 /* bf16-trans-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31137 /* __builtin_amdgcn_tanhf */, 2124 /* ff */, 37 /* nc */, 31160 /* tanh-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31171 /* __builtin_amdgcn_tanhh */, 2149 /* hh */, 37 /* nc */, 31160 /* tanh-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31194 /* __builtin_amdgcn_tensor_load_to_lds */, 31230 /* vE4iE8iE4iE4iIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31246 /* __builtin_amdgcn_tensor_load_to_lds_d2 */, 31285 /* vE4iE8iIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31295 /* __builtin_amdgcn_tensor_store_from_lds */, 31230 /* vE4iE8iE4iE4iIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31334 /* __builtin_amdgcn_tensor_store_from_lds_d2 */, 31285 /* vE4iE8iIi */, 37 /* nc */, 836 /* gfx1250-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31376 /* __builtin_amdgcn_trig_preop */, 20084 /* ddi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31404 /* __builtin_amdgcn_trig_preopf */, 20112 /* ffi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31433 /* __builtin_amdgcn_ubfe */, 182 /* UiUiUiUi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31455 /* __builtin_amdgcn_udot2 */, 31478 /* UiE2UsE2UsUiIb */, 37 /* nc */, 27101 /* dot2-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31493 /* __builtin_amdgcn_udot4 */, 87 /* UiUiUiUiIb */, 37 /* nc */, 31516 /* dot7-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31527 /* __builtin_amdgcn_udot8 */, 87 /* UiUiUiUiIb */, 37 /* nc */, 31516 /* dot7-insts */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31550 /* __builtin_amdgcn_uicmp */, 31573 /* UWiUiUiIi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31583 /* __builtin_amdgcn_uicmpl */, 31607 /* UWiUWiUWiIi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31619 /* __builtin_amdgcn_update_dpp */, 31647 /* iiiIiIiIiIb */, 22884 /* nct */, 22888 /* dpp */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31659 /* __builtin_amdgcn_wave_barrier */, 660 /* v */, 352 /* n */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31689 /* __builtin_amdgcn_wave_reduce_add_u32 */, 31726 /* UZiUZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31735 /* __builtin_amdgcn_wave_reduce_add_u64 */, 31772 /* UWiUWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31781 /* __builtin_amdgcn_wave_reduce_and_b32 */, 31818 /* ZiZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31825 /* __builtin_amdgcn_wave_reduce_and_b64 */, 31862 /* WiWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31869 /* __builtin_amdgcn_wave_reduce_fadd_f32 */, 31907 /* ffZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31912 /* __builtin_amdgcn_wave_reduce_fmax_f32 */, 31907 /* ffZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31950 /* __builtin_amdgcn_wave_reduce_fmin_f32 */, 31907 /* ffZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{31988 /* __builtin_amdgcn_wave_reduce_fsub_f32 */, 31907 /* ffZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32026 /* __builtin_amdgcn_wave_reduce_max_i32 */, 31818 /* ZiZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32063 /* __builtin_amdgcn_wave_reduce_max_i64 */, 31862 /* WiWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32100 /* __builtin_amdgcn_wave_reduce_max_u32 */, 31726 /* UZiUZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32137 /* __builtin_amdgcn_wave_reduce_max_u64 */, 31772 /* UWiUWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32174 /* __builtin_amdgcn_wave_reduce_min_i32 */, 31818 /* ZiZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32211 /* __builtin_amdgcn_wave_reduce_min_i64 */, 31862 /* WiWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32248 /* __builtin_amdgcn_wave_reduce_min_u32 */, 31726 /* UZiUZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32285 /* __builtin_amdgcn_wave_reduce_min_u64 */, 31772 /* UWiUWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32322 /* __builtin_amdgcn_wave_reduce_or_b32 */, 31818 /* ZiZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32358 /* __builtin_amdgcn_wave_reduce_or_b64 */, 31862 /* WiWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32394 /* __builtin_amdgcn_wave_reduce_sub_u32 */, 31726 /* UZiUZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32431 /* __builtin_amdgcn_wave_reduce_sub_u64 */, 31772 /* UWiUWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32468 /* __builtin_amdgcn_wave_reduce_xor_b32 */, 31818 /* ZiZiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32505 /* __builtin_amdgcn_wave_reduce_xor_b64 */, 31862 /* WiWiZi */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32542 /* __builtin_amdgcn_wavefrontsize */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32573 /* __builtin_amdgcn_wmma_bf16_16x16x16_bf16_tied_w32 */, 32623 /* E16sE16sE16sE16sIb */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32670 /* __builtin_amdgcn_wmma_bf16_16x16x16_bf16_tied_w64 */, 32720 /* E8sE16sE16sE8sIb */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32765 /* __builtin_amdgcn_wmma_bf16_16x16x16_bf16_w32 */, 32623 /* E16sE16sE16sE16sIb */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32810 /* __builtin_amdgcn_wmma_bf16_16x16x16_bf16_w32_gfx12 */, 32861 /* E8sE8sE8sE8s */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32874 /* __builtin_amdgcn_wmma_bf16_16x16x16_bf16_w64 */, 32720 /* E8sE16sE16sE8sIb */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32919 /* __builtin_amdgcn_wmma_bf16_16x16x16_bf16_w64_gfx12 */, 32970 /* E4sE4sE4sE4s */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{32983 /* __builtin_amdgcn_wmma_bf16_16x16x32_bf16 */, 33024 /* E8yIbE16yIbE16yIsE8yIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33049 /* __builtin_amdgcn_wmma_bf16f32_16x16x32_bf16 */, 33093 /* E8yIbE16yIbE16yIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33118 /* __builtin_amdgcn_wmma_f16_16x16x16_f16_tied_w32 */, 33166 /* E16xE16xE16xE16xIb */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33185 /* __builtin_amdgcn_wmma_f16_16x16x16_f16_tied_w64 */, 33233 /* E8xE16xE16xE8xIb */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33250 /* __builtin_amdgcn_wmma_f16_16x16x16_f16_w32 */, 33166 /* E16xE16xE16xE16xIb */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33293 /* __builtin_amdgcn_wmma_f16_16x16x16_f16_w32_gfx12 */, 33342 /* E8xE8xE8xE8x */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33355 /* __builtin_amdgcn_wmma_f16_16x16x16_f16_w64 */, 33233 /* E8xE16xE16xE8xIb */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33398 /* __builtin_amdgcn_wmma_f16_16x16x16_f16_w64_gfx12 */, 33447 /* E4xE4xE4xE4x */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33460 /* __builtin_amdgcn_wmma_f16_16x16x32_f16 */, 33499 /* E8hIbE16hIbE16hIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33524 /* __builtin_amdgcn_wmma_f16_16x16x64_bf8_bf8 */, 33567 /* E8hE8iE8iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33586 /* __builtin_amdgcn_wmma_f16_16x16x64_bf8_fp8 */, 33567 /* E8hE8iE8iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33629 /* __builtin_amdgcn_wmma_f16_16x16x64_fp8_bf8 */, 33567 /* E8hE8iE8iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33672 /* __builtin_amdgcn_wmma_f16_16x16x64_fp8_fp8 */, 33567 /* E8hE8iE8iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33715 /* __builtin_amdgcn_wmma_f16_16x16x128_bf8_bf8 */, 33759 /* E8hE16iE16iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33780 /* __builtin_amdgcn_wmma_f16_16x16x128_bf8_fp8 */, 33759 /* E8hE16iE16iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33824 /* __builtin_amdgcn_wmma_f16_16x16x128_fp8_bf8 */, 33759 /* E8hE16iE16iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33868 /* __builtin_amdgcn_wmma_f16_16x16x128_fp8_fp8 */, 33759 /* E8hE16iE16iIsE8hIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33912 /* __builtin_amdgcn_wmma_f32_16x16x4_f32 */, 33950 /* E8fIbE2fIbE2fIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{33973 /* __builtin_amdgcn_wmma_f32_16x16x16_bf8_bf8_w32_gfx12 */, 34026 /* E8fE2iE2iE8f */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34039 /* __builtin_amdgcn_wmma_f32_16x16x16_bf8_bf8_w64_gfx12 */, 34092 /* E4fiiE4f */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34101 /* __builtin_amdgcn_wmma_f32_16x16x16_bf8_fp8_w32_gfx12 */, 34026 /* E8fE2iE2iE8f */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34154 /* __builtin_amdgcn_wmma_f32_16x16x16_bf8_fp8_w64_gfx12 */, 34092 /* E4fiiE4f */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34207 /* __builtin_amdgcn_wmma_f32_16x16x16_bf16_w32 */, 34251 /* E8fE16sE16sE8f */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34266 /* __builtin_amdgcn_wmma_f32_16x16x16_bf16_w32_gfx12 */, 34316 /* E8fE8sE8sE8f */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34329 /* __builtin_amdgcn_wmma_f32_16x16x16_bf16_w64 */, 34373 /* E4fE16sE16sE4f */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34388 /* __builtin_amdgcn_wmma_f32_16x16x16_bf16_w64_gfx12 */, 34438 /* E4fE4sE4sE4f */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34451 /* __builtin_amdgcn_wmma_f32_16x16x16_f16_w32 */, 34494 /* E8fE16xE16xE8f */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34509 /* __builtin_amdgcn_wmma_f32_16x16x16_f16_w32_gfx12 */, 34558 /* E8fE8xE8xE8f */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34571 /* __builtin_amdgcn_wmma_f32_16x16x16_f16_w64 */, 34614 /* E4fE16xE16xE4f */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34629 /* __builtin_amdgcn_wmma_f32_16x16x16_f16_w64_gfx12 */, 34678 /* E4fE4xE4xE4f */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34691 /* __builtin_amdgcn_wmma_f32_16x16x16_fp8_bf8_w32_gfx12 */, 34026 /* E8fE2iE2iE8f */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34744 /* __builtin_amdgcn_wmma_f32_16x16x16_fp8_bf8_w64_gfx12 */, 34092 /* E4fiiE4f */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34797 /* __builtin_amdgcn_wmma_f32_16x16x16_fp8_fp8_w32_gfx12 */, 34026 /* E8fE2iE2iE8f */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34850 /* __builtin_amdgcn_wmma_f32_16x16x16_fp8_fp8_w64_gfx12 */, 34092 /* E4fiiE4f */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34903 /* __builtin_amdgcn_wmma_f32_16x16x32_bf16 */, 34943 /* E8fIbE16yIbE16yIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{34968 /* __builtin_amdgcn_wmma_f32_16x16x32_f16 */, 35007 /* E8fIbE16hIbE16hIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35032 /* __builtin_amdgcn_wmma_f32_16x16x64_bf8_bf8 */, 35075 /* E8fE8iE8iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35094 /* __builtin_amdgcn_wmma_f32_16x16x64_bf8_fp8 */, 35075 /* E8fE8iE8iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35137 /* __builtin_amdgcn_wmma_f32_16x16x64_fp8_bf8 */, 35075 /* E8fE8iE8iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35180 /* __builtin_amdgcn_wmma_f32_16x16x64_fp8_fp8 */, 35075 /* E8fE8iE8iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35223 /* __builtin_amdgcn_wmma_f32_16x16x128_bf8_bf8 */, 35267 /* E8fE16iE16iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35288 /* __builtin_amdgcn_wmma_f32_16x16x128_bf8_fp8 */, 35267 /* E8fE16iE16iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35332 /* __builtin_amdgcn_wmma_f32_16x16x128_f8f6f4 */, 35375 /* E8fIiE16iIiE16iIsE8f */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35396 /* __builtin_amdgcn_wmma_f32_16x16x128_fp8_bf8 */, 35267 /* E8fE16iE16iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35440 /* __builtin_amdgcn_wmma_f32_16x16x128_fp8_fp8 */, 35267 /* E8fE16iE16iIsE8fIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35484 /* __builtin_amdgcn_wmma_f32_32x16x128_f4 */, 35523 /* E16fE16iE8iIsE16f */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35541 /* __builtin_amdgcn_wmma_i32_16x16x16_iu4_w32 */, 35584 /* E8iIbE2iIbE2iE8iIb */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35603 /* __builtin_amdgcn_wmma_i32_16x16x16_iu4_w32_gfx12 */, 35652 /* E8iIbiIbiE8iIb */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35667 /* __builtin_amdgcn_wmma_i32_16x16x16_iu4_w64 */, 35710 /* E4iIbE2iIbE2iE4iIb */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35729 /* __builtin_amdgcn_wmma_i32_16x16x16_iu4_w64_gfx12 */, 35778 /* E4iIbiIbiE4iIb */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35793 /* __builtin_amdgcn_wmma_i32_16x16x16_iu8_w32 */, 35836 /* E8iIbE4iIbE4iE8iIb */, 37 /* nc */, 32642 /* gfx11-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35855 /* __builtin_amdgcn_wmma_i32_16x16x16_iu8_w32_gfx12 */, 35584 /* E8iIbE2iIbE2iE8iIb */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35904 /* __builtin_amdgcn_wmma_i32_16x16x16_iu8_w64 */, 35947 /* E4iIbE4iIbE4iE4iIb */, 37 /* nc */, 32737 /* gfx11-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{35966 /* __builtin_amdgcn_wmma_i32_16x16x16_iu8_w64_gfx12 */, 35778 /* E4iIbiIbiE4iIb */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36015 /* __builtin_amdgcn_wmma_i32_16x16x32_iu4_w32_gfx12 */, 35584 /* E8iIbE2iIbE2iE8iIb */, 37 /* nc */, 12807 /* gfx12-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36064 /* __builtin_amdgcn_wmma_i32_16x16x32_iu4_w64_gfx12 */, 35778 /* E4iIbiIbiE4iIb */, 37 /* nc */, 12737 /* gfx12-insts,wavefrontsize64 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36113 /* __builtin_amdgcn_wmma_i32_16x16x64_iu8 */, 36152 /* E8iIbE8iIbE8iE8iIbIb. */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36174 /* __builtin_amdgcn_wmma_scale16_f32_16x16x128_f8f6f4 */, 36225 /* E8fIiE16iIiE16iIsE8fIiIiLiIiIiLiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36262 /* __builtin_amdgcn_wmma_scale16_f32_32x16x128_f4 */, 36309 /* E16fE16iE8iIsE16fIiIiLiIiIiLiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36343 /* __builtin_amdgcn_wmma_scale_f32_16x16x128_f8f6f4 */, 36392 /* E8fIiE16iIiE16iIsE8fIiIiiIiIiiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36427 /* __builtin_amdgcn_wmma_scale_f32_32x16x128_f4 */, 36472 /* E16fE16iE8iIsE16fIiIiiIiIiiIbIb */, 37 /* nc */, 1728 /* gfx1250-insts,wavefrontsize32 */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36504 /* __builtin_amdgcn_workgroup_id_x */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36536 /* __builtin_amdgcn_workgroup_id_y */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36568 /* __builtin_amdgcn_workgroup_id_z */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36600 /* __builtin_amdgcn_workgroup_size_x */, 36634 /* Us */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36637 /* __builtin_amdgcn_workgroup_size_y */, 36634 /* Us */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36671 /* __builtin_amdgcn_workgroup_size_z */, 36634 /* Us */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36705 /* __builtin_amdgcn_workitem_id_x */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36736 /* __builtin_amdgcn_workitem_id_y */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36767 /* __builtin_amdgcn_workitem_id_z */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36798 /* __builtin_r600_implicitarg_ptr */, 36829 /* Uc*7 */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36834 /* __builtin_r600_read_tgid_x */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36861 /* __builtin_r600_read_tgid_y */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36888 /* __builtin_r600_read_tgid_z */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36915 /* __builtin_r600_read_tidig_x */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36943 /* __builtin_r600_read_tidig_y */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36971 /* __builtin_r600_read_tidig_z */, 833 /* Ui */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{36999 /* __builtin_r600_recipsqrt_ieee */, 11285 /* dd */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},
    Builtin::Info{Builtin::Info::StrOffsets{37029 /* __builtin_r600_recipsqrt_ieeef */, 2124 /* ff */, 37 /* nc */, 0 /*  */}, HeaderDesc::NO_HEADER, ALL_LANGUAGES},

#endif // GET_BUILTIN_INFOS

#ifdef GET_BUILTIN_PREFIXED_INFOS

#endif // GET_BUILTIN_PREFIXED_INFOS

#ifdef ATOMIC_BUILTIN

#endif // ATOMIC_BUILTIN
#undef ATOMIC_BUILTIN
