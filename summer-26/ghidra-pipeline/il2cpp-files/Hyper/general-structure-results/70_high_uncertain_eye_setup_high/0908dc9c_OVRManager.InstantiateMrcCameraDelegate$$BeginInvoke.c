/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$BeginInvoke
ENTRY_POINT: 0908dc9c
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


void OVRManager_InstantiateMrcCameraDelegate__BeginInvoke
               (undefined1 param_1 [16],float param_2,float param_3)

{
  ulong uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
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
  
  fVar9 = param_3;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar2 = (float)FUN_0908d078(unaff_x20 + 0x148);
  fVar10 = fVar9;
  if (DAT_0b31f3e5 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0df00);
    DAT_0b31f3e5 = '\x01';
  }
                    /* catch() { ... } // from try @ 0908dc10 with catch @ 0908dd04 */
                    /* catch() { ... } // from try @ 0908dbf0 with catch @ 0908dd08 */
  fVar3 = fVar9 * fVar9 + fVar2 * fVar2 + param_2 * param_2;
                    /* catch() { ... } // from try @ 0908dbdc with catch @ 0908dd0c */
  fVar6 = **(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8);
                    /* catch() { ... } // from try @ 0908dbd0 with catch @ 0908dd10 */
                    /* catch() { ... } // from try @ 0908dbb8 with catch @ 0908dd14 */
                    /* catch() { ... } // from try @ 0908da8c with catch @ 0908dd18 */
  if (fVar6 <= fVar3) {
                    /* catch() { ... } // from try @ 0908dab8 with catch @ 0908dd1c */
                    /* catch() { ... } // from try @ 0908db90 with catch @ 0908dd20 */
                    /* catch() { ... } // from try @ 0908db8c with catch @ 0908dd24 */
                    /* catch() { ... } // from try @ 0908db88 with catch @ 0908dd28 */
                    /* catch() { ... } // from try @ 0908da6c with catch @ 0908dd2c */
    fVar7 = param_3 * fVar9 + unaff_s8 * fVar2 + unaff_s9 * param_2;
    fVar6 = fVar9 * fVar7;
    fVar10 = (fVar2 * fVar7) / fVar3;
    unaff_s8 = unaff_s8 - fVar10;
    unaff_s9 = unaff_s9 - (param_2 * fVar7) / fVar3;
    param_3 = param_3 - fVar6 / fVar3;
  }
  uVar4 = FUN_0908d078(unaff_x20 + 0x148);
  FUN_0a16ab34(unaff_s8,unaff_s9,param_3,uVar4,fVar6,fVar10,0);
  FUN_0908ce4c(unaff_x20 + 0x148);
  FUN_0a188128(&stack0x00000060,0);
  uVar1 = FUN_06684178();
  if ((uVar1 & 1) == 0) {
    uVar5 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    uVar8 = CONCAT44(uStack0000000000000070,uStack000000000000006c);
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
    uVar5 = CONCAT44(uStack0000000000000030,in_stack_00000020._12_4_);
    uVar8 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
  }
  unaff_x19[1] = uVar5;
  *unaff_x19 = in_stack_00000020._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000038;
  *(undefined8 *)((long)unaff_x19 + 0xc) = uVar8;
  return;
}


