/*
FUNCTION_NAME: OVRManager$$SetColorScaleAndOffset
ENTRY_POINT: 05ba7104
PROGRAM: waitwhat-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__SetColorScaleAndOffset(undefined1 param_1 [16],float param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  float fVar2;
  float unaff_s8;
  float unaff_s10;
  undefined4 unaff_s12;
  undefined4 unaff_s14;
  float unaff_s15;
  float fStack0000000000000004;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  float in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000001c8;
  
  if ((param_3 & 1) != 0) {
    FUN_06a6354c(&stack0x00000230,0);
    fVar2 = *(float *)(unaff_x20 + 0x34);
    if (param_2 - (in_stack_00000080 - unaff_s8) <= fVar2) {
      FUN_06a63564(&stack0x00000230,0);
      uVar1 = FUN_05ba5938();
      if ((uVar1 & 1) != 0) {
        if (unaff_s15 <= unaff_s10 - in_stack_000001c8._4_4_) {
          unaff_s15 = unaff_s10 - in_stack_000001c8._4_4_;
        }
        FUN_035ed394(0);
        fStack0000000000000004 = fVar2 * unaff_s15;
        uVar1 = FUN_05ba71e0(uStack0000000000000078,in_stack_00000080,uStack000000000000007c,
                             in_stack_00000088._4_4_,uStack0000000000000068,uStack000000000000006c);
        if ((uVar1 & 1) == 0) {
          *unaff_x19 = unaff_s14;
          unaff_x19[1] = unaff_s15;
          unaff_x19[2] = unaff_s12;
          return 1;
        }
      }
    }
  }
  return 0;
}


