/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$.ctor
ENTRY_POINT: 04f873b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR___ctor(float param_1,float param_2)

{
  long unaff_x19;
  float fVar1;
  float unaff_s8;
  float unaff_s10;
  
  if (param_1 <= param_2) {
    param_2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_2;
  }
  *(float *)(unaff_x19 + 0x80) = unaff_s10 + (unaff_s8 - unaff_s10) * fVar1;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    thunk_FUN_05c229f4(*(long *)(unaff_x19 + 0x30),*(undefined4 *)(unaff_x19 + 0x5c),0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_05c247c4(*(undefined4 *)(unaff_x19 + 0x68),*(long *)(unaff_x19 + 0x30),
                   *(undefined4 *)(unaff_x19 + 0x54),0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        thunk_FUN_05c229f4(*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                           *(undefined4 *)(unaff_x19 + 0x60),0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_05c247c4(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                       *(undefined4 *)(unaff_x19 + 0x50),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


