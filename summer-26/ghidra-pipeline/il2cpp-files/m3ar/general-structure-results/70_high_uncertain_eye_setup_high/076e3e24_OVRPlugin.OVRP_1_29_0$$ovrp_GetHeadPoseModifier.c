/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_GetHeadPoseModifier
ENTRY_POINT: 076e3e24
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_29_0__ovrp_GetHeadPoseModifier
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  float fStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  float fStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack000000000000006c;
  undefined4 in_stack_00000070;
  undefined4 uStack0000000000000074;
  undefined4 in_stack_00000078;
  
  FUN_0403162c(PTR_DAT_08fae350);
  FUN_0403162c(PTR_DAT_08fae358);
  FUN_0403162c(PTR_DAT_08f70528);
  FUN_0403162c(PTR_DAT_08fae310);
  *(undefined1 *)(unaff_x22 + 0x2b9) = 1;
  puVar1 = PTR_DAT_08fae310;
  in_stack_00000060 = 0;
  in_stack_00000068 = 0;
  uStack000000000000006c = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  uStack0000000000000074 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  fStack000000000000004c = 0.0;
  in_stack_00000058 = 0;
  in_stack_00000050 = 0;
  uStack0000000000000054 = 0;
  FUN_076e3c48(&stack0x00000020 + 4);
  in_stack_00000040 = in_stack_00000020._4_8_;
  uStack0000000000000054 = (undefined4)in_stack_00000038;
  in_stack_00000058 = (undefined4)((ulong)in_stack_00000038 >> 0x20);
  fStack000000000000004c = fStack0000000000000030;
  fVar14 = fStack0000000000000030;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar3 = (float)FUN_08596ab0(&stack0x00000040,0);
  fVar12 = param_3;
  fVar8 = fVar14;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = (float)FUN_076e2e6c(unaff_x20 + 0x148);
  fVar13 = fVar12;
  if (DAT_09539f9f == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539f9f = '\x01';
  }
  fVar5 = fVar12 * fVar12 + fVar4 * fVar4 + fVar8 * fVar8;
  fVar9 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8);
  if (fVar9 <= fVar5) {
    fVar10 = param_3 * fVar12 + fVar3 * fVar4 + fVar14 * fVar8;
    fVar9 = fVar12 * fVar10;
    fVar13 = (fVar4 * fVar10) / fVar5;
    fVar3 = fVar3 - fVar13;
    fVar14 = fVar14 - (fVar8 * fVar10) / fVar5;
    param_3 = param_3 - fVar9 / fVar5;
  }
  uVar6 = FUN_076e2e6c(unaff_x20 + 0x148);
  FUN_08575d1c(fVar3,fVar14,param_3,uVar6,fVar9,fVar13,0);
  FUN_076e2da4(unaff_x20 + 0x148);
  FUN_08596724(&stack0x00000060,0);
  uVar2 = FUN_054b5284();
  if ((uVar2 & 1) == 0) {
    uVar7 = CONCAT44(uStack000000000000006c,in_stack_00000068);
    in_stack_00000038 = CONCAT44(in_stack_00000078,uStack0000000000000074);
    uVar11 = CONCAT44(in_stack_00000070,uStack000000000000006c);
    in_stack_00000020._4_8_ = in_stack_00000060;
  }
  else {
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uStack0000000000000014 = CONCAT44(in_stack_00000078,uStack0000000000000074);
    uStack000000000000000c = uStack000000000000006c;
    FUN_076e39b4(&stack0x00000020 + 4);
    uVar7 = CONCAT44(fStack0000000000000030,in_stack_00000020._12_4_);
    uVar11 = CONCAT44(uStack0000000000000034,fStack0000000000000030);
  }
  unaff_x19[1] = uVar7;
  *unaff_x19 = in_stack_00000020._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar11;
  return;
}


