/*
FUNCTION_NAME: FUN_024e124c
ENTRY_POINT: 024e124c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_024e124c(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((DAT_03782790 & 1) == 0) {
    thunk_FUN_00d48444(DG_Tweening_Core_DOSetter<int>_TypeInfo);
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_79_0_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XRCpuImage_AsyncConversion_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ea928);
    thunk_FUN_00d48444(
                      Method_SaveServerInterface_<LoadSaveCoroutine>d__21_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(StringLiteral_13785);
    thunk_FUN_00d48444(System_Data_ConstraintException_TypeInfo);
    thunk_FUN_00d48444(
                      System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo
                      );
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_96__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshq_lane_s32__);
    thunk_FUN_00d48444(StringLiteral_1178);
    thunk_FUN_00d48444(PTR_DAT_033ea950);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68>_SliceWithStride<Vector3>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Security_Cryptography_RSACryptoServiceProvider_ExportParameters__
                      );
    thunk_FUN_00d48444(Method_System_Net_Sockets_NetworkStream_Seek__);
    thunk_FUN_00d48444(System_Threading_Mutex_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1076);
    thunk_FUN_00d48444(Method_System_Version_op_LessThan__);
    thunk_FUN_00d48444(
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<TileData>__
                      );
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    DAT_03782790 = 1;
  }
  dVar17 = DAT_028aa048;
  dVar16 = modf(DAT_028aa048,&local_d0);
  if (dVar16 == 0.5) {
    fVar19 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar19 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar19 = 255.0;
  }
  dVar16 = modf(dVar17,&local_d0);
  if (dVar16 == 0.5) {
    fVar20 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar20 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar20 = 255.0;
  }
  dVar16 = modf(dVar17,&local_d0);
  puVar4 = System_Threading_Mutex_TypeInfo;
  if (dVar16 == 0.5) {
    fVar21 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar21 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar21 = 255.0;
  }
  dVar16 = modf(dVar17,&local_d0);
  if (dVar16 == 0.5) {
    fVar15 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar15 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar15 = 255.0;
  }
  auVar18 = NEON_fmov(0x3f800000,4);
  *(uint *)(param_1 + 0x13c) =
       (int)fVar19 & 0xffU | ((int)fVar20 & 0xffU) << 8 | ((int)fVar21 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  *(long *)(param_1 + 0x148) = auVar18._8_8_;
  *(long *)(param_1 + 0x140) = auVar18._0_8_;
  lVar12 = *(long *)puVar4;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar12 = *(long *)puVar4;
  }
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  uVar1 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  *(undefined4 *)(param_1 + 0x15c) = 3;
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0.0;
  uStack_b8 = 0;
  local_c0 = 0;
  FUN_024aa330(0x3f800000,ZEXT816(0x3f800000),0x3f800000,0x3f800000,&local_d0,0);
  *(undefined8 *)(param_1 + 0x188) = uStack_a8;
  *(undefined8 *)(param_1 + 0x180) = local_b0;
  *(undefined8 *)(param_1 + 0x198) = uStack_98;
  *(undefined8 *)(param_1 + 400) = uStack_a0;
  *(undefined8 *)(param_1 + 0x168) = uStack_c8;
  *(double *)(param_1 + 0x160) = local_d0;
  *(undefined8 *)(param_1 + 0x178) = uStack_b8;
  *(undefined8 *)(param_1 + 0x170) = local_c0;
  dVar16 = modf(dVar17,&local_180);
  if (dVar16 == 0.5) {
    fVar19 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar19 = (float)local_180 + 1.0;
    }
  }
  else {
    fVar19 = 255.0;
  }
  dVar16 = modf(dVar17,&local_180);
  if (dVar16 == 0.5) {
    fVar20 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar20 = (float)local_180 + 1.0;
    }
  }
  else {
    fVar20 = 255.0;
  }
  dVar16 = modf(dVar17,&local_180);
  if (dVar16 == 0.5) {
    fVar21 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar21 = (float)local_180 + 1.0;
    }
  }
  else {
    fVar21 = 255.0;
  }
  dVar16 = modf(dVar17,&local_180);
  if (dVar16 == 0.5) {
    fVar15 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar15 = (float)local_180 + 1.0;
    }
  }
  else {
    fVar15 = 255.0;
  }
  *(uint *)(param_1 + 0x1d0) =
       (int)fVar19 & 0xffU | ((int)fVar20 & 0xffU) << 8 | ((int)fVar21 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  dVar16 = modf(0.0,&local_180);
  fVar19 = 0.0;
  if (dVar16 == 0.5) {
    fVar19 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar19 = (float)local_180 + 1.0;
    }
  }
  dVar16 = modf(0.0,&local_180);
  fVar20 = 0.0;
  if (dVar16 == 0.5) {
    fVar20 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar20 = (float)local_180 + 1.0;
    }
  }
  dVar16 = modf(0.0,&local_180);
  puVar6 = 
  Method_SaveServerInterface_<LoadSaveCoroutine>d__21_System_Collections_IEnumerator_Reset__;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_96__;
  puVar3 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshq_lane_s32__;
  puVar2 = Method_System_Version_op_LessThan__;
  puVar4 = Method_System_Security_Cryptography_RSACryptoServiceProvider_ExportParameters__;
  if (dVar16 == 0.5) {
    fVar21 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar21 = (float)local_180 + 1.0;
    }
  }
  else {
    fVar21 = 0.0;
  }
  dVar16 = modf(dVar17,&local_180);
  if (dVar16 == 0.5) {
    fVar15 = (float)local_180;
    if (((long)local_180 & 1U) != 0) {
      fVar15 = (float)local_180 + 1.0;
    }
  }
  else {
    fVar15 = 255.0;
  }
  *(undefined4 *)(param_1 + 0x1dc) = 0xc2c60000;
  *(uint *)(param_1 + 0x1d4) =
       (int)fVar19 & 0xffU | ((int)fVar20 & 0xffU) << 8 | ((int)fVar21 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  *(undefined4 *)(param_1 + 0x1e4) = 0x42100000;
  uStack_178 = 0;
  local_180 = 0.0;
  uStack_168 = 0;
  uStack_170 = 0;
  FUN_013b73c4(&local_180,0x10,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x1f0) = uStack_178;
  *(double *)(param_1 + 0x1e8) = local_180;
  *(undefined8 *)(param_1 + 0x200) = uStack_168;
  *(undefined8 *)(param_1 + 0x1f8) = uStack_170;
  *(undefined8 *)(param_1 + 0x208) = 0x19000000190;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  FUN_013b73c4(&local_f0,8,*(undefined8 *)puVar5);
  uVar13 = DAT_028aa488;
  *(undefined4 *)(param_1 + 0x240) = 100;
  *(undefined8 *)(param_1 + 0x218) = uStack_e8;
  *(undefined8 *)(param_1 + 0x210) = local_f0;
  *(undefined8 *)(param_1 + 0x228) = uStack_d8;
  *(undefined8 *)(param_1 + 0x220) = uStack_e0;
  *(undefined8 *)(param_1 + 0x264) = uVar13;
  *(undefined4 *)(param_1 + 0x26c) = 0xffff;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar6,0x10);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  FUN_013b71a8(&local_110,uVar13,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x280) = uStack_108;
  *(undefined8 *)(param_1 + 0x278) = local_110;
  *(undefined8 *)(param_1 + 0x290) = uStack_f8;
  *(undefined8 *)(param_1 + 0x288) = uStack_100;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
  *(undefined4 *)(param_1 + 0x2d4) = 0x3ecccccd;
  *(undefined2 *)(param_1 + 0x2fa) = 0x101;
  *(undefined4 *)(param_1 + 0x310) = 0xff;
  *(undefined4 *)(param_1 + 0x2b8) = 0xc6fffe00;
  *(undefined4 *)(param_1 + 0x2dc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x328) = 99999;
  *(undefined1 *)(param_1 + 0x301) = 1;
  *(undefined1 *)(param_1 + 0x32c) = 1;
  *(undefined4 *)(param_1 + 0x330) = 1;
  *(undefined8 *)(param_1 + 800) = 0x1869f0001869f;
  *(undefined8 *)(param_1 + 0x298) = uVar13;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x358) = 0xbf800000;
  lVar12 = *(long *)puVar2;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar12 = *(long *)puVar2;
  }
  puVar4 = DG_Tweening_Core_DOSetter<int>_TypeInfo;
  lVar14 = *(long *)(*(long *)(lVar12 + 0xb8) + 8);
  if (lVar14 == 0) {
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar12 = *(long *)puVar2;
    }
    uVar13 = **(undefined8 **)(lVar12 + 0xb8);
    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    if (lVar14 == 0) goto LAB_024e1f78;
    FUN_011c181c(lVar14,uVar13,*(undefined8 *)StringLiteral_1076,0);
    *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar14;
  }
  puVar4 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
  uVar13 = NEON_fmov(0xbf800000,4);
  *(long *)(param_1 + 0x3a8) = lVar14;
  *(undefined8 *)(param_1 + 0x3b8) = uVar13;
  puVar10 = StringLiteral_1178;
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<TileData>__
  ;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,0x10);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  FUN_013b71a8(&local_f0,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x410) = uStack_e8;
  *(undefined8 *)(param_1 + 0x408) = local_f0;
  *(undefined8 *)(param_1 + 0x420) = uStack_d8;
  *(undefined8 *)(param_1 + 0x418) = uStack_e0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar2,8);
  *(undefined8 *)(param_1 + 0x470) = uVar13;
  dVar16 = modf(dVar17,&local_d0);
  if (dVar16 == 0.5) {
    fVar19 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar19 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar19 = 255.0;
  }
  dVar16 = modf(dVar17,&local_d0);
  if (dVar16 == 0.5) {
    fVar20 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar20 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar20 = 255.0;
  }
  dVar16 = modf(dVar17,&local_d0);
  puVar11 = StringLiteral_13785;
  puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
  puVar8 = Method_System_Net_Sockets_NetworkStream_Seek__;
  puVar7 = 
  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_68>_SliceWithStride<Vector3>__
  ;
  puVar6 = System_Runtime_Serialization_Formatters_Binary_ObjectReader_TypeNAssembly_TypeInfo;
  puVar5 = OVRPlugin_OVRP_1_79_0_TypeInfo;
  puVar3 = PTR_DAT_033ea950;
  puVar2 = PTR_DAT_033ea928;
  if (dVar16 == 0.5) {
    fVar21 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar21 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar21 = 255.0;
  }
  dVar17 = modf(dVar17,&local_d0);
  if (dVar17 == 0.5) {
    fVar15 = (float)local_d0;
    if (((long)local_d0 & 1U) != 0) {
      fVar15 = (float)local_d0 + 1.0;
    }
  }
  else {
    fVar15 = 255.0;
  }
  *(uint *)(param_1 + 0x4e4) =
       (int)fVar19 & 0xffU | ((int)fVar20 & 0xffU) << 8 | ((int)fVar21 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,0x10);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  FUN_013b71a8(&local_110,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x4f0) = uStack_108;
  *(undefined8 *)(param_1 + 0x4e8) = local_110;
  *(undefined8 *)(param_1 + 0x500) = uStack_f8;
  *(undefined8 *)(param_1 + 0x4f8) = uStack_100;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,0x10);
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  FUN_013b71a8(&local_130,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x510) = uStack_128;
  *(undefined8 *)(param_1 + 0x508) = local_130;
  *(undefined8 *)(param_1 + 0x520) = uStack_118;
  *(undefined8 *)(param_1 + 0x518) = uStack_120;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,0x10);
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  FUN_013b71a8(&local_150,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x530) = uStack_148;
  *(undefined8 *)(param_1 + 0x528) = local_150;
  *(undefined8 *)(param_1 + 0x540) = uStack_138;
  *(undefined8 *)(param_1 + 0x538) = uStack_140;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar2,0x10);
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0.0;
  FUN_013b71a8(&local_d0,uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x560) = uStack_b8;
  *(undefined8 *)(param_1 + 0x558) = local_c0;
  *(undefined8 *)(param_1 + 0x570) = uStack_a8;
  *(undefined8 *)(param_1 + 0x568) = local_b0;
  *(undefined8 *)(param_1 + 0x550) = uStack_c8;
  *(double *)(param_1 + 0x548) = local_d0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar11,0x10);
  local_160 = 0;
  uStack_178 = 0;
  local_180 = 0.0;
  uStack_168 = 0;
  uStack_170 = 0;
  FUN_013b71a8(&local_180,uVar13,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x5a0) = local_160;
  *(undefined8 *)(param_1 + 0x598) = uStack_168;
  *(undefined8 *)(param_1 + 0x590) = uStack_170;
  *(undefined8 *)(param_1 + 0x588) = uStack_178;
  *(double *)(param_1 + 0x580) = local_180;
  uVar13 = FUN_00da4fb8(*(undefined8 *)System_Data_ConstraintException_TypeInfo,8);
  *(undefined8 *)(param_1 + 0x5b8) = uVar13;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar9,0x10);
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  FUN_013b71a8(&local_1a0,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x5d0) = uStack_198;
  *(undefined8 *)(param_1 + 0x5c8) = local_1a0;
  *(undefined8 *)(param_1 + 0x5e0) = uStack_188;
  *(undefined8 *)(param_1 + 0x5d8) = uStack_190;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar9,0x10);
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  FUN_013b71a8(&local_1c0,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x608) = uStack_1a8;
  *(undefined8 *)(param_1 + 0x600) = uStack_1b0;
  *(undefined8 *)(param_1 + 0x5f8) = uStack_1b8;
  *(undefined8 *)(param_1 + 0x5f0) = local_1c0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,0x10);
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  FUN_013b71a8(&local_1e0,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x620) = uStack_1d8;
  *(undefined8 *)(param_1 + 0x618) = local_1e0;
  *(undefined8 *)(param_1 + 0x630) = uStack_1c8;
  *(undefined8 *)(param_1 + 0x628) = uStack_1d0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  FUN_024f1240(&local_1f0,4,0);
  *(undefined8 *)(param_1 + 0x6b0) = uStack_1e8;
  *(undefined8 *)(param_1 + 0x6a8) = local_1f0;
  lVar12 = FUN_00da4fb8(*(undefined8 *)
                         UnityEngine_XR_ARSubsystems_XRCpuImage_AsyncConversion_TypeInfo,10);
  local_200 = 0;
  uStack_1f8 = 0;
  FUN_017cdd18(&local_200,5,0,0,0,1,0);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined8 *)(lVar12 + 0x28) = uStack_1f8;
      *(undefined8 *)(lVar12 + 0x20) = local_200;
      local_210 = 0;
      uStack_208 = 0;
      FUN_017cdd18(&local_210,5,0,0,0,2,0);
      if (1 < *(uint *)(lVar12 + 0x18)) {
        *(undefined8 *)(lVar12 + 0x38) = uStack_208;
        *(undefined8 *)(lVar12 + 0x30) = local_210;
        local_220 = 0;
        uStack_218 = 0;
        FUN_017cdd18(&local_220,5,0,0,0,3,0);
        if (2 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x48) = uStack_218;
          *(undefined8 *)(lVar12 + 0x40) = local_220;
          local_230 = 0;
          uStack_228 = 0;
          FUN_017cdd18(&local_230,5,0,0,0,4,0);
          if (3 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x58) = uStack_228;
            *(undefined8 *)(lVar12 + 0x50) = local_230;
            local_240 = 0;
            uStack_238 = 0;
            FUN_017cdd18(&local_240,5,0,0,0,5,0);
            if (4 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x68) = uStack_238;
              *(undefined8 *)(lVar12 + 0x60) = local_240;
              local_250 = 0;
              uStack_248 = 0;
              FUN_017cdd18(&local_250,5,0,0,0,6,0);
              if (5 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x78) = uStack_248;
                *(undefined8 *)(lVar12 + 0x70) = local_250;
                local_260 = 0;
                uStack_258 = 0;
                FUN_017cdd18(&local_260,5,0,0,0,7,0);
                if (6 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined8 *)(lVar12 + 0x88) = uStack_258;
                  *(undefined8 *)(lVar12 + 0x80) = local_260;
                  local_270 = 0;
                  uStack_268 = 0;
                  FUN_017cdd18(&local_270,5,0,0,0,8,0);
                  if (7 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x98) = uStack_268;
                    *(undefined8 *)(lVar12 + 0x90) = local_270;
                    local_280 = 0;
                    uStack_278 = 0;
                    FUN_017cdd18(&local_280,5,0,0,0,9,0);
                    if (8 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0xa8) = uStack_278;
                      *(undefined8 *)(lVar12 + 0xa0) = local_280;
                      local_290 = 0;
                      uStack_288 = 0;
                      FUN_017cdd18(&local_290,5,0,0,0,10,0);
                      if (9 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0xb8) = uStack_288;
                        *(undefined8 *)(lVar12 + 0xb0) = local_290;
                        *(long *)(param_1 + 0x6b8) = lVar12;
                        FUN_0286d800(param_1,0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_024e1f78:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


