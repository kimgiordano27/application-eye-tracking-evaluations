/*
FUNCTION_NAME: FUN_02099af8
ENTRY_POINT: 02099af8
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


undefined4 FUN_02099af8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if (DAT_0293fbe8 == (code *)0x0) {
    local_50 = "OVRPlugin";
    uStack_48 = 9;
    local_40 = "ovrp_SendEvent";
    uStack_38 = 0xe;
    local_28 = 0x10;
    local_30 = DAT_007455b0;
    local_24 = 0;
    DAT_0293fbe8 = (code *)thunk_FUN_0124be64(&local_50);
  }
  uVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>__AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_DOTweenModuleUnityVersion_<AsyncWaitForStart>d__15>
                    (param_1);
  uVar3 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>__AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_DOTweenModuleUnityVersion_<AsyncWaitForStart>d__15>
                    (param_2);
  uVar1 = (*DAT_0293fbe8)(uVar2,uVar3);
  thunk_FUN_0124c178(uVar2);
  thunk_FUN_0124c178(uVar3);
  return uVar1;
}


