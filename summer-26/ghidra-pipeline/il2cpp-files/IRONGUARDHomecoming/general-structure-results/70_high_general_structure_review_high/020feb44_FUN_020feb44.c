/*
FUNCTION_NAME: FUN_020feb44
ENTRY_POINT: 020feb44
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8
FUN_020feb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_PrefabSceneManager_<LoadSceneAsync>d__7>__
  ;
  if ((DAT_0482fb9c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Nullable<RenderTargetIdentifier>_get_HasValue__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<ValueTuple<OVRAnchor,_SnapshotSceneManager_SnapshotComparer_ChangeType>>>,_SnapshotSceneManager_<UpdateScene>d__5>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitOnCompleted<OVRTask_Awaiter<bool>,_PrefabSceneManager_<LoadSceneAsync>d__7>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_BasicSceneManager_<LoadSceneAsync>d__1>__
                      );
    DAT_0482fb9c = 1;
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  puVar5 = (undefined8 *)(lVar2 + 0x10);
  *puVar5 = param_6;
  thunk_FUN_01f51358(puVar5,param_6);
  if (0.0 < (float)param_4) {
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
    FUN_02a72630(uVar3,lVar2,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<Run>d__58>__
                 ,0);
    uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
    FUN_02a7391c(uVar4,lVar2,
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<List<ValueTuple<OVRAnchor,_SnapshotSceneManager_SnapshotComparer_ChangeType>>>,_SnapshotSceneManager_<UpdateScene>d__5>__
                 ,0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c();
    }
    uVar3 = FUN_020f0dac(param_1,param_2,param_3,param_4,param_5,uVar3,uVar4,param_7);
    uVar3 = FUN_0242d544(uVar3,*puVar5,
                         *(undefined8 *)
                          Method_System_Nullable<RenderTargetIdentifier>_get_HasValue__);
    return uVar3;
  }
  if (DAT_0482ef72 == '\0') {
    thunk_FUN_01efb3a4(Method_System_Nullable<InputRemoting_Message>__ctor__);
    DAT_0482ef72 = '\x01';
  }
  if (0 < **(int **)(*(long *)Method_System_Nullable<InputRemoting_Message>__ctor__ + 0xb8)) {
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0403f2cc(*(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_BasicSceneManager_<LoadSceneAsync>d__1>__
                 ,0);
  }
  return 0;
}


