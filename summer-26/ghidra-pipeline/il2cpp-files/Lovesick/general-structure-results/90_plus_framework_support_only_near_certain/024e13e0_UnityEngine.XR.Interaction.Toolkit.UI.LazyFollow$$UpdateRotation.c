/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow$$UpdateRotation
ENTRY_POINT: 024e13e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 101
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_XR_Interaction_Toolkit_UI_LazyFollow__UpdateRotation(double *param_1)

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
  long unaff_x19;
  long lVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double unaff_d8;
  float unaff_s9;
  double unaff_d10;
  float unaff_s11;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  double in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  double in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  dVar16 = modf(unaff_d8,param_1);
  if (dVar16 == unaff_d10) {
    fVar18 = (float)in_stack_000001d0;
    if (((long)in_stack_000001d0 & 1U) != 0) {
      fVar18 = (float)in_stack_000001d0 + unaff_s11;
    }
  }
  else {
    fVar18 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x000001d0);
  puVar4 = System_Threading_Mutex_TypeInfo;
  if (dVar16 == unaff_d10) {
    fVar19 = (float)in_stack_000001d0;
    if (((long)in_stack_000001d0 & 1U) != 0) {
      fVar19 = (float)in_stack_000001d0 + unaff_s11;
    }
  }
  else {
    fVar19 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x000001d0);
  if (dVar16 == unaff_d10) {
    fVar20 = (float)in_stack_000001d0;
    if (((long)in_stack_000001d0 & 1U) != 0) {
      fVar20 = (float)in_stack_000001d0 + unaff_s11;
    }
  }
  else {
    fVar20 = 255.0;
  }
  auVar17 = NEON_fmov(0x3f800000,4);
  *(uint *)(unaff_x19 + 0x13c) =
       (int)unaff_s9 & 0xffU | ((int)fVar18 & 0xffU) << 8 | ((int)fVar19 & 0xffU) << 0x10 |
       (int)fVar20 << 0x18;
  *(long *)(unaff_x19 + 0x148) = auVar17._8_8_;
  *(long *)(unaff_x19 + 0x140) = auVar17._0_8_;
  lVar12 = *(long *)puVar4;
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar12 = *(long *)puVar4;
  }
  *(undefined4 *)(unaff_x19 + 0x150) = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  uVar1 = *(undefined4 *)(*(long *)(lVar12 + 0xb8) + 0x68);
  *(undefined4 *)(unaff_x19 + 0x15c) = 3;
  *(undefined4 *)(unaff_x19 + 0x154) = uVar1;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0.0;
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  FUN_024aa330(0x3f800000,ZEXT816(0x3f800000),0x3f800000,0x3f800000,&stack0x000001d0,0);
  *(undefined8 *)(unaff_x19 + 0x188) = 0;
  *(undefined8 *)(unaff_x19 + 0x180) = 0;
  *(undefined8 *)(unaff_x19 + 0x198) = 0;
  *(undefined8 *)(unaff_x19 + 400) = 0;
  *(undefined8 *)(unaff_x19 + 0x168) = in_stack_000001d8;
  *(double *)(unaff_x19 + 0x160) = in_stack_000001d0;
  *(undefined8 *)(unaff_x19 + 0x178) = in_stack_000001e8;
  *(undefined8 *)(unaff_x19 + 0x170) = in_stack_000001e0;
  dVar16 = modf(unaff_d8,&stack0x00000120);
  if (dVar16 == unaff_d10) {
    fVar18 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar18 = (float)in_stack_00000120 + 1.0;
    }
  }
  else {
    fVar18 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x00000120);
  if (dVar16 == unaff_d10) {
    fVar19 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar19 = (float)in_stack_00000120 + 1.0;
    }
  }
  else {
    fVar19 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x00000120);
  if (dVar16 == unaff_d10) {
    fVar20 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar20 = (float)in_stack_00000120 + 1.0;
    }
  }
  else {
    fVar20 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x00000120);
  if (dVar16 == unaff_d10) {
    fVar15 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar15 = (float)in_stack_00000120 + 1.0;
    }
  }
  else {
    fVar15 = 255.0;
  }
  *(uint *)(unaff_x19 + 0x1d0) =
       (int)fVar18 & 0xffU | ((int)fVar19 & 0xffU) << 8 | ((int)fVar20 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  dVar16 = modf(0.0,&stack0x00000120);
  fVar18 = 0.0;
  if (dVar16 == unaff_d10) {
    fVar18 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar18 = (float)in_stack_00000120 + 1.0;
    }
  }
  dVar16 = modf(0.0,&stack0x00000120);
  fVar19 = 0.0;
  if (dVar16 == unaff_d10) {
    fVar19 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar19 = (float)in_stack_00000120 + 1.0;
    }
  }
  dVar16 = modf(0.0,&stack0x00000120);
  puVar6 = 
  Method_SaveServerInterface_<LoadSaveCoroutine>d__21_System_Collections_IEnumerator_Reset__;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__796_96__;
  puVar3 = 
  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__;
  puVar10 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlshq_lane_s32__;
  puVar2 = Method_System_Version_op_LessThan__;
  puVar4 = Method_System_Security_Cryptography_RSACryptoServiceProvider_ExportParameters__;
  if (dVar16 == unaff_d10) {
    fVar20 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar20 = (float)in_stack_00000120 + 1.0;
    }
  }
  else {
    fVar20 = 0.0;
  }
  dVar16 = modf(unaff_d8,&stack0x00000120);
  if (dVar16 == unaff_d10) {
    fVar15 = (float)in_stack_00000120;
    if (((long)in_stack_00000120 & 1U) != 0) {
      fVar15 = (float)in_stack_00000120 + 1.0;
    }
  }
  else {
    fVar15 = 255.0;
  }
  *(undefined4 *)(unaff_x19 + 0x1dc) = 0xc2c60000;
  *(uint *)(unaff_x19 + 0x1d4) =
       (int)fVar18 & 0xffU | ((int)fVar19 & 0xffU) << 8 | ((int)fVar20 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  *(undefined4 *)(unaff_x19 + 0x1e4) = 0x42100000;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0.0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  FUN_013b73c4(&stack0x00000120,0x10,*(undefined8 *)puVar10);
  *(undefined8 *)(unaff_x19 + 0x1f0) = in_stack_00000128;
  *(double *)(unaff_x19 + 0x1e8) = in_stack_00000120;
  *(undefined8 *)(unaff_x19 + 0x200) = in_stack_00000138;
  *(undefined8 *)(unaff_x19 + 0x1f8) = in_stack_00000130;
  *(undefined8 *)(unaff_x19 + 0x208) = 0x19000000190;
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  FUN_013b73c4(&stack0x000001b0,8,*(undefined8 *)puVar5);
  uVar13 = DAT_028aa488;
  *(undefined4 *)(unaff_x19 + 0x240) = 100;
  *(undefined8 *)(unaff_x19 + 0x218) = in_stack_000001b8;
  *(undefined8 *)(unaff_x19 + 0x210) = in_stack_000001b0;
  *(undefined8 *)(unaff_x19 + 0x228) = in_stack_000001c8;
  *(undefined8 *)(unaff_x19 + 0x220) = in_stack_000001c0;
  *(undefined8 *)(unaff_x19 + 0x264) = uVar13;
  *(undefined4 *)(unaff_x19 + 0x26c) = 0xffff;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar6,0x10);
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  FUN_013b71a8(&stack0x00000190,uVar13,*(undefined8 *)puVar4);
  *(undefined8 *)(unaff_x19 + 0x280) = in_stack_00000198;
  *(undefined8 *)(unaff_x19 + 0x278) = in_stack_00000190;
  *(undefined8 *)(unaff_x19 + 0x290) = in_stack_000001a8;
  *(undefined8 *)(unaff_x19 + 0x288) = in_stack_000001a0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar3,4);
  *(undefined4 *)(unaff_x19 + 0x2d4) = 0x3ecccccd;
  *(undefined2 *)(unaff_x19 + 0x2fa) = 0x101;
  *(undefined4 *)(unaff_x19 + 0x310) = 0xff;
  *(undefined4 *)(unaff_x19 + 0x2b8) = 0xc6fffe00;
  *(undefined4 *)(unaff_x19 + 0x2dc) = 0xffffffff;
  *(undefined4 *)(unaff_x19 + 0x328) = 99999;
  *(undefined1 *)(unaff_x19 + 0x301) = 1;
  *(undefined1 *)(unaff_x19 + 0x32c) = 1;
  *(undefined4 *)(unaff_x19 + 0x330) = 1;
  *(undefined8 *)(unaff_x19 + 800) = 0x1869f0001869f;
  *(undefined8 *)(unaff_x19 + 0x298) = uVar13;
  *(undefined8 *)(unaff_x19 + 0x340) = 0;
  *(undefined8 *)(unaff_x19 + 0x338) = 0;
  *(undefined4 *)(unaff_x19 + 0x358) = 0xbf800000;
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
  *(long *)(unaff_x19 + 0x3a8) = lVar14;
  *(undefined8 *)(unaff_x19 + 0x3b8) = uVar13;
  puVar10 = StringLiteral_1178;
  puVar2 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<TileData>__
  ;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,0x10);
  in_stack_000001b8 = 0;
  in_stack_000001b0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001c0 = 0;
  FUN_013b71a8(&stack0x000001b0,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(unaff_x19 + 0x410) = in_stack_000001b8;
  *(undefined8 *)(unaff_x19 + 0x408) = in_stack_000001b0;
  *(undefined8 *)(unaff_x19 + 0x420) = in_stack_000001c8;
  *(undefined8 *)(unaff_x19 + 0x418) = in_stack_000001c0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar2,8);
  *(undefined8 *)(unaff_x19 + 0x470) = uVar13;
  dVar16 = modf(unaff_d8,&stack0x000001d0);
  if (dVar16 == unaff_d10) {
    fVar18 = (float)in_stack_000001d0;
    if (((long)in_stack_000001d0 & 1U) != 0) {
      fVar18 = (float)in_stack_000001d0 + 1.0;
    }
  }
  else {
    fVar18 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x000001d0);
  if (dVar16 == unaff_d10) {
    fVar19 = (float)in_stack_000001d0;
    if (((long)in_stack_000001d0 & 1U) != 0) {
      fVar19 = (float)in_stack_000001d0 + 1.0;
    }
  }
  else {
    fVar19 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x000001d0);
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
  if (dVar16 == unaff_d10) {
    fVar20 = (float)in_stack_000001d0;
    if (((long)in_stack_000001d0 & 1U) != 0) {
      fVar20 = (float)in_stack_000001d0 + 1.0;
    }
  }
  else {
    fVar20 = 255.0;
  }
  dVar16 = modf(unaff_d8,&stack0x000001d0);
  if (dVar16 == unaff_d10) {
    fVar15 = (float)in_stack_000001d0;
    if (((long)in_stack_000001d0 & 1U) != 0) {
      fVar15 = (float)in_stack_000001d0 + 1.0;
    }
  }
  else {
    fVar15 = 255.0;
  }
  *(uint *)(unaff_x19 + 0x4e4) =
       (int)fVar18 & 0xffU | ((int)fVar19 & 0xffU) << 8 | ((int)fVar20 & 0xffU) << 0x10 |
       (int)fVar15 << 0x18;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,0x10);
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  FUN_013b71a8(&stack0x00000190,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x19 + 0x4f0) = in_stack_00000198;
  *(undefined8 *)(unaff_x19 + 0x4e8) = in_stack_00000190;
  *(undefined8 *)(unaff_x19 + 0x500) = in_stack_000001a8;
  *(undefined8 *)(unaff_x19 + 0x4f8) = in_stack_000001a0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,0x10);
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  FUN_013b71a8(&stack0x00000170,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x19 + 0x510) = in_stack_00000178;
  *(undefined8 *)(unaff_x19 + 0x508) = in_stack_00000170;
  *(undefined8 *)(unaff_x19 + 0x520) = in_stack_00000188;
  *(undefined8 *)(unaff_x19 + 0x518) = in_stack_00000180;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar5,0x10);
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  FUN_013b71a8(&stack0x00000150,uVar13,*(undefined8 *)puVar8);
  *(undefined8 *)(unaff_x19 + 0x530) = in_stack_00000158;
  *(undefined8 *)(unaff_x19 + 0x528) = in_stack_00000150;
  *(undefined8 *)(unaff_x19 + 0x540) = in_stack_00000168;
  *(undefined8 *)(unaff_x19 + 0x538) = in_stack_00000160;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar2,0x10);
  in_stack_000001e8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001d0 = 0.0;
  FUN_013b71a8(&stack0x000001d0,uVar13,*(undefined8 *)puVar3);
  *(undefined8 *)(unaff_x19 + 0x560) = in_stack_000001e8;
  *(undefined8 *)(unaff_x19 + 0x558) = in_stack_000001e0;
  *(undefined8 *)(unaff_x19 + 0x570) = 0;
  *(undefined8 *)(unaff_x19 + 0x568) = 0;
  *(undefined8 *)(unaff_x19 + 0x550) = in_stack_000001d8;
  *(double *)(unaff_x19 + 0x548) = in_stack_000001d0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar11,0x10);
  in_stack_00000140 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0.0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  FUN_013b71a8(&stack0x00000120,uVar13,*(undefined8 *)puVar6);
  *(undefined8 *)(unaff_x19 + 0x5a0) = in_stack_00000140;
  *(undefined8 *)(unaff_x19 + 0x598) = in_stack_00000138;
  *(undefined8 *)(unaff_x19 + 0x590) = in_stack_00000130;
  *(undefined8 *)(unaff_x19 + 0x588) = in_stack_00000128;
  *(double *)(unaff_x19 + 0x580) = in_stack_00000120;
  uVar13 = FUN_00da4fb8(*(undefined8 *)System_Data_ConstraintException_TypeInfo,8);
  *(undefined8 *)(unaff_x19 + 0x5b8) = uVar13;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar9,0x10);
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  FUN_013b71a8(&stack0x00000100,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x5d0) = in_stack_00000108;
  *(undefined8 *)(unaff_x19 + 0x5c8) = in_stack_00000100;
  *(undefined8 *)(unaff_x19 + 0x5e0) = in_stack_00000118;
  *(undefined8 *)(unaff_x19 + 0x5d8) = in_stack_00000110;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar9,0x10);
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  FUN_013b71a8(&stack0x000000e0,uVar13,*(undefined8 *)puVar7);
  *(undefined8 *)(unaff_x19 + 0x608) = in_stack_000000f8;
  *(undefined8 *)(unaff_x19 + 0x600) = in_stack_000000f0;
  *(undefined8 *)(unaff_x19 + 0x5f8) = in_stack_000000e8;
  *(undefined8 *)(unaff_x19 + 0x5f0) = in_stack_000000e0;
  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,0x10);
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  FUN_013b71a8(&stack0x000000c0,uVar13,*(undefined8 *)puVar10);
  *(undefined8 *)(unaff_x19 + 0x620) = in_stack_000000c8;
  *(undefined8 *)(unaff_x19 + 0x618) = in_stack_000000c0;
  *(undefined8 *)(unaff_x19 + 0x630) = in_stack_000000d8;
  *(undefined8 *)(unaff_x19 + 0x628) = in_stack_000000d0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  FUN_024f1240(&stack0x000000b0,4,0);
  *(undefined8 *)(unaff_x19 + 0x6b0) = in_stack_000000b8;
  *(undefined8 *)(unaff_x19 + 0x6a8) = in_stack_000000b0;
  lVar12 = FUN_00da4fb8(*(undefined8 *)
                         UnityEngine_XR_ARSubsystems_XRCpuImage_AsyncConversion_TypeInfo,10);
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  FUN_017cdd18(&stack0x000000a0,5,0,0,0,1,0);
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x18) != 0) {
      *(undefined8 *)(lVar12 + 0x28) = in_stack_000000a8;
      *(undefined8 *)(lVar12 + 0x20) = in_stack_000000a0;
      in_stack_00000090 = 0;
      in_stack_00000098 = 0;
      FUN_017cdd18(&stack0x00000090,5,0,0,0,2,0);
      if (1 < *(uint *)(lVar12 + 0x18)) {
        *(undefined8 *)(lVar12 + 0x38) = in_stack_00000098;
        *(undefined8 *)(lVar12 + 0x30) = in_stack_00000090;
        in_stack_00000080 = 0;
        in_stack_00000088 = 0;
        FUN_017cdd18(&stack0x00000080,5,0,0,0,3,0);
        if (2 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x48) = in_stack_00000088;
          *(undefined8 *)(lVar12 + 0x40) = in_stack_00000080;
          in_stack_00000070 = 0;
          in_stack_00000078 = 0;
          FUN_017cdd18(&stack0x00000070,5,0,0,0,4,0);
          if (3 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x58) = in_stack_00000078;
            *(undefined8 *)(lVar12 + 0x50) = in_stack_00000070;
            in_stack_00000060 = 0;
            in_stack_00000068 = 0;
            FUN_017cdd18(&stack0x00000060,5,0,0,0,5,0);
            if (4 < *(uint *)(lVar12 + 0x18)) {
              *(undefined8 *)(lVar12 + 0x68) = in_stack_00000068;
              *(undefined8 *)(lVar12 + 0x60) = in_stack_00000060;
              in_stack_00000050 = 0;
              in_stack_00000058 = 0;
              FUN_017cdd18(&stack0x00000050,5,0,0,0,6,0);
              if (5 < *(uint *)(lVar12 + 0x18)) {
                *(undefined8 *)(lVar12 + 0x78) = in_stack_00000058;
                *(undefined8 *)(lVar12 + 0x70) = in_stack_00000050;
                in_stack_00000040 = 0;
                in_stack_00000048 = 0;
                FUN_017cdd18(&stack0x00000040,5,0,0,0,7,0);
                if (6 < *(uint *)(lVar12 + 0x18)) {
                  *(undefined8 *)(lVar12 + 0x88) = in_stack_00000048;
                  *(undefined8 *)(lVar12 + 0x80) = in_stack_00000040;
                  in_stack_00000030 = 0;
                  in_stack_00000038 = 0;
                  FUN_017cdd18(&stack0x00000030,5,0,0,0,8,0);
                  if (7 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x98) = in_stack_00000038;
                    *(undefined8 *)(lVar12 + 0x90) = in_stack_00000030;
                    in_stack_00000020 = 0;
                    in_stack_00000028 = 0;
                    FUN_017cdd18(&stack0x00000020,5,0,0,0,9,0);
                    if (8 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0xa8) = in_stack_00000028;
                      *(undefined8 *)(lVar12 + 0xa0) = in_stack_00000020;
                      in_stack_00000010 = 0;
                      in_stack_00000018 = 0;
                      FUN_017cdd18(&stack0x00000010,5,0,0,0,10,0);
                      if (9 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0xb8) = in_stack_00000018;
                        *(undefined8 *)(lVar12 + 0xb0) = in_stack_00000010;
                        *(long *)(unaff_x19 + 0x6b8) = lVar12;
                        FUN_0286d800();
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


