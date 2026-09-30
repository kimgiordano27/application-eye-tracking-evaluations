/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$op_Implicit
ENTRY_POINT: 061e6f78
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__op_Implicit
               (long param_1,long param_2)

{
  bool bVar1;
  
  if (*(byte *)(param_1 + 0x130) < *(byte *)(param_2 + 0x130)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) ==
            param_2;
  }
  return bVar1;
}


