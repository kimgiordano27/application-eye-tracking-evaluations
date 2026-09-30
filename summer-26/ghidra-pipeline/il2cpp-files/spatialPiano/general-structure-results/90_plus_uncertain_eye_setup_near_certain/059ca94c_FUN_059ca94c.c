/*
FUNCTION_NAME: FUN_059ca94c
ENTRY_POINT: 059ca94c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 108
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


undefined8 FUN_059ca94c(int param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_06bc1d2a & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_get_IsCreated__
                );
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02f08768(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
    DAT_06bc1d2a = 1;
  }
  puVar1 = (undefined8 *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (param_1 - 1U < 3) {
    puVar1 = (undefined8 *)(&PTR_DAT_0646cc80)[param_1 - 1U];
  }
  return *puVar1;
}


