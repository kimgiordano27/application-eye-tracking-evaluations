/*
FUNCTION_NAME: FUN_05a2aa24
ENTRY_POINT: 05a2aa24
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_20;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05a2aa24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  puVar10 = Method_UnityEngine_Awaitable<XRResultStatus>_GetAwaiter__;
  puVar9 = Method_UnityEngine_Awaitable<Result<XRAnchor>>_GetAwaiter__;
  puVar8 = Method_UnityEngine_Awaitable<Result<SerializableGuid>>_GetAwaiter__;
  puVar7 = Method_UnityEngine_Awaitable<Result<ARAnchor>>_GetAwaiter__;
  puVar6 = Method_UnityEngine_Awaitable<Result<NativeArray<XRAnchor>>>_GetAwaiter__;
  puVar5 = Method_UnityEngine_Awaitable<NativeArray<XRShareAnchorResult>>_GetAwaiter__;
  puVar4 = Method_UnityEngine_Awaitable<NativeArray<XRSaveAnchorResult>>_GetAwaiter__;
  puVar3 = Method_UnityEngine_Awaitable<NativeArray<XRLoadAnchorResult>>_GetAwaiter__;
  puVar2 = Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__;
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_Start<JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
  ;
  if ((DAT_06b8118d & 1) == 0) {
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTime>>_Start<JsonTextReader_<DoReadAsDateTimeAsync>d__45>__
                );
    FUN_02d6084c(Method_OVRTask_Awaiter<List<bool>>_GetResult__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<XRResultStatus>_GetAwaiter__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<Result<XRAnchor>>_GetAwaiter__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<Result<SerializableGuid>>_GetAwaiter__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<NativeArray<XRSaveAnchorResult>>_GetAwaiter__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<Result<NativeArray<XRAnchor>>>_GetAwaiter__);
    FUN_02d6084c(Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__);
    FUN_02d6084c(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<Result<ARAnchor>>_GetAwaiter__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<NativeArray<XRLoadAnchorResult>>_GetAwaiter__);
    FUN_02d6084c(Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<NativeArray<XRShareAnchorResult>>_GetAwaiter__);
    FUN_02d6084c(Method_UnityEngine_Awaitable<NativeArray<XREraseAnchorResult>>_GetAwaiter__);
    FUN_02d6084c(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__);
    FUN_02d6084c(Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__);
    DAT_06b8118d = 1;
  }
  uVar11 = FUN_0603326c(*(undefined8 *)puVar2,0);
  **(undefined4 **)(*(long *)puVar1 + 0xb8) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar3,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar4,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)puVar10,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)
                         Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)
                         Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_get_IsCompleted__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)Method_OVRTask_Awaiter<List<bool>>_GetResult__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_0603326c(*(undefined8 *)
                         Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x38) = uVar11;
  return;
}


