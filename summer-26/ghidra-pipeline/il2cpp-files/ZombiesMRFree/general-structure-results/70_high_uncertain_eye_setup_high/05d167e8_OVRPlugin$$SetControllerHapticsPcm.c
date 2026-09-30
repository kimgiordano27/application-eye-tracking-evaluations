/*
FUNCTION_NAME: OVRPlugin$$SetControllerHapticsPcm
ENTRY_POINT: 05d167e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
OVRPlugin__SetControllerHapticsPcm(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint *puVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  long unaff_x21;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  ulong in_stack_00000060;
  float fStack00000000000000bc;
  
  FUN_02fe925c();
  FUN_02fe925c(PTR_DAT_06fb8858);
  *(undefined1 *)(unaff_x21 + 0x876) = 1;
  puVar1 = PTR_DAT_06fb8880;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000060 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  fStack00000000000000bc = 0.0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar13 = *(long *)puVar1;
  lVar8 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02feb2c4();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02feb2c4();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar8 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02feb2c4();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_02feb2c4();
  }
  puVar5 = PTR_DAT_06fb8878;
  puVar1 = PTR_DAT_06fb63e8;
  if ((long *)**(long **)(lVar8 + 0xb8) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  (**(code **)(*(long *)**(long **)(lVar8 + 0xb8) + 0x198))();
  lVar8 = *(long *)puVar1;
  in_stack_00000058 = in_stack_00000008;
  in_stack_00000050 = in_stack_00000000;
  in_stack_00000060 = in_stack_00000010;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar8 = *(long *)puVar1;
  }
  puVar4 = PTR_DAT_06fb8870;
  puVar3 = PTR_DAT_06fb8868;
  puVar2 = PTR_DAT_06fb8860;
  puVar12 = *(uint **)(lVar8 + 0xb8);
  uVar17 = *puVar12;
  uVar19 = puVar12[1];
  uVar21 = puVar12[2];
  FUN_04053d98(&stack0x00000050,*(undefined8 *)puVar5);
  in_stack_00000038 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000000;
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  fVar23 = -INFINITY;
  uVar22 = (ulong)uVar21;
  uVar20 = (ulong)uVar19;
  uVar18 = (ulong)uVar17;
  uVar14 = 0;
LAB_05d1693c:
  do {
    uVar16 = param_3;
    uVar15 = in_stack_00000010;
    uVar9 = FUN_055c9cc0(&stack0x00000030,*(undefined8 *)puVar3);
    if ((uVar9 & 1) == 0) {
      FUN_055c9f5c(&stack0x00000030,*(undefined8 *)puVar2);
      return uVar14;
    }
    uVar10 = FUN_055c9b7c(&stack0x00000030,*(undefined8 *)puVar4);
    iVar7 = FUN_05d16a90(fVar23);
    in_stack_00000010 = uVar15;
    param_3 = uVar16;
  } while (iVar7 == 0);
  uVar9 = OVRPlugin__CalculateLayerDesc();
  fVar6 = fStack00000000000000bc;
  in_stack_00000020 = CONCAT44((int)uVar15,(int)uVar9);
  in_stack_00000028 = (undefined4)uVar16;
  in_stack_00000010 = uVar15;
  param_3 = uVar16;
  if (fStack00000000000000bc <= fVar23) goto code_r0x05d169a8;
  goto LAB_05d169d0;
code_r0x05d169a8:
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  in_stack_00000010 = uVar20;
  param_3 = uVar22;
  uVar11 = FUN_05d16c04(uVar18,&stack0x00000020);
  if ((uVar11 & 1) != 0) {
LAB_05d169d0:
    fVar23 = fVar6;
    uVar22 = uVar16;
    uVar20 = uVar15;
    uVar18 = uVar9;
    uVar14 = uVar10;
  }
  goto LAB_05d1693c;
}


