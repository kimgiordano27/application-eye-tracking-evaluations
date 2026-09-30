/*
FUNCTION_NAME: FUN_02002f00
ENTRY_POINT: 02002f00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


undefined8
FUN_02002f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_Init__;
  if ((DAT_0482ef6c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<byte>_ToArray__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_Init__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__)
    ;
    DAT_0482ef6c = 1;
  }
  lVar2 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_020056e4(lVar2,0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(lVar2 + 0x10) = param_6;
  thunk_FUN_01f51358((undefined8 *)(lVar2 + 0x10),param_6);
  *(undefined4 *)(lVar2 + 0x18) = param_7;
  uVar3 = FUN_02000d70(param_6,param_7,1);
  if ((uVar3 & 1) != 0) {
    if (0.0 < (float)param_4) {
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
      FUN_02a72630(uVar4,lVar2,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__,
                   0);
      uVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
      FUN_02a7391c(uVar5,lVar2,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__,0)
      ;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar4 = FUN_020f0dac(param_1,param_2,param_3,param_4,param_5,uVar4,uVar5,param_8,0);
      return uVar4;
    }
    if (DAT_0482ef72 == '\0') {
      thunk_FUN_01efb3a4(Method_System_Nullable<InputRemoting_Message>__ctor__);
      DAT_0482ef72 = '\x01';
    }
    if (0 < **(int **)(*(long *)Method_System_Nullable<InputRemoting_Message>__ctor__ + 0xb8)) {
      if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<byte>_ToArray__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0403f2cc(*(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__,0);
    }
  }
  return 0;
}


