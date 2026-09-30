/*
FUNCTION_NAME: OVRPlugin$$set_foveatedRenderingLevel
ENTRY_POINT: 05bc4dec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8
OVRPlugin__set_foveatedRenderingLevel(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  code *in_x9;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  long *unaff_x23;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  (*in_x9)();
  lVar8 = *unaff_x23;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000060 = in_stack_00000018;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar8 = *unaff_x23;
  }
  puVar3 = PTR_DAT_071164e0;
  puVar2 = PTR_DAT_071164d8;
  puVar1 = PTR_DAT_071164d0;
  puVar11 = *(undefined4 **)(lVar8 + 0xb8);
  uVar16 = *puVar11;
  uVar18 = puVar11[1];
  uVar20 = puVar11[2];
  FUN_03f7cfcc(&stack0x00000030,&stack0x00000050,*unaff_x20);
  fVar5 = -INFINITY;
  uVar6 = 0;
  while (uVar12 = uVar6, uVar17 = uVar16, uVar19 = uVar18, uVar21 = uVar20, fVar22 = fVar5,
        uVar15 = param_3, uVar14 = param_2,
        uVar9 = FUN_0550ffb4(&stack0x00000030,*(undefined8 *)puVar2), (uVar9 & 1) != 0) {
    uVar10 = FUN_0550fe5c(&stack0x00000030,*(undefined8 *)puVar3);
    iVar7 = FUN_05bc4fa8(fVar22);
    param_2 = uVar14;
    param_3 = uVar15;
    fVar5 = fVar22;
    uVar20 = uVar21;
    uVar18 = uVar19;
    uVar16 = uVar17;
    uVar6 = uVar12;
    if ((iVar7 != 0) &&
       (uVar13 = FUN_05bc2568(), fVar4 = fStack000000000000002c, param_2 = uVar14, param_3 = uVar15,
       uStack0000000000000020 = uVar13, uStack0000000000000024 = uVar14,
       uStack0000000000000028 = uVar15, fVar5 = fVar4, uVar20 = uVar15, uVar18 = uVar14,
       uVar16 = uVar13, uVar6 = uVar10, fStack000000000000002c <= fVar22)) {
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      param_2 = uVar19;
      param_3 = uVar21;
      uVar9 = FUN_05bc5120(uVar17,&stack0x00000020);
      fVar5 = fVar22;
      uVar20 = uVar21;
      uVar18 = uVar19;
      uVar16 = uVar17;
      uVar6 = uVar12;
      if ((uVar9 & 1) != 0) {
        fVar5 = fVar4;
        uVar20 = uVar15;
        uVar18 = uVar14;
        uVar16 = uVar13;
        uVar6 = uVar10;
      }
    }
  }
  FUN_05510270(&stack0x00000030,*(undefined8 *)puVar1);
  return uVar12;
}


