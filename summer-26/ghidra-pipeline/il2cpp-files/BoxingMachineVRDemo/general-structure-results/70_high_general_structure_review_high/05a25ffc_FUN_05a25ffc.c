/*
FUNCTION_NAME: FUN_05a25ffc
ENTRY_POINT: 05a25ffc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a25ffc(void *param_1,int param_2,ulong param_3,int param_4,undefined8 param_5,
                 uint param_6,uint param_7,ulong param_8,uint param_9,byte param_10,byte param_11,
                 undefined4 *param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if ((DAT_06b8117b & 1) == 0) {
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                );
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_Start<MetaOpenXRAnchorManagerExtensions_<TryLoadAllSharedAnchorsAsync>d__4>__
                );
    FUN_02d6084c(Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_Create__);
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_SetException__
                );
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_SetResult__
                );
    FUN_02d6084c(
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_SetStateMachine__
                );
    FUN_02d6084c(Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_get_Task__
                );
    FUN_02d6084c(
                Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_Reset__
                );
    FUN_02d6084c(
                Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_SetCanceled__
                );
    FUN_02d6084c(
                Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_SetResult__
                );
    FUN_02d6084c(
                Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_get_Awaitable__
                );
    DAT_06b8117b = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  if (*(int *)(*(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
              + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  puVar5 = Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_Reset__;
  iVar2 = param_2 + 0x3f;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  iVar11 = 0x800;
  iVar2 = iVar2 >> 6;
  iVar12 = 0x800;
  if (param_2 < 0x1000040) {
    iVar11 = iVar2 + 0x3fe;
    if (-1 < iVar2 + 0x1ff) {
      iVar11 = iVar2 + 0x1ff;
    }
    iVar12 = iVar2 << 2;
    if (0x803f < param_2) {
      iVar12 = 0x800;
    }
    iVar11 = (iVar11 >> 9) << 2;
  }
  iVar3 = iVar2 + 0x7fffe;
  if (-1 < iVar2 + 0x3ffff) {
    iVar3 = iVar2 + 0x3ffff;
  }
  uVar4 = 0x6d;
  if ((param_3 & 1) == 0) {
    uVar4 = 8;
  }
  if ((param_8 & 1) == 0) {
    uVar8 = FUN_06074e00(5,0x401,0);
    uVar10 = 5;
    if ((uVar8 & 1) == 0) {
      uVar10 = 8;
    }
  }
  else {
    uVar10 = 0x31;
  }
  *param_12 = 0;
  puVar7 = 
  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_SetStateMachine__;
  puVar6 = Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_SetResult__;
  iVar2 = (iVar3 >> 0x12) << 2;
  uVar9 = FUN_04e83184(param_5,*(undefined8 *)puVar5,0);
  if (*(int *)(*(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
              + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                      );
  }
  uVar1 = param_6 & 1;
  local_d0 = FUN_05a2853c(iVar12,iVar11,iVar2,0x30,uVar9,uVar1,param_12);
  thunk_FUN_02dd37b4(&local_d0,local_d0);
  uVar9 = FUN_04e83184(param_5,*(undefined8 *)puVar7,0);
  uStack_c8 = FUN_05a2853c(iVar12,iVar11,iVar2,uVar4,uVar9,uVar1,param_12);
  thunk_FUN_02dd37b4((ulong)&local_d0 | 8);
  uVar9 = FUN_04e83184(param_5,*(undefined8 *)puVar6,0);
  local_c0 = FUN_05a2853c(iVar12,iVar11,iVar2,uVar4,uVar9,uVar1,param_12);
  thunk_FUN_02dd37b4(&local_c0);
  if ((param_7 & 1) == 0) {
    local_90 = 0;
    thunk_FUN_02dd37b4(&local_90,0);
  }
  else {
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                         ,0);
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                        );
    }
    local_90 = FUN_05a2853c(iVar12,iVar11,iVar2,uVar10,uVar9,param_6 & 1,param_12);
    thunk_FUN_02dd37b4(&local_90);
  }
  if ((param_9 & 1) == 0) {
    uStack_88 = 0;
  }
  else {
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)
                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_Start<MetaOpenXRAnchorManagerExtensions_<TryLoadAllSharedAnchorsAsync>d__4>__
                         ,0);
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                        );
    }
    uStack_88 = FUN_05a2853c(iVar12,iVar11,iVar2,0x30,uVar9,param_6 & 1,param_12);
  }
  thunk_FUN_02dd37b4(&uStack_88,uStack_88);
  if ((param_10 & 1) == 0) {
    local_80 = 0;
  }
  else {
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)
                                  Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_SetCanceled__
                         ,0);
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                        );
    }
    local_80 = FUN_05a2853c(iVar12,iVar11,iVar2,5,uVar9,param_6 & 1,param_12);
  }
  thunk_FUN_02dd37b4(&local_80,local_80);
  if ((param_11 & 1) == 0) {
    local_98 = 0;
  }
  else {
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)
                                  Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_get_Awaitable__
                         ,0);
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                        );
    }
    local_98 = FUN_05a2853c(iVar12,iVar11,iVar2,8,uVar9,param_6 & 1,param_12);
  }
  thunk_FUN_02dd37b4(&local_98,local_98);
  puVar6 = Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_get_Task__;
  puVar5 = Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_Create__;
  if (param_4 == 2) {
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)
                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<XRResultStatus>_SetException__
                         ,0);
    if (*(int *)(*(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<Decimal>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsDecimalAsync>d__49>__
                        );
    }
    param_6 = param_6 & 1;
    local_b8 = FUN_05a2853c(iVar12,iVar11,iVar2,uVar4,uVar9,param_6,param_12);
    thunk_FUN_02dd37b4(&local_b8);
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)puVar5,0);
    local_b0 = FUN_05a2853c(iVar12,iVar11,iVar2,uVar4,uVar9,param_6,param_12);
    thunk_FUN_02dd37b4(&local_b0);
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)puVar6,0);
    uStack_a8 = FUN_05a2853c(iVar12,iVar11,iVar2,uVar4,uVar9,param_6,param_12);
    thunk_FUN_02dd37b4(&uStack_a8);
    uVar9 = FUN_04e83184(param_5,*(undefined8 *)
                                  Method_UnityEngine_AwaitableCompletionSource<NativeArray<XREraseAnchorResult>>_SetResult__
                         ,0);
    local_a0 = FUN_05a2853c(iVar12,iVar11,iVar2,uVar4,uVar9,param_6,param_12);
  }
  else {
    local_b8 = 0;
    thunk_FUN_02dd37b4(&local_b8,0);
    local_b0 = 0;
    thunk_FUN_02dd37b4(&local_b0,0);
    uStack_a8 = 0;
    thunk_FUN_02dd37b4(&uStack_a8,0);
    local_a0 = 0;
  }
  thunk_FUN_02dd37b4(&local_a0,local_a0);
  local_78 = CONCAT44(iVar11,iVar12);
  local_70 = CONCAT44(local_70._4_4_,iVar2);
  memcpy(param_1,&local_d0,0x68);
  return;
}


