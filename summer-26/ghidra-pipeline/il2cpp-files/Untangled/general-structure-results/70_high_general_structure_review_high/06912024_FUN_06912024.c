/*
FUNCTION_NAME: FUN_06912024
ENTRY_POINT: 06912024
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_2;telemetry_or_network_hits_7;frame_or_lifecycle_behavior
*/


void FUN_06912024(long *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  
  if ((bRam00000000071d74e8 & 1) == 0) {
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_get_Task__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                );
    bRam00000000071d74e8 = 1;
  }
  uVar8 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_get_Task__
  ;
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
              + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  lVar9 = FUN_04991874(*(undefined8 *)puVar3);
  if ((param_2 != 0) && (FUN_06911aec(param_2,lVar9), lVar9 != 0)) {
    iVar2 = *(int *)(lVar9 + 0x18) * 5;
    iVar5 = FUN_0406904c(lVar9,*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                        );
    if (iVar5 < iVar2) {
      FUN_04069068(lVar9,iVar2,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_SetException__
                  );
    }
    uVar1 = *(undefined4 *)(lVar9 + 0x18);
    uVar6 = FUN_03188d88((int)param_1[5],*(undefined4 *)((long)param_1 + 0x2c),(int)param_1[6],
                         *(undefined4 *)((long)param_1 + 0x34),0);
    FUN_069125fc((int)param_1[7],*(undefined4 *)((long)param_1 + 0x3c),param_1,lVar9,uVar6,0,
                 *(undefined4 *)(lVar9 + 0x18),0);
    uVar6 = *(undefined4 *)(lVar9 + 0x18);
    uVar7 = FUN_03188d88((int)param_1[5],*(undefined4 *)((long)param_1 + 0x2c),(int)param_1[6],
                         *(undefined4 *)((long)param_1 + 0x34),0);
    FUN_069125fc((int)param_1[7],-*(float *)((long)param_1 + 0x3c),param_1,lVar9,uVar7,uVar1,
                 *(undefined4 *)(lVar9 + 0x18),0);
    uVar1 = *(undefined4 *)(lVar9 + 0x18);
    uVar7 = FUN_03188d88((int)param_1[5],*(undefined4 *)((long)param_1 + 0x2c),(int)param_1[6],
                         *(undefined4 *)((long)param_1 + 0x34),0);
    FUN_069125fc(-*(float *)(param_1 + 7),*(undefined4 *)((long)param_1 + 0x3c),param_1,lVar9,uVar7,
                 uVar6,*(undefined4 *)(lVar9 + 0x18),0);
    uVar6 = FUN_03188d88((int)param_1[5],*(undefined4 *)((long)param_1 + 0x2c),(int)param_1[6],
                         *(undefined4 *)((long)param_1 + 0x34),0);
    FUN_069125fc(-*(float *)(param_1 + 7),-*(float *)((long)param_1 + 0x3c),param_1,lVar9,uVar6,
                 uVar1,*(undefined4 *)(lVar9 + 0x18),0);
    FUN_06900848(param_2);
    FUN_06911a9c(param_2,lVar9);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_049919b4(lVar9,*(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


