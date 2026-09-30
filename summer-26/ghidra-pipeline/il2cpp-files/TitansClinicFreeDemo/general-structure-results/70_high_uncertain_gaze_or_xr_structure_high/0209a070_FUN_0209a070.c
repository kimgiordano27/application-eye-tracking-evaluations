/*
FUNCTION_NAME: FUN_0209a070
ENTRY_POINT: 0209a070
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_1
*/


undefined4 FUN_0209a070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *local_60;
  undefined8 uStack_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if (DAT_0293fc38 == (code *)0x0) {
    local_60 = "OVRPlugin";
    uStack_58 = 9;
    local_50 = "ovrp_SendEvent2";
    uStack_48 = 0xf;
    local_38 = 0x18;
    local_40 = DAT_007455b0;
    local_34 = 0;
    DAT_0293fc38 = (code *)thunk_FUN_0124be64(&local_60);
  }
  uVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>__AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_DOTweenModuleUnityVersion_<AsyncWaitForStart>d__15>
                    (param_1);
  uVar3 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>__AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_DOTweenModuleUnityVersion_<AsyncWaitForStart>d__15>
                    (param_2);
  uVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>__AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_DOTweenModuleUnityVersion_<AsyncWaitForStart>d__15>
                    (param_3);
  uVar1 = (*DAT_0293fc38)(uVar2,uVar3,uVar4);
  thunk_FUN_0124c178(uVar2);
  thunk_FUN_0124c178(uVar3);
  thunk_FUN_0124c178(uVar4);
  return uVar1;
}


