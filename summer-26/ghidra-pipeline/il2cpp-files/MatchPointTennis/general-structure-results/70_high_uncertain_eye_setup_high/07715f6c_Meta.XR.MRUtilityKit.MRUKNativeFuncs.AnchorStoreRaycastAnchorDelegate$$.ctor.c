/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreRaycastAnchorDelegate$$.ctor
ENTRY_POINT: 07715f6c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreRaycastAnchorDelegate___ctor
               (undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  
  uVar1 = FUN_078a7764(param_1,*unaff_x24,0);
  if (unaff_x23 != 0) {
    *(undefined8 *)(unaff_x23 + 0x18) = uVar1;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x23 + 0x18),uVar1);
    if (*(long **)(unaff_x22 + 0x60) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07715fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(unaff_x22 + 0x60) + 0x8d8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


