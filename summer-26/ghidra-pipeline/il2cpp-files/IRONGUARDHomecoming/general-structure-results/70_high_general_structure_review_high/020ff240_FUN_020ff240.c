/*
FUNCTION_NAME: FUN_020ff240
ENTRY_POINT: 020ff240
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


long FUN_020ff240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,byte param_8,uint param_9,
                 undefined4 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = 
  Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<BasicSceneManager_<LoadSceneAsync>d__1>__
  ;
  if ((DAT_0482fb9f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(Method_System_Nullable<SelfFix>__ctor__);
    thunk_FUN_01efb3a4(Method_System_Nullable<RenderTargetIdentifier>_get_HasValue__);
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FtpWebRequest_<CreateConnectionAsync>d__86>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<OnApplicationPause>d__35>__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<BasicSceneManager_<LoadSceneAsync>d__1>__
                      );
    thunk_FUN_01efb3a4(Method_System_Collections_ArrayList_ToArray__);
    DAT_0482fb9f = 1;
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_035ac8e8(lVar2,0);
  if (lVar2 != 0) {
    puVar5 = (undefined8 *)(lVar2 + 0x10);
    *puVar5 = param_6;
    thunk_FUN_01f51358(puVar5,param_6);
    if ((float)param_1 <= 0.0) {
      if (DAT_0482ef72 == '\0') {
        thunk_FUN_01efb3a4(Method_System_Nullable<InputRemoting_Message>__ctor__);
        DAT_0482ef72 = '\x01';
      }
      if (0 < **(int **)(*(long *)Method_System_Nullable<InputRemoting_Message>__ctor__ + 0xb8)) {
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        FUN_0403f2cc(*(undefined8 *)Method_System_Collections_ArrayList_ToArray__,0);
      }
      lVar2 = 0;
    }
    else {
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
      FUN_02a72630(uVar3,lVar2,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<FtpWebRequest_<CreateConnectionAsync>d__86>__
                   ,0);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
      FUN_02a7391c(uVar4,lVar2,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<OVRSceneManager_<OnApplicationPause>d__35>__
                   ,0);
      if (*(int *)(*(long *)Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_020f1ccc(param_1,param_2,param_3,param_4,param_5,uVar3,uVar4,param_7,param_9 & 1,
                           param_10);
      uVar3 = FUN_0242d544(uVar3,*puVar5,
                           *(undefined8 *)
                            Method_System_Nullable<RenderTargetIdentifier>_get_HasValue__);
      lVar2 = FUN_02316b2c(uVar3,2,*(undefined8 *)Method_System_Nullable<SelfFix>__ctor__);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0xe8) != '\0')) {
        *(byte *)(lVar2 + 0x144) = param_8 & 1;
      }
    }
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


