/*
FUNCTION_NAME: OVRPlugin.Media$$GetPlatformCameraMode
ENTRY_POINT: 06aeee6c
PROGRAM: Waifu-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__GetPlatformCameraMode(void)

{
  long unaff_x19;
  long lVar1;
  long unaff_x21;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (unaff_x21 != 0) {
    fVar2 = SQRT(unaff_s10 * unaff_s10 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
    FUN_07a19820(unaff_s11 * fVar2,unaff_s12 * fVar2,unaff_s13 * fVar2);
    lVar1 = *(long *)(unaff_x19 + 0x48);
    if (lVar1 != 0) {
      if (DAT_086edcc0 == (code *)0x0) {
        DAT_086edcc0 = (code *)FUN_033d1b68("UnityEngine.Renderer::set_enabled(System.Boolean)");
      }
                    /* WARNING: Could not recover jumptable at 0x06aeeee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_086edcc0)(lVar1,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


