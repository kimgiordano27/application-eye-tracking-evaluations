/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$TryReleaseRT
ENTRY_POINT: 014a520c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__TryReleaseRT(void)

{
  long lVar1;
  code *in_x9;
  long *unaff_x19;
  
  (*in_x9)();
  lVar1 = (**(code **)(*unaff_x19 + 0x198))();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x98) != 0)) {
    FUN_013e0100();
  }
  lVar1 = (**(code **)(*unaff_x19 + 0x198))();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xa0) != 0)) {
    FUN_026c868c(*(long *)(lVar1 + 0xa0),0);
  }
  return;
}


