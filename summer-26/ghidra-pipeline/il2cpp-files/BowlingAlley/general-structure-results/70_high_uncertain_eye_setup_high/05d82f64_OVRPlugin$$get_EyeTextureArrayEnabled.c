/*
FUNCTION_NAME: OVRPlugin$$get_EyeTextureArrayEnabled
ENTRY_POINT: 05d82f64
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_EyeTextureArrayEnabled(undefined1 param_1 [16])

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x22;
  float fVar2;
  undefined8 uStack0000000000000020;
  float in_stack_00000028;
  
  fVar2 = *(float *)(unaff_x20 + 0x3c);
  in_stack_00000028 = in_stack_00000028 * fVar2;
  uStack0000000000000020 = CONCAT44(param_1._4_4_ * fVar2,param_1._0_4_ * fVar2);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 05d82fc0 to 05e82fcb has its CatchHandler @ 05d830ac */
    FUN_032d5ee8();
  }
  if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
                    /* try { // try from 05d82fa4 to 05e82faf has its CatchHandler @ 05d830b4 */
    FUN_05cedf04(&stack0x00000040,&stack0x00000020,lVar1 + unaff_x22 * 0x1c + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


