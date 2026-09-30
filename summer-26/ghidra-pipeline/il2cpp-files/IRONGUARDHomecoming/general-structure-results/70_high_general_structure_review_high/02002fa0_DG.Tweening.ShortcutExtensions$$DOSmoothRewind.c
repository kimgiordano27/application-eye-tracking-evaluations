/*
FUNCTION_NAME: DG.Tweening.ShortcutExtensions$$DOSmoothRewind
ENTRY_POINT: 02002fa0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


undefined8 DG_Tweening_ShortcutExtensions__DOSmoothRewind(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  float unaff_s9;
  
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_GetPooled__);
  *(undefined1 *)(unaff_x22 + 0xf6c) = 1;
  lVar1 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_020056e4(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  *(undefined8 *)(lVar1 + 0x10) = unaff_x21;
  thunk_FUN_01f51358((undefined8 *)(lVar1 + 0x10));
  *(undefined4 *)(lVar1 + 0x18) = unaff_w20;
  uVar2 = FUN_02000d70();
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
      uVar3 = FUN_020f0dac(uVar3,uVar4,unaff_w19,0);
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


