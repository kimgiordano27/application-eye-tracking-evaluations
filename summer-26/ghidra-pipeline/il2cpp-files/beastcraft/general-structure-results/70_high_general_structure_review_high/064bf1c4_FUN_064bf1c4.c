/*
FUNCTION_NAME: FUN_064bf1c4
ENTRY_POINT: 064bf1c4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_12;telemetry_or_network_hits_10
*/


void FUN_064bf1c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar1 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__;
  if ((bRam0000000006e9c96f & 1) == 0) {
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NativeGallery_Permission>_AwaitUnsafeOnCompleted<TaskAwaiter<NativeGallery_Permission>,_NativeGallery_<SaveImageToGallery>d__25>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NativeGallery_Permission>_AwaitUnsafeOnCompleted<TaskAwaiter<NativeGallery_Permission>,_NativeGallery_<SaveToGallery>d__28>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NativeGallery_Permission>_AwaitUnsafeOnCompleted<TaskAwaiter<NativeGallery_Permission>,_NativeGallery_<SaveVideoToGallery>d__24>__
                );
    bRam0000000006e9c96f = 1;
  }
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NativeGallery_Permission>_AwaitUnsafeOnCompleted<TaskAwaiter<NativeGallery_Permission>,_NativeGallery_<SaveVideoToGallery>d__24>__
  ;
  puVar7 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NativeGallery_Permission>_AwaitUnsafeOnCompleted<TaskAwaiter<NativeGallery_Permission>,_NativeGallery_<SaveToGallery>d__28>__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<NativeGallery_Permission>_AwaitUnsafeOnCompleted<TaskAwaiter<NativeGallery_Permission>,_NativeGallery_<SaveImageToGallery>d__25>__
  ;
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_04caaf0c(param_1,*(undefined8 *)puVar5);
  uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar8);
  FUN_064bf320();
  FUN_0359a648(param_1,uVar9,*(undefined8 *)puVar3);
  uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar7);
  FUN_064bf398();
  FUN_0359a70c(param_1,uVar9,*(undefined8 *)puVar4);
  uVar9 = thunk_FUN_02e78ab8(*(undefined8 *)puVar6);
  FUN_064bf410();
  FUN_0359a584(param_1,uVar9,*(undefined8 *)puVar2);
  return;
}


