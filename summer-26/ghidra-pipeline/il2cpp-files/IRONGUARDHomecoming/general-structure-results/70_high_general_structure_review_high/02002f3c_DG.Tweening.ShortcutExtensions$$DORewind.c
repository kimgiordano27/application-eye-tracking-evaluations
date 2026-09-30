/*
FUNCTION_NAME: DG.Tweening.ShortcutExtensions$$DORewind
ENTRY_POINT: 02002f3c
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
DG_Tweening_ShortcutExtensions__DORewind
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  long unaff_x22;
  undefined8 *unaff_x23;
  float unaff_s9;
  
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x22 + 0xf6c) = 1;
  }
  lVar1 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_020056e4(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  thunk_FUN_01f51358((undefined8 *)(lVar1 + 0x10),param_3);
  *(undefined4 *)(lVar1 + 0x18) = param_4;
  uVar2 = FUN_02000d70(param_3,param_4,1);
  if ((uVar2 & 1) != 0) {
    if (0.0 < unaff_s9) {
      uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<Vector3>_get_Item__);
      FUN_02a72630(uVar3,lVar1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__,
                   0);
      uVar4 = thunk_FUN_01f117cc(*(undefined8 *)
                                  Method_Unity_Collections_NativeSlice<Vector3>_get_Length__);
      FUN_02a7391c(uVar4,lVar1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_get_altKey__,0)
      ;
      if (*(int *)(*(long *)Method_Unity_Collections_NativeSlice<JobHandle>_get_Length__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      uVar3 = FUN_020f0dac(param_2,uVar3,uVar4,unaff_w19,0);
      return uVar3;
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


