/*
FUNCTION_NAME: FUN_07482eec
ENTRY_POINT: 07482eec
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07482eec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = Method_Unity_Collections_NativeArray<AABB>__ctor__;
  puVar1 = Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__;
  if ((DAT_07ef3eb9 & 1) == 0) {
    FUN_03642964(Method_Unity_Collections_NativeArray<AABB>__ctor__);
    FUN_03642964(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    DAT_07ef3eb9 = 1;
  }
  uVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar1);
  FUN_0459e84c(uVar3,8,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x10),uVar3);
  FUN_05e5ae34(param_1,0);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x20),param_2);
  return;
}


