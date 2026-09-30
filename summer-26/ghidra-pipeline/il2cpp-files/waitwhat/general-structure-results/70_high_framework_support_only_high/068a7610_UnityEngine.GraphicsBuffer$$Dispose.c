/*
FUNCTION_NAME: UnityEngine.GraphicsBuffer$$Dispose
ENTRY_POINT: 068a7610
PROGRAM: waitwhat-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_GraphicsBuffer__Dispose(long param_1)

{
  undefined8 uVar1;
  long *unaff_x19;
  long *unaff_x21;
  
  if (param_1 == 0) {
    uVar1 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)OVRPlugin_EyeTextureFormat_TypeInfo);
    FUN_068a7340(uVar1,0,*(undefined8 *)OVRPlugin_GetBoneSkeleton2Delegate_TypeInfo);
    if (*(int *)(*(long *)PTR_DAT_070c9c68 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    param_1 = FUN_03a21ea8(uVar1,*(undefined8 *)OVRPlugin_BodyTrackingFidelity2_TypeInfo);
    **(long **)(*unaff_x21 + 0xb8) = param_1;
  }
  *unaff_x19 = param_1;
  return;
}


