/*
FUNCTION_NAME: OVRPlugin$$GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 0909ffcc
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin__GetUseOverriddenExternalCameraStaticPose
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

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
  int in_w8;
  undefined4 *puVar13;
  long *unaff_x20;
  long lVar14;
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
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  float fStack000000000000002c;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  if (in_w8 == 0) {
    thunk_FUN_049a583c();
  }
  lVar14 = *unaff_x20;
  lVar10 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar10 = *(long *)(lVar14 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_04980b34();
  }
  puVar5 = PTR_DAT_0ac78df8;
  puVar1 = PTR_DAT_0ac767c8;
  if ((long *)**(long **)(lVar10 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  (**(code **)(*(long *)**(long **)(lVar10 + 0xb8) + 0x198))(&stack0x00000008);
  lVar10 = *(long *)puVar1;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  in_stack_00000060 = in_stack_00000018;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar10 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_0ac78df0;
  puVar3 = PTR_DAT_0ac78de8;
  puVar2 = PTR_DAT_0ac78de0;
  puVar13 = *(undefined4 **)(lVar10 + 0xb8);
  uVar19 = *puVar13;
  uVar21 = puVar13[1];
  uVar23 = puVar13[2];
  FUN_06680488(&stack0x00000030,&stack0x00000050,*(undefined8 *)puVar5);
  in_stack_00000008 = 0;
  in_stack_00000010 = &stack0x00000030;
  fVar7 = -INFINITY;
  uVar8 = 0;
  while (uVar15 = uVar8, uVar20 = uVar19, uVar22 = uVar21, uVar24 = uVar23, fVar25 = fVar7,
        uVar18 = param_3, uVar17 = param_2,
        uVar11 = FUN_060b9fb0(&stack0x00000030,*(undefined8 *)puVar3), (uVar11 & 1) != 0) {
    uVar12 = FUN_060b9e58(&stack0x00000030,*(undefined8 *)puVar4);
    iVar9 = FUN_090a0224(fVar25);
    param_2 = uVar17;
    param_3 = uVar18;
    fVar7 = fVar25;
    uVar23 = uVar24;
    uVar21 = uVar22;
    uVar19 = uVar20;
    uVar8 = uVar15;
    if ((iVar9 != 0) &&
       (uVar16 = FUN_0909d734(), fVar6 = fStack000000000000002c, param_2 = uVar17, param_3 = uVar18,
       uStack0000000000000020 = uVar16, uStack0000000000000024 = uVar17,
       uStack0000000000000028 = uVar18, fVar7 = fVar6, uVar23 = uVar18, uVar21 = uVar17,
       uVar19 = uVar16, uVar8 = uVar12, fStack000000000000002c <= fVar25)) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      param_2 = uVar22;
      param_3 = uVar24;
      uVar11 = FUN_090a039c(uVar20,&stack0x00000020);
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
  FUN_060ba26c(&stack0x00000030,*(undefined8 *)puVar2);
  return uVar15;
}


