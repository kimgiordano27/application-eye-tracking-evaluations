/*
FUNCTION_NAME: OVRPlugin.OVRP_1_111_0$$.cctor
ENTRY_POINT: 090d8a88
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_111_0___cctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  float unaff_s8;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 090d8650 with catch @ 090d8a88 */
                    /* catch() { ... } // from try @ 090d87b8 with catch @ 090d8a8c */
  *(float *)(unaff_x19 + 0x28) = unaff_s8;
                    /* catch() { ... } // from try @ 090d85ec with catch @ 090d8a90 */
  if (0.0 <= unaff_s8) {
    if (0.0 < unaff_s8) {
      return;
    }
  }
  else {
    *(undefined4 *)(unaff_x19 + 0x28) = 0;
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    /* try { // try from 090d8aac to 091d8aaf has its CatchHandler @ 090d8abc */
    uVar1 = FUN_0a127d2c(*(long *)(unaff_x19 + 0x10),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0x20) != 0) {
        if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_0a137afc(*(undefined8 *)PTR_DAT_0ac79988,0);
        return;
      }
    }
    else {
                    /* catch() { ... } // from try @ 090d8aac with catch @ 090d8abc */
                    /* try { // try from 090d8ac0 to 091d8ac7 has its CatchHandler @ 090d8b0c */
                    /* try { // try from 090d8ac8 to 091d8ae7 has its CatchHandler @ 090d82fc */
      if (*(int *)(*(long *)PTR_DAT_0ac09b88 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 090d8754 with catch @ 090d8acc */
        thunk_FUN_049a583c();
      }
      in_stack_00000008 = FUN_08d599a0(0);
      uVar2 = FUN_08d5a834(&stack0x00000008,0);
                    /* try { // try from 090d8ae8 to 091d8aeb has its CatchHandler @ 090d8af8 */
                    /* catch() { ... } // from try @ 090d8ae8 with catch @ 090d8af8 */
                    /* try { // try from 090d8afc to 091d8b03 has its CatchHandler @ 090d8b0c */
      uVar2 = FUN_08bcc3c0(*(undefined8 *)PTR_DAT_0ac79980,uVar2,0);
                    /* try { // try from 090d8b04 to 091d8b0f has its CatchHandler @ 090d82fc */
                    /* catch() { ... } // from try @ 090d8ac0 with catch @ 090d8b0c
                       catch() { ... } // from try @ 090d8afc with catch @ 090d8b0c */
      if (*(int *)(*(long *)PTR_DAT_0ac0a4a0 + 0xe4) == 0) {
        thunk_FUN_049a583c(*(long *)PTR_DAT_0ac0a4a0);
      }
      FUN_0a1374b0(uVar2,0);
      FUN_090d8964();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


