/*
FUNCTION_NAME: OVRPlugin$$IsWideMotionModeHandPosesEnabled
ENTRY_POINT: 06abe0c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_possible_biometrics_hits_2
*/


void OVRPlugin__IsWideMotionModeHandPosesEnabled(void)

{
  char in_NG;
  char in_OV;
  uint in_w8;
  long unaff_x19;
  long lVar1;
  long lVar2;
  
  if (in_NG == in_OV) {
    lVar2 = 0;
    do {
      if (in_w8 <= (uint)lVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      lVar1 = *(long *)(unaff_x19 + 0x20 + lVar2 * 8);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (DAT_086edcc0 == (code *)0x0) {
        DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
      }
      (*DAT_086edcc0)(lVar1,0);
      in_w8 = *(uint *)(unaff_x19 + 0x18);
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < (int)in_w8);
  }
  return;
}


