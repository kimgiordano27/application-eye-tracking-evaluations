/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDepthTextureUpdate
ENTRY_POINT: 0770258c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthRaycaster__OnDepthTextureUpdate(void)

{
  long lVar1;
  undefined1 in_w9;
  long unaff_x19;
  
  *(undefined1 *)(unaff_x19 + 0x78) = in_w9;
  FUN_0770217c();
  lVar1 = *(long *)(unaff_x19 + 0x68);
  if (lVar1 != 0) {
    FUN_0982ce30(lVar1,*(char *)(lVar1 + 0x120) == '\0',0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


