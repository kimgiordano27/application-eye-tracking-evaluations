/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastRoomDelegate$$.ctor
ENTRY_POINT: 06e10210
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastRoomDelegate___ctor(void)

{
  int iVar1;
  long *unaff_x19;
  
  if (*unaff_x19 != 0) {
    iVar1 = *(int *)(*unaff_x19 + 0x18);
    unaff_x19[2] = 0;
    unaff_x19[3] = 0;
    *(int *)(unaff_x19 + 1) = iVar1 + 1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


