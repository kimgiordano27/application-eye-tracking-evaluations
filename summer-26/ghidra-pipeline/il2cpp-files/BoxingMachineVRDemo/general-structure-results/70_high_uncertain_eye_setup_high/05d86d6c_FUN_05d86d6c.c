/*
FUNCTION_NAME: FUN_05d86d6c
ENTRY_POINT: 05d86d6c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05d86d6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = 
  Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<Result<NativeArray<XRAnchor>>>>_Get__
  ;
  puVar2 = 
  Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XRShareAnchorResult>>>_Release__
  ;
  puVar1 = Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__;
  if ((DAT_06b82d34 & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<Result<NativeArray<XRAnchor>>>>_Get__
                );
    FUN_02d6084c(
                Method_UnityEngine_Pool_ObjectPool<AwaitableCompletionSource<NativeArray<XRShareAnchorResult>>>_Release__
                );
    FUN_02d6084c(Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_SetException__);
    DAT_06b82d34 = 1;
  }
  uVar4 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_0486a388(uVar4,*(undefined8 *)puVar3);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
  thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
  return;
}


