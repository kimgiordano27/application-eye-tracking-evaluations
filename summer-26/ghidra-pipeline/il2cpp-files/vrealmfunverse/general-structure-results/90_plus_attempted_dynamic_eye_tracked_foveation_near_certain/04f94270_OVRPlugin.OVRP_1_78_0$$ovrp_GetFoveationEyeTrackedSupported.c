/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTrackedSupported
ENTRY_POINT: 04f94270
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 143
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;paired_state_refs;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;paired_field_refs_with_eye_source;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTrackedSupported(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long unaff_x20;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
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
  undefined1 in_stack_000000a0 [16];
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined1 in_stack_000000e0 [16];
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  
  FUN_05c9e358(param_1,0);
  FUN_05c7933c(&stack0x000000c0,0);
  in_stack_00000048 = in_stack_00000108;
  in_stack_00000040 = in_stack_00000100;
  in_stack_00000058 = in_stack_00000118;
  in_stack_00000050 = in_stack_00000110;
  in_stack_00000068 = in_stack_00000128;
  in_stack_00000060 = in_stack_00000120;
  in_stack_00000078 = in_stack_00000138;
  in_stack_00000070 = in_stack_00000130;
  FUN_05c78fe4(&stack0x00000080,&stack0x00000040);
  auVar14 = ZEXT416(*(uint *)(unaff_x20 + 0x98));
  *(undefined8 *)(unaff_x20 + 0x58) = in_stack_00000088;
  *(undefined8 *)(unaff_x20 + 0x50) = in_stack_00000080;
  *(undefined8 *)(unaff_x20 + 0x68) = in_stack_00000098;
  *(undefined8 *)(unaff_x20 + 0x60) = in_stack_00000090;
  fVar8 = *(float *)(unaff_x20 + 0x94);
  *(long *)(unaff_x20 + 0x78) = in_stack_000000a0._8_8_;
  *(long *)(unaff_x20 + 0x70) = in_stack_000000a0._0_8_;
  *(undefined8 *)(unaff_x20 + 0x88) = in_stack_000000b8;
  *(undefined8 *)(unaff_x20 + 0x80) = in_stack_000000b0;
  auVar12 = in_stack_000000a0;
  uVar4 = FUN_05c9a068(*(undefined4 *)(unaff_x20 + 0x90));
  *(undefined4 *)(unaff_x20 + 0xac) = uVar4;
  *(float *)(unaff_x20 + 0xb0) = fVar8;
  *(int *)(unaff_x20 + 0xb4) = auVar14._0_4_;
  fVar5 = (float)FUN_05c9a10c();
  fVar20 = (float)*(undefined8 *)(unaff_x20 + 0xa4);
  fVar21 = (float)((ulong)*(undefined8 *)(unaff_x20 + 0xa4) >> 0x20);
  uVar3 = *(undefined8 *)*(undefined1 (*) [12])(unaff_x20 + 0x9c);
  fVar18 = (float)uVar3;
  fVar19 = (float)((ulong)uVar3 >> 0x20);
  fVar13 = auVar12._0_4_;
  fVar9 = auVar14._0_4_;
  auVar10._4_4_ = fVar21;
  auVar10._0_4_ = fVar21;
  auVar10._8_4_ = fVar21;
  auVar10._12_4_ = fVar21;
  auVar11._12_4_ = fVar21;
  auVar11._0_12_ = *(undefined1 (*) [12])(unaff_x20 + 0x9c);
  auVar11 = NEON_ext(auVar10,auVar11,4,1);
  fVar6 = fVar5 * fVar19;
  fVar7 = fVar8 * fVar19;
  fVar15 = fVar9 * fVar19;
  fVar16 = fVar5 * fVar20;
  fVar17 = fVar9 * fVar20;
  auVar12._4_4_ = fVar6;
  auVar12._0_4_ = fVar9 * fVar18;
  auVar12._8_4_ = fVar8 * fVar20;
  auVar12._12_4_ = fVar7;
  auVar14._4_4_ = fVar6;
  auVar14._0_4_ = fVar9 * fVar18;
  auVar14._8_4_ = fVar8 * fVar20;
  auVar14._12_4_ = fVar7;
  auVar12 = NEON_ext(auVar12,auVar14,4,1);
  auVar1._4_4_ = fVar15;
  auVar1._0_4_ = fVar8 * fVar18;
  auVar1._8_4_ = fVar16;
  auVar1._12_4_ = fVar17;
  auVar2._4_4_ = fVar15;
  auVar2._0_4_ = fVar8 * fVar18;
  auVar2._8_4_ = fVar16;
  auVar2._12_4_ = fVar17;
  auVar14 = NEON_ext(auVar1,auVar2,0xc,1);
  *(ulong *)(unaff_x20 + 0xc0) =
       CONCAT44(((fVar21 * fVar13 - fVar5 * auVar11._12_4_) - fVar7) - fVar17,
                (fVar20 * fVar13 + fVar9 * auVar11._8_4_ + fVar6) - auVar14._4_4_);
  *(ulong *)(unaff_x20 + 0xb8) =
       CONCAT44((fVar19 * fVar13 + fVar8 * auVar11._4_4_ + auVar12._12_4_) - fVar16,
                (fVar18 * fVar13 + fVar5 * auVar11._0_4_ + auVar12._4_4_) - fVar15);
  FUN_04d9f2a8();
  return;
}


