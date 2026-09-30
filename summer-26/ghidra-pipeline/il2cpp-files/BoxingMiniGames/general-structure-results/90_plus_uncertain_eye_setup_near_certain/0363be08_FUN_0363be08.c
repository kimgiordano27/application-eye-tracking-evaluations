/*
FUNCTION_NAME: FUN_0363be08
ENTRY_POINT: 0363be08
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_0363be08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__;
  if ((DAT_07ef42cb & 1) == 0) {
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>_Dispose__);
    FUN_03642964(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__ctor__);
    DAT_07ef42cb = 1;
  }
  uVar3 = FUN_03642d0c("Cannot marshal field \'%s\' of type \'%s\': Reference type field marshaling is not supported."
                       ,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_03642acc(uVar3,0);
}


