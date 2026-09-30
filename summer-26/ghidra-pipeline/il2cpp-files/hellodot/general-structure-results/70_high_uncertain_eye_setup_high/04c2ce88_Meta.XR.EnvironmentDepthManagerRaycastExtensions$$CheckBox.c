/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$CheckBox
ENTRY_POINT: 04c2ce88
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__CheckBox(void)

{
  long lVar1;
  
  FUN_04f93e38(0);
  lVar1 = FUN_04c2cebc();
  if (lVar1 != 0) {
    FUN_0404ba34(lVar1,*(undefined8 *)PTR_DAT_065e60f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


