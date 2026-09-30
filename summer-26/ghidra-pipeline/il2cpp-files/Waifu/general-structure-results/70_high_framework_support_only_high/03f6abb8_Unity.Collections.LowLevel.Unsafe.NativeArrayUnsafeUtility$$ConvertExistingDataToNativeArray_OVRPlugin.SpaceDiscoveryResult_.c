/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility$$ConvertExistingDataToNativeArray<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03f6abb8
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility__ConvertExistingDataToNativeArray<OVRPlugin_SpaceDiscoveryResult>
               (ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong in_x9;
  ulong in_x10;
  
  while( true ) {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = in_x10 | in_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
    if (cVar1 == '\0') break;
    in_x10 = *param_1;
  }
  return;
}


