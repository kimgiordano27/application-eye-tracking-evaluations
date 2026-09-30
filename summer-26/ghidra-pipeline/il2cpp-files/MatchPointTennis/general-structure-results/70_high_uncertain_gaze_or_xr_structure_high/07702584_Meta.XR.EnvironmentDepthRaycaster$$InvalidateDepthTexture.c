/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$InvalidateDepthTexture
ENTRY_POINT: 07702584
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__InvalidateDepthTexture
               (undefined1 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_w9;
  long unaff_x19;
  
  *param_1 = in_w9;
  *(undefined1 *)(unaff_x19 + 0x78) = in_w9;
  FUN_0770217c(param_2,0);
  lVar1 = *(long *)(unaff_x19 + 0x68);
  if (lVar1 != 0) {
    FUN_0982ce30(lVar1,*(char *)(lVar1 + 0x120) == '\0',0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


