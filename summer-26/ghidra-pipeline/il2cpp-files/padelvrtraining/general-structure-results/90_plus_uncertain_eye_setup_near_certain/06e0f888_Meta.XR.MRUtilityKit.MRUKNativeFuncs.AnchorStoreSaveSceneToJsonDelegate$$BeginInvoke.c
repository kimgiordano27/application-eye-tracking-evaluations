/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$BeginInvoke
ENTRY_POINT: 06e0f888
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__BeginInvoke
               (long *param_1)

{
  if (*param_1 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(*param_1 + 0x1c)) {
      FUN_07199bdc(0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[8] = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


