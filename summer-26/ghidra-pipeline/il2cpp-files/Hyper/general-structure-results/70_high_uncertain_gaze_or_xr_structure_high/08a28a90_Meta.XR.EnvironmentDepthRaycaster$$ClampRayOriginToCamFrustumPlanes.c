/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClampRayOriginToCamFrustumPlanes
ENTRY_POINT: 08a28a90
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_EnvironmentDepthRaycaster__ClampRayOriginToCamFrustumPlanes
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_049ee3d8();
  lVar1 = FUN_08a28878(param_1);
  if (lVar1 != 0) {
    FUN_089bc244(lVar1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


