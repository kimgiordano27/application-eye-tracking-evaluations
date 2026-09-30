/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreStartQueryByLocalGroupDelegate$$Invoke
ENTRY_POINT: 08a396e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreStartQueryByLocalGroupDelegate__Invoke
               (undefined8 param_1)

{
  long unaff_x20;
  
                    /* try { // try from 08a396e4 to 08b396e7 has its CatchHandler @ 08a397c4 */
  FUN_09a6a910();
                    /* try { // try from 08a396e8 to 08b39773 has its CatchHandler @ 08a391a0 */
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = param_1;
    thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x20),param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


