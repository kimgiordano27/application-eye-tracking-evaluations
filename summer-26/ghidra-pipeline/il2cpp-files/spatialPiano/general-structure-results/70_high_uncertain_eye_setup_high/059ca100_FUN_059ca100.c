/*
FUNCTION_NAME: FUN_059ca100
ENTRY_POINT: 059ca100
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_059ca100(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__;
  if ((DAT_06bc1d1c & 1) == 0) {
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    DAT_06bc1d1c = 1;
  }
  uVar2 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_059c8ed8();
  return uVar2;
}


