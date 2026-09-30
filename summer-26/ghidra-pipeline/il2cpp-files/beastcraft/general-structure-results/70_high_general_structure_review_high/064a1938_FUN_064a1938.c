/*
FUNCTION_NAME: FUN_064a1938
ENTRY_POINT: 064a1938
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_064a1938(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000006e9c868 & 1) == 0) {
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
                );
    FUN_02e3ca1c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Result<float>>_get_Task__
                );
    bRam0000000006e9c868 = 1;
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
  ;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  lStack_48 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02e3ccc4();
  }
  if (*(char *)(param_2 + 0x65) == '\0') {
    return;
  }
  plVar5 = (long *)FUN_064d4d00(param_2,0);
  puVar2 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
  ;
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Result<float>>_get_Task__
                     + 0x130);
    if (bVar1 <= *(byte *)(*plVar5 + 0x130)) {
      if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Result<float>>_get_Task__)
      {
        plVar5 = (long *)0x0;
      }
      goto LAB_064a1a14;
    }
  }
  plVar5 = (long *)0x0;
LAB_064a1a14:
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetResult__
  ;
  auStack_40 = FUN_04b9ac08(&lStack_48,*(undefined8 *)puVar2);
  FUN_064a1b1c(param_1,lStack_48);
  if (lStack_48 != 0) {
    uVar4 = FUN_03f2c1b4(lStack_48,plVar5,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                        );
    (**(code **)(*param_1 + 0xa48))(param_1,uVar4,*(undefined8 *)(*param_1 + 0xa50));
    FUN_064d4d9c(param_2,0);
    System_Collections_ObjectModel_ReadOnlyCollection<IntPtr>__System_Collections_Generic_IList<T>_get_Item
              (auStack_40,*(undefined8 *)puVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


