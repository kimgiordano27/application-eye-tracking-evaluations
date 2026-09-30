/*
FUNCTION_NAME: OVRPlugin$$get_foveatedRenderingLevel
ENTRY_POINT: 05bc4d08
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRPlugin__get_foveatedRenderingLevel
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long *unaff_x20;
  long lVar14;
  long unaff_x21;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_03188a78(*(undefined8 *)(param_4 + 0x4f0));
  FUN_03188a78(PTR_DAT_071164c8);
  *(undefined1 *)(unaff_x21 + 0xae0) = 1;
  puVar1 = PTR_DAT_071164f0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  fStack000000000000002c = 0.0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar14 = *(long *)puVar1;
  lVar10 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar10 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_031c09d4();
  }
  puVar5 = PTR_DAT_071164e8;
  puVar1 = PTR_DAT_07113e80;
  if ((long *)**(long **)(lVar10 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  (**(code **)(*(long *)**(long **)(lVar10 + 0xb8) + 0x198))(&stack0x00000008);
  lVar10 = *(long *)puVar1;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000060 = in_stack_00000018;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar10 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_071164e0;
  puVar3 = PTR_DAT_071164d8;
  puVar2 = PTR_DAT_071164d0;
  puVar13 = *(undefined4 **)(lVar10 + 0xb8);
  uVar19 = *puVar13;
  uVar21 = puVar13[1];
  uVar23 = puVar13[2];
  FUN_03f7cfcc(&stack0x00000030,&stack0x00000050,*(undefined8 *)puVar5);
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000030;
  fVar7 = -INFINITY;
  uVar8 = 0;
  while (uVar15 = uVar8, uVar20 = uVar19, uVar22 = uVar21, uVar24 = uVar23, fVar25 = fVar7,
        uVar18 = param_3, uVar17 = param_2,
        uVar11 = FUN_0550ffb4(&stack0x00000030,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
    uVar12 = FUN_0550fe5c(&stack0x00000030,*(undefined8 *)puVar4);
    iVar9 = FUN_05bc4fa8(fVar25);
    param_2 = uVar17;
    param_3 = uVar18;
    fVar7 = fVar25;
    uVar23 = uVar24;
    uVar21 = uVar22;
    uVar19 = uVar20;
    uVar8 = uVar15;
    if (iVar9 != 0) {
      uVar16 = FUN_05bc2568();
      fVar6 = fStack000000000000002c;
      in_stack_00000020 = CONCAT44(uVar17,uVar16);
      param_2 = uVar17;
      param_3 = uVar18;
      in_stack_00000028 = uVar18;
      fVar7 = fVar6;
      uVar23 = uVar18;
      uVar21 = uVar17;
      uVar19 = uVar16;
      uVar8 = uVar12;
      if (fStack000000000000002c <= fVar25) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        param_2 = uVar22;
        param_3 = uVar24;
        uVar11 = FUN_05bc5120(uVar20,&stack0x00000020);
        fVar7 = fVar25;
        uVar23 = uVar24;
        uVar21 = uVar22;
        uVar19 = uVar20;
        uVar8 = uVar15;
        if ((uVar11 & 1) != 0) {
          fVar7 = fVar6;
          uVar23 = uVar18;
          uVar21 = uVar17;
          uVar19 = uVar16;
          uVar8 = uVar12;
        }
      }
    }
  }
  FUN_05510270(&stack0x00000030,*(undefined8 *)puVar2);
  return uVar15;
}


