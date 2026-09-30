/*
FUNCTION_NAME: FUN_05a7d7f0
ENTRY_POINT: 05a7d7f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_05a7d7f0(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar3;
  
  if ((DAT_06dc1bec & 1) == 0) {
    FUN_02d965b8(OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a115d0);
    FUN_02d965b8(PTR_DAT_06a115d8);
    FUN_02d965b8(PTR_DAT_06a1ad28);
    DAT_06dc1bec = 1;
  }
  puVar3 = PTR_DAT_06a115d0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
LAB_05a7d958:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  if (lVar5 == *(long *)PTR_DAT_06a115d0) {
    if (param_2 == 0) goto LAB_05a7d958;
    if (*(int *)(param_2 + 0x10) == 0) {
      FUN_02979e58(param_1);
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      uVar4 = thunk_FUN_02dfd288(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Create__
                                );
      uVar4 = FUN_05a7d21c(uVar4,uVar2);
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar2 = thunk_FUN_02dd3144();
      FUN_05452924(uVar2,uVar4,0);
      uVar4 = thunk_FUN_02dfd288(
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar2,uVar4);
    }
    uVar1 = thunk_FUN_0536b75c(param_2,*(undefined8 *)OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo,0)
    ;
    if ((uVar1 & 1) == 0) {
      uVar1 = thunk_FUN_0536b75c(param_2,*(undefined8 *)puVar3,0);
      if ((uVar1 & 1) != 0) goto LAB_05a7d97c;
      param_2 = *(long *)(param_1 + 0x18);
      uVar1 = thunk_FUN_0536b75c(param_2,*(undefined8 *)PTR_DAT_06a1ad28,0);
      if ((uVar1 & 1) == 0) {
        uVar4 = *(undefined8 *)PTR_DAT_06a115d8;
        goto LAB_05a7d93c;
      }
    }
    else {
      uVar1 = FUN_0536ba54(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_06a1ad28,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
    }
  }
  else {
    if (lVar5 == 0) goto LAB_05a7d958;
    if (*(int *)(lVar5 + 0x10) != 0) {
      return;
    }
    uVar1 = thunk_FUN_0536b75c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_DAT_06a115d8,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    uVar1 = thunk_FUN_0536b75c(param_2,*(undefined8 *)OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo,0)
    ;
    if ((uVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)puVar3;
LAB_05a7d93c:
      uVar1 = thunk_FUN_0536b75c(param_2,uVar4,0);
      if ((uVar1 & 1) == 0) {
        return;
      }
LAB_05a7d97c:
      thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
      uVar4 = thunk_FUN_02dd3144();
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_HttpWebRequest_<GetResponseFromData>d__244>__
      ;
      goto LAB_05a7d998;
    }
  }
  thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
  uVar4 = thunk_FUN_02dd3144();
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
  ;
LAB_05a7d998:
  uVar2 = thunk_FUN_02dfd288(puVar3);
  FUN_05452924(uVar4,uVar2,0);
  uVar2 = thunk_FUN_02dfd288(
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_Start<HttpWebRequest_<GetResponseFromData>d__244>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar4,uVar2);
}


