/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 02c51fac
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(uint param_1)

{
  ulong uVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x24;
  
  if ((int)unaff_w20 <= (int)param_1) {
    param_1 = unaff_w20;
  }
  if (0 < (int)param_1) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    uVar1 = 0;
    do {
      if (*(uint *)(unaff_x24 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      *(undefined1 *)(unaff_x19 + uVar1) = *(undefined1 *)(unaff_x24 + 0x20 + uVar1);
      uVar1 = uVar1 + 1;
    } while (param_1 != uVar1);
  }
  return;
}


