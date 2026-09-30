/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$Invoke
ENTRY_POINT: 0908dc88
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__Invoke
               (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack0000000000000014;
  undefined1 in_stack_00000020 [16];
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  
  fVar2 = (float)FUN_0a188538(&stack0x00000040,0);
  fVar11 = param_3;
  fVar7 = param_2;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar3 = (float)FUN_0908d078(unaff_x20 + 0x148);
  fVar12 = fVar11;
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
  fVar4 = fVar11 * fVar11 + fVar3 * fVar3 + fVar7 * fVar7;
  fVar8 = **(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8);
  if (fVar8 <= fVar4) {
    fVar9 = param_3 * fVar11 + fVar2 * fVar3 + param_2 * fVar7;
    fVar8 = fVar11 * fVar9;
    fVar12 = (fVar3 * fVar9) / fVar4;
    fVar2 = fVar2 - fVar12;
    param_2 = param_2 - (fVar7 * fVar9) / fVar4;
    param_3 = param_3 - fVar8 / fVar4;
  }
  uVar5 = FUN_0908d078(unaff_x20 + 0x148);
  FUN_0a16ab34(fVar2,param_2,param_3,uVar5,fVar8,fVar12,0);
  FUN_0908ce4c(unaff_x20 + 0x148);
  FUN_0a188128(&stack0x00000060,0);
  uVar1 = FUN_06684178();
  if ((uVar1 & 1) == 0) {
    uVar6 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    uVar10 = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    in_stack_00000020._4_8_ = in_stack_00000060;
    in_stack_00000038 = uStack0000000000000074;
  }
  else {
    if (*(long *)(unaff_x20 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uStack0000000000000014 = uStack0000000000000074;
    FUN_0908d728(&stack0x00000020 + 4);
    uVar6 = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    uVar10 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  }
  unaff_x19[1] = uVar6;
  *unaff_x19 = in_stack_00000020._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar10;
  return;
}


