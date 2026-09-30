/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 0908dd30
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(float param_1,float param_2)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
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
  
                    /* catch() { ... } // from try @ 0908da9c with catch @ 0908dd30 */
                    /* catch() { ... } // from try @ 0908da90 with catch @ 0908dd34 */
                    /* catch() { ... } // from try @ 0908dadc with catch @ 0908dd38 */
  fVar5 = unaff_s12 * param_2;
  fVar7 = (unaff_s13 * param_2) / param_1;
  fVar8 = unaff_s8 - fVar7;
  fVar2 = fVar5 / param_1;
  uVar3 = FUN_0908d078(unaff_x20 + 0x148);
  FUN_0a16ab34(fVar8,unaff_s9 - (unaff_s11 * param_2) / param_1,unaff_s10 - fVar2,uVar3,fVar5,fVar7,
               0);
  FUN_0908ce4c(unaff_x20 + 0x148);
  FUN_0a188128(&stack0x00000060,0);
  uVar1 = FUN_06684178();
  if ((uVar1 & 1) == 0) {
    uVar4 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    uVar6 = CONCAT44(uStack0000000000000070,uStack000000000000006c);
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
    uVar4 = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    uVar6 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  }
  unaff_x19[1] = uVar4;
  *unaff_x19 = in_stack_00000020._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar6;
  return;
}


