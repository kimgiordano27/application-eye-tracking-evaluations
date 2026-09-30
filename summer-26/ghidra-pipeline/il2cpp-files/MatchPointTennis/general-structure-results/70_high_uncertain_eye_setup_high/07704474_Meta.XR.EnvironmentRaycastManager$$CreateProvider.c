/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CreateProvider
ENTRY_POINT: 07704474
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__CreateProvider(void)

{
  long lVar1;
  long unaff_x20;
  
  if (((*(long *)(unaff_x20 + 0x28) != 0) && (lVar1 = FUN_076fd5c8(), lVar1 != 0)) &&
     (*(long *)(unaff_x20 + 0x28) != 0)) {
    if (*(char *)(lVar1 + 0x28) != '\0') {
      FUN_076fcf74(*(long *)(unaff_x20 + 0x28),0);
      return;
    }
    FUN_076fcea0();
    FUN_07704508();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


