/*
FUNCTION_NAME: FUN_05a2ec58
ENTRY_POINT: 05a2ec58
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05a2ec58(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar3 = Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__;
  puVar2 = Method_UnityEngine_Awaitable_Awaiter<XRResultStatus>_get_IsCompleted__;
  if ((DAT_06b811ba & 1) == 0) {
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<DoReadAsync>d__3>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueAsync>d__19>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueWithTrailingSeparatorAsync>d__20>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseObjectAsync>d__15>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseValueAsync>d__8>__
                );
    FUN_02d6084c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadFromFinishedAsync>d__5>__
                );
    FUN_02d6084c(Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__);
    FUN_02d6084c(Method_OVRTask_Awaiter<OVRPlugin_Result>_GetResult__);
    FUN_02d6084c(Method_UnityEngine_Awaitable_Awaiter<XRResultStatus>_get_IsCompleted__);
    DAT_06b811ba = 1;
  }
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_80 = 0;
  local_78 = 0;
  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03bf109c(lVar6,*(undefined8 *)puVar3);
  plVar11 = (long *)(param_1 + 0x80);
  *plVar11 = lVar6;
  thunk_FUN_02dd37b4(plVar11,lVar6);
  puVar4 = Method_OVRTask_Awaiter<OVRPlugin_Result>_get_IsCompleted__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueWithTrailingSeparatorAsync>d__20>__
  ;
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueAsync>d__19>__
  ;
  if (*(long *)(param_1 + 0x88) != 0) {
    System_Collections_Generic_ArraySortHelper<SerializableDictionary_Item<object,_bool>>__Heapsort
              (&local_a8,*(long *)(param_1 + 0x88),
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<DoReadAsync>d__3>__
              );
    uStack_68 = uStack_a0;
    local_70 = local_a8;
    uStack_58 = uStack_90;
    local_60 = local_98;
    local_50 = local_88;
    while( true ) {
      uVar7 = FUN_04b3a824(&local_70,*(undefined8 *)puVar3);
      uVar5 = uStack_58;
      if ((uVar7 & 1) == 0) {
        FUN_04b3a944(&local_70,*(undefined8 *)puVar2);
        return;
      }
      lVar6 = *plVar11;
      local_80 = local_60;
      local_78 = 0;
      thunk_FUN_02dd37b4(&local_80);
      local_78 = uVar5;
      thunk_FUN_02dd37b4(&local_78,uVar5);
      if (lVar6 == 0) break;
      lVar9 = *(long *)(lVar6 + 0x10);
      lVar10 = *(long *)puVar4;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        puVar8 = (undefined8 *)(lVar9 + 0x20);
        *puVar8 = local_80;
        *(undefined8 *)(lVar9 + 0x28) = local_78;
        thunk_FUN_02dd37b4(puVar8,0);
      }
      else {
        FUN_03bf191c(lVar6,local_80,local_78,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


