/*
FUNCTION_NAME: DG.Tweening.ShortcutExtensions$$DOPath
ENTRY_POINT: 02000dd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


undefined8 DG_Tweening_ShortcutExtensions__DOPath(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint unaff_w19;
  ulong unaff_x20;
  long unaff_x21;
  uint in_stack_00000018;
  
  lVar2 = *(long *)(unaff_x21 + 0x18);
  if (lVar2 != 0) {
    if ((int)unaff_w19 < *(int *)(lVar2 + 0x18)) {
      lVar2 = *(long *)(lVar2 + 0x38);
      if (lVar2 == 0) goto LAB_02000f04;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      if (*(char *)(lVar2 + (long)(int)unaff_w19 * 0x178 + 0x194) != '\0') {
        return 1;
      }
      if (DAT_0482ef72 == '\0') {
        thunk_FUN_01efb3a4(Method_System_Nullable<InputRemoting_Message>__ctor__);
        DAT_0482ef72 = '\x01';
      }
      if (1 < **(int **)(*(long *)Method_System_Nullable<InputRemoting_Message>__ctor__ + 0xb8)) {
        if ((unaff_x20 & 1) == 0) {
          uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                     ,&stack0x0000000c);
          puVar3 = (undefined8 *)
                   Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_GetPooled__;
        }
        else {
          in_stack_00000018 = unaff_w19;
          uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                      Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                     ,&stack0x00000018);
          puVar3 = (undefined8 *)
                   Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_PostDispatch__;
        }
        uVar1 = FUN_03406290(*puVar3,uVar1,0);
        FUN_021176a8(uVar1,0);
      }
    }
    else {
      uVar1 = thunk_FUN_01f113fc(*(undefined8 *)
                                  Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__
                                 ,&stack0x0000001c);
      uVar1 = FUN_03406290(*(undefined8 *)
                            Method_UnityEngine_UIElements_PointerEventBase<PointerDownEvent>_Init__,
                           uVar1,0);
      FUN_021179bc(uVar1,0,0);
    }
    return 0;
  }
LAB_02000f04:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


