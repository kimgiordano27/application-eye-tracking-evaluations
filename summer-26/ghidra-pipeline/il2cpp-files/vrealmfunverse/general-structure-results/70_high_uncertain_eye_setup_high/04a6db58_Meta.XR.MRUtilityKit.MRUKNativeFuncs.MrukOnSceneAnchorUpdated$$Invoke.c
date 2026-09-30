/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnSceneAnchorUpdated$$Invoke
ENTRY_POINT: 04a6db58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnSceneAnchorUpdated__Invoke(long param_1)

{
  long unaff_x19;
  
  if (param_1 != 0) {
    FUN_04d9e084(param_1,0,*(undefined4 *)(param_1 + 0x18),0);
    *(undefined8 *)(unaff_x19 + 0x20) = 0;
    *(undefined4 *)(unaff_x19 + 0x28) = 0xffffffff;
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x19 + 0x38) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


