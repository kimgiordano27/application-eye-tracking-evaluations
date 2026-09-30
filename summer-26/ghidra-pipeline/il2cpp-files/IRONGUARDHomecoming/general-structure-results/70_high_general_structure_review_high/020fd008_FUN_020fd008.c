/*
FUNCTION_NAME: FUN_020fd008
ENTRY_POINT: 020fd008
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_6
*/


long FUN_020fd008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
  ;
  if ((DAT_0482fb8d & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector4>_op_Implicit__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                      );
    DAT_0482fb8d = 1;
  }
  lVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar6,0);
  puVar5 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer_inner>d__39>__
  ;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebRequestStream_<WriteChunkTrailer>d__40>__
  ;
  puVar3 = Method_Unity_Collections_NativeSlice<Vector3>_get_Length__;
  puVar2 = Method_Unity_Collections_NativeSlice<Vector3>_get_Item__;
  puVar1 = Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__;
  if (lVar6 != 0) {
    puVar9 = (undefined8 *)(lVar6 + 0x10);
    *puVar9 = param_5;
    thunk_FUN_01f51358(puVar9,param_5);
    uVar7 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
    FUN_02a72630(uVar7,lVar6,*(undefined8 *)puVar4,0);
    uVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
    FUN_02a7391c(uVar8,lVar6,*(undefined8 *)puVar5,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    puVar1 = Method_Unity_Collections_NativeSlice<Vector4>_op_Implicit__;
    lVar6 = FUN_020f0668(param_1,param_2,param_3,param_4,uVar7,uVar8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0xe8) != '\0')) {
      *(byte *)(lVar6 + 0x14c) = param_6 & 1;
    }
    FUN_0242d544(lVar6,*puVar9,*(undefined8 *)puVar1);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


