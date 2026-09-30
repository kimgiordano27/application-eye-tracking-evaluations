/*
FUNCTION_NAME: OVRManager$$remove_VrFocusAcquired
ENTRY_POINT: 0907f4a8
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__remove_VrFocusAcquired
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined1 param_5 [16],undefined1 param_6 [16])

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  float unaff_s10;
  float fVar3;
  undefined8 uStack000000000000001c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined8 in_stack_000000c8;
  
  uStack000000000000001c = param_4;
  FUN_0907f8b4(param_2,param_3,unaff_s9,param_5,param_6,*(undefined4 *)(param_1 + 0x2c));
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    fVar2 = (float)FUN_0a1ecf3c(*(long *)(unaff_x19 + 0x20),0);
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      fVar3 = *(float *)(unaff_x19 + 0x28);
                    /* try { // try from 0907f4dc to 0917f503 has its CatchHandler @ 0907f7fc */
      lVar1 = FUN_0a17834c(*(long *)(unaff_x19 + 0x20),0);
      if (lVar1 != 0) {
        FUN_0a18a274(unaff_s8,fVar3 + (unaff_s10 - in_stack_000000c8._4_4_) + fVar2 * 0.5,unaff_s9,
                     lVar1,0);
        *(undefined1 *)(unaff_x19 + 0x7c) = 1;
        *(undefined8 *)(unaff_x19 + 0x58) = in_stack_00000068;
        *(undefined8 *)(unaff_x19 + 0x50) = in_stack_00000060;
        *(undefined8 *)(unaff_x19 + 0x68) = in_stack_00000078;
        *(undefined8 *)(unaff_x19 + 0x60) = in_stack_00000070;
        *(undefined8 *)(unaff_x19 + 0x74) = uStack0000000000000084;
        *(ulong *)(unaff_x19 + 0x6c) = CONCAT44(uStack0000000000000080,in_stack_00000078._4_4_);
        FUN_0907eda4();
                    /* try { // try from 0907f540 to 0917f567 has its CatchHandler @ 0907f7f8 */
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


