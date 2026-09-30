/*
FUNCTION_NAME: OVRPlugin$$GetControllerSampleRateHz
ENTRY_POINT: 05d168d8
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
OVRPlugin__GetControllerSampleRateHz(undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float fVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint *puVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long *unaff_x24;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  float fVar19;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_000000b8;
  
  thunk_FUN_02fdcff0();
  puVar3 = PTR_DAT_06fb8870;
  puVar2 = PTR_DAT_06fb8868;
  puVar1 = PTR_DAT_06fb8860;
  puVar9 = *(uint **)(*unaff_x24 + 0xb8);
  uVar13 = *puVar9;
  uVar15 = puVar9[1];
  uVar17 = puVar9[2];
  FUN_04053d98(&stack0x00000050,*unaff_x20);
  in_stack_00000038 = in_stack_00000008;
  in_stack_00000030 = in_stack_00000000;
  in_stack_00000048 = in_stack_00000018;
  in_stack_00000040 = in_stack_00000010;
  fVar19 = -INFINITY;
  uVar18 = (ulong)uVar17;
  uVar16 = (ulong)uVar15;
  uVar14 = (ulong)uVar13;
  uVar10 = 0;
LAB_05d1693c:
  do {
    uVar12 = param_3;
    uVar11 = in_stack_00000010;
    uVar6 = FUN_055c9cc0(&stack0x00000030,*(undefined8 *)puVar2);
    if ((uVar6 & 1) == 0) {
      FUN_055c9f5c(&stack0x00000030,*(undefined8 *)puVar1);
      return uVar10;
    }
    uVar7 = FUN_055c9b7c(&stack0x00000030,*(undefined8 *)puVar3);
    iVar5 = FUN_05d16a90(fVar19);
    in_stack_00000010 = uVar11;
    param_3 = uVar12;
  } while (iVar5 == 0);
  uVar6 = OVRPlugin__CalculateLayerDesc();
  fVar4 = in_stack_000000b8._4_4_;
  uStack0000000000000020 = (undefined4)uVar6;
  uStack0000000000000024 = (undefined4)uVar11;
  in_stack_00000028 = (undefined4)uVar12;
  in_stack_00000010 = uVar11;
  param_3 = uVar12;
  if (in_stack_000000b8._4_4_ <= fVar19) goto code_r0x05d169a8;
  goto LAB_05d169d0;
code_r0x05d169a8:
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  in_stack_00000010 = uVar16;
  param_3 = uVar18;
  uVar8 = FUN_05d16c04(uVar14,&stack0x00000020);
  if ((uVar8 & 1) != 0) {
LAB_05d169d0:
    fVar19 = fVar4;
    uVar18 = uVar12;
    uVar16 = uVar11;
    uVar14 = uVar6;
    uVar10 = uVar7;
  }
  goto LAB_05d1693c;
}


