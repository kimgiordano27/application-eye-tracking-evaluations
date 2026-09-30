/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$PlaceBox
ENTRY_POINT: 08a25ac0
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__PlaceBox(void)

{
  undefined4 unaff_w19;
  long unaff_x22;
  undefined4 unaff_s8;
  
  FUN_089e5eb0();
  if (unaff_x22 != 0) {
    *(undefined4 *)(unaff_x22 + 0x18) = unaff_s8;
    *(undefined4 *)(unaff_x22 + 0x1c) = unaff_w19;
    *(undefined1 *)(unaff_x22 + 0x20) = 1;
    FUN_08983b18();
    FUN_089c6a00();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


